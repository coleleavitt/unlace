__int64 __fastcall CoinParam::kwdIndex(__int64 a1, std::string *a2)
{
  __int64 v2; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rsi
  _QWORD *v6; // rax
  __int64 v7; // r15
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned int v10; // ebp
  unsigned __int64 v11; // rbx
  int v12; // r14d
  __int64 result; // rax
  int v14; // ecx
  int v15; // eax
  int v16; // edx
  int v17; // edx
  int v18; // edx
  __int64 v19; // [rsp+8h] [rbp-B0h]
  unsigned __int64 v20; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v21; // [rsp+18h] [rbp-A0h]
  __int64 v22; // [rsp+20h] [rbp-98h]
  __int64 v23; // [rsp+60h] [rbp-58h] BYREF
  char *v24; // [rsp+68h] [rbp-50h] BYREF
  __int64 v25; // [rsp+70h] [rbp-48h] BYREF
  _QWORD v26[8]; // [rsp+78h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a1 + 88);
  v22 = (*(_QWORD *)(a1 + 96) - v2) >> 3;
  if ( !v22 )
    return 0xFFFFFFFFLL;
  v19 = 0;
  v20 = *(_QWORD *)(*(_QWORD *)a2 - 24LL);
  while ( 1 )
  {
    std::string::string((std::string *)&v23, (const std::string *)(v2 + 8 * v19));
    v8 = std::string::find((std::string *)&v23, 33, 0);
    v7 = v23;
    v21 = v8;
    v9 = *(_QWORD *)(v23 - 24);
    if ( v8 == -1 )
    {
      v21 = *(_QWORD *)(v23 - 24);
      if ( v9 < v20 )
        goto LABEL_11;
    }
    else
    {
      if ( v8 + 1 > v9 )
        std::__throw_out_of_range_fmt("%s: __pos (which is %zu) > this->size() (which is %zu)");
      std::string::string((std::string *)&v25, (const std::string *)&v23, v8 + 1, 0xFFFFFFFFFFFFFFFFLL);
      std::string::string((std::string *)&v24, (const std::string *)&v23, 0, v21);
      v4 = *((_QWORD *)v24 - 3);
      v5 = v4 + *(_QWORD *)(v25 - 24);
      if ( v5 > *((_QWORD *)v24 - 2) && v5 <= *(_QWORD *)(v25 - 16) )
        v6 = (_QWORD *)std::string::insert((std::string *)&v25, 0, v24, v4);
      else
        v6 = (_QWORD *)std::string::append((std::string *)&v24, (const std::string *)&v25);
      v26[0] = *v6;
      *v6 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
      std::string::swap((std::string *)&v23, (std::string *)v26);
      if ( (_UNKNOWN *)(v26[0] - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
      {
        if ( &_pthread_key_create )
        {
          v18 = _InterlockedExchangeAdd((volatile signed __int32 *)(v26[0] - 8LL), 0xFFFFFFFF);
        }
        else
        {
          v18 = *(_DWORD *)(v26[0] - 8LL);
          *(_DWORD *)(v26[0] - 8LL) = v18 - 1;
        }
        if ( v18 <= 0 )
          std::string::_Rep::_M_destroy();
      }
      if ( v24 - 24 != (char *)&std::string::_Rep::_S_empty_rep_storage )
      {
        if ( &_pthread_key_create )
        {
          v17 = _InterlockedExchangeAdd((volatile signed __int32 *)v24 - 2, 0xFFFFFFFF);
        }
        else
        {
          v17 = *((_DWORD *)v24 - 2);
          *((_DWORD *)v24 - 2) = v17 - 1;
        }
        if ( v17 <= 0 )
          std::string::_Rep::_M_destroy();
      }
      if ( (_UNKNOWN *)(v25 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      {
        if ( &_pthread_key_create )
        {
          v16 = _InterlockedExchangeAdd((volatile signed __int32 *)(v25 - 8), 0xFFFFFFFF);
        }
        else
        {
          v16 = *(_DWORD *)(v25 - 8);
          *(_DWORD *)(v25 - 8) = v16 - 1;
        }
        if ( v16 <= 0 )
          std::string::_Rep::_M_destroy();
      }
      v7 = v23;
      if ( *(_QWORD *)(v23 - 24) < v20 )
        goto LABEL_11;
    }
    if ( v20 )
      break;
    if ( !v21 )
      goto LABEL_26;
LABEL_11:
    if ( (_UNKNOWN *)(v7 - 24) != &std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v15 = _InterlockedExchangeAdd((volatile signed __int32 *)(v7 - 8), 0xFFFFFFFF);
      }
      else
      {
        v15 = *(_DWORD *)(v7 - 8);
        *(_DWORD *)(v7 - 8) = v15 - 1;
      }
      if ( v15 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    if ( ++v19 == v22 )
      return 0xFFFFFFFFLL;
    v2 = *(_QWORD *)(a1 + 88);
  }
  v10 = 0;
  v11 = 0;
  while ( 1 )
  {
    if ( *(int *)(v7 - 8) >= 0 )
    {
      std::string::_M_leak_hard((std::string *)&v23);
      v7 = v23;
    }
    v12 = tolower(*(char *)(v7 + v11));
    if ( *(int *)(*(_QWORD *)a2 - 8LL) >= 0 )
    {
      std::string::_M_leak_hard(a2);
      v7 = v23;
    }
    if ( v12 != tolower(*(char *)(*(_QWORD *)a2 + v11)) )
      break;
    v11 = ++v10;
    if ( v10 >= v20 )
      goto LABEL_25;
  }
  if ( v20 > v11 )
    goto LABEL_11;
LABEL_25:
  if ( v21 > v11 )
    goto LABEL_11;
LABEL_26:
  result = (unsigned int)v19;
  if ( (_UNKNOWN *)(v7 - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v14 = _InterlockedExchangeAdd((volatile signed __int32 *)(v7 - 8), 0xFFFFFFFF);
    }
    else
    {
      v14 = *(_DWORD *)(v7 - 8);
      *(_DWORD *)(v7 - 8) = v14 - 1;
    }
    if ( v14 <= 0 )
    {
      std::string::_Rep::_M_destroy();
      return (unsigned int)v19;
    }
  }
  return result;
}

