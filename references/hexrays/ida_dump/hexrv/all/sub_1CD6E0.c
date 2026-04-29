void __fastcall sub_1CD6E0(char *a1)
{
  char *v2; // rdi

  v2 = a1 + 192;
  *((_QWORD *)v2 - 24) = &off_4BDE90;
  sub_1188E0((__int64)v2);
  *(_QWORD *)a1 = &off_4BC3D0;
  sub_3EE6F0(a1);
  operator delete(a1, 0xD0u);
}
