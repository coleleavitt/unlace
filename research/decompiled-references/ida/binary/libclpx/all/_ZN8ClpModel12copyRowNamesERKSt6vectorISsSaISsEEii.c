unsigned __int64 __fastcall ClpModel::copyRowNames(__int64 a1, _QWORD *a2, int a3, int a4)
{
  __int64 v5; // r13
  unsigned int v7; // ebp
  __int64 v8; // r15
  __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  unsigned __int64 result; // rax
  __int64 v12; // r15
  __int64 v13; // rbx
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r8
  void *v18; // rcx
  char *v19; // r9
  __int64 v20; // rdx
  int v21; // esi
  __int64 v22; // [rsp+0h] [rbp-68h]
  char *v23; // [rsp+0h] [rbp-68h]
  char *v24; // [rsp+0h] [rbp-68h]
  __int64 v25; // [rsp+8h] [rbp-60h]
  __int64 v26; // [rsp+8h] [rbp-60h]
  unsigned __int64 v27; // [rsp+10h] [rbp-58h]
  unsigned __int64 v28; // [rsp+10h] [rbp-58h]
  void *v29; // [rsp+18h] [rbp-50h]
  void *v30; // [rsp+18h] [rbp-50h]
  char v31; // [rsp+2Fh] [rbp-39h] BYREF

  v5 = a3;
  v7 = *(_DWORD *)(a1 + 328);
  if ( !v7 )
  {
    v7 = *(_DWORD *)(a1 + 108);
    if ( v7 )
    {
      *(_DWORD *)(a1 + 328) = 8;
      ClpModel::copyColumnNames((ClpModel *)a1, nullptr, 0, v7);
      v7 = *(_DWORD *)(a1 + 328);
    }
  }
  v8 = *(_QWORD *)(a1 + 376);
  v9 = *(_QWORD *)(a1 + 368);
  v10 = *(int *)(a1 + 104);
  result = (v8 - v9) >> 3;
  if ( (_DWORD)v10 != (_DWORD)result )
  {
    if ( v10 > result )
    {
      result = std::vector<std::string>::_M_default_append(a1 + 368, v10 - result);
    }
    else if ( v10 < result )
    {
      v17 = v9 + 8 * v10;
      if ( v8 != v17 )
      {
        result = v9 + 8 * v10;
        v18 = &std::string::_Rep::_S_empty_rep_storage;
        v19 = &v31;
        if ( &_pthread_key_create )
        {
          do
          {
            if ( (void *)(*(_QWORD *)result - 24LL) != v18
              && _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)result - 8LL), 0xFFFFFFFF) <= 0 )
            {
              v29 = v18;
              v27 = result;
              v25 = v17;
              v23 = v19;
              std::string::_Rep::_M_destroy();
              v18 = v29;
              result = v27;
              v17 = v25;
              v19 = v23;
            }
            result += 8LL;
          }
          while ( v8 != result );
        }
        else
        {
          do
          {
            v20 = *(_QWORD *)result;
            if ( (void *)(*(_QWORD *)result - 24LL) != v18 )
            {
              v21 = *(_DWORD *)(v20 - 8);
              *(_DWORD *)(v20 - 8) = v21 - 1;
              if ( v21 <= 0 )
              {
                v30 = v18;
                v28 = result;
                v26 = v17;
                v24 = v19;
                std::string::_Rep::_M_destroy();
                v19 = v24;
                v17 = v26;
                result = v28;
                v18 = v30;
              }
            }
            result += 8LL;
          }
          while ( v8 != result );
        }
      }
      *(_QWORD *)(a1 + 376) = v17;
    }
  }
  if ( (int)v5 < a4 )
  {
    v12 = *(_QWORD *)(a1 + 368);
    v13 = (unsigned int)(a4 - 1 - v5);
    v14 = 8 * v5;
    v15 = 8 * v13 + 8;
    v16 = 0;
    v22 = v15;
    do
    {
      std::string::assign((std::string *)(v12 + v14 + v16), (const std::string *)(v16 + *a2));
      v12 = *(_QWORD *)(a1 + 368);
      result = strlen(*(const char **)(v12 + v16));
      if ( v7 < (unsigned int)result )
        v7 = result;
      v16 += 8;
    }
    while ( v22 != v16 );
  }
  *(_DWORD *)(a1 + 328) = v7;
  return result;
}

