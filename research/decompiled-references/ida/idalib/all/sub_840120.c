void __fastcall sub_840120(std::exception *a1)
{
  *(_QWORD *)a1 = &off_2BFC0F8;
  std::exception::~exception(a1);
  operator delete(a1, 0x10u);
}
