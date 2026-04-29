void __fastcall sub_DF20(_QWORD *a1)
{
  *a1 = &off_2CD20;
  remove_event_listener();
  operator delete(a1, 0x18u);
}
