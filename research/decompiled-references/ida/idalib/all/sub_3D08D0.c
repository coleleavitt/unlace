__int64 (__fastcall *__fastcall sub_3D08D0(_QWORD *a1, void *a2, __int64 a3))(_QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax

  result = (__int64 (__fastcall *)(_QWORD, _QWORD))sub_3D07C0(a1, a2, a3);
  if ( (_BYTE)result )
  {
    result = qword_2CCB548;
    if ( qword_2CCB548 )
      return (__int64 (__fastcall *)(_QWORD, _QWORD))qword_2CCB548(a2, 1);
  }
  return result;
}
