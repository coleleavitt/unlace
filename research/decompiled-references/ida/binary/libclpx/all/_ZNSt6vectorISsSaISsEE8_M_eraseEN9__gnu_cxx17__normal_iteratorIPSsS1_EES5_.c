std::string *__fastcall std::vector<std::string>::_M_erase(__int64 a1, std::string *a2, std::string *a3)
{
  char *v4; // r12
  __int64 v6; // rax
  __int64 v7; // rbp
  std::string *v8; // rbx
  std::string *v9; // r12
  std::string *v10; // rsi
  __int64 *v11; // rbp
  char *v12; // rbx
  _BYTE *v13; // rcx
  __int64 v15; // rax
  _BYTE *v16; // r8
  int v17; // edx
  _BYTE *v18; // [rsp+8h] [rbp-50h]
  _BYTE *v19; // [rsp+8h] [rbp-50h]
  _BYTE v20[57]; // [rsp+1Fh] [rbp-39h] BYREF

  if ( a3 != a2 )
  {
    v4 = *(char **)(a1 + 8);
    v6 = v4 - (char *)a3;
    if ( a3 != (std::string *)v4 )
    {
      v7 = v6 >> 3;
      if ( v6 > 0 )
      {
        v8 = a3;
        v9 = a2;
        do
        {
          v10 = v8;
          v8 = (std::string *)((char *)v8 + 8);
          std::string::swap(v9, v10);
          v9 = (std::string *)((char *)v9 + 8);
          --v7;
        }
        while ( v7 );
        v4 = *(char **)(a1 + 8);
        v6 = v4 - (char *)a3;
      }
    }
    v11 = (__int64 *)((char *)a2 + v6);
    if ( (char *)a2 + v6 != v4 )
    {
      v12 = (char *)a2 + v6;
      v13 = v20;
      if ( &_pthread_key_create )
      {
        do
        {
          if ( (_UNKNOWN *)(*(_QWORD *)v12 - 24LL) != &std::string::_Rep::_S_empty_rep_storage
            && _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)v12 - 8LL), 0xFFFFFFFF) <= 0 )
          {
            v19 = v13;
            std::string::_Rep::_M_destroy();
            v13 = v19;
          }
          v12 += 8;
        }
        while ( v4 != v12 );
      }
      else
      {
        v15 = *v11;
        v16 = v20;
        if ( (_UNKNOWN *)(*v11 - 24) != &std::string::_Rep::_S_empty_rep_storage )
          goto LABEL_16;
        while ( 1 )
        {
          v12 += 8;
          if ( v12 == v4 )
            break;
          v15 = *(_QWORD *)v12;
          if ( (_UNKNOWN *)(*(_QWORD *)v12 - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
          {
LABEL_16:
            v17 = *(_DWORD *)(v15 - 8);
            *(_DWORD *)(v15 - 8) = v17 - 1;
            if ( v17 <= 0 )
            {
              v18 = v16;
              std::string::_Rep::_M_destroy();
              v16 = v18;
            }
          }
        }
      }
    }
    *(_QWORD *)(a1 + 8) = v11;
  }
  return a2;
}

