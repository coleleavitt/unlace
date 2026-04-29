void __fastcall sub_3C3EC0(_QWORD *a1)
{
  *a1 = &off_4B8148;
  remove_event_listener(a1);
  operator delete(a1, 0x10u);
}
