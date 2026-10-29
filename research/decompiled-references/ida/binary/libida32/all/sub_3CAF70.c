__int64 (__fastcall *__fastcall sub_3CAF70(_QWORD *a1, unsigned int a2, __int64 a3))(_QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax

  result = (__int64 (__fastcall *)(_QWORD, _QWORD))sub_3CAE70(a1, a2, a3);
  if ( (_BYTE)result )
  {
    result = qword_2CA1648;
    if ( qword_2CA1648 )
      return (__int64 (__fastcall *)(_QWORD, _QWORD))qword_2CA1648(a2, 1);
  }
  return result;
}

