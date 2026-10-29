unsigned __int64 __fastcall sub_60FF70(__int64 *a1, __int64 a2, const char *a3)
{
  __int64 v3; // rax
  _QWORD *v4; // r14
  size_t v5; // rbx
  size_t v6; // r12
  __int64 v7; // r15
  char *v8; // r13
  __int64 v9; // rbx
  const char *v10; // rsi
  const char *v11; // rdi
  size_t v13; // r15
  void *v14; // rbx
  size_t v15; // rax
  size_t v16; // r12
  size_t v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rax
  int v21; // ebx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  size_t v25; // rbx
  const void **v26; // r15
  __int64 v27; // rax
  __int64 v28; // rax
  void *v29; // rdi
  __int64 v30; // rax
  void *v31; // r12
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // r10
  __int64 v35; // rax
  void *v36; // rdi
  void *v37; // rdx
  void *v38; // rax
  _QWORD *v39; // [rsp+0h] [rbp-100h]
  __int64 v41; // [rsp+10h] [rbp-F0h]
  void *src; // [rsp+18h] [rbp-E8h]
  size_t v44; // [rsp+28h] [rbp-D8h]
  void *v45; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v46; // [rsp+38h] [rbp-C8h]
  void *v47; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v48; // [rsp+58h] [rbp-A8h]
  void *v49; // [rsp+70h] [rbp-90h] BYREF
  __int128 v50; // [rsp+78h] [rbp-88h]
  void *v51; // [rsp+90h] [rbp-70h] BYREF
  __int128 v52; // [rsp+98h] [rbp-68h]
  void *ptr; // [rsp+B0h] [rbp-50h] BYREF
  size_t n[2]; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v55; // [rsp+C8h] [rbp-38h]

  src = (void *)a3;
  v55 = __readfsqword(0x28u);
  v3 = *a1;
  v46 = 0;
  v45 = nullptr;
  v4 = *(_QWORD **)(v3 + 1648);
  v41 = *(_QWORD *)(v3 + 1672);
  if ( a3 )
  {
    ptr = nullptr;
    v39 = v4 + 1;
    *(_OWORD *)n = 0;
    v5 = strlen(a3);
    v6 = v5 + 1;
  }
  else
  {
    if ( a2 == -1 )
    {
      if ( !under_debugger )
        interr(94);
      BUG();
    }
    if ( !(unsigned __int8)sub_6B9E00(v41, &v45, a2) )
    {
      ptr = (void *)sub_3BDD60(*(_QWORD **)(*a1 + 1672), a2);
      sub_7BF130(&ptr, *a1, &v45);
    }
    v8 = (char *)haystack;
    if ( (_QWORD)v46 )
      v8 = (char *)v45;
    ptr = nullptr;
    v39 = v4 + 1;
    *(_OWORD *)n = 0;
    if ( !v8 )
    {
      v7 = v4[1];
      src = nullptr;
      v9 = v7 + 24LL * v4[2];
      if ( v9 != v7 )
        goto LABEL_4;
      goto LABEL_25;
    }
    src = v8;
    v5 = strlen(v8);
    v6 = v5 + 1;
  }
  ptr = (void *)qvector_reserve(&ptr, 0, v6, 1);
  n[0] = v6;
  memmove(ptr, src, v5);
  *((_BYTE *)ptr + v5) = 0;
  v7 = v4[1];
  v8 = (char *)ptr;
  v9 = v7 + 24LL * v4[2];
  if ( v7 == v9 )
  {
    if ( !ptr )
    {
      *(_OWORD *)n = 0;
LABEL_28:
      v15 = strlen((const char *)src);
      v16 = v15 + 1;
      v17 = v15;
      ptr = (void *)qvector_reserve(&ptr, 0, v15 + 1, 1);
      n[0] = v16;
      memmove(ptr, src, v17);
      *((_BYTE *)ptr + v17) = 0;
      v14 = nullptr;
      v13 = n[0];
      if ( n[0] )
      {
        v14 = (void *)qalloc_or_throw(n[0]);
        memcpy(v14, ptr, v13);
      }
      goto LABEL_30;
    }
    n[0] = 0;
    qfree(ptr);
LABEL_27:
    ptr = nullptr;
    *(_OWORD *)n = 0;
    if ( src )
      goto LABEL_28;
LABEL_25:
    src = nullptr;
    v13 = 0;
    v14 = nullptr;
LABEL_30:
    v18 = v4[2];
    v19 = v4[1];
    if ( v4[3] < (unsigned __int64)(v18 + 1) )
    {
      v30 = qvector_reserve(v39, v19, v18 + 1, 24);
      v4[1] = v30;
      v18 = v4[2];
      v19 = v30;
    }
    v20 = v19 + 24 * v18;
    *(_QWORD *)v20 = v14;
    *(__m128i *)(v20 + 8) = _mm_unpacklo_epi64((__m128i)v13, (__m128i)v13);
    ++v4[2];
    if ( ptr )
    {
      n[0] = 0;
      qfree(ptr);
    }
    v47 = nullptr;
    v49 = nullptr;
    v51 = nullptr;
    v48 = 0;
    v50 = 0;
    v52 = 0;
    if ( a2 == -1 )
    {
      sub_659990(v41, *(_QWORD *)(v41 + 8), src, 1);
    }
    else
    {
      v21 = sub_6CA780(a1, a2);
      if ( (unsigned __int8)sub_60F3B0(a1, (__int64)src, a2, v21, (__int64)&v47, (__int64)&v49, (__int64)&v51) )
      {
        sub_6CA6B0(a1, a2, 0);
        if ( v21 <= 0 )
        {
          v21 = sub_6500C0(v41, *(_QWORD *)(v41 + 8), src);
          if ( v21 <= 0 )
            v21 = alloc_type_ordinals(*(_QWORD *)(v41 + 8), 1);
          sub_6CA7E0(a1, a2, (unsigned int)v21);
        }
        ptr = nullptr;
        *(_OWORD *)n = 0;
        if ( sub_6CA930(a1, &ptr, a2, 0) <= 0 )
          sub_6CA930(a1, &ptr, a2, 1);
        v37 = nullptr;
        if ( (unsigned __int64)v52 > 1 )
          v37 = v51;
        v38 = nullptr;
        if ( n[0] > 1 )
          v38 = ptr;
        sub_65C7F0(
          v41,
          *(_QWORD *)(v41 + 8),
          v21,
          5,
          (_DWORD)src,
          (_DWORD)v47,
          (__int64)v49,
          (__int64)v38,
          (__int64)v37,
          0);
        if ( ptr )
        {
          n[0] = 0;
          qfree(ptr);
        }
      }
    }
    v22 = v4[2];
    v23 = v4[1];
    v24 = v23 + 24 * v22 - 24;
    v25 = *(_QWORD *)(v24 + 8);
    v26 = (const void **)v24;
    if ( v25 )
    {
      v31 = (void *)qalloc_or_throw(*(_QWORD *)(v24 + 8));
      memcpy(v31, *v26, v25);
      v32 = v4[2];
      if ( v32 )
      {
        v33 = v32 - 1;
        v34 = v4[1];
        v4[2] = v33;
        v35 = v34 + 24 * v33;
        v36 = *(void **)v35;
        if ( *(_QWORD *)v35 )
        {
          *(_QWORD *)(v35 + 8) = 0;
          qfree(v36);
        }
      }
      if ( v31 )
        qfree(v31);
    }
    else if ( v22 )
    {
      v27 = v22 - 1;
      v4[2] = v27;
      v28 = v23 + 24 * v27;
      v29 = *(void **)v28;
      if ( *(_QWORD *)v28 )
      {
        *(_QWORD *)(v28 + 8) = 0;
        qfree(v29);
      }
    }
    sub_652960(v41, 0x8000000, 0, 1);
    if ( v51 )
    {
      *(_QWORD *)&v52 = 0;
      qfree(v51);
    }
    if ( v49 )
    {
      *(_QWORD *)&v50 = 0;
      qfree(v49);
    }
    if ( v47 )
    {
      *(_QWORD *)&v48 = 0;
      qfree(v47);
    }
    goto LABEL_15;
  }
LABEL_4:
  v44 = n[0];
  while ( 1 )
  {
    if ( *(_QWORD *)(v7 + 8) )
    {
      v10 = *(const char **)v7;
      v11 = haystack;
      if ( !v44 )
        goto LABEL_6;
      goto LABEL_11;
    }
    if ( !v44 )
      break;
    v10 = haystack;
LABEL_11:
    v11 = v8;
LABEL_6:
    if ( !strcmp(v11, v10) )
      break;
    v7 += 24;
    if ( v7 == v9 )
    {
      if ( !v8 )
        goto LABEL_27;
      goto LABEL_13;
    }
  }
  if ( !v8 )
    goto LABEL_14;
LABEL_13:
  n[0] = 0;
  qfree(v8);
LABEL_14:
  if ( v9 == v7 )
    goto LABEL_27;
LABEL_15:
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree(v45);
  }
  return v55 - __readfsqword(0x28u);
}
