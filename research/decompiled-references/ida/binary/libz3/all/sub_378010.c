void __fastcall sub_378010(std::exception *a1)
{
  *(_QWORD *)a1 = &off_1C64C30;
  std::exception::~exception(a1);
  operator delete(a1, 8u);
}

