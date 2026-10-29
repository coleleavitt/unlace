void __fastcall thread_t::request_runto(_QWORD *a1, const char *a2)
{
  *a1 = &thread_t::request_runto;
  sub_236840((__int64)a1, a2);
  operator delete(a1, 0x80u);
}
