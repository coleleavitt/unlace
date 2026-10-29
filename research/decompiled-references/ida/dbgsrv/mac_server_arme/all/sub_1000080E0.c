/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000080E0
// Address: 0x00000001000080E0

//----- (00000001000080E0) ----------------------------------------------------
__int64 __fastcall sub_1000080E0(
        __int64 a1,
        thread_read_t a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  sub_1000593FC(a1, "remote_thread_suspend %d\n", a3, a4, a5, a6, a7, a8, a2);
  if ( thread_suspend(a2) )
    return 0xFFFFFFFFLL;
  else
    return 1;
}
