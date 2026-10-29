void __fastcall std::vector<std::string>::emplace_back<std::string>(__int64 *a1, _QWORD *a2)
{
  char *v2; // rbx
  __int64 v3; // rbp
  char *v4; // r14
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r15
  __int64 v8; // rax
  _QWORD *v9; // rbp
  char *v10; // rsi
  _QWORD *v11; // rdi
  __int64 v12; // rcx
  char *v13; // rdx
  __int64 v14; // r8
  char *v15; // r12
  __int64 v16; // r9
  __int64 v17; // rcx
  char *v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  int v21; // ecx
  __int64 v22; // [rsp+0h] [rbp-58h]
  __int64 v23; // [rsp+0h] [rbp-58h]
  __int64 v24; // [rsp+0h] [rbp-58h]
  __int64 v25; // [rsp+8h] [rbp-50h]
  __int64 v26; // [rsp+8h] [rbp-50h]
  __int64 v27; // [rsp+8h] [rbp-50h]

  v2 = (char *)a1[1];
  if ( v2 != (char *)a1[2] )
  {
    if ( v2 )
    {
      *(_QWORD *)v2 = *a2;
      *a2 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
    }
    a1[1] = (__int64)(v2 + 8);
    return;
  }
  v3 = (__int64)&v2[-*a1];
  v4 = (char *)a1[1];
  v6 = v3 >> 3;
  if ( v3 >> 3 )
  {
    v7 = 2 * v6;
    if ( v6 > 2 * v6 || v7 > 0x1FFFFFFFFFFFFFFFLL )
    {
      v7 = -8;
    }
    else
    {
      v8 = 0;
      if ( !v7 )
        goto LABEL_9;
      v7 = 16 * v6;
    }
  }
  else
  {
    v7 = 8;
  }
  v8 = operator new(v7);
  v2 = (char *)a1[1];
LABEL_9:
  v9 = (_QWORD *)(v8 + v3);
  if ( v9 )
  {
    *v9 = *a2;
    *a2 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  }
  v10 = (char *)*a1;
  v11 = v2;
  if ( v4 != (char *)*a1 )
  {
    v12 = v8;
    v13 = (char *)*a1;
    while ( 1 )
    {
      if ( !v12 )
      {
        v13 += 8;
        if ( v4 == v13 )
        {
LABEL_15:
          v15 = v10 + 8;
          v16 = v8 + v4 - (v10 + 8) + 16;
          if ( v4 == v2 )
            goto LABEL_21;
          goto LABEL_16;
        }
        v12 = 8;
      }
      v14 = *(_QWORD *)v13;
      v13 += 8;
      v12 += 8;
      *(_QWORD *)(v12 - 8) = v14;
      *((_QWORD *)v13 - 1) = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
      if ( v4 == v13 )
        goto LABEL_15;
    }
  }
  v16 = v8 + 8;
  if ( v4 == v2 )
    goto LABEL_27;
LABEL_16:
  v17 = v16;
  v18 = v4;
  while ( v17 )
  {
LABEL_18:
    v19 = *(_QWORD *)v18;
    v18 += 8;
    v17 += 8;
    *(_QWORD *)(v17 - 8) = v19;
    *((_QWORD *)v18 - 1) = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
    if ( v18 == v2 )
      goto LABEL_19;
  }
  v18 += 8;
  if ( v18 != v2 )
  {
    v17 = 8;
    goto LABEL_18;
  }
LABEL_19:
  v16 += 8 * ((unsigned __int64)(v2 - (v4 + 8)) >> 3) + 8;
  if ( v10 != v2 )
  {
    v15 = v10 + 8;
LABEL_21:
    if ( &_pthread_key_create )
    {
      while ( 1 )
      {
        if ( (_UNKNOWN *)(*(_QWORD *)v10 - 24LL) != &std::string::_Rep::_S_empty_rep_storage
          && _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)v10 - 8LL), 0xFFFFFFFF) <= 0 )
        {
          v26 = v16;
          v23 = v8;
          std::string::_Rep::_M_destroy();
          v16 = v26;
          v8 = v23;
        }
        v10 = v15;
        if ( v15 == v2 )
          break;
        v15 += 8;
      }
    }
    else
    {
      while ( 1 )
      {
        v20 = *(_QWORD *)v10;
        if ( (_UNKNOWN *)(*(_QWORD *)v10 - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
        {
          v21 = *(_DWORD *)(v20 - 8);
          *(_DWORD *)(v20 - 8) = v21 - 1;
          if ( v21 <= 0 )
          {
            v27 = v16;
            v24 = v8;
            std::string::_Rep::_M_destroy();
            v8 = v24;
            v16 = v27;
          }
        }
        v10 = v15;
        if ( v15 == v2 )
          break;
        v15 += 8;
      }
    }
    v11 = (_QWORD *)*a1;
  }
LABEL_27:
  if ( v11 )
  {
    v25 = v16;
    v22 = v8;
    operator delete(v11);
    v16 = v25;
    v8 = v22;
  }
  *a1 = v8;
  a1[1] = v16;
  a1[2] = v7 + v8;
}

