void __fastcall sub_1CCEE0(char *a1)
{
  char *v2; // rdi

  v2 = a1 + 192;
  *((_QWORD *)v2 - 24) = &off_4BEE90;
  sub_1181E0((__int64)v2);
  *(_QWORD *)a1 = &off_4BD3E0;
  sub_3EFEF0(a1);
  operator delete(a1, 0xD0u);
}
