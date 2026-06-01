void __fastcall sub_39B060(std::exception *a1)
{
  char *v2; // rdi

  v2 = (char *)a1 + 8;
  *((_QWORD *)v2 - 1) = off_1C63128;
  sub_233E40((__int64)v2);
  *(_QWORD *)a1 = &off_1C7B9E8;
  std::exception::~exception(a1);
  operator delete(a1, 0x28u);
}

