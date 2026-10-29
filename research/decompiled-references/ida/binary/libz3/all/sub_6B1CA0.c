__int64 *__fastcall sub_6B1CA0(__int64 a1, __int64 **a2)
{
  __int64 **v2; // rcx
  __int64 v4; // r14
  __int64 *v5; // rbx
  unsigned int v6; // r15d
  size_t v7; // r14
  __int64 *v8; // rbp
  __int64 *v9; // r8
  int v10; // ecx
  __int64 v11; // r15
  __int64 *v12; // rdi
  __int64 *result; // rax
  __int64 *v14; // rsi
  __int64 v15; // rdx
  __int64 *v16; // rax
  int v17; // r8d
  __int64 *v18; // r12
  __int64 *v19; // r9
  __int64 v20; // rax
  __int64 *v21; // rdx
  __int64 *v22; // rax
  __int64 v23; // rdx
  int v24; // [rsp+8h] [rbp-50h]
  __int64 **v25; // [rsp+8h] [rbp-50h]
  int v26; // [rsp+10h] [rbp-48h]

  v2 = a2;
  v4 = *(unsigned int *)(a1 + 8);
  if ( 3 * (int)v4 < (unsigned int)(4 * (*(_DWORD *)(a1 + 12) + *(_DWORD *)(a1 + 16))) )
  {
    v24 = 2 * v4;
    v7 = 8LL * (unsigned int)(2 * v4);
    v16 = (__int64 *)sub_186B270(v7);
    v17 = v24;
    v2 = a2;
    v5 = v16;
    if ( v24 )
    {
      memset(v16, 0, v7);
      v2 = a2;
      v17 = v24;
    }
    v18 = *(__int64 **)a1;
    v6 = v17 - 1;
    v8 = &v5[v7 / 8];
    v19 = (__int64 *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8));
    if ( *(__int64 **)a1 != v19 )
    {
      do
      {
        while ( (unsigned __int64)*v18 <= 1 )
        {
          if ( v19 == ++v18 )
            goto LABEL_30;
        }
        v20 = 8LL * (*(_DWORD *)(*v18 + 12) & v6);
        v21 = &v5[(unsigned __int64)v20 / 8];
        if ( v7 == v20 )
        {
LABEL_34:
          if ( v5 == v21 )
          {
LABEL_42:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v22 = v5;
          while ( *v22 )
          {
            if ( v21 == ++v22 )
              goto LABEL_42;
          }
        }
        else
        {
          v22 = &v5[(unsigned __int64)v20 / 8];
          while ( *v22 )
          {
            if ( v8 == ++v22 )
              goto LABEL_34;
          }
        }
        v23 = *v18++;
        *v22 = v23;
      }
      while ( v19 != v18 );
LABEL_30:
      v19 = *(__int64 **)a1;
    }
    if ( v19 )
    {
      v26 = v17;
      v25 = v2;
      sub_186B220(v19);
      v17 = v26;
      v2 = v25;
    }
    *(_QWORD *)a1 = v5;
    *(_DWORD *)(a1 + 8) = v17;
    *(_DWORD *)(a1 + 16) = 0;
  }
  else
  {
    v5 = *(__int64 **)a1;
    v6 = v4 - 1;
    v7 = 8 * v4;
    v8 = (__int64 *)(*(_QWORD *)a1 + v7);
  }
  v9 = *v2;
  v10 = *((_DWORD *)*v2 + 3);
  v11 = v10 & v6;
  v12 = &v5[v11];
  if ( 8 * v11 != v7 )
  {
    result = &v5[v11];
    v14 = nullptr;
    while ( 1 )
    {
      v15 = *result;
      if ( (unsigned __int64)*result > 1 )
      {
        if ( *(_DWORD *)(v15 + 12) == v10 && v9 == (__int64 *)v15 )
        {
          *result = (__int64)v9;
          return result;
        }
      }
      else
      {
        if ( !v15 )
        {
          if ( v14 )
            goto LABEL_40;
          v14 = result;
          goto LABEL_41;
        }
        v14 = result;
      }
      if ( ++result == v8 )
        goto LABEL_14;
    }
  }
  v14 = nullptr;
  while ( 1 )
  {
LABEL_14:
    if ( v12 == v5 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = (__int64 *)*v5;
    if ( (unsigned __int64)*v5 <= 1 )
      break;
    if ( *((_DWORD *)result + 3) == v10 && result == v9 )
    {
      *v5 = (__int64)v9;
      return result;
    }
LABEL_13:
    ++v5;
  }
  if ( result )
  {
    v14 = v5;
    goto LABEL_13;
  }
  if ( v14 )
LABEL_40:
    --*(_DWORD *)(a1 + 16);
  else
    v14 = v5;
LABEL_41:
  *v14 = (__int64)v9;
  ++*(_DWORD *)(a1 + 12);
  return result;
}

