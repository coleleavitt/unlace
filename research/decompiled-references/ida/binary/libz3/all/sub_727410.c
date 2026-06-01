void __fastcall sub_727410(_QWORD *a1)
{
  void *v2; // rbp
  __int64 v3; // rdi
  __int64 v4; // rdi

  v2 = (void *)a1[4];
  *a1 = &off_1C538A0;
  if ( v2 )
  {
    sub_1242ED0(v2);
    sub_186B220(v2);
  }
  v3 = a1[6];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = a1[5];
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  sub_18572D0(a1 + 3);
  operator delete(a1, 0x38u);
}

