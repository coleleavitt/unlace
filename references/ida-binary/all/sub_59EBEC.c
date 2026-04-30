__int64 __fastcall google_breakpad::LinuxPtraceDumper__::vfunc_8(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned __int64 a5)
{
  size_t v5; // rax
  __int64 src; // [rsp+38h] [rbp-28h] BYREF
  size_t n; // [rsp+40h] [rbp-20h]
  __int64 v11; // [rsp+48h] [rbp-18h]
  __int64 v12; // [rsp+50h] [rbp-10h]
  unsigned __int64 v13; // [rsp+58h] [rbp-8h]

  src = 55;
  v13 = 0;
  v12 = a2;
  v11 = a4;
  while ( v13 < a5 )
  {
    v5 = a5 - v13;
    if ( a5 - v13 > 8 )
      v5 = 8;
    n = v5;
    if ( sub_59E760(2, a3, v11 + v13, (unsigned __int64)&src) == -1 )
      src = 0;
    memcpy((void *)(v12 + v13), &src, n);
    v13 += n;
  }
  return 1;
}
