/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5CE58
// Address: 0x000000000005CE58

//----- (000000000005CE58) ----------------------------------------------------
__int64 __fastcall sub_5CE58(__int64 a1, __int64 *a2)
{
  __syscall_slong_t nsec_stamp; // x20

  nsec_stamp = get_nsec_stamp();
  free_idcv(a2);
  *(_BYTE *)a2 = 9;
  a2[1] = nsec_stamp;
  return 0;
}
