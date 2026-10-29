unsigned __int64 __fastcall std::vector<std::string>::resize(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // rbx
  __int64 v3; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 *v5; // r14
  unsigned __int64 *v6; // r12
  int v7; // edx

  v2 = (unsigned __int64 *)a1[1];
  v3 = *a1;
  result = ((__int64)v2 - *a1) >> 3;
  if ( a2 > result )
    return std::vector<std::string>::_M_default_append(a1, a2 - result);
  if ( a2 >= result )
    return result;
  v5 = (unsigned __int64 *)(v3 + 8 * a2);
  if ( v5 == v2 )
    goto LABEL_7;
  v6 = (unsigned __int64 *)(v3 + 8 * a2);
  if ( &_pthread_key_create )
  {
    do
    {
      result = *v6;
      if ( (_UNKNOWN *)(*v6 - 24) != &std::string::_Rep::_S_empty_rep_storage
        && _InterlockedExchangeAdd((volatile signed __int32 *)(result - 8), 0xFFFFFFFF) <= 0 )
      {
        result = std::string::_Rep::_M_destroy();
      }
      ++v6;
    }
    while ( v2 != v6 );
LABEL_7:
    a1[1] = (__int64)v5;
    return result;
  }
  do
  {
    result = *v6;
    if ( (_UNKNOWN *)(*v6 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      v7 = *(_DWORD *)(result - 8);
      *(_DWORD *)(result - 8) = v7 - 1;
      if ( v7 <= 0 )
        result = std::string::_Rep::_M_destroy();
    }
    ++v6;
  }
  while ( v2 != v6 );
  a1[1] = (__int64)v5;
  return result;
}

