__int64 sub_C4290()
{
  void *v0; // rbx
  __int64 result; // rax

  v0 = qword_252758;
  if ( qword_252758 && !byte_252753 )
  {
    byte_252753 = 1;
    sub_C4160((__int64)qword_252758);
    operator delete(v0, 0x118u);
    byte_252753 = 0;
    qword_252758 = nullptr;
  }
  result = sub_9E1E0();
  byte_252752 = 0;
  byte_2526BA = 0;
  dword_25274C = 0;
  return result;
}

