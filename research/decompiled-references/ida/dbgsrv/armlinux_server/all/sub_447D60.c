/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_447D60
// Address: 0x0000000000447D60

//----- (0000000000447D60) ----------------------------------------------------
__int64 __fastcall sub_447D60(_QWORD *a1, __int64 *a2, char *a3, int a4)
{
  __int64 v8; // x20
  char v9; // w22
  unsigned int v10; // w23
  unsigned int v11; // w22
  __int64 v12; // x0
  bool v13; // zf
  __int64 v14; // x0
  __int64 v15; // x0

  v8 = a1[7];
  v9 = sub_487008(1);
  v10 = (unsigned __int8)sub_4461F8((__int64)a1, a2, a3, a4);
  sub_487008(v9);
  v11 = sub_4869A0();
  while ( a1[7] > (unsigned __int64)(int)v8 )
  {
    if ( !(unsigned __int8)sub_44B018((__int64)a1) )
    {
      if ( under_debugger )
        __break(0x3E8u);
      sub_492270(508);
    }
  }
  v12 = a1[13];
  v13 = v12 == 0;
  v14 = v12 + 32;
  if ( v13 )
    v14 = 0;
  a1[16] = v14;
  if ( v10 )
    v15 = 0;
  else
    v15 = v11;
  sub_4869C8(v15);
  return v10;
}
// 447E24: conditional instruction was optimized away because %ptr.8==0
// 52451C: using guessed type char under_debugger;
