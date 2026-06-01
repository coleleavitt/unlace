void __fastcall sub_992030(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  void *v4; // r12
  void *v5; // r12
  void *v6; // rbp

  *a1 = &off_1C56470;
  v2 = a1[16];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[15];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  *a1 = &off_1C563C8;
  v4 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 10);
  sub_182CBA0(v4, a1 + 12);
  v5 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 6);
  sub_182CBA0(v5, a1 + 8);
  v6 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 2);
  sub_182CBA0(v6, a1 + 4);
  operator delete(a1, 0x88u);
}

