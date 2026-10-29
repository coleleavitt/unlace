size_t __fastcall ClpModel::setColumnName(ClpModel *this, int a2, std::string *a3)
{
  __int64 v4; // rbp
  __int64 *v5; // r14
  __int64 v6; // rcx
  unsigned int v7; // r12d
  unsigned __int64 v8; // rax
  size_t result; // rax
  unsigned __int64 v10; // rsi
  __int64 *v11; // r8
  __int64 *v12; // r15
  void *v13; // rdx
  char *v14; // r9
  __int64 v15; // rax
  int v16; // ecx
  char *v17; // [rsp+8h] [rbp-60h]
  char *v18; // [rsp+8h] [rbp-60h]
  __int64 *v19; // [rsp+10h] [rbp-58h]
  __int64 *v20; // [rsp+10h] [rbp-58h]
  void *v21; // [rsp+18h] [rbp-50h]
  void *v22; // [rsp+18h] [rbp-50h]
  char v23; // [rsp+2Fh] [rbp-39h] BYREF

  v4 = a2;
  v5 = *((__int64 **)this + 50);
  v6 = *((_QWORD *)this + 49);
  v7 = *((_DWORD *)this + 82);
  v8 = ((__int64)v5 - v6) >> 3;
  if ( a2 >= (int)v8 )
  {
    v10 = a2 + 1;
    if ( v10 > v8 )
    {
      std::vector<std::string>::_M_default_append((char *)this + 392, v10 - v8);
      v6 = *((_QWORD *)this + 49);
    }
    else if ( v10 < v8 )
    {
      v11 = (__int64 *)(v6 + 8 * v10);
      if ( v5 != v11 )
      {
        v12 = (__int64 *)(v6 + 8 * v10);
        v13 = &std::string::_Rep::_S_empty_rep_storage;
        v14 = &v23;
        if ( &_pthread_key_create )
        {
          do
          {
            if ( (void *)(*v12 - 24) != v13
              && _InterlockedExchangeAdd((volatile signed __int32 *)(*v12 - 8), 0xFFFFFFFF) <= 0 )
            {
              v21 = v13;
              v19 = v11;
              v17 = v14;
              std::string::_Rep::_M_destroy();
              v13 = v21;
              v11 = v19;
              v14 = v17;
            }
            ++v12;
          }
          while ( v5 != v12 );
        }
        else
        {
          do
          {
            v15 = *v12;
            if ( (void *)(*v12 - 24) != v13 )
            {
              v16 = *(_DWORD *)(v15 - 8);
              *(_DWORD *)(v15 - 8) = v16 - 1;
              if ( v16 <= 0 )
              {
                v22 = v13;
                v20 = v11;
                v18 = v14;
                std::string::_Rep::_M_destroy();
                v14 = v18;
                v11 = v20;
                v13 = v22;
              }
            }
            ++v12;
          }
          while ( v5 != v12 );
        }
        v6 = *((_QWORD *)this + 49);
      }
      *((_QWORD *)this + 50) = v11;
    }
  }
  std::string::assign((std::string *)(v6 + 8 * v4), a3);
  result = strlen(*(const char **)a3);
  if ( v7 <= (unsigned int)result )
    v7 = result;
  *((_DWORD *)this + 82) = v7;
  return result;
}

