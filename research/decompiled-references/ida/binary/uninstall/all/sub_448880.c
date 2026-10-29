_QWORD *__fastcall sub_448880(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  _QWORD *result; // rax
  __int64 v4; // rdx

  v2 = (__int64 *)sub_496130(&qword_65A830, 16);
  result = (_QWORD *)sub_40FB00(24);
  v4 = *v2;
  *result = a1;
  result[1] = a2;
  result[2] = v4;
  *v2 = (__int64)result;
  return result;
}

