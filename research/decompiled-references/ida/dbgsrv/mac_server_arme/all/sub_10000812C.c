/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000812C
// Address: 0x000000010000812C

//----- (000000010000812C) ----------------------------------------------------
__int64 __fastcall sub_10000812C(
        __int64 a1,
        thread_read_t a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  sub_1000593FC(a1, "remote_thread_continue %d\n", a3, a4, a5, a6, a7, a8, a2);
  if ( thread_resume(a2) )
    return 0xFFFFFFFFLL;
  else
    return 1;
}
