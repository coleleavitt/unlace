void __fastcall sub_75C890(std::exception *a1)
{
  *(_QWORD *)a1 = &off_1C6A348;
  std::exception::~exception(a1);
  operator delete(a1, 8u);
}

