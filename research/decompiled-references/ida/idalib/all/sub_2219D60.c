__int64 __fastcall sub_2219D60(std::_V2 *a1, const char **a2, _QWORD *a3)
{
  __int64 result; // rax
  const char *v4; // r12
  const char *v5; // r12

  if ( !a3 )
  {
    v5 = *a2;
    if ( (unsigned __int8)sub_2219A70(a1, *a2, 1, nullptr) )
    {
      result = (unsigned __int8)v5[*(_QWORD *)a1];
      ++*a2;
      return result;
    }
    return 0;
  }
  if ( *a3 )
    return 0;
  v4 = *a2;
  result = sub_2219A70(a1, *a2, 1, a3);
  if ( (_BYTE)result )
  {
    result = (unsigned __int8)v4[*(_QWORD *)a1];
    ++*a2;
  }
  return result;
}
