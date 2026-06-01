__int64 __fastcall google_breakpad::LinuxPtraceDumper::BuildProcPath(
        google_breakpad::LinuxPtraceDumper *this,
        char *a2,
        int a3,
        const char *a4)
{
  unsigned __int64 v7; // [rsp+28h] [rbp-18h]
  unsigned int v8; // [rsp+34h] [rbp-Ch]
  __int64 n; // [rsp+38h] [rbp-8h]

  if ( !a2 || !a4 || a3 <= 0 )
    return 0;
  n = my_strlen(a4);
  if ( !n )
    return 0;
  v8 = my_uint_len(a3);
  v7 = v8 + 7 + n;
  if ( v7 > 0xFE )
    return 0;
  memcpy(a2, "/proc/", 6u);
  my_uitos(a2 + 6, a3, v8);
  a2[v8 + 6] = 47;
  memcpy(&a2[v8 + 7], a4, n);
  a2[v7] = 0;
  return 1;
}

