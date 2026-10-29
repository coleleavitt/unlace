/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qwait_timed
// Address: 0x00000000000C2E8C

//----- (00000000000C2E8C) ----------------------------------------------------
__int64 __fastcall qwait_timed(int a1, __pid_t a2)
{
  int v4; // w0

  v4 = sub_C1968();
  return sub_C10A4(v4, a1, a2);
}
