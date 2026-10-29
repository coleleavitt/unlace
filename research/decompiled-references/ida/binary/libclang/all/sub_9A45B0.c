bool *__fastcall sub_9A45B0(__int64 a1)
{
  __int16 v1; // bp
  bool *result; // rax

  v1 = *(_WORD *)sub_A1A5A0(a1, 8);
  sub_A1A5E0(a1, 8);
  result = (bool *)sub_A1A4E0(a1, 8);
  *result = v1 != 0;
  return result;
}

