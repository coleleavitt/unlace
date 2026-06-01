void __fastcall kernel_notification_hub_t::idb_listener_impl_t__::vfunc_2(_QWORD *a1)
{
  *a1 = &off_86FB08;
  remove_event_listener(a1);
  operator delete(a1, 0x18u);
}
