__int64 (__fastcall *__fastcall set_aflags(void *a1, unsigned int a2))(_QWORD, _QWORD)
{
  __int64 *v2; // rbp
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax

  v2 = *(__int64 **)(qword_2CCB598 + 1672);
  sub_3D0A60(v2, a1, a2);
  if ( (unsigned __int8)sub_3FD360(v2, a1)
    || (result = (__int64 (__fastcall *)(_QWORD, _QWORD))rangeset_t_find_range(v2 + 130, a1)) != nullptr )
  {
    result = qword_2CCB548;
    if ( qword_2CCB548 )
      return (__int64 (__fastcall *)(_QWORD, _QWORD))qword_2CCB548(a1, 1);
  }
  return result;
}
