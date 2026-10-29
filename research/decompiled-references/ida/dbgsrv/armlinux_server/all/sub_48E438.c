/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48E438
// Address: 0x000000000048E438

//----- (000000000048E438) ----------------------------------------------------
char *__fastcall sub_48E438(_BYTE *a1, unsigned __int64 a2, const char *a3, size_t a4)
{
  unsigned __int64 v4; // x22
  size_t v6; // x19
  const char *v7; // x21
  size_t v8; // x22
  _BYTE *v9; // x0
  unsigned __int64 v11; // [xsp+38h] [xbp-8h]

  v4 = a2 - (_QWORD)a1;
  if ( (__int64)(a2 - (_QWORD)a1) < 0 )
  {
    if ( under_debugger )
      __break(0x3E8u);
    sub_492270(1225);
  }
  v6 = a4;
  if ( a3 )
    v7 = a3;
  else
    v7 = &byte_4B31F0;
  if ( !a4 )
  {
    v11 = a2;
    v6 = strlen(v7);
    a2 = v11;
  }
  v8 = v4 - 5;
  if ( a2 < (unsigned __int64)&a1[v6] )
    v6 = v8;
  v9 = sub_48E2D8(a1, a2, v6);
  return (char *)memcpy(v9, v7, v6) + v6;
}
// 4B31F0: using guessed type char byte_4B31F0;
// 52451C: using guessed type char under_debugger;
