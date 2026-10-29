unsigned __int64 __fastcall sub_5F3EC0(__int64 *a1, unsigned int a2, const char *a3)
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
  const char *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  size_t v26; // rbx
  const void **v27; // r15
  __int64 v28; // rax
  __int64 v29; // rax
  void *v30; // rdi
  __int64 v31; // rax
  void *v32; // r12
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // r10
  __int64 v36; // rax
  void *v37; // rdi
  void *v38; // rdx
  void *v39; // rax
  _QWORD *v40; // [rsp+0h] [rbp-100h]
  __int64 v42; // [rsp+10h] [rbp-F0h]
  void *src; // [rsp+18h] [rbp-E8h]
  size_t v45; // [rsp+28h] [rbp-D8h]
  void *v46; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v47; // [rsp+38h] [rbp-C8h]
  void *v48; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v49; // [rsp+58h] [rbp-A8h]
  void *v50; // [rsp+70h] [rbp-90h] BYREF
  __int128 v51; // [rsp+78h] [rbp-88h]
  void *v52; // [rsp+90h] [rbp-70h] BYREF
  __int128 v53; // [rsp+98h] [rbp-68h]
  void *ptr; // [rsp+B0h] [rbp-50h] BYREF
  size_t n[2]; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v56; // [rsp+C8h] [rbp-38h]

  src = (void *)a3;
  v56 = __readfsqword(0x28u);
  v3 = *a1;
  v47 = 0;
  v46 = nullptr;
  v4 = *(_QWORD **)(v3 + 1456);
  v42 = *(_QWORD *)(v3 + 1480);
  if ( a3 )
  {
    ptr = nullptr;
    v40 = v4 + 1;
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
    if ( !(unsigned __int8)sub_6994A0(v42, &v46, a2) )
    {
      LODWORD(ptr) = sub_3B90A0(*(_QWORD **)(*a1 + 1480), a2);
      sub_79BD30(&ptr, *a1, &v46);
    }
    v8 = (char *)haystack;
    if ( (_QWORD)v47 )
      v8 = (char *)v46;
    ptr = nullptr;
    v40 = v4 + 1;
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
        v14 = (void *)qalloc_or_throw(n[0], (const char *)src);
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
      v31 = qvector_reserve(v40, v19, v18 + 1, 24);
      v4[1] = v31;
      v18 = v4[2];
      v19 = v31;
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
    v48 = nullptr;
    v50 = nullptr;
    v52 = nullptr;
    v49 = 0;
    v51 = 0;
    v53 = 0;
    if ( a2 == -1 )
    {
      v22 = *(const char **)(v42 + 8);
      sub_63C1A0(v42, v22, src, 1);
    }
    else
    {
      v21 = sub_6A9850(a1, a2);
      v22 = (const char *)src;
      if ( (unsigned __int8)sub_5F3330(a1, (__int64)src, a2, v21, (__int64)&v48, (__int64)&v50, (__int64)&v52) )
      {
        sub_6A9780(a1, a2, 0);
        if ( v21 <= 0 )
        {
          v21 = sub_632AC0(v42, *(_QWORD *)(v42 + 8), src);
          if ( v21 <= 0 )
            v21 = alloc_type_ordinals(*(_QWORD *)(v42 + 8), 1);
          sub_6A98B0(a1, a2, (unsigned int)v21);
        }
        *(_OWORD *)n = 0;
        ptr = nullptr;
        if ( sub_6A99F0(a1, &ptr, a2, 0) <= 0 )
          sub_6A99F0(a1, &ptr, a2, 1);
        v38 = nullptr;
        if ( (unsigned __int64)v53 > 1 )
          v38 = v52;
        v39 = nullptr;
        if ( n[0] > 1 )
          v39 = ptr;
        v22 = *(const char **)(v42 + 8);
        sub_63EF20(v42, (_DWORD)v22, v21, 5, (_DWORD)src, (_DWORD)v48, (__int64)v50, (__int64)v39, (__int64)v38, 0);
        if ( ptr )
        {
          n[0] = 0;
          qfree(ptr);
        }
      }
    }
    v23 = v4[2];
    v24 = v4[1];
    v25 = v24 + 24 * v23 - 24;
    v26 = *(_QWORD *)(v25 + 8);
    v27 = (const void **)v25;
    if ( v26 )
    {
      v32 = (void *)qalloc_or_throw(*(_QWORD *)(v25 + 8), v22);
      memcpy(v32, *v27, v26);
      v33 = v4[2];
      if ( v33 )
      {
        v34 = v33 - 1;
        v35 = v4[1];
        v4[2] = v34;
        v36 = v35 + 24 * v34;
        v37 = *(void **)v36;
        if ( *(_QWORD *)v36 )
        {
          *(_QWORD *)(v36 + 8) = 0;
          qfree(v37);
        }
      }
      if ( v32 )
        qfree(v32);
    }
    else if ( v23 )
    {
      v28 = v23 - 1;
      v4[2] = v28;
      v29 = v24 + 24 * v28;
      v30 = *(void **)v29;
      if ( *(_QWORD *)v29 )
      {
        *(_QWORD *)(v29 + 8) = 0;
        qfree(v30);
      }
    }
    sub_635350(v42, 0x8000000, 0, 1);
    if ( v52 )
    {
      *(_QWORD *)&v53 = 0;
      qfree(v52);
    }
    if ( v50 )
    {
      *(_QWORD *)&v51 = 0;
      qfree(v50);
    }
    if ( v48 )
    {
      *(_QWORD *)&v49 = 0;
      qfree(v48);
    }
    goto LABEL_15;
  }
LABEL_4:
  v45 = n[0];
  while ( 1 )
  {
    if ( *(_QWORD *)(v7 + 8) )
    {
      v10 = *(const char **)v7;
      v11 = haystack;
      if ( !v45 )
        goto LABEL_6;
      goto LABEL_11;
    }
    if ( !v45 )
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
  if ( v46 )
  {
    *(_QWORD *)&v47 = 0;
    qfree(v46);
  }
  return v56 - __readfsqword(0x28u);
}

