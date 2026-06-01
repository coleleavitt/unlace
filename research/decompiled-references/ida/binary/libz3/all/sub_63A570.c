_QWORD *__fastcall sub_63A570(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // r13
  _QWORD *v7; // rbx
  unsigned int v8; // r8d
  size_t v9; // r15
  _QWORD *v10; // rbp
  int v11; // ecx
  __int64 v12; // r8
  _QWORD *v13; // rdi
  _QWORD *result; // rax
  _QWORD *v15; // rsi
  __int64 v16; // rdx
  _QWORD *v17; // rax
  int v18; // ecx
  char *v19; // r14
  char *v20; // r9
  __int64 v21; // rax
  _QWORD *v22; // rdx
  _QWORD *v23; // rax
  __int64 v24; // rdx
  int v25; // [rsp+0h] [rbp-48h]
  unsigned int v26; // [rsp+0h] [rbp-48h]
  int v27; // [rsp+8h] [rbp-40h]

  v4 = sub_639820(a1, a2);
  v5 = *(unsigned int *)(v4 + 8);
  v6 = v4;
  if ( 3 * (int)v5 < (unsigned int)(4 * (*(_DWORD *)(v4 + 12) + *(_DWORD *)(v4 + 16))) )
  {
    v25 = 2 * v5;
    v9 = 8LL * (unsigned int)(2 * v5);
    v17 = (_QWORD *)sub_186B270(v9);
    v18 = v25;
    v7 = v17;
    if ( v25 )
    {
      memset(v17, 0, v9);
      v18 = v25;
    }
    v19 = *(char **)v6;
    v8 = v18 - 1;
    v10 = &v7[v9 / 8];
    v20 = (char *)(*(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 8));
    if ( *(char **)v6 != v20 )
    {
      do
      {
        while ( *(_QWORD *)v19 <= 1u )
        {
          v19 += 8;
          if ( v20 == v19 )
            goto LABEL_30;
        }
        v21 = 8LL * (*(_DWORD *)(*(_QWORD *)v19 + 12LL) & v8);
        v22 = &v7[(unsigned __int64)v21 / 8];
        if ( v9 == v21 )
        {
LABEL_34:
          if ( v7 == v22 )
          {
LABEL_42:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v23 = v7;
          while ( *v23 )
          {
            if ( v22 == ++v23 )
              goto LABEL_42;
          }
        }
        else
        {
          v23 = &v7[(unsigned __int64)v21 / 8];
          while ( *v23 )
          {
            if ( v10 == ++v23 )
              goto LABEL_34;
          }
        }
        v24 = *(_QWORD *)v19;
        v19 += 8;
        *v23 = v24;
      }
      while ( v20 != v19 );
LABEL_30:
      v20 = *(char **)v6;
    }
    if ( v20 )
    {
      v27 = v18;
      v26 = v18 - 1;
      sub_186B220(v20);
      v18 = v27;
      v8 = v26;
    }
    *(_QWORD *)v6 = v7;
    *(_DWORD *)(v6 + 8) = v18;
    *(_DWORD *)(v6 + 16) = 0;
  }
  else
  {
    v7 = *(_QWORD **)v4;
    v8 = v5 - 1;
    v9 = 8 * v5;
    v10 = (_QWORD *)(*(_QWORD *)v4 + v9);
  }
  v11 = *(_DWORD *)(a3 + 12);
  v12 = v11 & v8;
  v13 = &v7[v12];
  if ( 8 * v12 != v9 )
  {
    result = &v7[v12];
    v15 = nullptr;
    while ( 1 )
    {
      v16 = *result;
      if ( *result > 1u )
      {
        if ( *(_DWORD *)(v16 + 12) == v11 && a3 == v16 )
        {
          *result = a3;
          return result;
        }
      }
      else
      {
        if ( !v16 )
        {
          if ( v15 )
            goto LABEL_40;
          v15 = result;
          goto LABEL_41;
        }
        v15 = result;
      }
      if ( ++result == v10 )
        goto LABEL_14;
    }
  }
  v15 = nullptr;
  while ( 1 )
  {
LABEL_14:
    if ( v13 == v7 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = (_QWORD *)*v7;
    if ( *v7 <= 1u )
      break;
    if ( *((_DWORD *)result + 3) == v11 && (_QWORD *)a3 == result )
    {
      *v7 = a3;
      return result;
    }
LABEL_13:
    ++v7;
  }
  if ( result )
  {
    v15 = v7;
    goto LABEL_13;
  }
  if ( v15 )
LABEL_40:
    --*(_DWORD *)(v6 + 16);
  else
    v15 = v7;
LABEL_41:
  *v15 = a3;
  ++*(_DWORD *)(v6 + 12);
  return result;
}

