/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qustrncpy
// Address: 0x0000000100066D9C

//----- (0000000100066D9C) ----------------------------------------------------
__int64 __fastcall qustrncpy(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // x9
  int v4; // w19
  __int64 v5; // x20
  __int64 v6; // x9
  unsigned __int64 v7; // x9
  char v8; // w10
  char *v9; // x20
  int v10; // t1
  unsigned __int64 v11; // x8
  char *v12; // x9
  bool v13; // cc
  char v14; // w10
  char v15; // t1
  void **v17; // x0
  char *v18; // x1
  unsigned __int64 v19; // x2
  char *v20; // [xsp+0h] [xbp-20h] BYREF

  if ( a3 < 0 )
  {
    if ( under_debugger == 1 )
      goto LABEL_23;
    interr(1225);
LABEL_22:
    if ( under_debugger != 1 )
    {
      interr(1538);
      return utf8_utf16(v17, v18, v19);
    }
LABEL_23:
    __break(1u);
  }
  if ( !a3 )
    goto LABEL_22;
  v3 = 0;
  while ( 1 )
  {
    v4 = *(unsigned __int8 *)(a2 + v3);
    *(_BYTE *)(a1 + v3) = v4;
    if ( !v4 )
      break;
    if ( a3 == ++v3 )
    {
      v5 = a1 + v3;
      v6 = a1 + v3;
      *(_BYTE *)(v6 - 1) = 0;
      v7 = v6 - 1;
      if ( v7 > a1 )
      {
        v10 = *(char *)(v5 - 2);
        v9 = (char *)(v5 - 2);
        v8 = v10;
        if ( v10 < 0 )
        {
          v11 = a1 + a3 - 4;
          if ( v11 <= a1 )
            v11 = a1;
          if ( (unsigned __int64)v9 > v11 && (v8 & 0xC0) == 0x80 )
          {
            v12 = (char *)(v7 - 2);
            do
            {
              v13 = (unsigned __int64)v12 > v11;
              v15 = *v12--;
              v14 = v15;
            }
            while ( v13 && (v14 & 0xC0) == 0x80 );
            v9 = v12 + 1;
          }
          v20 = v9;
          if ( (unsigned int)get_utf8_char(&v20) == -1 )
            *v9 = 0;
        }
      }
      return v4 == 0;
    }
  }
  return v4 == 0;
}
// 100066EC9: variable 'v17' is possibly undefined
// 100066EC9: variable 'v18' is possibly undefined
// 100066EC9: variable 'v19' is possibly undefined
// 10009D90D: using guessed type char under_debugger;
