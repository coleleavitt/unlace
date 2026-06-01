_QWORD *__fastcall sub_C04AD0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r15
  _QWORD *v6; // rbx
  unsigned int v7; // r8d
  size_t v8; // r15
  _QWORD *v9; // rbp
  int v10; // ecx
  __int64 v11; // r8
  _QWORD *v12; // rdi
  _QWORD *result; // rax
  _QWORD *v14; // rsi
  __int64 v15; // rdx
  _QWORD *v16; // rax
  int v17; // ecx
  char *v18; // r14
  char *v19; // r9
  __int64 v20; // rax
  _QWORD *v21; // rdx
  _QWORD *v22; // rax
  __int64 v23; // rdx
  int v24; // [rsp+0h] [rbp-48h]
  unsigned int v25; // [rsp+0h] [rbp-48h]
  int v26; // [rsp+8h] [rbp-40h]

  sub_135F980(a1, a2, a3);
  v5 = *(unsigned int *)(a1 + 128);
  if ( 3 * (int)v5 < (unsigned int)(4 * (*(_DWORD *)(a1 + 132) + *(_DWORD *)(a1 + 136))) )
  {
    v24 = 2 * v5;
    v8 = 8LL * (unsigned int)(2 * v5);
    v16 = (_QWORD *)sub_186B270(v8);
    v17 = v24;
    v6 = v16;
    if ( v24 )
    {
      memset(v16, 0, v8);
      v17 = v24;
    }
    v18 = *(char **)(a1 + 120);
    v7 = v17 - 1;
    v9 = &v6[v8 / 8];
    v19 = &v18[8 * *(unsigned int *)(a1 + 128)];
    if ( v18 != v19 )
    {
      do
      {
        while ( *(_QWORD *)v18 <= 1u )
        {
          v18 += 8;
          if ( v19 == v18 )
            goto LABEL_30;
        }
        v20 = 8LL * (*(_DWORD *)(*(_QWORD *)v18 + 12LL) & v7);
        v21 = &v6[(unsigned __int64)v20 / 8];
        if ( v8 == v20 )
        {
LABEL_34:
          if ( v6 == v21 )
          {
LABEL_42:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v22 = v6;
          while ( *v22 )
          {
            if ( v21 == ++v22 )
              goto LABEL_42;
          }
        }
        else
        {
          v22 = &v6[(unsigned __int64)v20 / 8];
          while ( *v22 )
          {
            if ( v9 == ++v22 )
              goto LABEL_34;
          }
        }
        v23 = *(_QWORD *)v18;
        v18 += 8;
        *v22 = v23;
      }
      while ( v19 != v18 );
LABEL_30:
      v19 = *(char **)(a1 + 120);
    }
    if ( v19 )
    {
      v26 = v17;
      v25 = v17 - 1;
      sub_186B220(v19);
      v17 = v26;
      v7 = v25;
    }
    *(_QWORD *)(a1 + 120) = v6;
    *(_DWORD *)(a1 + 128) = v17;
    *(_DWORD *)(a1 + 136) = 0;
  }
  else
  {
    v6 = *(_QWORD **)(a1 + 120);
    v7 = v5 - 1;
    v8 = 8 * v5;
    v9 = &v6[v8 / 8];
  }
  v10 = *(_DWORD *)(a2 + 12);
  v11 = v10 & v7;
  v12 = &v6[v11];
  if ( 8 * v11 != v8 )
  {
    result = &v6[v11];
    v14 = nullptr;
    while ( 1 )
    {
      v15 = *result;
      if ( *result > 1u )
      {
        if ( *(_DWORD *)(v15 + 12) == v10 && a2 == v15 )
        {
          *result = a2;
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
      if ( ++result == v9 )
        goto LABEL_14;
    }
  }
  v14 = nullptr;
  while ( 1 )
  {
LABEL_14:
    if ( v12 == v6 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = (_QWORD *)*v6;
    if ( *v6 <= 1u )
      break;
    if ( *((_DWORD *)result + 3) == v10 && (_QWORD *)a2 == result )
    {
      *v6 = a2;
      return result;
    }
LABEL_13:
    ++v6;
  }
  if ( result )
  {
    v14 = v6;
    goto LABEL_13;
  }
  if ( v14 )
LABEL_40:
    --*(_DWORD *)(a1 + 136);
  else
    v14 = v6;
LABEL_41:
  *v14 = a2;
  ++*(_DWORD *)(a1 + 132);
  return result;
}

