__int64 __fastcall google_breakpad::LinuxPtraceDumper__::vfunc_9(__int64 a1, char *a2, int a3, const void *a4)
{
  unsigned __int64 v7; // [rsp+28h] [rbp-18h]
  unsigned int v8; // [rsp+34h] [rbp-Ch]
  __int64 n; // [rsp+38h] [rbp-8h]

  if ( !a2 || !a4 || a3 <= 0 )
    return 0;
  n = sub_5ADA92(a4);
  if ( !n )
    return 0;
  v8 = sub_5ADC3C(a3);
  v7 = v8 + 7 + n;
  if ( v7 > 0xFE )
    return 0;
  memcpy(a2, "/proc/", 6u);
  sub_5ADC87(a2 + 6, a3, v8);
  a2[v8 + 6] = 47;
  memcpy(&a2[v8 + 7], a4, n);
  a2[v7] = 0;
  return 1;
}
