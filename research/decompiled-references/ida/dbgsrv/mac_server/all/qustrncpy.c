/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qustrncpy
// Address: 0x0000000100073EF0

//----- (0000000100073EF0) ----------------------------------------------------
char __fastcall qustrncpy(unsigned __int64 a1, char *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  char v5; // bl
  char v6; // dl
  unsigned __int64 v7; // rax
  char *v8; // r14
  _BYTE *v9; // rcx
  _BYTE *v10; // r14
  int v13; // edx
  char *v14; // [rsp+0h] [rbp-20h] BYREF

  if ( a3 < 0 )
  {
    if ( under_debugger == 1 )
      goto LABEL_21;
    interr(0x4C9u);
LABEL_20:
    if ( under_debugger != 1 )
    {
      interr(0x602u);
      return utf8_utf16(1538, a2, v13);
    }
LABEL_21:
    BUG();
  }
  if ( !a3 )
    goto LABEL_20;
  v3 = a1 + a3;
  v4 = 0;
  while ( 1 )
  {
    v5 = a2[v4];
    *(_BYTE *)(a1 + v4) = v5;
    if ( !v5 )
      break;
    if ( a3 == ++v4 )
    {
      *(_BYTE *)(a1 + v4 - 1) = 0;
      if ( a1 + v4 - 1 > a1 )
      {
        v6 = *(_BYTE *)(a1 + v4 - 2);
        if ( v6 < 0 )
        {
          v7 = v3 - 4;
          if ( v7 <= a1 )
            v7 = a1;
          v8 = (char *)(a1 + v4 - 2);
          if ( __OFSUB__(-(v6 & 0xC0), 1) && (unsigned __int64)v8 > v7 )
          {
            v9 = (_BYTE *)(a1 + v4 - 3);
            do
            {
              v10 = v9 - 1;
              if ( (unsigned __int64)v9 <= v7 )
                break;
            }
            while ( __OFSUB__(-(*v9-- & 0xC0), 1) );
            v8 = v10 + 1;
          }
          v14 = v8;
          if ( (unsigned int)get_utf8_char(&v14) == -1 )
            *v8 = 0;
        }
      }
      return v5 == 0;
    }
  }
  return v5 == 0;
}
// 100073FFC: variable 'v13' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
