__int64 *__fastcall sub_256B40(__int64 a1, const char *a2)
{
  __int64 *result; // rax

  result = &dbg;
  if ( dbg )
  {
    result = (__int64 *)netnode_inited();
    if ( (_BYTE)result )
    {
      sub_2569B0();
      sub_245790(1);
      sub_2284E0(qword_8CC090, a2);
      qword_8CC090 = nullptr;
      qword_8CC098 = (__int64)&dword_8CC088;
      qword_8CC0A0 = (__int64)&dword_8CC088;
      qword_8CC0A8 = 0;
      return (__int64 *)sub_2120F0();
    }
  }
  return result;
}
