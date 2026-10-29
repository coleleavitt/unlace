void __fastcall sub_37DA90(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = &off_1C4DA68;
  v2 = (void *)a1[2];
  if ( v2 )
    sub_186B220(v2);
  sub_18572D0(a1 + 3);
  operator delete(a1, 0x20u);
}

