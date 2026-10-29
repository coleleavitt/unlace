bool *__fastcall sub_9A4570(__int64 a1)
{
  int v1; // ebp
  bool *result; // rax

  v1 = *(_DWORD *)sub_A1A5A0(a1, 8);
  sub_A1A5E0(a1, 8);
  result = (bool *)sub_A1A4E0(a1, 8);
  *result = v1 != 0;
  return result;
}

