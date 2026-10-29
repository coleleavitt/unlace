void __fastcall sub_81CD60(std::exception *a1)
{
  *(_QWORD *)a1 = &off_2BD20F8;
  std::exception::~exception(a1);
  operator delete(a1, 0x10u);
}

