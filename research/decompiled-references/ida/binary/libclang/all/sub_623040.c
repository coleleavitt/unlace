char *__fastcall sub_623040(__int64 a1, char *a2, __int64 *a3)
{
  _BYTE *v5; // r15
  char *v6; // r12
  char *v7; // rcx
  __int64 v8; // rdi
  signed __int64 v9; // rdx
  _QWORD *v10; // r14
  char *v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rax
  bool v15; // cf
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rdi
  signed __int64 v18; // r12
  __int64 v19; // rax
  size_t v20; // rcx
  char *v21; // r9
  __int64 v22; // rax
  char *v23; // r10
  char *v24; // r13
  char *v25; // rax
  char *v26; // [rsp+8h] [rbp-50h]
  __int64 v27; // [rsp+8h] [rbp-50h]
  signed __int64 n; // [rsp+10h] [rbp-48h]
  size_t nb; // [rsp+10h] [rbp-48h]
  char *na; // [rsp+10h] [rbp-48h]
  size_t nc; // [rsp+10h] [rbp-48h]
  char *v32; // [rsp+18h] [rbp-40h]

  v5 = *(_BYTE **)a1;
  v6 = *(char **)(a1 + 8);
  v7 = &a2[-*(_QWORD *)a1];
  if ( v6 == *(char **)(a1 + 16) )
  {
    v13 = (v6 - v5) >> 3;
    if ( v13 == 0xFFFFFFFFFFFFFFFLL )
      std::__throw_length_error("vector::_M_realloc_insert");
    v14 = 1;
    if ( v13 )
      v14 = (v6 - v5) >> 3;
    v15 = __CFADD__(v14, v13);
    v16 = v14 + v13;
    if ( v15 )
    {
      v27 = 0x7FFFFFFFFFFFFFF8LL;
      v17 = 0x7FFFFFFFFFFFFFF8LL;
    }
    else
    {
      if ( v16 > 0xFFFFFFFFFFFFFFFLL )
        v16 = 0xFFFFFFFFFFFFFFFLL;
      v27 = 8 * v16;
      v17 = 8 * v16;
    }
    n = (signed __int64)v7;
    v18 = v6 - a2;
    v19 = operator new(v17);
    v20 = n;
    v21 = (char *)v19;
    v10 = (_QWORD *)(v19 + n);
    v22 = *a3;
    v23 = &v21[n + 8];
    v24 = &v23[v18];
    *v10 = v22;
    if ( n > 0 )
    {
      na = &v21[n + 8];
      v25 = (char *)memcpy(v21, v5, v20);
      v21 = v25;
      if ( v18 > 0 )
      {
        v32 = v25;
        memcpy(na, a2, v18);
        v21 = v32;
      }
    }
    else
    {
      if ( v18 > 0 )
      {
        nb = (size_t)v21;
        memcpy(v23, a2, v18);
        v21 = (char *)nb;
      }
      if ( !v5 )
        goto LABEL_19;
    }
    nc = (size_t)v21;
    operator delete(v5, *(_QWORD *)(a1 + 16) - (_QWORD)v5);
    v21 = (char *)nc;
LABEL_19:
    *(_QWORD *)a1 = v21;
    *(_QWORD *)(a1 + 8) = v24;
    *(_QWORD *)(a1 + 16) = &v21[v27];
    return (char *)v10;
  }
  if ( v6 == a2 )
  {
    *(_QWORD *)v6 = *a3;
    v12 = &v7[*(_QWORD *)a1];
    *(_QWORD *)(a1 + 8) += 8LL;
    return v12;
  }
  else
  {
    *(_QWORD *)v6 = *((_QWORD *)v6 - 1);
    v8 = *(_QWORD *)(a1 + 8);
    v9 = v8 - 8 - (_QWORD)a2;
    *(_QWORD *)(a1 + 8) = v8 + 8;
    if ( v9 <= 8 )
    {
      if ( v9 == 8 )
        *(_QWORD *)(v8 - 8) = *(_QWORD *)a2;
    }
    else
    {
      v26 = v7;
      memmove(a2 + 8, a2, v9);
      v7 = v26;
    }
    *(_QWORD *)a2 = *a3;
    return &v7[*(_QWORD *)a1];
  }
}

