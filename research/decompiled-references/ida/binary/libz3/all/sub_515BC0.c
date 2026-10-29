__int64 __fastcall sub_515BC0(_QWORD *a1)
{
  void *v2; // r12
  void *v3; // rbp
  __int64 v4; // rdi

  *a1 = &off_1C50408;
  v2 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 21);
  sub_182CBA0(v2, a1 + 23);
  v3 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 16);
  sub_182CBA0(v3, a1 + 18);
  v4 = a1[13];
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  return sub_180C0E0(a1 + 6);
}

