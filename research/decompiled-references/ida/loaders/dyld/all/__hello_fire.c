__int64 __fastcall _hello_fire(const char **a1)
{
  __int64 v2; // x20
  pid_t v3; // w21
  const char *v4; // x19
  const char *v5; // x20
  pid_t v6; // w0

  v2 = configuration();
  v3 = __getpid();
  v4 = *a1;
  v5 = *(const char **)(v2 + 8);
  v6 = __getpid();
  dlog(0xFFFFFFFFLL, "libignition: %d: %12s: hello from %s.%d\n", v3, v4, v5, v6);
  return 0;
}
