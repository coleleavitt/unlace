void __fastcall sub_ACBA20(std::exception *a1)
{
  *(_QWORD *)a1 = &off_1C715B8;
  std::exception::~exception(a1);
  operator delete(a1, 8u);
}

