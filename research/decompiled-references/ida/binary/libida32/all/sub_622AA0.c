void __fastcall sub_622AA0(std::exception *a1)
{
  *(_QWORD *)a1 = &off_2B0CF40;
  std::exception::~exception(a1);
  operator delete(a1, 8u);
}

