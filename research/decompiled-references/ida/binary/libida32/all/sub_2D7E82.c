unsigned __int64 __fastcall sub_2D7E82(__int64 a1)
{
  int v1; // eax
  unsigned __int64 v3; // [rsp+8h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  if ( (_UNKNOWN *)(a1 - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v1 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 - 8), 0xFFFFFFFF);
    }
    else
    {
      v1 = *(_DWORD *)(a1 - 8);
      *(_DWORD *)(a1 - 8) = v1 - 1;
    }
    if ( v1 <= 0 )
      std::string::_Rep::_M_destroy();
  }
  return v3 - __readfsqword(0x28u);
}

