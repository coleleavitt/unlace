__int64 __fastcall sub_3F1500(_QWORD *a1)
{
  __int64 v2; // rbx
  void *v3; // rdi
  void *v4; // rdi

  v2 = a1[15];
  *(a1 - 2) = off_2B270D8;
  *a1 = off_2B27118;
  while ( v2 )
  {
    sub_3EF8B0(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x28u);
  }
  v4 = (void *)a1[3];
  *(a1 - 2) = &off_2BF9EE0;
  *a1 = &off_2BF9F20;
  if ( v4 )
  {
    a1[4] = 0;
    qfree(v4);
  }
  *(a1 - 2) = &off_2BF99C8;
  return remove_event_listener(a1 - 2);
}
