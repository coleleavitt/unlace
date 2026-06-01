void __fastcall sub_733560(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi

  *a1 = &off_1C53E18;
  v2 = (void *)a1[13];
  if ( v2 )
    sub_186B220(v2);
  v3 = (void *)a1[10];
  if ( v3 )
    sub_186B220(v3);
  sub_18572D0(a1 + 3);
  operator delete(a1, 0x90u);
}

