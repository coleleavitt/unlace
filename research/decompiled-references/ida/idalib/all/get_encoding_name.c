const char *__fastcall get_encoding_name(int a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rdx
  const char *result; // rax

  if ( a1 <= 0 )
    return nullptr;
  v1 = *(_QWORD *)(qword_2CCB598 + 1592);
  if ( (unsigned __int64)a1 >= *(_QWORD *)(v1 + 16) )
    return nullptr;
  v2 = (_QWORD *)(*(_QWORD *)(v1 + 8) + 24LL * a1);
  result = haystack;
  if ( v2[1] )
    return (const char *)*v2;
  return result;
}
