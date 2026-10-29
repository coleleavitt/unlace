void __fastcall std::vector<std::string>::_M_default_append(__int64 a1, unsigned __int64 a2)
{
  char *v2; // rbp
  unsigned __int64 v3; // rdx
  __int64 v4; // rax
  char *v5; // rbx
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  bool v10; // cf
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r15
  __int64 v13; // rax
  unsigned __int64 v14; // r15
  __int64 v15; // rcx
  char *v16; // rdx
  __int64 v17; // rsi
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r13
  char *v22; // r8
  __int64 v23; // rdx
  int v24; // ecx
  __int64 v25; // [rsp+0h] [rbp-58h]
  char *v26; // [rsp+0h] [rbp-58h]
  char *v27; // [rsp+0h] [rbp-58h]
  __int64 v28; // [rsp+8h] [rbp-50h]
  __int64 v29; // [rsp+8h] [rbp-50h]
  char v30; // [rsp+1Fh] [rbp-39h] BYREF

  if ( !a2 )
    return;
  v2 = *(char **)(a1 + 8);
  if ( (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 3 >= a2 )
  {
    v3 = a2;
    v4 = *(_QWORD *)(a1 + 8);
    while ( 1 )
    {
      if ( !v4 )
      {
        if ( !--v3 )
        {
LABEL_6:
          *(_QWORD *)(a1 + 8) = &v2[8 * a2];
          return;
        }
        v4 = 8;
      }
      v4 += 8;
      *(_QWORD *)(v4 - 8) = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
      if ( !--v3 )
        goto LABEL_6;
    }
  }
  v5 = *(char **)a1;
  v8 = (__int64)&v2[-*(_QWORD *)a1] >> 3;
  if ( a2 > 0x1FFFFFFFFFFFFFFFLL - v8 )
    std::__throw_length_error("vector::_M_default_append");
  v9 = (__int64)&v2[-*(_QWORD *)a1] >> 3;
  if ( a2 >= v8 )
    v9 = a2;
  v10 = __CFADD__(v9, v8);
  v11 = v9 + v8;
  if ( v10 || v11 > 0x1FFFFFFFFFFFFFFFLL )
  {
    v12 = -8;
  }
  else
  {
    if ( !v11 )
    {
      v14 = 0;
      v13 = 0;
      goto LABEL_18;
    }
    v12 = 8 * v11;
  }
  v13 = operator new(v12);
  v2 = *(char **)(a1 + 8);
  v5 = *(char **)a1;
  v14 = v13 + v12;
LABEL_18:
  if ( v5 != v2 )
  {
    v15 = v13;
    v16 = v5;
    while ( 1 )
    {
      if ( !v15 )
      {
        v16 += 8;
        if ( v16 == v2 )
        {
LABEL_22:
          v18 = v13 + 8 * ((unsigned __int64)(v2 - (v5 + 8)) >> 3) + 8;
          goto LABEL_23;
        }
        v15 = 8;
      }
      v17 = *(_QWORD *)v16;
      v16 += 8;
      v15 += 8;
      *(_QWORD *)(v15 - 8) = v17;
      *((_QWORD *)v16 - 1) = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
      if ( v2 == v16 )
        goto LABEL_22;
    }
  }
  v18 = v13;
LABEL_23:
  v19 = v18;
  v20 = a2;
  while ( v19 )
  {
LABEL_25:
    v19 += 8LL;
    *(_QWORD *)(v19 - 8) = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
    if ( !--v20 )
      goto LABEL_26;
  }
  if ( --v20 )
  {
    v19 = 8;
    goto LABEL_25;
  }
LABEL_26:
  v21 = v18 + 8 * a2;
  if ( v5 != v2 )
  {
    v22 = &v30;
    if ( &_pthread_key_create )
    {
      do
      {
        if ( (_UNKNOWN *)(*(_QWORD *)v5 - 24LL) != &std::string::_Rep::_S_empty_rep_storage
          && _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)v5 - 8LL), 0xFFFFFFFF) <= 0 )
        {
          v28 = v13;
          v26 = v22;
          std::string::_Rep::_M_destroy();
          v13 = v28;
          v22 = v26;
        }
        v5 += 8;
      }
      while ( v5 != v2 );
    }
    else
    {
      do
      {
        v23 = *(_QWORD *)v5;
        if ( (_UNKNOWN *)(*(_QWORD *)v5 - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
        {
          v24 = *(_DWORD *)(v23 - 8);
          *(_DWORD *)(v23 - 8) = v24 - 1;
          if ( v24 <= 0 )
          {
            v29 = v13;
            v27 = v22;
            std::string::_Rep::_M_destroy();
            v22 = v27;
            v13 = v29;
          }
        }
        v5 += 8;
      }
      while ( v5 != v2 );
    }
    v2 = *(char **)a1;
  }
  if ( v2 )
  {
    v25 = v13;
    operator delete(v2);
    v13 = v25;
  }
  *(_QWORD *)a1 = v13;
  *(_QWORD *)(a1 + 8) = v21;
  *(_QWORD *)(a1 + 16) = v14;
}

