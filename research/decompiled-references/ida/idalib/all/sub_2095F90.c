__int64 __fastcall sub_2095F90(__int64 a1)
{
  __int64 v1; // rbp
  _QWORD *v3; // rdi

  v1 = a1 - 32;
  v3 = (_QWORD *)(a1 + 384);
  *(v3 - 52) = &off_2C723E0;
  *(v3 - 48) = off_2C72488;
  *v3 = off_2C724C8;
  sub_20957D0((__int64)v3);
  sub_2095D70(a1);
  return sub_20BF9E0(v1);
}
