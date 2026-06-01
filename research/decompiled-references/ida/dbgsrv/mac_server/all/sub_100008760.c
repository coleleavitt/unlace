/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100008760
// Address: 0x0000000100008760

//----- (0000000100008760) ----------------------------------------------------
__int64 __fastcall sub_100008760(__int64 a1, thread_read_t a2)
{
  sub_100060FA0(a1, "remote_thread_suspend %d\n", a2);
  return thread_suspend(a2) != 0 ? -1 : 1;
}
