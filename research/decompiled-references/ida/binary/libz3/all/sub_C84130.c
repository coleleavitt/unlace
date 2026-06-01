void __fastcall sub_C84130(std::exception *a1)
{
  *(_QWORD *)a1 = &off_1C74770;
  std::exception::~exception(a1);
  operator delete(a1, 8u);
}

