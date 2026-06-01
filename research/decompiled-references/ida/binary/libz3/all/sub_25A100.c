void __fastcall sub_25A100(std::exception *a1)
{
  *(_QWORD *)a1 = &off_1C63940;
  std::exception::~exception(a1);
  operator delete(a1, 0x10u);
}

