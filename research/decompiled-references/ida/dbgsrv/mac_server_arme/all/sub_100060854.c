/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100060854
// Address: 0x0000000100060854

//----- (0000000100060854) ----------------------------------------------------
__int64 __fastcall sub_100060854(__int64 a1)
{
  __n128 v2; // q0
  __int64 (__fastcall *v3)(__int64, __n128); // x1
  __int64 _18; // [xsp+18h] [xbp+8h]

  v2.n128_f64[0] = sub_100060150(a1);
  v3 = *(__int64 (__fastcall **)(__int64, __n128))(*(_QWORD *)a1 + 648LL);
  if ( ((_18 ^ (2 * _18)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return v3(a1, v2);
}
// 10006089C: variable '_18' is possibly undefined
// 1000608B0: variable 'v2' is possibly undefined
