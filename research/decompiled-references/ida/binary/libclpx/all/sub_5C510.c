__int64 __fastcall sub_5C510(__int64 a1)
{
  __int64 result; // rax

  if ( &_pthread_key_create )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 16), 0xFFFFFFFF);
  }
  else
  {
    result = *(unsigned int *)(a1 + 16);
    *(_DWORD *)(a1 + 16) = result - 1;
  }
  if ( (int)result <= 0 )
    return std::string::_Rep::_M_destroy();
  return result;
}

