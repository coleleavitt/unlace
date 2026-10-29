void __fastcall sub_5B3E00(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  __int64 v4; // rbx
  void *v5; // rdi

  *a1 = &off_2B2F620;
  v2 = (void *)a1[14];
  if ( v2 )
  {
    a1[15] = 0;
    qfree(v2);
  }
  v3 = (void *)a1[11];
  if ( v3 )
  {
    a1[12] = 0;
    qfree(v3);
  }
  v4 = a1[7];
  *a1 = &unk_2BFB350;
  while ( v4 )
  {
    sub_5B3BC0(*(_QWORD **)(v4 + 24));
    v5 = (void *)v4;
    v4 = *(_QWORD *)(v4 + 16);
    operator delete(v5, 0x30u);
  }
  operator delete(a1, 0x90u);
}
