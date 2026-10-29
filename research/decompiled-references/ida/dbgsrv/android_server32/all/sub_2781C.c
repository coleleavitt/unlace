/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2781C
// Address: 0x0002781C

//----- (0002781C) --------------------------------------------------------
__pid_t __fastcall sub_2781C(int a1, __time_t *a2, int a3, int a4)
{
  return qwait_timed(a2, a3, 1073741832, a4);
}
