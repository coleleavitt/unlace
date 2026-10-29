/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: j_kill
// Address: 0x0001475C

//----- (0001475C) --------------------------------------------------------
// attributes: thunk
int j_kill(__pid_t pid, int sig)
{
  return kill(pid, sig);
}
