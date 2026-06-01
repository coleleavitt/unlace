_QWORD *__fastcall sub_553020(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)sub_17E9C90(a1 + 560, 88);
  *result = a2;
  result[1] = result + 3;
  result[2] = 0x800000000LL;
  return result;
}

