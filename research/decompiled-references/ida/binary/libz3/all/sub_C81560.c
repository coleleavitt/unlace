void __fastcall sub_C81560(std::exception *a1)
{
  *(_QWORD *)a1 = &off_1C74718;
  std::exception::~exception(a1);
  operator delete(a1, 8u);
}

