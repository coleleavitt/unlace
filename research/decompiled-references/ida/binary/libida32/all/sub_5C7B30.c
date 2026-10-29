void __fastcall sub_5C7B30(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  void **v8; // rbx
  void *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r14
  _QWORD *v12; // rbx
  __int64 v13; // r13
  char **v14; // r15
  char *v15; // rdi
  char *v16; // r14
  char *i; // r13
  char *v18; // rbx
  void *v19; // rdi
  void *v20; // rdi
  __int64 v21; // r13
  _QWORD *v22; // rax
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // r15
  __int64 v27; // rbx
  __int64 v28; // rcx
  void *v29; // rax
  void *v30; // rax
  void *v31; // rax
  _QWORD *v32; // [rsp+0h] [rbp-50h]
  size_t n; // [rsp+8h] [rbp-48h]
  size_t na; // [rsp+8h] [rbp-48h]
  const void **v35; // [rsp+10h] [rbp-40h]
  __int64 v36; // [rsp+10h] [rbp-40h]

  if ( (_QWORD *)a1 != a2 )
  {
    v2 = a2;
    v4 = a2[5];
    if ( (v4 & 0x1E0) != 0 )
    {
      v5 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFE1FLL;
      *(_QWORD *)(a1 + 40) = v5;
      *(_QWORD *)(a1 + 40) = v5 | a2[5] & 0x1E0LL;
      v4 = a2[5];
    }
    if ( (v4 & 0xF000) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 40);
      BYTE1(v6) &= 0xFu;
      *(_QWORD *)(a1 + 40) = v6;
      *(_QWORD *)(a1 + 40) = v6 | a2[5] & 0xF000LL;
      *(_DWORD *)(a1 + 180) = *((_DWORD *)a2 + 45);
      v4 = a2[5];
    }
    if ( (v4 & 0x30000) != 0 )
    {
      v7 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFCFFFFLL;
      *(_QWORD *)(a1 + 40) = v7;
      *(_QWORD *)(a1 + 40) = v7 | a2[5] & 0x30000LL;
    }
    if ( a2[3] )
    {
      v8 = *(void ***)(a1 + 24);
      if ( v8 )
      {
        v9 = *v8;
        if ( *v8 )
        {
          v8[1] = nullptr;
          qfree(v9);
        }
        qfree(v8);
      }
      v10 = qalloc_or_throw(24, (const char *)a2);
      v11 = a2[3];
      *(_QWORD *)v10 = 0;
      v12 = (_QWORD *)v10;
      *(_OWORD *)(v10 + 8) = 0;
      v13 = *(_QWORD *)(v11 + 8);
      if ( v13 )
      {
        v31 = (void *)qalloc_or_throw(8 * v13, (const char *)a2);
        *v12 = v31;
        v12[2] = v13;
        a2 = *(_QWORD **)v11;
        memcpy(v31, *(const void **)v11, 8 * v13);
        v12[1] = v13;
      }
      *(_QWORD *)(a1 + 24) = v12;
    }
    if ( v2[2] )
    {
      v14 = *(char ***)(a1 + 16);
      if ( v14 )
      {
        v15 = *v14;
        if ( *v14 )
        {
          v16 = v14[1];
          if ( v16 )
          {
            for ( i = nullptr; i != v16; ++i )
            {
              v18 = &v15[48 * (_QWORD)i];
              v19 = *((void **)v18 + 3);
              if ( v19 )
              {
                *((_QWORD *)v18 + 4) = 0;
                qfree(v19);
              }
              v20 = *(void **)v18;
              if ( *(_QWORD *)v18 )
              {
                *((_QWORD *)v18 + 1) = 0;
                qfree(v20);
              }
              v15 = *v14;
            }
          }
          v14[1] = nullptr;
          qfree(v15);
        }
        qfree(v14);
      }
      v21 = qalloc_or_throw(24, (const char *)a2);
      v22 = (_QWORD *)v2[2];
      *(_QWORD *)v21 = 0;
      *(_OWORD *)(v21 + 8) = 0;
      v23 = v22[1];
      v32 = v22;
      if ( v23 )
      {
        v24 = qalloc_or_throw(48 * v23, (const char *)a2);
        *(_QWORD *)v21 = v24;
        v25 = v24;
        v26 = 0;
        *(_QWORD *)(v21 + 16) = v23;
        while ( 1 )
        {
          v27 = 48 * v26 + v25;
          v28 = *v32 + 48 * v26;
          *(_QWORD *)v27 = 0;
          *(_OWORD *)(v27 + 8) = 0;
          if ( *(_QWORD *)(v28 + 8) )
          {
            v35 = (const void **)v28;
            n = *(_QWORD *)(v28 + 8);
            v29 = (void *)qalloc_or_throw(n, (const char *)a2);
            *(_QWORD *)v27 = v29;
            *(_QWORD *)(v27 + 16) = n;
            a2 = *v35;
            memcpy(v29, *v35, n);
            v28 = (__int64)v35;
            *(_QWORD *)(v27 + 8) = n;
          }
          *(_QWORD *)(v27 + 24) = 0;
          *(_OWORD *)(v27 + 32) = 0;
          if ( *(_QWORD *)(v28 + 32) )
          {
            v36 = v28;
            na = *(_QWORD *)(v28 + 32);
            v30 = (void *)qalloc_or_throw(na, (const char *)a2);
            *(_QWORD *)(v27 + 24) = v30;
            ++v26;
            *(_QWORD *)(v27 + 40) = na;
            a2 = *(_QWORD **)(v36 + 24);
            memcpy(v30, a2, na);
            *(_QWORD *)(v27 + 32) = na;
            if ( v23 == v26 )
            {
LABEL_39:
              *(_QWORD *)(v21 + 8) = v23;
              break;
            }
          }
          else if ( v23 == ++v26 )
          {
            goto LABEL_39;
          }
          v25 = *(_QWORD *)v21;
        }
      }
      *(_QWORD *)(a1 + 16) = v21;
    }
    *(_BYTE *)(a1 + 186) |= *((_BYTE *)v2 + 186) & 0xC0;
  }
}

