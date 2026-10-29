void __fastcall sub_95DCD0(std::thread::_State *a1)
{
  *(_QWORD *)a1 = &off_2B161A8;
  std::thread::_State::~_State(a1);
  operator delete(a1, 0x20u);
}

