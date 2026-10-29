__int64 (__fastcall *__fastcall set_aflags(unsigned int a1, unsigned int a2))(_QWORD, _QWORD)
{
  __int64 *v2; // rbp
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax

  v2 = *(__int64 **)(qword_2CA1698 + 1480);
  sub_3CB100(v2, a1, a2);
  if ( (unsigned __int8)sub_3EA400(v2, a1)
    || (result = (__int64 (__fastcall *)(_QWORD, _QWORD))rangeset_t_find_range(v2 + 129, a1)) != nullptr )
  {
    result = qword_2CA1648;
    if ( qword_2CA1648 )
      return (__int64 (__fastcall *)(_QWORD, _QWORD))qword_2CA1648(a1, 1);
  }
  return result;
}

