/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qustrncpy
// Address: 0x00000000000B6770

//----- (00000000000B6770) ----------------------------------------------------
char __fastcall qustrncpy(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 i; // rcx
  char v5; // bl
  char v6; // dl
  char *v7; // rbx
  unsigned __int64 v8; // rax
  _BYTE *v9; // rcx
  _BYTE *v10; // rbx
  char v11; // dl
  char *v13[3]; // [rsp+0h] [rbp-18h] BYREF

  v13[1] = (char *)__readfsqword(0x28u);
  if ( a3 < 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1225);
LABEL_25:
    BUG();
  }
  if ( !a3 )
  {
    if ( !(_BYTE)under_debugger )
      interr(1538);
    goto LABEL_25;
  }
  v3 = a1 + a3;
  for ( i = 0; i != a3; ++i )
  {
    v5 = *(_BYTE *)(a2 + i);
    *(_BYTE *)(a1 + i) = v5;
    if ( !v5 )
      return 1;
  }
  *(_BYTE *)(a1 + i - 1) = 0;
  if ( a1 + i - 1 > a1 )
  {
    v6 = *(_BYTE *)(a1 + i - 2);
    if ( v6 < 0 )
    {
      v7 = (char *)(a1 + i - 2);
      v8 = v3 - 4;
      if ( v8 <= a1 )
        v8 = a1;
      if ( (unsigned __int64)v7 > v8 && (v6 & 0xC0) == 0x80 )
      {
        v9 = (_BYTE *)(a1 + i - 3);
        do
        {
          v10 = v9 - 1;
          if ( (unsigned __int64)v9 <= v8 )
            break;
          v11 = *v9-- & 0xC0;
        }
        while ( v11 == (char)0x80 );
        v7 = v10 + 1;
      }
      v13[0] = v7;
      if ( (unsigned int)get_utf8_char(v13) == -1 )
        *v7 = 0;
    }
  }
  return 0;
}
// 158B40: using guessed type __int64 under_debugger;
