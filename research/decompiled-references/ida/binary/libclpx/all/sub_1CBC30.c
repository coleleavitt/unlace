__int64 __fastcall sub_1CBC30(__int64 a1)
{
  __int64 result; // rax

  if ( &_pthread_key_create )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 16), 0xFFFFFFFF);
    if ( (int)result > 0 )
      return result;
    return std::string::_Rep::_M_destroy();
  }
  result = *(unsigned int *)(a1 + 16);
  *(_DWORD *)(a1 + 16) = result - 1;
  if ( (int)result <= 0 )
    return std::string::_Rep::_M_destroy();
  return result;
}

