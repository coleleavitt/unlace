/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A0148
// Address: 0x00000000004A0148

//----- (00000000004A0148) ----------------------------------------------------
__int64 __fastcall sub_4A0148(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // x1
  double v6; // d0
  long double v8; // [xsp+40h] [xbp+40h]
  long double v9; // [xsp+50h] [xbp+50h]

  if ( (unsigned __int64)(a3 + a4) < *(_QWORD *)(a1 + 8) )
    return 0;
  v8 = *(float *)a1;
  v9 = (long double)(unsigned __int64)(a3 + a4) / v8;
  if ( (long double)a2 > v9 )
  {
    *(_QWORD *)(a1 + 8) = vcvtmd_u64_f64(v8 * (long double)a2);
    return 0;
  }
  else
  {
    v5 = 2 * a2;
    v6 = floor(v9) + 1.0;
    if ( (unsigned __int64)v6 >= 2 * a2 )
      v5 = (unsigned __int64)v6;
    sub_4A0020(a1, v5);
    return 1;
  }
}
