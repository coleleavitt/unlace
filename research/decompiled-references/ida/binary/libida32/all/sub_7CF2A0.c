const char **__fastcall sub_7CF2A0(const char **a1, const char *a2, __int64 a3)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // r12
  __int64 v6; // rbp
  __int64 v7; // rbx
  void *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 v12; // r13
  __int64 v13; // rbx
  __int64 *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r13
  void *v17; // rax
  void *v18; // rax
  const char *v20; // [rsp+0h] [rbp-78h]
  __int64 v21; // [rsp+8h] [rbp-70h]
  size_t v22; // [rsp+10h] [rbp-68h]
  size_t n; // [rsp+18h] [rbp-60h]
  const char *v24; // [rsp+28h] [rbp-50h]
  char *v25; // [rsp+30h] [rbp-48h]

  v24 = a2;
  if ( a1[2] < a2 )
  {
    a2 = *a1;
    *a1 = (const char *)qvector_reserve(a1, *a1, v24, 104);
  }
  v4 = (unsigned __int64)a1[1];
  v20 = (const char *)v4;
  if ( v4 < (unsigned __int64)v24 )
  {
    v21 = 104 * v4;
    v25 = (char *)(a3 + 24);
    do
    {
      v6 = (__int64)&(*a1)[v21];
      *(_QWORD *)v6 = 0;
      *(_OWORD *)(v6 + 8) = 0;
      v7 = *(_QWORD *)(a3 + 8);
      if ( v7 )
      {
        v8 = (void *)qalloc_or_throw(8 * v7, a2);
        *(_QWORD *)(v6 + 16) = v7;
        *(_QWORD *)v6 = v8;
        memcpy(v8, *(const void **)a3, 8 * v7);
        *(_QWORD *)(v6 + 8) = v7;
      }
      *(_QWORD *)(v6 + 24) = 0;
      a2 = (const char *)(a3 + 24);
      *(_OWORD *)(v6 + 32) = 0;
      sub_7BC640((__int64 *)(v6 + 24), v25);
      *(_QWORD *)(v6 + 48) = 0;
      *(_OWORD *)(v6 + 56) = 0;
      v5 = *(_QWORD *)(a3 + 56);
      if ( v5 )
      {
        v9 = qalloc_or_throw(56 * v5, v25);
        *(_QWORD *)(v6 + 48) = v9;
        v10 = v9;
        v11 = 0;
        *(_QWORD *)(v6 + 64) = v5;
        while ( 1 )
        {
          v13 = 56 * v11 + v10;
          v14 = (__int64 *)(*(_QWORD *)(a3 + 48) + 56 * v11);
          v15 = *v14;
          *(_QWORD *)(v13 + 8) = 0;
          *(_OWORD *)(v13 + 16) = 0;
          *(_QWORD *)v13 = v15;
          v16 = v14[2];
          if ( v16 )
          {
            v22 = (size_t)v14;
            v17 = (void *)qalloc_or_throw(8 * v16, a2);
            *(_QWORD *)(v13 + 8) = v17;
            *(_QWORD *)(v13 + 24) = v16;
            a2 = *(const char **)(v22 + 8);
            memcpy(v17, a2, 8 * v16);
            *(_QWORD *)(v13 + 16) = v16;
            v14 = (__int64 *)v22;
          }
          *(_QWORD *)(v13 + 32) = 0;
          *(_OWORD *)(v13 + 40) = 0;
          v12 = v14[5];
          if ( v12 )
          {
            n = (size_t)v14;
            v18 = (void *)qalloc_or_throw(4 * v12, a2);
            *(_QWORD *)(v13 + 32) = v18;
            ++v11;
            *(_QWORD *)(v13 + 48) = v12;
            a2 = *(const char **)(n + 32);
            memcpy(v18, a2, 4 * v12);
            *(_QWORD *)(v13 + 40) = v12;
            if ( v5 == v11 )
            {
LABEL_16:
              *(_QWORD *)(v6 + 56) = v5;
              break;
            }
          }
          else if ( v5 == ++v11 )
          {
            goto LABEL_16;
          }
          v10 = *(_QWORD *)(v6 + 48);
        }
      }
      ++v20;
      v21 += 104;
      *(_QWORD *)(v6 + 72) = *(_QWORD *)(a3 + 72);
      *(_DWORD *)(v6 + 80) = *(_DWORD *)(a3 + 80);
      *(_QWORD *)(v6 + 88) = *(_QWORD *)(a3 + 88);
      *(_QWORD *)(v6 + 96) = *(_QWORD *)(a3 + 96);
    }
    while ( v24 != v20 );
  }
  a1[1] = v24;
  return a1;
}

