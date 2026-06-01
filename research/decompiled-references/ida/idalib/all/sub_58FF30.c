void __fastcall sub_58FF30(std::exception *a1)
{
  *(_QWORD *)a1 = &off_2BFB280;
  std::exception::~exception(a1);
  operator delete(a1, 8u);
}
