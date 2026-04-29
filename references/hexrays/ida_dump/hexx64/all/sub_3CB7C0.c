void __fastcall sub_3CB7C0(_QWORD *a1)
{
  *a1 = &off_4EC308;
  remove_event_listener(a1);
  operator delete(a1, 0x10u);
}
