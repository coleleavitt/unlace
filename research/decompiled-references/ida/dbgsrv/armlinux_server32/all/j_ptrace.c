/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: j_ptrace
// Address: 0x00013F78

//----- (00013F78) --------------------------------------------------------
// attributes: thunk
int j_ptrace(enum __ptrace_request request, ...)
{
  return ptrace(request);
}
