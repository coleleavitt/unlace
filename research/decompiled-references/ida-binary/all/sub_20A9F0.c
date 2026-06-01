void __fastcall thread_t::set_trace_bpt(_QWORD *a1)
{
  *a1 = thread_t::set_trace_bpt;
  sub_236840();
  operator delete(a1, 0x78u);
}
