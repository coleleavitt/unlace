_QWORD *sub_E4D90()
{
  _QWORD *result; // rax

  result = &dbg;
  if ( dbg )
  {
    result = (_QWORD *)netnode_inited();
    if ( (_BYTE)result )
    {
      sub_E4C00();
      sub_D6D40(1);
      sub_B8BB0(qword_251130);
      qword_251130 = nullptr;
      qword_251138 = (__int64)&dword_251128;
      qword_251140 = (__int64)&dword_251128;
      qword_251148 = 0;
      return (_QWORD *)sub_A3380();
    }
  }
  return result;
}

