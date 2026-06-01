void __fastcall sub_26BEC0(std::exception *a1)
{
  *(_QWORD *)a1 = &off_1C7B9E8;
  std::exception::~exception(a1);
  operator delete(a1, 0x10u);
}

