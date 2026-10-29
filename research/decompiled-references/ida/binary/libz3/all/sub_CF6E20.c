_QWORD *__fastcall sub_CF6E20(__int64 a1, __int64 a2)
{
  __int64 v4; // r15
  _QWORD *v5; // rbx
  unsigned int v6; // r8d
  size_t v7; // r15
  _QWORD *v8; // rbp
  int v9; // ecx
  __int64 v10; // r8
  _QWORD *v11; // rdi
  _QWORD *result; // rax
  _QWORD *v13; // rsi
  __int64 v14; // rdx
  _QWORD *v15; // rax
  int v16; // ecx
  char *v17; // r14
  char *v18; // r9
  __int64 v19; // rax
  _QWORD *v20; // rdx
  _QWORD *v21; // rax
  __int64 v22; // rdx
  int v23; // [rsp+0h] [rbp-48h]
  unsigned int v24; // [rsp+0h] [rbp-48h]
  int v25; // [rsp+8h] [rbp-40h]

  v4 = *(unsigned int *)(a1 + 64);
  if ( 3 * (int)v4 < (unsigned int)(4 * (*(_DWORD *)(a1 + 68) + *(_DWORD *)(a1 + 72))) )
  {
    v23 = 2 * v4;
    v7 = 8LL * (unsigned int)(2 * v4);
    v15 = (_QWORD *)sub_186B270(v7);
    v16 = v23;
    v5 = v15;
    if ( v23 )
    {
      memset(v15, 0, v7);
      v16 = v23;
    }
    v17 = *(char **)(a1 + 56);
    v6 = v16 - 1;
    v8 = &v5[v7 / 8];
    v18 = &v17[8 * *(unsigned int *)(a1 + 64)];
    if ( v17 != v18 )
    {
      do
      {
        while ( *(_QWORD *)v17 <= 1u )
        {
          v17 += 8;
          if ( v18 == v17 )
            goto LABEL_30;
        }
        v19 = 8LL * (*(_DWORD *)(*(_QWORD *)v17 + 12LL) & v6);
        v20 = &v5[(unsigned __int64)v19 / 8];
        if ( v7 == v19 )
        {
LABEL_34:
          if ( v5 == v20 )
          {
LABEL_42:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v21 = v5;
          while ( *v21 )
          {
            if ( v20 == ++v21 )
              goto LABEL_42;
          }
        }
        else
        {
          v21 = &v5[(unsigned __int64)v19 / 8];
          while ( *v21 )
          {
            if ( v8 == ++v21 )
              goto LABEL_34;
          }
        }
        v22 = *(_QWORD *)v17;
        v17 += 8;
        *v21 = v22;
      }
      while ( v18 != v17 );
LABEL_30:
      v18 = *(char **)(a1 + 56);
    }
    if ( v18 )
    {
      v25 = v16;
      v24 = v16 - 1;
      sub_186B220(v18);
      v16 = v25;
      v6 = v24;
    }
    *(_QWORD *)(a1 + 56) = v5;
    *(_DWORD *)(a1 + 64) = v16;
    *(_DWORD *)(a1 + 72) = 0;
  }
  else
  {
    v5 = *(_QWORD **)(a1 + 56);
    v6 = v4 - 1;
    v7 = 8 * v4;
    v8 = &v5[v7 / 8];
  }
  v9 = *(_DWORD *)(a2 + 12);
  v10 = v9 & v6;
  v11 = &v5[v10];
  if ( 8 * v10 != v7 )
  {
    result = &v5[v10];
    v13 = nullptr;
    while ( 1 )
    {
      v14 = *result;
      if ( *result > 1u )
      {
        if ( *(_DWORD *)(v14 + 12) == v9 && a2 == v14 )
        {
          *result = a2;
          return result;
        }
      }
      else
      {
        if ( !v14 )
        {
          if ( v13 )
            goto LABEL_40;
          v13 = result;
          goto LABEL_41;
        }
        v13 = result;
      }
      if ( ++result == v8 )
        goto LABEL_14;
    }
  }
  v13 = nullptr;
  while ( 1 )
  {
LABEL_14:
    if ( v11 == v5 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = (_QWORD *)*v5;
    if ( *v5 <= 1u )
      break;
    if ( *((_DWORD *)result + 3) == v9 && (_QWORD *)a2 == result )
    {
      *v5 = a2;
      return result;
    }
LABEL_13:
    ++v5;
  }
  if ( result )
  {
    v13 = v5;
    goto LABEL_13;
  }
  if ( v13 )
LABEL_40:
    --*(_DWORD *)(a1 + 72);
  else
    v13 = v5;
LABEL_41:
  *v13 = a2;
  ++*(_DWORD *)(a1 + 68);
  return result;
}

