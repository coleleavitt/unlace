// local variable allocation has failed, the output may be wrong!
void __cdecl __noreturn __assert_rtn(const char *a1, const char *a2, int a3, const char *a4)
{
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7

  if ( !a1 )
    abort_report_np(
      "Assertion failed: (%s), file %s, line %d.\n",
      (__int64)a2,
      *(__int64 *)&a3,
      (__int64)a4,
      v4,
      v5,
      v6,
      v7,
      (int)a4);
  abort_report_np(
    "Assertion failed: (%s), function %s, file %s, line %d.\n",
    (__int64)a2,
    *(__int64 *)&a3,
    (__int64)a4,
    v4,
    v5,
    v6,
    v7,
    (int)a4);
}
