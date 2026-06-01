/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140045BA0
// Address: 0x0000000140045BA0

//----- (0000000140045BA0) ----------------------------------------------------
__int64 __fastcall sub_140045BA0(__int64 *a1, __int64 a2, __int64 a3, double a4)
{
  double v4; // xmm2_8
  char v9; // [rsp+40h] [rbp+8h] BYREF

  if ( (*(__int64 (__fastcall **)(__int64, __int64, char *, __int64, _QWORD))(*(_QWORD *)a1[2] + 280LL))(
         a1[2],
         a2,
         &v9,
         1,
         0) == 1 )
    return (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 16))(a1, a2, a3);
  sub_140043130(
    a1[2],
    (struct __crt_locale_pointers *)"dbg_bin_search memory range %a..%a is unreadable, skip it\n",
    v4,
    a4);
  return 0xFFFFFFFFLL;
}
// 140045BF0: variable 'v4' is possibly undefined
