void __fastcall sub_5C560(__int64 a1, _QWORD *a2)
{
  __int64 *v2; // r13
  __int64 *v3; // rbx
  __int64 *v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // edx

  *(_QWORD *)(a1 + 16) = 0;
  v2 = *(__int64 **)a1;
  v3 = *(__int64 **)(a1 + 8);
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  v4 = v2;
  *(_QWORD *)a1 = *a2;
  *a2 = 0;
  v5 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = a2[1];
  a2[1] = v5;
  v6 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = a2[2];
  a2[2] = v6;
  while ( v3 != v4 )
  {
    v7 = *v4;
    if ( (_UNKNOWN *)(*v4 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v8 = _InterlockedExchangeAdd((volatile signed __int32 *)(v7 - 8), 0xFFFFFFFF);
      }
      else
      {
        v8 = *(_DWORD *)(v7 - 8);
        *(_DWORD *)(v7 - 8) = v8 - 1;
      }
      if ( v8 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    ++v4;
  }
  if ( v2 )
    operator delete(v2);
}

