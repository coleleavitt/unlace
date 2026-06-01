unsigned __int64 *__fastcall sub_5CAAB0(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 *result; // rax

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 1616LL);
  if ( a2 >= *(_QWORD *)(v2 + 32) )
    return nullptr;
  result = sub_505D70(a1 + 1704, *(_QWORD *)(*(_QWORD *)(v2 + 24) + 16 * a2));
  if ( !result )
    return nullptr;
  if ( *((char *)result + 17) < 0 )
    return sub_505D70(a1 + 1704, result[3]);
  return result;
}
