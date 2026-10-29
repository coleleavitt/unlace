__int64 sub_C3090()
{
  void *v0; // rbx
  __int64 result; // rax

  v0 = qword_2515B0;
  if ( qword_2515B0 && !byte_2515AB )
  {
    byte_2515AB = 1;
    sub_C2F60((__int64)qword_2515B0);
    operator delete(v0, 0x108u);
    byte_2515AB = 0;
    qword_2515B0 = nullptr;
  }
  result = sub_9E0A0();
  byte_2515AA = 0;
  byte_251536 = 0;
  dword_2515A4 = 0;
  return result;
}

