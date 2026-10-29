void __fastcall sub_26A5C0(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = &off_1C4CAD8;
  sub_26AE20(a1[3], a1 + 4);
  v2 = (void *)a1[4];
  if ( v2 )
    sub_186B220(v2);
  operator delete(a1, 0x38u);
}

