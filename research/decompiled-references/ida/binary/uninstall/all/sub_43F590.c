_QWORD *__fastcall sub_43F590(__int64 a1, _DWORD *a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)sub_40FB00(56);
  result[4] = a2;
  result[3] = 0;
  ++*a2;
  result[6] = 0;
  result[5] = 0;
  return result;
}

