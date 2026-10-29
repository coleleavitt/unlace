__int64 __fastcall sub_2297870(unsigned int *a1)
{
  int v1; // eax
  unsigned int v2; // edx
  __int64 result; // rax
  cpu_set_t v4; // [rsp+0h] [rbp-98h] BYREF

  if ( !*((_BYTE *)a1 + 4) )
  {
    if ( !(_BYTE)byte_2D0B960 && __cxa_guard_acquire(&byte_2D0B960) )
    {
      dword_2D0B968 = sub_22971B0();
      __cxa_guard_release(&byte_2D0B960);
    }
    v1 = dword_2D0B968;
    goto LABEL_4;
  }
  memset(&v4, 0, sizeof(v4));
  if ( !sched_getaffinity(0, 0x80u, &v4) )
  {
    v1 = __sched_cpucount(0x80u, &v4);
    goto LABEL_4;
  }
  v1 = std::thread::hardware_concurrency(nullptr);
  v2 = 1;
  if ( v1 )
  {
LABEL_4:
    v2 = 1;
    if ( v1 > 0 )
      v2 = v1;
    result = *a1;
    if ( (_DWORD)result )
      goto LABEL_7;
    return v2;
  }
  result = *a1;
  if ( !(_DWORD)result )
    return v2;
LABEL_7:
  if ( *((_BYTE *)a1 + 5) )
  {
    if ( (unsigned int)result > v2 )
      return v2;
  }
  return result;
}
