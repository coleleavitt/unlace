/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4860D8
// Address: 0x00000000004860D8

//----- (00000000004860D8) ----------------------------------------------------
__int64 __fastcall sub_4860D8(unsigned __int64 a1, unsigned __int8 *a2, __int64 a3)
{
  _BYTE *v3; // x2
  _BYTE *i; // x3
  int v5; // t1
  unsigned int v6; // w1
  unsigned __int8 *v8; // x19
  char v10; // t1
  unsigned __int8 *v12; // [xsp+20h] [xbp-10h] BYREF

  if ( a3 < 0 )
    goto LABEL_11;
  if ( !a3 )
  {
    if ( !under_debugger )
      sub_492270(1538);
    while ( 1 )
    {
      __break(0x3E8u);
LABEL_11:
      if ( !under_debugger )
        sub_492270(1225);
    }
  }
  v3 = (_BYTE *)(a1 + a3);
  for ( i = (_BYTE *)a1; ; ++i )
  {
    v5 = *a2++;
    *i = v5;
    if ( !v5 )
      return 1;
    if ( v3 == i + 1 )
      break;
  }
  *i = 0;
  v6 = 0;
  if ( (unsigned __int64)i > a1 && (*(i - 1) & 0x80) != 0 )
  {
    v8 = i - 1;
    if ( a1 <= (unsigned __int64)(i - 3) )
      a1 = (unsigned __int64)(i - 3);
    if ( (*(i - 1) & 0xC0) == 0x80 && (unsigned __int64)v8 > a1 )
    {
      do
        v10 = *--v8;
      while ( (v10 & 0xC0) == 0x80 && (unsigned __int64)v8 > a1 );
    }
    v12 = v8;
    if ( (unsigned int)sub_485C28(&v12) == -1 )
      *v8 = 0;
    return 0;
  }
  return v6;
}
// 52451C: using guessed type char under_debugger;
