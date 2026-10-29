__int64 __fastcall Clp_setColumnName(ClpModel **a1, int a2)
{
  __int64 result; // rax
  int v3; // edx
  __int64 v4[6]; // [rsp+8h] [rbp-30h] BYREF

  std::string::string();
  ClpModel::setColumnName(*a1, a2, (std::string *)v4);
  result = v4[0];
  if ( (_UNKNOWN *)(v4[0] - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(v4[0] - 8), 0xFFFFFFFF);
    }
    else
    {
      v3 = *(_DWORD *)(v4[0] - 8);
      *(_DWORD *)(v4[0] - 8) = v3 - 1;
    }
    if ( v3 <= 0 )
      return std::string::_Rep::_M_destroy();
  }
  return result;
}

