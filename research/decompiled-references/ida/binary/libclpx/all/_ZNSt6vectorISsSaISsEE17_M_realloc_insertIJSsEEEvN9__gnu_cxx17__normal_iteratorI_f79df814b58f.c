unsigned __int64 __fastcall std::vector<std::string>::_M_realloc_insert<std::string>(__int64 a1, char *a2, _QWORD *a3)
{
  char *v6; // r12
  char *v7; // rdi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r15
  unsigned __int64 result; // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  char *v16; // rdx
  __int64 v17; // rsi
  char *v18; // rbp
  __int64 v19; // rcx
  char *v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rdx
  char *v23; // rdi
  __int64 v24; // rdx
  int v25; // ecx
  signed __int64 v26; // [rsp+0h] [rbp-58h]
  __int64 v27; // [rsp+0h] [rbp-58h]
  __int64 v28; // [rsp+0h] [rbp-58h]
  __int64 v29; // [rsp+0h] [rbp-58h]
  unsigned __int64 v30; // [rsp+8h] [rbp-50h]
  unsigned __int64 v31; // [rsp+8h] [rbp-50h]
  unsigned __int64 v32; // [rsp+8h] [rbp-50h]

  v6 = *(char **)(a1 + 8);
  v7 = *(char **)a1;
  v26 = a2 - v7;
  v8 = (v6 - v7) >> 3;
  if ( v8 )
  {
    v9 = 2 * v8;
    v10 = -8;
    if ( v8 > 2 * v8 || v9 > 0x1FFFFFFFFFFFFFFFLL )
      goto LABEL_3;
    if ( !v9 )
    {
      v14 = 8;
      result = 0;
      v12 = 0;
      goto LABEL_4;
    }
  }
  else
  {
    v9 = 1;
  }
  v10 = 8 * v9;
LABEL_3:
  v11 = operator new(v10);
  v7 = *(char **)a1;
  v12 = v11;
  v6 = *(char **)(a1 + 8);
  result = v11 + v10;
  v14 = v12 + 8;
LABEL_4:
  if ( v12 + v26 )
  {
    *(_QWORD *)(v12 + v26) = *a3;
    *a3 = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  }
  if ( a2 != v7 )
  {
    v15 = v12;
    v16 = v7;
    while ( 1 )
    {
      if ( !v15 )
      {
        v16 += 8;
        if ( a2 == v16 )
        {
LABEL_10:
          v18 = v7 + 8;
          v14 = v12 + a2 - (v7 + 8) + 16;
          if ( a2 == v6 )
            goto LABEL_16;
          goto LABEL_11;
        }
        v15 = 8;
      }
      v17 = *(_QWORD *)v16;
      v16 += 8;
      v15 += 8;
      *(_QWORD *)(v15 - 8) = v17;
      *((_QWORD *)v16 - 1) = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
      if ( a2 == v16 )
        goto LABEL_10;
    }
  }
  if ( v6 == a2 )
    goto LABEL_23;
LABEL_11:
  v19 = v14;
  v20 = a2;
  while ( v19 )
  {
LABEL_13:
    v21 = *(_QWORD *)v20;
    v20 += 8;
    v19 += 8;
    *(_QWORD *)(v19 - 8) = v21;
    *((_QWORD *)v20 - 1) = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
    if ( v6 == v20 )
      goto LABEL_14;
  }
  v20 += 8;
  if ( v20 != v6 )
  {
    v19 = 8;
    goto LABEL_13;
  }
LABEL_14:
  v14 += 8 * ((unsigned __int64)(v6 - (a2 + 8)) >> 3) + 8;
  if ( v6 != v7 )
  {
    v18 = v7 + 8;
LABEL_16:
    if ( &_pthread_key_create )
    {
      v22 = *(_QWORD *)v7;
      if ( (_UNKNOWN *)(*(_QWORD *)v7 - 24LL) == &std::string::_Rep::_S_empty_rep_storage )
        goto LABEL_21;
LABEL_18:
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v22 - 8), 0xFFFFFFFF) <= 0 )
      {
        v30 = result;
        v27 = v14;
        std::string::_Rep::_M_destroy();
        result = v30;
        v14 = v27;
      }
LABEL_21:
      while ( 1 )
      {
        v23 = v18;
        if ( v18 == v6 )
          break;
        v22 = *(_QWORD *)v18;
        v18 += 8;
        if ( (_UNKNOWN *)(*(_QWORD *)v23 - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
          goto LABEL_18;
      }
    }
    else
    {
      while ( 1 )
      {
        v24 = *(_QWORD *)v7;
        if ( (_UNKNOWN *)(*(_QWORD *)v7 - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
        {
          v25 = *(_DWORD *)(v24 - 8);
          *(_DWORD *)(v24 - 8) = v25 - 1;
          if ( v25 <= 0 )
          {
            v32 = result;
            v29 = v14;
            std::string::_Rep::_M_destroy();
            v14 = v29;
            result = v32;
          }
        }
        v7 = v18;
        if ( v6 == v18 )
          break;
        v18 += 8;
      }
    }
    v7 = *(char **)a1;
  }
LABEL_23:
  if ( v7 )
  {
    v31 = result;
    v28 = v14;
    operator delete(v7);
    result = v31;
    v14 = v28;
  }
  *(_QWORD *)a1 = v12;
  *(_QWORD *)(a1 + 8) = v14;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}

