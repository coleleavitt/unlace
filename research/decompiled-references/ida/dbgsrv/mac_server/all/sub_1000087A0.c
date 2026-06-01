/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000087A0
// Address: 0x00000001000087A0

//----- (00000001000087A0) ----------------------------------------------------
__int64 __fastcall sub_1000087A0(__int64 a1, thread_read_t a2)
{
  sub_100060FA0(a1, "remote_thread_continue %d\n", a2);
  return thread_resume(a2) != 0 ? -1 : 1;
}
