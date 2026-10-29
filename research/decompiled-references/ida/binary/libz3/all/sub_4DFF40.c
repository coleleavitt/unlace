__int64 __fastcall sub_4DFF40(__int64 a1, _QWORD *a2, double a3)
{
  void *v3; // rax
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // r15
  __int64 v7; // r12
  _QWORD *v8; // rbx
  unsigned int v9; // r8d
  size_t v10; // r15
  _QWORD *v11; // rbp
  int v12; // ecx
  __int64 v13; // r8
  _QWORD *v14; // rdi
  _QWORD *v15; // rax
  _QWORD *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rax
  _QWORD *v20; // rax
  int v21; // ecx
  char *v22; // r14
  char *v23; // r9
  __int64 v24; // rax
  _QWORD *v25; // rdx
  _QWORD *v26; // rax
  __int64 v27; // rdx
  int v28; // [rsp+0h] [rbp-48h]
  unsigned int v29; // [rsp+0h] [rbp-48h]
  int v30; // [rsp+8h] [rbp-40h]

  sub_4DC9E0(a1, a2, a3);
  v3 = sub_4DA320(a2);
  v4 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v3 + 192LL))(v3);
  v5 = *(_QWORD *)(a1 + 72);
  v6 = *(unsigned int *)(v4 + 152);
  v7 = v4;
  if ( 3 * (int)v6 < (unsigned int)(4 * (*(_DWORD *)(v4 + 156) + *(_DWORD *)(v4 + 160))) )
  {
    v28 = 2 * v6;
    v10 = 8LL * (unsigned int)(2 * v6);
    v20 = (_QWORD *)sub_186B270(v10);
    v21 = v28;
    v8 = v20;
    if ( v28 )
    {
      memset(v20, 0, v10);
      v21 = v28;
    }
    v22 = *(char **)(v7 + 144);
    v9 = v21 - 1;
    v11 = &v8[v10 / 8];
    v23 = &v22[8 * *(unsigned int *)(v7 + 152)];
    if ( v22 != v23 )
    {
      do
      {
        while ( *(_QWORD *)v22 <= 1u )
        {
          v22 += 8;
          if ( v23 == v22 )
            goto LABEL_31;
        }
        v24 = 8LL * (*(_DWORD *)(*(_QWORD *)v22 + 12LL) & v9);
        v25 = &v8[(unsigned __int64)v24 / 8];
        if ( v10 == v24 )
        {
LABEL_35:
          if ( v8 == v25 )
          {
LABEL_43:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v26 = v8;
          while ( *v26 )
          {
            if ( v25 == ++v26 )
              goto LABEL_43;
          }
        }
        else
        {
          v26 = &v8[(unsigned __int64)v24 / 8];
          while ( *v26 )
          {
            if ( v11 == ++v26 )
              goto LABEL_35;
          }
        }
        v27 = *(_QWORD *)v22;
        v22 += 8;
        *v26 = v27;
      }
      while ( v23 != v22 );
LABEL_31:
      v23 = *(char **)(v7 + 144);
    }
    if ( v23 )
    {
      v30 = v21;
      v29 = v21 - 1;
      sub_186B220(v23);
      v21 = v30;
      v9 = v29;
    }
    *(_QWORD *)(v7 + 144) = v8;
    *(_DWORD *)(v7 + 152) = v21;
    *(_DWORD *)(v7 + 160) = 0;
  }
  else
  {
    v8 = *(_QWORD **)(v4 + 144);
    v9 = v6 - 1;
    v10 = 8 * v6;
    v11 = &v8[v10 / 8];
  }
  v12 = *(_DWORD *)(v5 + 12);
  v13 = v12 & v9;
  v14 = &v8[v13];
  if ( 8 * v13 != v10 )
  {
    v15 = &v8[v13];
    v16 = nullptr;
    while ( 1 )
    {
      v17 = *v15;
      if ( *v15 > 1u )
      {
        if ( *(_DWORD *)(v17 + 12) == v12 && v5 == v17 )
        {
          *v15 = v5;
          return 1;
        }
      }
      else
      {
        if ( !v17 )
        {
          if ( v16 )
            goto LABEL_41;
          v16 = v15;
          goto LABEL_42;
        }
        v16 = v15;
      }
      if ( ++v15 == v11 )
        goto LABEL_14;
    }
  }
  v16 = nullptr;
  while ( 1 )
  {
LABEL_14:
    if ( v14 == v8 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v18 = *v8;
    if ( *v8 <= 1u )
      break;
    if ( *(_DWORD *)(v18 + 12) == v12 && v5 == v18 )
    {
      *v8 = v5;
      return 1;
    }
LABEL_13:
    ++v8;
  }
  if ( v18 )
  {
    v16 = v8;
    goto LABEL_13;
  }
  if ( v16 )
LABEL_41:
    --*(_DWORD *)(v7 + 160);
  else
    v16 = v8;
LABEL_42:
  *v16 = v5;
  ++*(_DWORD *)(v7 + 156);
  return 1;
}

