void __fastcall sub_3C6540(_QWORD *a1)
{
  *a1 = &off_4BE1A0;
  remove_event_listener(a1);
  operator delete(a1, 0x10u);
}
