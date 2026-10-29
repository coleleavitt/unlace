/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qwait_timed
// Address: 0x00000001000727C0

//----- (00000001000727C0) ----------------------------------------------------
__int64 __fastcall qwait_timed(unsigned int *a1, pid_t a2, unsigned int a3, int a4)
{
  __int64 v8; // x0

  v8 = sub_100070FEC();
  return sub_1000708A8(v8, a1, a2, a3, a4);
}
