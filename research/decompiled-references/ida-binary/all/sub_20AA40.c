void __fastcall trace_dev_callback_t__::vfunc_2(_QWORD *a1)
{
  *a1 = &off_86FB08;
  remove_event_listener(a1);
  operator delete(a1, 0x10u);
}
