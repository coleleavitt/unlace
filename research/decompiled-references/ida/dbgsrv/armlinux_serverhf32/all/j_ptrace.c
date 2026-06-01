/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: j_ptrace
// Address: 0x00013E24

//----- (00013E24) --------------------------------------------------------
// attributes: thunk
int j_ptrace(enum __ptrace_request request, ...)
{
  return ptrace(request);
}
