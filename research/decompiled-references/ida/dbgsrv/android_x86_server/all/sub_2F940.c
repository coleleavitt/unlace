/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2F940
// Address: 0x0002F940

//----- (0002F940) --------------------------------------------------------
int __cdecl sub_2F940(int a1, __time_t *a2, __pid_t pid, int a4)
{
  return qwait_timed(a2, pid, 1073741832, a4);
}
