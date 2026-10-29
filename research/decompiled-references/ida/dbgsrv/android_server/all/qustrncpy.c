/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qustrncpy
// Address: 0x00000000000B1BB4

//----- (00000000000B1BB4) ----------------------------------------------------
__int64 __fastcall qustrncpy(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // x8
  __int64 v4; // x9
  int v5; // w10
  __int64 v6; // x20
  unsigned __int64 v7; // x10
  unsigned int v8; // w8
  int v9; // w11
  unsigned __int8 *v10; // x20
  int v11; // t1
  unsigned __int64 v12; // x8
  char *v13; // x9
  bool v14; // cc
  char v15; // w10
  char v16; // t1
  unsigned __int8 *v18[2]; // [xsp+0h] [xbp-30h] BYREF

  v18[1] = *(unsigned __int8 **)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a3 < 0 )
  {
    if ( under_debugger )
      goto LABEL_26;
    interr(1225);
LABEL_24:
    if ( !under_debugger )
      interr(1538);
LABEL_26:
    __break(1u);
  }
  if ( !a3 )
    goto LABEL_24;
  v3 = 0;
  v4 = a1 + a3;
  do
  {
    v5 = *(unsigned __int8 *)(a2 + v3);
    *(_BYTE *)(a1 + v3) = v5;
    if ( !v5 )
      return 1;
    ++v3;
  }
  while ( a3 != v3 );
  v6 = a1 + v3;
  *(_BYTE *)(a1 + v3 - 1) = 0;
  v7 = a1 + v3 - 1;
  v8 = 0;
  if ( v7 > a1 )
  {
    v11 = *(char *)(v6 - 2);
    v10 = (unsigned __int8 *)(v6 - 2);
    v9 = v11;
    if ( v11 < 0 )
    {
      v12 = v4 - 4;
      if ( v4 - 4 <= a1 )
        v12 = a1;
      if ( (unsigned __int64)v10 > v12 && (v9 & 0xFFFFFFC0) == 0xFFFFFF80 )
      {
        v13 = (char *)(v7 - 2);
        do
        {
          v14 = (unsigned __int64)v13 > v12;
          v16 = *v13--;
          v15 = v16;
        }
        while ( v14 && (v15 & 0xC0) == 0x80 );
        v10 = (unsigned __int8 *)(v13 + 1);
      }
      v18[0] = v10;
      if ( (unsigned int)get_utf8_char(v18) == -1 )
        *v10 = 0;
    }
    return 0;
  }
  return v8;
}
// 168DF0: using guessed type char under_debugger;
