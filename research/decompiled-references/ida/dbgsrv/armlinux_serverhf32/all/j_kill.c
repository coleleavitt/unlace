/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: j_kill
// Address: 0x000145C0

//----- (000145C0) --------------------------------------------------------
// attributes: thunk
int j_kill(__pid_t pid, int sig)
{
  return kill(pid, sig);
}
