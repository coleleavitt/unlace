void __fastcall sub_1CD9A0(char *a1)
{
  char *v2; // rdi

  v2 = a1 + 192;
  *((_QWORD *)v2 - 24) = &off_4CBED0;
  sub_118BA0((__int64)v2);
  *(_QWORD *)a1 = &off_4CA410;
  sub_3F7B90(a1);
  operator delete(a1, 0xD0u);
}
