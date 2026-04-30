void __fastcall navigation_history_chooser_t::view_events_listener_t__::vfunc_2(_QWORD *a1)
{
  *a1 = &off_86FB08;
  remove_event_listener(a1);
  operator delete(a1, 0x10u);
}
