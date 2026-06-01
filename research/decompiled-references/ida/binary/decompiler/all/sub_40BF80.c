void __fastcall sub_40BF80(std::logic_error *a1)
{
  *(_QWORD *)a1 = &off_4EBCD0;
  std::logic_error::~logic_error(a1);
  operator delete(a1, 0x10u);
}
