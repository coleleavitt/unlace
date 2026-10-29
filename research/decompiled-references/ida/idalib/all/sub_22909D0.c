__suseconds_t __fastcall sub_22909D0(std::chrono::_V2::system_clock *a1, _QWORD *a2, __suseconds_t *a3)
{
  __suseconds_t result; // rax
  struct rusage v5; // [rsp+0h] [rbp-A8h] BYREF

  *(_QWORD *)a1 = std::chrono::_V2::system_clock::now(a1);
  getrusage(RUSAGE_SELF, &v5);
  result = 1000 * (v5.ru_stime.tv_usec + 1000000 * v5.ru_stime.tv_sec);
  *a2 = 1000 * (v5.ru_utime.tv_usec + 1000000 * v5.ru_utime.tv_sec);
  *a3 = result;
  return result;
}
