__int64 __fastcall google_breakpad::LinuxPtraceDumper::CopyFromProcess(
        google_breakpad::LinuxPtraceDumper *this,
        char *a2,
        int a3,
        const void *a4,
        unsigned __int64 a5)
{
  size_t v5; // rax
  __int64 src; // [rsp+38h] [rbp-28h] BYREF
  size_t n; // [rsp+40h] [rbp-20h]
  const void *v11; // [rsp+48h] [rbp-18h]
  char *v12; // [rsp+50h] [rbp-10h]
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
    if ( sub_1B26A0(2, a3, (unsigned __int64)v11 + v13, (unsigned __int64)&src) == -1 )
      src = 0;
    memcpy(&v12[v13], &src, n);
    v13 += n;
  }
  return 1;
}

