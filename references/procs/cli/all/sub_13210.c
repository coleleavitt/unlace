__int64 __fastcall sub_13210(_QWORD *a1)
{
  _QWORD *v2; // rdi

  v2 = a1 + 15;
  *(v2 - 15) = &off_19AF8;
  *v2 = &off_19B80;
  ((void (*)(void))remove_event_listener)();
  *a1 = &off_19B80;
  return remove_event_listener(a1);
}
