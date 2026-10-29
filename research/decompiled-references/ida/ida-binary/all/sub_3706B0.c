_QWORD *__fastcall sub_3706B0(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  __int64 v3; // rdx

  result = *(_QWORD **)a1;
  v3 = *(_QWORD *)a1 + 40LL * *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)a1 == v3 )
    return nullptr;
  while ( a2 != *result )
  {
    result += 5;
    if ( (_QWORD *)v3 == result )
      return nullptr;
  }
  return result;
}
