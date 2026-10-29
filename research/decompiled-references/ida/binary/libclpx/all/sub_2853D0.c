unsigned __int64 __fastcall sub_2853D0(__int64 a1)
{
  int v2; // eax
  unsigned __int64 v3; // [rsp+8h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  if ( (_UNKNOWN *)a1 != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 16), 0xFFFFFFFF);
    }
    else
    {
      v2 = *(_DWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 16) = v2 - 1;
    }
    if ( v2 <= 0 )
      std::string::_Rep::_M_destroy();
  }
  return __readfsqword(0x28u) ^ v3;
}

