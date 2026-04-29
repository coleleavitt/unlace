void __fastcall sub_3C8E60(_QWORD *a1)
{
  *a1 = &off_4BF1A0;
  remove_event_listener(a1);
  operator delete(a1, 0x18u);
}
