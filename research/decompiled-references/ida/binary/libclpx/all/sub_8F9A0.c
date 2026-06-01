void __fastcall sub_8F9A0(__int64 a1, _QWORD *a2)
{
  __int64 *v2; // r13
  __int64 *v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 *v6; // rbx
  __int64 v7; // rax
  int v8; // edx

  *(_QWORD *)(a1 + 16) = 0;
  v2 = *(__int64 **)a1;
  v3 = *(__int64 **)(a1 + 8);
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = *a2;
  *a2 = 0;
  v4 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = a2[1];
  a2[1] = v4;
  v5 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = a2[2];
  a2[2] = v5;
  if ( v2 != v3 )
  {
    v6 = v2;
    if ( &_pthread_key_create )
    {
      do
      {
        if ( (_UNKNOWN *)(*v6 - 24) != &std::string::_Rep::_S_empty_rep_storage
          && _InterlockedExchangeAdd((volatile signed __int32 *)(*v6 - 8), 0xFFFFFFFF) <= 0 )
        {
          std::string::_Rep::_M_destroy();
        }
        ++v6;
      }
      while ( v3 != v6 );
    }
    else
    {
      v7 = *v2;
      if ( (_UNKNOWN *)(*v2 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        goto LABEL_11;
      while ( v3 != ++v6 )
      {
        v7 = *v6;
        if ( (_UNKNOWN *)(*v6 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        {
LABEL_11:
          v8 = *(_DWORD *)(v7 - 8);
          *(_DWORD *)(v7 - 8) = v8 - 1;
          if ( v8 <= 0 )
            std::string::_Rep::_M_destroy();
        }
      }
    }
  }
  if ( v2 )
    operator delete(v2);
}

