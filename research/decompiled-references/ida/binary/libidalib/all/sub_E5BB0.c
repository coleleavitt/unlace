_QWORD *sub_E5BB0()
{
  _QWORD *result; // rax

  result = &dbg;
  if ( dbg )
  {
    result = (_QWORD *)netnode_inited();
    if ( (_BYTE)result )
    {
      sub_E5A20();
      sub_D8330(1);
      sub_B9120(qword_252210);
      qword_252210 = nullptr;
      qword_252218 = (__int64)&dword_252208;
      qword_252220 = (__int64)&dword_252208;
      qword_252228 = 0;
      return (_QWORD *)sub_A3770();
    }
  }
  return result;
}

