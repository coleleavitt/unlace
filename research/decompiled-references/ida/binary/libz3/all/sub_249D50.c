void __fastcall sub_249D50(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi

  *a1 = &off_1C62200;
  v2 = (void *)a1[6];
  if ( v2 )
    sub_186B220(v2);
  v3 = (void *)a1[3];
  if ( v3 )
    sub_186B220(v3);
  operator delete(a1, 0x38u);
}

