// Alternative name is '_ZNSt6vectorISsSaISsEED2Ev'
void __fastcall std::vector<std::string>::~vector(__int64 **a1)
{
  __int64 *v1; // rbp
  __int64 *v2; // rbx
  __int64 v3; // rax
  int v4; // edx

  v1 = a1[1];
  v2 = *a1;
  if ( v1 != *a1 )
  {
    if ( &_pthread_key_create )
    {
      do
      {
        if ( (_UNKNOWN *)(*v2 - 24) != &std::string::_Rep::_S_empty_rep_storage
          && _InterlockedExchangeAdd((volatile signed __int32 *)(*v2 - 8), 0xFFFFFFFF) <= 0 )
        {
          std::string::_Rep::_M_destroy();
        }
        ++v2;
      }
      while ( v1 != v2 );
    }
    else
    {
      v3 = *v2;
      if ( (_UNKNOWN *)(*v2 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        goto LABEL_12;
      while ( v1 != ++v2 )
      {
        v3 = *v2;
        if ( (_UNKNOWN *)(*v2 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        {
LABEL_12:
          v4 = *(_DWORD *)(v3 - 8);
          *(_DWORD *)(v3 - 8) = v4 - 1;
          if ( v4 <= 0 )
            std::string::_Rep::_M_destroy();
        }
      }
    }
    v2 = *a1;
  }
  if ( v2 )
    operator delete(v2);
}

