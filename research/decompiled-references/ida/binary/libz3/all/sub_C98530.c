void __fastcall sub_C98530(std::exception *a1)
{
  *(_QWORD *)a1 = &off_1C74AD8;
  std::exception::~exception(a1);
  operator delete(a1, 8u);
}

