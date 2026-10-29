void __fastcall sub_5E3850(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  void **v7; // rbx
  void *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r14
  _QWORD *v11; // rbx
  __int64 v12; // r13
  char **v13; // r15
  char *v14; // rdi
  char *v15; // r14
  char *i; // r13
  char *v17; // rbx
  void *v18; // rdi
  void *v19; // rdi
  __int64 v20; // r13
  _QWORD *v21; // rax
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // r15
  __int64 v26; // rbx
  __int64 v27; // rcx
  void *v28; // rax
  void *v29; // rax
  void *v30; // rax
  _QWORD *v31; // [rsp+0h] [rbp-50h]
  size_t n; // [rsp+8h] [rbp-48h]
  size_t na; // [rsp+8h] [rbp-48h]
  const void **v34; // [rsp+10h] [rbp-40h]
  __int64 v35; // [rsp+10h] [rbp-40h]

  if ( a1 != a2 )
  {
    v3 = *(_QWORD *)(a2 + 40);
    if ( (v3 & 0x1E0) != 0 )
    {
      v4 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFE1FLL;
      *(_QWORD *)(a1 + 40) = v4;
      *(_QWORD *)(a1 + 40) = v4 | *(_QWORD *)(a2 + 40) & 0x1E0LL;
      v3 = *(_QWORD *)(a2 + 40);
    }
    if ( (v3 & 0xF000) != 0 )
    {
      v5 = *(_QWORD *)(a1 + 40);
      BYTE1(v5) &= 0xFu;
      *(_QWORD *)(a1 + 40) = v5;
      *(_QWORD *)(a1 + 40) = v5 | *(_QWORD *)(a2 + 40) & 0xF000LL;
      *(_DWORD *)(a1 + 180) = *(_DWORD *)(a2 + 180);
      v3 = *(_QWORD *)(a2 + 40);
    }
    if ( (v3 & 0x30000) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFCFFFFLL;
      *(_QWORD *)(a1 + 40) = v6;
      *(_QWORD *)(a1 + 40) = v6 | *(_QWORD *)(a2 + 40) & 0x30000LL;
    }
    if ( *(_QWORD *)(a2 + 24) )
    {
      v7 = *(void ***)(a1 + 24);
      if ( v7 )
      {
        v8 = *v7;
        if ( *v7 )
        {
          v7[1] = nullptr;
          qfree(v8);
        }
        qfree(v7);
      }
      v9 = qalloc_or_throw(24);
      v10 = *(_QWORD *)(a2 + 24);
      *(_QWORD *)v9 = 0;
      v11 = (_QWORD *)v9;
      *(_OWORD *)(v9 + 8) = 0;
      v12 = *(_QWORD *)(v10 + 8);
      if ( v12 )
      {
        v30 = (void *)qalloc_or_throw(8 * v12);
        *v11 = v30;
        v11[2] = v12;
        memcpy(v30, *(const void **)v10, 8 * v12);
        v11[1] = v12;
      }
      *(_QWORD *)(a1 + 24) = v11;
    }
    if ( *(_QWORD *)(a2 + 16) )
    {
      v13 = *(char ***)(a1 + 16);
      if ( v13 )
      {
        v14 = *v13;
        if ( *v13 )
        {
          v15 = v13[1];
          if ( v15 )
          {
            for ( i = nullptr; i != v15; ++i )
            {
              v17 = &v14[48 * (_QWORD)i];
              v18 = *((void **)v17 + 3);
              if ( v18 )
              {
                *((_QWORD *)v17 + 4) = 0;
                qfree(v18);
              }
              v19 = *(void **)v17;
              if ( *(_QWORD *)v17 )
              {
                *((_QWORD *)v17 + 1) = 0;
                qfree(v19);
              }
              v14 = *v13;
            }
          }
          v13[1] = nullptr;
          qfree(v14);
        }
        qfree(v13);
      }
      v20 = qalloc_or_throw(24);
      v21 = *(_QWORD **)(a2 + 16);
      *(_QWORD *)v20 = 0;
      *(_OWORD *)(v20 + 8) = 0;
      v22 = v21[1];
      v31 = v21;
      if ( v22 )
      {
        v23 = qalloc_or_throw(48 * v22);
        *(_QWORD *)v20 = v23;
        v24 = v23;
        v25 = 0;
        *(_QWORD *)(v20 + 16) = v22;
        while ( 1 )
        {
          v26 = 48 * v25 + v24;
          v27 = *v31 + 48 * v25;
          *(_QWORD *)v26 = 0;
          *(_OWORD *)(v26 + 8) = 0;
          if ( *(_QWORD *)(v27 + 8) )
          {
            v34 = (const void **)v27;
            n = *(_QWORD *)(v27 + 8);
            v28 = (void *)qalloc_or_throw(n);
            *(_QWORD *)v26 = v28;
            *(_QWORD *)(v26 + 16) = n;
            memcpy(v28, *v34, n);
            v27 = (__int64)v34;
            *(_QWORD *)(v26 + 8) = n;
          }
          *(_QWORD *)(v26 + 24) = 0;
          *(_OWORD *)(v26 + 32) = 0;
          if ( *(_QWORD *)(v27 + 32) )
          {
            v35 = v27;
            na = *(_QWORD *)(v27 + 32);
            v29 = (void *)qalloc_or_throw(na);
            *(_QWORD *)(v26 + 24) = v29;
            ++v25;
            *(_QWORD *)(v26 + 40) = na;
            memcpy(v29, *(const void **)(v35 + 24), na);
            *(_QWORD *)(v26 + 32) = na;
            if ( v22 == v25 )
            {
LABEL_39:
              *(_QWORD *)(v20 + 8) = v22;
              break;
            }
          }
          else if ( v22 == ++v25 )
          {
            goto LABEL_39;
          }
          v24 = *(_QWORD *)v20;
        }
      }
      *(_QWORD *)(a1 + 16) = v20;
    }
    *(_BYTE *)(a1 + 186) |= *(_BYTE *)(a2 + 186) & 0xC0;
  }
}
