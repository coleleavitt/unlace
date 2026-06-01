unsigned __int64 __fastcall sub_285710(__int64 *a1)
{
  __int64 v1; // rax
  int v3; // edx
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  v1 = *a1;
  if ( (_UNKNOWN *)(*a1 - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(v1 - 8), 0xFFFFFFFF);
    }
    else
    {
      v3 = *(_DWORD *)(v1 - 8);
      *(_DWORD *)(v1 - 8) = v3 - 1;
    }
    if ( v3 <= 0 )
      std::string::_Rep::_M_destroy();
  }
  return __readfsqword(0x28u) ^ v4;
}

