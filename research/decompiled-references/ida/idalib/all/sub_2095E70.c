void __fastcall sub_2095E70(char *a1)
{
  _QWORD *v2; // rdi

  v2 = a1 + 32;
  *(v2 - 4) = &off_2C72568;
  *v2 = off_2C72610;
  sub_2095D70((__int64)v2);
  sub_20BFA20(a1);
  operator delete(a1, 0x1A0u);
}
