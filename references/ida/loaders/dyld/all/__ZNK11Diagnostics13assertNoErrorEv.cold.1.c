void __fastcall __noreturn Diagnostics::assertNoError(_BYTE **a1)
{
  int v1; // w0
  __int64 v2; // x1
  __int64 v3; // x2
  __int64 v4; // x3
  __int64 v5; // x4
  __int64 v6; // x5
  __int64 v7; // x6
  __int64 v8; // x7

  v1 = _simple_string(a1);
  abort_report_np("%s", v2, v3, v4, v5, v6, v7, v8, v1);
}
