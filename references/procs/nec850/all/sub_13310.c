__int64 __fastcall sub_13310(_QWORD *a1)
{
  _QWORD *v2; // rdi

  v2 = a1 + 16;
  *(v2 - 16) = &off_2CE88;
  *v2 = &off_2DB78;
  remove_event_listener(v2);
  *a1 = &off_2DB78;
  remove_event_listener(a1);
  return qfree(a1);
}
