unsigned __int64 __fastcall sub_7C0630(__int64 a1, __int64 *a2)
{
  __int16 v4; // r13
  void *v5; // rdi
  __int16 v6; // r13
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // r14
  __int64 v18; // r15
  size_t v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // r14
  __int64 v23; // r15
  size_t v24; // r8
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  void *v29; // r9
  void *v30; // rdi
  void *v31; // r9
  void *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rax
  size_t v35; // [rsp+0h] [rbp-68h]
  size_t v36; // [rsp+0h] [rbp-68h]
  void *v37; // [rsp+8h] [rbp-60h]
  void *v38; // [rsp+8h] [rbp-60h]
  void *src; // [rsp+10h] [rbp-58h] BYREF
  __int128 v40; // [rsp+18h] [rbp-50h]
  unsigned __int64 v41; // [rsp+28h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  v40 = 0;
  src = nullptr;
  src = (void *)qvector_reserve(&src, 0, 5, 1);
  *(_QWORD *)&v40 = 5;
  strcpy((char *)src, "user");
  if ( *(_QWORD *)(a1 + 48) > 1u )
    sub_7BFFC0(a2, (__int64)&src, a1 + 40);
  if ( src )
  {
    *(_QWORD *)&v40 = 0;
    qfree(src);
  }
  v40 = 0;
  src = nullptr;
  src = (void *)qvector_reserve(&src, 0, 5, 1);
  *(_QWORD *)&v40 = 5;
  strcpy((char *)src, "pass");
  if ( *(_QWORD *)(a1 + 72) > 1u )
    sub_7BFFC0(a2, (__int64)&src, a1 + 64);
  if ( src )
  {
    *(_QWORD *)&v40 = 0;
    qfree(src);
  }
  v40 = 0;
  src = nullptr;
  src = (void *)qvector_reserve(&src, 0, 5, 1);
  *(_QWORD *)&v40 = 5;
  strcpy((char *)src, "host");
  if ( *(_QWORD *)(a1 + 16) > 1u )
    sub_7BFFC0(a2, (__int64)&src, a1 + 8);
  if ( src )
  {
    *(_QWORD *)&v40 = 0;
    qfree(src);
  }
  v4 = *(_WORD *)(a1 + 32);
  v40 = 0;
  src = nullptr;
  src = (void *)qvector_reserve(&src, 0, 5, 1);
  *(_QWORD *)&v40 = 5;
  strcpy((char *)src, "port");
  if ( v4 )
  {
    v20 = a2[1];
    v21 = *a2;
    if ( a2[2] < (unsigned __int64)(v20 + 1) )
    {
      v25 = qvector_reserve(a2, v21, v20 + 1, 48);
      *a2 = v25;
      v20 = a2[1];
      v21 = v25;
    }
    v22 = v21 + 48 * v20;
    *(_QWORD *)v22 = 0;
    *(_QWORD *)(v22 + 24) = 0;
    *(_OWORD *)(v22 + 8) = 0;
    *(_OWORD *)(v22 + 32) = 0;
    ++a2[1];
    if ( (void **)v22 != &src )
    {
      v23 = v40;
      if ( (_QWORD)v40 && (v24 = v40 - 1, (_QWORD)v40 != 1) )
      {
        v29 = src;
        v30 = *(void **)v22;
        if ( *(_QWORD *)(v22 + 16) < (unsigned __int64)v40 )
        {
          v37 = src;
          v35 = v40 - 1;
          v33 = qvector_reserve(v22, *(_QWORD *)v22, v40, 1);
          v29 = v37;
          v24 = v35;
          *(_QWORD *)v22 = v33;
          v30 = (void *)v33;
        }
        *(_QWORD *)(v22 + 8) = v23;
        memmove(v30, v29, v24);
        *(_BYTE *)(*(_QWORD *)v22 + v23 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(v22 + 8) = 0;
      }
    }
    sub_35A790((char **)(v22 + 24));
  }
  if ( src )
  {
    *(_QWORD *)&v40 = 0;
    qfree(src);
  }
  v40 = 0;
  src = nullptr;
  src = (void *)qvector_reserve(&src, 0, 11, 1);
  *(_QWORD *)&v40 = 11;
  strcpy((char *)src, "proxy_host");
  v5 = src;
  if ( *(_QWORD *)(a1 + 96) > 1u )
  {
    sub_7BFFC0(a2, (__int64)&src, a1 + 88);
    v5 = src;
  }
  if ( v5 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v5);
  }
  v6 = *(_WORD *)(a1 + 112);
  v40 = 0;
  src = nullptr;
  src = (void *)qvector_reserve(&src, 0, 11, 1);
  *(_QWORD *)&v40 = 11;
  strcpy((char *)src, "proxy_port");
  v7 = src;
  if ( v6 )
  {
    v15 = a2[1];
    v16 = *a2;
    if ( a2[2] < (unsigned __int64)(v15 + 1) )
    {
      v26 = qvector_reserve(a2, v16, v15 + 1, 48);
      *a2 = v26;
      v15 = a2[1];
      v16 = v26;
    }
    v17 = v16 + 48 * v15;
    *(_QWORD *)v17 = 0;
    *(_QWORD *)(v17 + 24) = 0;
    *(_OWORD *)(v17 + 8) = 0;
    *(_OWORD *)(v17 + 32) = 0;
    ++a2[1];
    if ( (void **)v17 != &src )
    {
      v18 = v40;
      if ( (_QWORD)v40 && (v19 = v40 - 1, (_QWORD)v40 != 1) )
      {
        v31 = src;
        v32 = *(void **)v17;
        if ( *(_QWORD *)(v17 + 16) < (unsigned __int64)v40 )
        {
          v38 = src;
          v36 = v40 - 1;
          v34 = qvector_reserve(v17, *(_QWORD *)v17, v40, 1);
          v31 = v38;
          v19 = v36;
          *(_QWORD *)v17 = v34;
          v32 = (void *)v34;
        }
        *(_QWORD *)(v17 + 8) = v18;
        memmove(v32, v31, v19);
        *(_BYTE *)(*(_QWORD *)v17 + v18 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(v17 + 8) = 0;
      }
    }
    sub_35A790((char **)(v17 + 24));
    v7 = src;
  }
  if ( v7 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v7);
  }
  v40 = 0;
  src = nullptr;
  src = (void *)qvector_reserve(&src, 0, 11, 1);
  *(_QWORD *)&v40 = 11;
  strcpy((char *)src, "proxy_user");
  v8 = src;
  if ( *(_QWORD *)(a1 + 128) > 1u )
  {
    sub_7BFFC0(a2, (__int64)&src, a1 + 120);
    v8 = src;
  }
  if ( v8 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v8);
  }
  v40 = 0;
  src = nullptr;
  src = (void *)qvector_reserve(&src, 0, 11, 1);
  *(_QWORD *)&v40 = 11;
  strcpy((char *)src, "proxy_pass");
  v9 = src;
  if ( *(_QWORD *)(a1 + 152) > 1u )
  {
    sub_7BFFC0(a2, (__int64)&src, a1 + 144);
    v9 = src;
  }
  if ( v9 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v9);
  }
  if ( (*(_BYTE *)(a1 + 168) & 1) != 0 )
  {
    v11 = a2[1];
    v12 = *a2;
    if ( a2[2] < (unsigned __int64)(v11 + 1) )
    {
      v28 = qvector_reserve(a2, v12, v11 + 1, 48);
      *a2 = v28;
      v12 = v28;
      v11 = a2[1];
    }
    v13 = v12 + 48 * v11;
    *(_QWORD *)v13 = 0;
    *(_OWORD *)(v13 + 8) = 0;
    *(_QWORD *)(v13 + 24) = 0;
    *(_OWORD *)(v13 + 32) = 0;
    ++a2[1];
    v14 = *(_QWORD *)v13;
    if ( *(_QWORD *)(v13 + 16) <= 5u )
    {
      v27 = qvector_reserve(v13, v14, 6, 1);
      *(_QWORD *)v13 = v27;
      v14 = v27;
    }
    *(_QWORD *)(v13 + 8) = 6;
    *(_DWORD *)v14 = 1819570030;
    *(_BYTE *)(v14 + 4) = 115;
    *(_BYTE *)(*(_QWORD *)v13 + 5LL) = 0;
  }
  return v41 - __readfsqword(0x28u);
}
