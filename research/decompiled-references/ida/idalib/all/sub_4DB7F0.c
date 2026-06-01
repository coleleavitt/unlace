void __fastcall sub_4DB7F0(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rax
  int v4; // edx
  int v5; // edx
  char v6; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v1 = *(_QWORD **)(a1 + 8);
  if ( v1 )
  {
    v2 = v1[2];
    if ( (_UNKNOWN *)(v2 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v5 = _InterlockedExchangeAdd((volatile signed __int32 *)(v2 - 8), 0xFFFFFFFF);
      }
      else
      {
        v5 = *(_DWORD *)(v2 - 8);
        *(_DWORD *)(v2 - 8) = v5 - 1;
      }
      if ( v5 <= 0 )
        std::string::_Rep::_M_destroy(v2 - 24, &v6);
    }
    v3 = v1[1];
    if ( (_UNKNOWN *)(v3 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v4 = _InterlockedExchangeAdd((volatile signed __int32 *)(v3 - 8), 0xFFFFFFFF);
      }
      else
      {
        v4 = *(_DWORD *)(v3 - 8);
        *(_DWORD *)(v3 - 8) = v4 - 1;
      }
      if ( v4 <= 0 )
        std::string::_Rep::_M_destroy(v3 - 24, &v6);
    }
    operator delete(v1, 0x20u);
  }
}
