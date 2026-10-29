unsigned __int64 __fastcall sub_781640(__int64 a1)
{
  _QWORD *v1; // rbp
  _QWORD *v3; // rbx
  void *v4; // rdi
  __int64 v5; // rax
  int v7; // edx
  unsigned __int64 v8; // [rsp+8h] [rbp-30h]

  v1 = *(_QWORD **)(a1 + 16);
  v8 = __readfsqword(0x28u);
  while ( v1 )
  {
    v3 = v1;
    v1 = (_QWORD *)*v1;
    v4 = (void *)v3[2];
    if ( v4 )
    {
      v3[3] = 0;
      qfree(v4);
    }
    v5 = v3[1];
    if ( (_UNKNOWN *)(v5 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v7 = _InterlockedExchangeAdd((volatile signed __int32 *)(v5 - 8), 0xFFFFFFFF);
      }
      else
      {
        v7 = *(_DWORD *)(v5 - 8);
        *(_DWORD *)(v5 - 8) = v7 - 1;
      }
      if ( v7 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    operator delete(v3, 0x38u);
  }
  memset(*(void **)a1, 0, 8LL * *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  return v8 - __readfsqword(0x28u);
}

