void __fastcall sub_2095FF0(__int64 a1)
{
  void *v1; // rbp
  _QWORD *v3; // rdi

  v1 = (void *)(a1 - 32);
  v3 = (_QWORD *)(a1 + 384);
  *(v3 - 52) = &off_2C723E0;
  *(v3 - 48) = off_2C72488;
  *v3 = off_2C724C8;
  sub_20957D0((__int64)v3);
  sub_2095D70(a1);
  sub_20BF9E0(v1);
  operator delete(v1, 0x450u);
}
