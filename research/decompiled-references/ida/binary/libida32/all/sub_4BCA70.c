unsigned __int64 __fastcall sub_4BCA70(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rax
  int v6; // edx
  int v7; // edx
  unsigned __int64 v8; // [rsp+8h] [rbp-30h]

  v1 = *(_QWORD **)(a1 + 16);
  v8 = __readfsqword(0x28u);
  while ( v1 )
  {
    v2 = v1;
    v1 = (_QWORD *)*v1;
    v3 = v2[2];
    if ( (_UNKNOWN *)(v3 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v7 = _InterlockedExchangeAdd((volatile signed __int32 *)(v3 - 8), 0xFFFFFFFF);
      }
      else
      {
        v7 = *(_DWORD *)(v3 - 8);
        *(_DWORD *)(v3 - 8) = v7 - 1;
      }
      if ( v7 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    v4 = v2[1];
    if ( (_UNKNOWN *)(v4 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v6 = _InterlockedExchangeAdd((volatile signed __int32 *)(v4 - 8), 0xFFFFFFFF);
      }
      else
      {
        v6 = *(_DWORD *)(v4 - 8);
        *(_DWORD *)(v4 - 8) = v6 - 1;
      }
      if ( v6 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    operator delete(v2, 0x20u);
  }
  memset(*(void **)a1, 0, 8LL * *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  return v8 - __readfsqword(0x28u);
}

