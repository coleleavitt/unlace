void __fastcall sub_CBFA40(std::exception *a1)
{
  *(_QWORD *)a1 = &off_1C74C20;
  std::exception::~exception(a1);
  operator delete(a1, 8u);
}

