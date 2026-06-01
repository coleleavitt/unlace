unsigned __int64 *__fastcall get_func(unsigned __int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 *result; // rax

  v1 = *(_QWORD *)(qword_2CCB598 + 1672) + 1704LL;
  result = sub_505D70(v1, a1);
  if ( result )
  {
    if ( *((char *)result + 17) < 0 )
      return sub_505D70(v1, result[3]);
  }
  return result;
}
