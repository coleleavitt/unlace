__int64 __fastcall std::vector<std::string>::operator=(__int64 a1, const std::string **a2)
{
  const std::string *v2; // r13
  const std::string *v3; // rbx
  std::string *v5; // r15
  unsigned __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // r12
  std::string *v10; // r12
  char *v11; // r14
  __int64 v13; // r14
  std::string *v14; // r15
  std::string *v15; // r15
  std::string *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  const std::string *v19; // rsi
  const std::string *v20; // rbx
  std::string *v21; // r12
  int v22; // ecx
  int v23; // edx
  __int64 v24; // [rsp+8h] [rbp-60h]
  __int64 v25; // [rsp+10h] [rbp-58h]
  std::string *v26; // [rsp+18h] [rbp-50h]

  if ( a2 != (const std::string **)a1 )
  {
    v2 = a2[1];
    v3 = *a2;
    v5 = *(std::string **)a1;
    v25 = v2 - *a2;
    v6 = v25 >> 3;
    v7 = v25 >> 3;
    if ( (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3 < (unsigned __int64)(v25 >> 3) )
    {
      if ( v6 )
      {
        if ( v6 > 0x1FFFFFFFFFFFFFFFLL )
          std::__throw_bad_alloc();
        v13 = operator new(v25);
      }
      else
      {
        v13 = 0;
      }
      if ( v3 != v2 )
      {
        v14 = (std::string *)v13;
        do
        {
          if ( v14 )
            std::string::string(v14, v3);
          v3 = (const std::string *)((char *)v3 + 8);
          v14 = (std::string *)((char *)v14 + 8);
        }
        while ( v2 != v3 );
      }
      v15 = *(std::string **)(a1 + 8);
      v16 = *(std::string **)a1;
      if ( v15 != *(std::string **)a1 )
      {
        if ( &_pthread_key_create )
        {
          do
          {
            if ( (_UNKNOWN *)(*(_QWORD *)v16 - 24LL) != &std::string::_Rep::_S_empty_rep_storage
              && _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)v16 - 8LL), 0xFFFFFFFF) <= 0 )
            {
              std::string::_Rep::_M_destroy();
            }
            v16 = (std::string *)((char *)v16 + 8);
          }
          while ( v15 != v16 );
        }
        else
        {
          do
          {
            v18 = *(_QWORD *)v16;
            if ( (_UNKNOWN *)(*(_QWORD *)v16 - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
            {
              v23 = *(_DWORD *)(v18 - 8);
              *(_DWORD *)(v18 - 8) = v23 - 1;
              if ( v23 <= 0 )
                std::string::_Rep::_M_destroy();
            }
            v16 = (std::string *)((char *)v16 + 8);
          }
          while ( v15 != v16 );
        }
        v16 = *(std::string **)a1;
      }
      if ( v16 )
        operator delete(v16);
      *(_QWORD *)a1 = v13;
      v11 = (char *)(v25 + v13);
      *(_QWORD *)(a1 + 16) = v11;
      goto LABEL_11;
    }
    v26 = *(std::string **)(a1 + 8);
    v8 = v26 - v5;
    v9 = (v26 - v5) >> 3;
    if ( v6 > v9 )
    {
      if ( v8 > 0 )
      {
        do
        {
          v19 = v3;
          v3 = (const std::string *)((char *)v3 + 8);
          std::string::assign(v5, v19);
          v5 = (std::string *)((char *)v5 + 8);
          --v9;
        }
        while ( v9 );
        v5 = *(std::string **)a1;
        v2 = a2[1];
        v3 = *a2;
        v26 = *(std::string **)(a1 + 8);
        v8 = (__int64)v26 - *(_QWORD *)a1;
      }
      v20 = (const std::string *)((char *)v3 + v8);
      v21 = v26;
      if ( v20 == v2 )
      {
        v11 = (char *)v5 + v25;
        goto LABEL_11;
      }
      do
      {
        if ( v21 )
          std::string::string(v21, v20);
        v20 = (const std::string *)((char *)v20 + 8);
        v21 = (std::string *)((char *)v21 + 8);
      }
      while ( v20 != v2 );
    }
    else
    {
      if ( v25 > 0 )
      {
        do
        {
          v24 = v7;
          std::string::assign(v5, v3);
          v3 = (const std::string *)((char *)v3 + 8);
          v5 = (std::string *)((char *)v5 + 8);
          v7 = v24 - 1;
        }
        while ( v24 != 1 );
      }
      if ( v26 != v5 )
      {
        v10 = v5;
        if ( &_pthread_key_create )
        {
          do
          {
            if ( (_UNKNOWN *)(*(_QWORD *)v10 - 24LL) != &std::string::_Rep::_S_empty_rep_storage
              && _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)v10 - 8LL), 0xFFFFFFFF) <= 0 )
            {
              std::string::_Rep::_M_destroy();
            }
            v10 = (std::string *)((char *)v10 + 8);
          }
          while ( v26 != v10 );
        }
        else
        {
          do
          {
            v17 = *(_QWORD *)v10;
            if ( (_UNKNOWN *)(*(_QWORD *)v10 - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
            {
              v22 = *(_DWORD *)(v17 - 8);
              *(_DWORD *)(v17 - 8) = v22 - 1;
              if ( v22 <= 0 )
                std::string::_Rep::_M_destroy();
            }
            v10 = (std::string *)((char *)v10 + 8);
          }
          while ( v26 != v10 );
        }
      }
    }
    v11 = (char *)(*(_QWORD *)a1 + v25);
LABEL_11:
    *(_QWORD *)(a1 + 8) = v11;
  }
  return a1;
}

