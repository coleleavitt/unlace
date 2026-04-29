void __fastcall sub_3C7640(_QWORD *a1)
{
  *a1 = &off_4D91E8;
  remove_event_listener(a1);
  operator delete(a1, 0x10u);
}
