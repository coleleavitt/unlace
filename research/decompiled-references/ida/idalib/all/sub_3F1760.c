void __fastcall sub_3F1760(_QWORD *a1)
{
  _QWORD *v1; // r12
  __int64 v3; // rbx
  void *v4; // rdi
  void *v5; // rdi

  v1 = a1 - 2;
  v3 = a1[15];
  *(a1 - 2) = off_2B270D8;
  *a1 = off_2B27118;
  while ( v3 )
  {
    sub_3EF8B0(*(_QWORD **)(v3 + 24));
    v4 = (void *)v3;
    v3 = *(_QWORD *)(v3 + 16);
    operator delete(v4, 0x28u);
  }
  v5 = (void *)a1[3];
  *(a1 - 2) = &off_2BF9EE0;
  *a1 = &off_2BF9F20;
  if ( v5 )
  {
    a1[4] = 0;
    qfree(v5);
  }
  *(a1 - 2) = &off_2BF99C8;
  remove_event_listener(v1);
  operator delete(v1, 0xB0u);
}
