void __fastcall sub_7D7E30(std::exception *a1)
{
  *(_QWORD *)a1 = &off_1C6B828;
  std::exception::~exception(a1);
  operator delete(a1, 8u);
}

