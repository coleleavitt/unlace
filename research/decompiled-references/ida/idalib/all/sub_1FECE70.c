void __fastcall sub_1FECE70(std::thread::_State *a1)
{
  *(_QWORD *)a1 = &off_2C713F8;
  std::thread::_State::~_State(a1);
  operator delete(a1, 0x10u);
}
