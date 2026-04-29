unsigned __int64 __fastcall sub_57C20(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rbp
  __int64 v3; // rax
  int v5; // edx
  char v6; // [rsp+7h] [rbp-31h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-30h]

  v1 = *(_QWORD **)(a1 + 16);
  v7 = __readfsqword(0x28u);
  while ( v1 )
  {
    v2 = v1;
    v1 = (_QWORD *)*v1;
    v3 = v2[2];
    if ( (_UNKNOWN *)(v3 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v5 = _InterlockedExchangeAdd((volatile signed __int32 *)(v3 - 8), 0xFFFFFFFF);
      }
      else
      {
        v5 = *(_DWORD *)(v3 - 8);
        *(_DWORD *)(v3 - 8) = v5 - 1;
      }
      if ( v5 <= 0 )
        std::string::_Rep::_M_destroy(v3 - 24, &v6);
    }
    operator delete(v2, 0x18u);
  }
  memset(*(void **)a1, 0, 8LL * *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  return v7 - __readfsqword(0x28u);
}
