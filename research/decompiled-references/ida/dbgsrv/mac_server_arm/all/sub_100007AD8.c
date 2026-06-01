/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100007AD8
// Address: 0x0000000100007AD8

//----- (0000000100007AD8) ----------------------------------------------------
__int64 __fastcall sub_100007AD8(
        __int64 a1,
        thread_read_t a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  sub_1000560A0(a1, "remote_thread_continue %d\n", a3, a4, a5, a6, a7, a8, a2);
  if ( thread_resume(a2) )
    return 0xFFFFFFFFLL;
  else
    return 1;
}
