void __fastcall sub_4050(std::exception *a1)
{
  *(_QWORD *)a1 = &off_6AF0;
  std::exception::~exception(a1);
  operator delete(a1, 0x10u);
}

