void __fastcall sub_CD0280(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = &off_1C59548;
  v2 = (void *)a1[2];
  if ( v2 )
    sub_186B220(v2);
  operator delete(a1, 0x28u);
}

