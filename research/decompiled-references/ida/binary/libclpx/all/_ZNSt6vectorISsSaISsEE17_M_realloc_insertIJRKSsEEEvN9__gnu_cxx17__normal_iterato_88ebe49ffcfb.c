void __fastcall std::vector<std::string>::_M_realloc_insert<std::string const&>(
        __int64 *a1,
        char *a2,
        const std::string *a3)
{
  char *v6; // r14
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r13
  __int64 v9; // rbp
  std::string *v10; // r14
  char *v11; // rsi
  char *v12; // rcx
  __int64 v13; // rdx
  char *v14; // rax
  __int64 v15; // rdi
  char *v16; // r15
  __int64 v17; // r8
  __int64 v18; // rdx
  char *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  char *v22; // rsi
  __int64 v23; // rax
  int v24; // edx
  char *v25; // [rsp+0h] [rbp-58h]
  __int64 v26; // [rsp+0h] [rbp-58h]
  char *v27; // [rsp+0h] [rbp-58h]
  __int64 v28; // [rsp+8h] [rbp-50h]
  __int64 v29; // [rsp+8h] [rbp-50h]

  v6 = &a2[-*a1];
  v7 = (a1[1] - *a1) >> 3;
  if ( !v7 )
  {
    v8 = 1;
LABEL_21:
    v8 *= 8LL;
    goto LABEL_4;
  }
  v8 = 2 * v7;
  if ( v7 <= 2 * v7 && v8 <= 0x1FFFFFFFFFFFFFFFLL )
  {
    if ( !v8 )
    {
      v9 = 0;
      goto LABEL_5;
    }
    goto LABEL_21;
  }
  v8 = -8;
LABEL_4:
  v9 = operator new(v8);
LABEL_5:
  v10 = (std::string *)&v6[v9];
  if ( v10 )
    std::string::string(v10, a3);
  v11 = (char *)*a1;
  v12 = (char *)a1[1];
  v13 = v9;
  v14 = (char *)*a1;
  if ( (char *)*a1 != a2 )
  {
    while ( 1 )
    {
      if ( !v13 )
      {
        v14 += 8;
        if ( a2 == v14 )
        {
LABEL_10:
          v16 = v11 + 8;
          v17 = v9 + a2 - (v11 + 8) + 16;
          if ( a2 == v12 )
            goto LABEL_16;
          goto LABEL_11;
        }
        v13 = 8;
      }
      v15 = *(_QWORD *)v14;
      v14 += 8;
      v13 += 8;
      *(_QWORD *)(v13 - 8) = v15;
      *((_QWORD *)v14 - 1) = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
      if ( a2 == v14 )
        goto LABEL_10;
    }
  }
  v17 = v9 + 8;
  if ( a2 == v12 )
    goto LABEL_25;
LABEL_11:
  v18 = v17;
  v19 = a2;
  while ( v18 )
  {
LABEL_13:
    v20 = *(_QWORD *)v19;
    v19 += 8;
    v18 += 8;
    *(_QWORD *)(v18 - 8) = v20;
    *((_QWORD *)v19 - 1) = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
    if ( v19 == v12 )
      goto LABEL_14;
  }
  v19 += 8;
  if ( v19 != v12 )
  {
    v18 = 8;
    goto LABEL_13;
  }
LABEL_14:
  v17 += 8 * ((unsigned __int64)(v12 - (a2 + 8)) >> 3) + 8;
  if ( v11 != v12 )
  {
    v16 = v11 + 8;
LABEL_16:
    if ( &_pthread_key_create )
    {
      v21 = *(_QWORD *)v11;
      if ( (_UNKNOWN *)(*(_QWORD *)v11 - 24LL) == &std::string::_Rep::_S_empty_rep_storage )
        goto LABEL_23;
LABEL_18:
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v21 - 8), 0xFFFFFFFF) <= 0 )
      {
        v28 = v17;
        v25 = v12;
        std::string::_Rep::_M_destroy();
        v17 = v28;
        v12 = v25;
      }
LABEL_23:
      while ( 1 )
      {
        v22 = v16;
        if ( v16 == v12 )
          break;
        v21 = *(_QWORD *)v16;
        v16 += 8;
        if ( (_UNKNOWN *)(*(_QWORD *)v22 - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
          goto LABEL_18;
      }
    }
    else
    {
      while ( 1 )
      {
        v23 = *(_QWORD *)v11;
        if ( (_UNKNOWN *)(*(_QWORD *)v11 - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
        {
          v24 = *(_DWORD *)(v23 - 8);
          *(_DWORD *)(v23 - 8) = v24 - 1;
          if ( v24 <= 0 )
          {
            v29 = v17;
            v27 = v12;
            std::string::_Rep::_M_destroy();
            v12 = v27;
            v17 = v29;
          }
        }
        v11 = v16;
        if ( v16 == v12 )
          break;
        v16 += 8;
      }
    }
    v12 = (char *)*a1;
  }
LABEL_25:
  if ( v12 )
  {
    v26 = v17;
    operator delete(v12);
    v17 = v26;
  }
  *a1 = v9;
  a1[1] = v17;
  a1[2] = v8 + v9;
}

