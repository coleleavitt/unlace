/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5F8F0
// Address: 0x000000000005F8F0

//----- (000000000005F8F0) ----------------------------------------------------
__int64 __fastcall sub_5F8F0(double a1, __m128 a2, __int64 a3, __int64 a4)
{
  __syscall_slong_t nsec_stamp; // r14

  nsec_stamp = get_nsec_stamp();
  free_idcv((char *)a4, a1, a2);
  *(_BYTE *)a4 = 9;
  *(_QWORD *)(a4 + 8) = nsec_stamp;
  return 0;
}
