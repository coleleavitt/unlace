void __fastcall sub_E2DA60(std::exception *a1)
{
  *(_QWORD *)a1 = &off_1C76478;
  std::exception::~exception(a1);
  operator delete(a1, 8u);
}

