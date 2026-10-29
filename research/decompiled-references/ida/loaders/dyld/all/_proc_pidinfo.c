// local variable allocation has failed, the output may be wrong!
int __cdecl proc_pidinfo(int pid, int flavor, uint64_t arg, void *buffer, int buffersize)
{
  void *v5; // x6
  void *v6; // x7
  int result; // w0

  result = __proc_info(
             (char *)&dword_0 + 2,
             *(void **)&pid,
             *(void **)&flavor,
             (void *)arg,
             buffer,
             *(void **)&buffersize,
             v5,
             v6);
  if ( result == -1 )
    return 0;
  return result;
}
