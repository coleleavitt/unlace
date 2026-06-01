__int64 is_auto_enabled()
{
  __int64 result; // rax

  result = sub_3FB5F0();
  if ( (_BYTE)result )
    return *(unsigned __int8 *)(*(_QWORD *)(**(_QWORD **)(qword_2CCB598 + 1672) + 1536LL) + 125LL);
  return result;
}
