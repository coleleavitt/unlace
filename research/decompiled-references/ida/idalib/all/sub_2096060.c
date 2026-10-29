void __fastcall sub_2096060(_QWORD *a1)
{
  *(a1 - 52) = &off_2C723E0;
  *(a1 - 48) = off_2C72488;
  *a1 = off_2C724C8;
  sub_20957D0((__int64)a1);
  sub_2095D70((__int64)(a1 - 48));
  sub_20BF9E0(a1 - 52);
  operator delete(a1 - 52, 0x450u);
}
