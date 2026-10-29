void __fastcall sub_4B33F0(_QWORD *a1)
{
  *a1 = &off_2BF99C8;
  remove_event_listener(a1);
  operator delete(a1, 0x18u);
}
