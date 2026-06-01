/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qwait_timed
// Address: 0x000B5FA0

//----- (000B5FA0) --------------------------------------------------------
int __cdecl qwait_timed(__time_t *a1, __pid_t pid, int a3, int a4)
{
  void *v4; // eax

  v4 = (void *)sub_B4700();
  return sub_B3D90(v4, a1, pid, a3, a4);
}
