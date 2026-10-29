/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: user2str
// Address: 0x00000000000ACA14

//----- (00000000000ACA14) ----------------------------------------------------
__int64 __fastcall user2str(unsigned __int8 *a1, unsigned __int8 *a2, __int64 a3, _OWORD *a4)
{
  unsigned __int8 *v5; // x19
  __int64 i; // x22
  int v7; // w8
  __int64 v8; // x8
  unsigned __int8 *v10[2]; // [xsp+0h] [xbp-40h] BYREF

  v10[1] = *(unsigned __int8 **)(_ReadStatusReg(TPIDR_EL0) + 40);
  v10[0] = a2;
  if ( a3 < 0 )
  {
    if ( !under_debugger )
      interr(1225);
    __break(1u);
    return vshow_hex(a1, (unsigned __int64)a2, a3, a4);
  }
  if ( !a2 )
    return 0;
  v5 = a1;
  if ( a3 < 1 )
    return (__int64)v5;
  for ( i = 0; ; ++i )
  {
    v10[0] = a2 + 1;
    v7 = *a2;
    v5[i] = v7;
    if ( v7 != 92 )
      break;
    v5[i] = back_char(v10);
LABEL_10:
    v8 = i + 1;
    if ( i + 1 >= a3 )
    {
      if ( a3 < 1 )
        return (__int64)v5;
      goto LABEL_12;
    }
    a2 = v10[0];
  }
  if ( v7 )
    goto LABEL_10;
  v8 = i;
  if ( a3 < 1 )
    return (__int64)v5;
LABEL_12:
  if ( v8 == a3 )
    v5[i] = 0;
  return (__int64)v5;
}
// 168DF0: using guessed type char under_debugger;
