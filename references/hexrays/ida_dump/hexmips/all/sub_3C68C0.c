void __fastcall sub_3C68C0(_QWORD *a1)
{
  *a1 = &off_4CC1E0;
  remove_event_listener(a1);
  operator delete(a1, 0x10u);
}
