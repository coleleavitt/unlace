const char **__fastcall sub_8CA300(const char **a1, const char *a2, __int64 a3)
{
  unsigned __int64 v4; // r14
  __int64 v5; // r13
  __int64 v6; // rbp
  size_t v7; // rbx
  void *v8; // rax
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v13; // rbx
  void *v14; // rax
  size_t n; // [rsp+0h] [rbp-58h]
  __int64 v17; // [rsp+8h] [rbp-50h]
  const char *v18; // [rsp+18h] [rbp-40h]

  v18 = a2;
  if ( a1[2] < a2 )
  {
    a2 = *a1;
    *a1 = (const char *)qvector_reserve(a1, *a1, v18, 48);
  }
  v4 = (unsigned __int64)a1[1];
  if ( v4 >= (unsigned __int64)v18 )
    goto LABEL_15;
LABEL_7:
  while ( 2 )
  {
    v6 = (__int64)&(*a1)[48 * v4];
    *(_QWORD *)v6 = 0;
    *(_OWORD *)(v6 + 8) = 0;
    v7 = *(_QWORD *)(a3 + 8);
    if ( v7 )
    {
      v8 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 8), a2);
      *(_QWORD *)(v6 + 16) = v7;
      *(_QWORD *)v6 = v8;
      a2 = *(const char **)a3;
      memcpy(v8, *(const void **)a3, v7);
      *(_QWORD *)(v6 + 8) = v7;
    }
    *(_QWORD *)(v6 + 24) = 0;
    *(_OWORD *)(v6 + 32) = 0;
    v5 = *(_QWORD *)(a3 + 32);
    if ( v5 )
    {
      v9 = qalloc_or_throw(24 * v5, a2);
      *(_QWORD *)(v6 + 24) = v9;
      v10 = v9;
      v11 = 0;
      *(_QWORD *)(v6 + 40) = v5;
      while ( 1 )
      {
        v12 = 24 * v11 + v10;
        v13 = 24 * v11 + *(_QWORD *)(a3 + 24);
        *(_QWORD *)v12 = 0;
        *(_OWORD *)(v12 + 8) = 0;
        if ( *(_QWORD *)(v13 + 8) )
        {
          v17 = v11;
          n = *(_QWORD *)(v13 + 8);
          v14 = (void *)qalloc_or_throw(n, a2);
          *(_QWORD *)v12 = v14;
          *(_QWORD *)(v12 + 16) = n;
          a2 = *(const char **)v13;
          memcpy(v14, *(const void **)v13, n);
          v11 = v17 + 1;
          *(_QWORD *)(v12 + 8) = n;
          if ( v5 == v17 + 1 )
          {
LABEL_14:
            *(_QWORD *)(v6 + 32) = v5;
            if ( v18 == (const char *)++v4 )
              goto LABEL_15;
            goto LABEL_7;
          }
        }
        else if ( v5 == ++v11 )
        {
          goto LABEL_14;
        }
        v10 = *(_QWORD *)(v6 + 24);
      }
    }
    if ( v18 != (const char *)++v4 )
      continue;
    break;
  }
LABEL_15:
  a1[1] = v18;
  return a1;
}

