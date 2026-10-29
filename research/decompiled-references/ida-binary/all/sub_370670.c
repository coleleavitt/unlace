_QWORD *__fastcall sub_370670(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  __int64 v3; // rdx

  result = *(_QWORD **)a1;
  v3 = *(_QWORD *)a1 + 40LL * *(_QWORD *)(a1 + 8);
  if ( v3 == *(_QWORD *)a1 )
    return nullptr;
  while ( *result != a2 )
  {
    result += 5;
    if ( result == (_QWORD *)v3 )
      return nullptr;
  }
  return result;
}
