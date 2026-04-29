void __fastcall sub_3C5D60(_QWORD *a1)
{
  __int64 v2; // rbx
  void *v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi

  v2 = a1[21];
  *a1 = &off_4B55C8;
  while ( v2 )
  {
    sub_3C5B00(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x28u);
  }
  *a1 = &off_4AD710;
  merge_handler_dtr(a1);
  v4 = a1[12];
  if ( v4 )
  {
    a1[13] = 0;
    qfree(v4);
  }
  v5 = a1[2];
  if ( v5 )
  {
    a1[3] = 0;
    qfree(v5);
  }
  operator delete(a1, 0xE0u);
}
