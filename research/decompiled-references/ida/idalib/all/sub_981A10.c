void __fastcall sub_981A10(std::thread::_State *a1)
{
  *(_QWORD *)a1 = &off_2B40148;
  std::thread::_State::~_State(a1);
  operator delete(a1, 0x20u);
}
