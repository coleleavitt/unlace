__time_t sub_972B0()
{
  struct timeval v1; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v2; // [rsp+18h] [rbp-10h]

  v2 = __readfsqword(0x28u);
  gettimeofday(&v1, nullptr);
  return SLODWORD(v1.tv_usec) | (v1.tv_sec << 32);
}

