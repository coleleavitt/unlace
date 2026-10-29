__int64 Clp_setProblemName()
{
  __int64 result; // rax
  int v1; // ecx
  unsigned int v2; // [rsp+Ch] [rbp-2Ch]
  __int64 v3; // [rsp+18h] [rbp-20h]

  std::string::string();
  result = (unsigned __int8)ClpModel::setStrParam();
  if ( (_UNKNOWN *)(v3 - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v1 = _InterlockedExchangeAdd((volatile signed __int32 *)(v3 - 8), 0xFFFFFFFF);
    }
    else
    {
      v1 = *(_DWORD *)(v3 - 8);
      *(_DWORD *)(v3 - 8) = v1 - 1;
    }
    if ( v1 <= 0 )
    {
      v2 = (unsigned __int8)result;
      std::string::_Rep::_M_destroy();
      return v2;
    }
  }
  return result;
}

