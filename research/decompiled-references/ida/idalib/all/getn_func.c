unsigned __int64 *__fastcall getn_func(unsigned __int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rbx
  unsigned __int64 *result; // rax

  v1 = *(_QWORD *)(qword_2CCB598 + 1672);
  v2 = *(_QWORD *)(*(_QWORD *)v1 + 1616LL);
  if ( a1 >= *(_QWORD *)(v2 + 32) )
    return nullptr;
  v3 = v1 + 1704;
  result = sub_505D70(v3, *(_QWORD *)(*(_QWORD *)(v2 + 24) + 16 * a1));
  if ( !result )
    return nullptr;
  if ( *((char *)result + 17) < 0 )
    return sub_505D70(v3, result[3]);
  return result;
}
