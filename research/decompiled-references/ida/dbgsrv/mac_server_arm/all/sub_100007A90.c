/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100007A90
// Address: 0x0000000100007A90

//----- (0000000100007A90) ----------------------------------------------------
__int64 __fastcall sub_100007A90(
        __int64 a1,
        thread_read_t a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  sub_1000560A0(a1, "remote_thread_suspend %d\n", a3, a4, a5, a6, a7, a8, a2);
  if ( thread_suspend(a2) )
    return 0xFFFFFFFFLL;
  else
    return 1;
}
