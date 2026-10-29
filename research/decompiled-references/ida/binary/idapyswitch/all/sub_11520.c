void __fastcall sub_11520(std::exception *a1)
{
  *(_QWORD *)a1 = &off_1BD00;
  std::exception::~exception(a1);
  operator delete(a1, 0x10u);
}

