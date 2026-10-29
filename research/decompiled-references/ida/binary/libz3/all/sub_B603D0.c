void __fastcall sub_B603D0(std::thread::_State *a1)
{
  *(_QWORD *)a1 = &off_1C57528;
  std::thread::_State::~_State(a1);
  operator delete(a1, 0x18u);
}

