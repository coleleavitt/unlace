unsigned __int64 __fastcall sub_510610(__int64 a1)
{
  int v2; // edx
  char v3; // [rsp+7h] [rbp-11h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  if ( (_UNKNOWN *)(a1 - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 - 8), 0xFFFFFFFF);
    }
    else
    {
      v2 = *(_DWORD *)(a1 - 8);
      *(_DWORD *)(a1 - 8) = v2 - 1;
    }
    if ( v2 <= 0 )
      std::string::_Rep::_M_destroy(a1 - 24, &v3);
  }
  return v4 - __readfsqword(0x28u);
}
