void __fastcall sub_E3B710(std::thread::_State *a1)
{
  *(_QWORD *)a1 = &off_1C76730;
  std::thread::_State::~_State(a1);
  operator delete(a1, 0x10u);
}

