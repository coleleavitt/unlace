void __fastcall sub_C815E0(_QWORD *a1)
{
  char *v1; // rbp
  void *v2; // r13
  void *v3; // r12

  v1 = (char *)a1[2];
  *a1 = &off_1C58B38;
  if ( v1 )
  {
    v2 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v1 + 40);
    sub_182CBA0(v2, v1 + 56);
    v3 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v1 + 8);
    sub_182CBA0(v3, v1 + 24);
    sub_186B220(v1);
  }
  sub_18572D0(a1 + 3);
}

