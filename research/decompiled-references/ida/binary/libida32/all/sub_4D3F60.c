_QWORD *__fastcall sub_4D3F60(const char **a1, char **a2)
{
  const char *v2; // r12
  bool v4; // zf
  size_t v5; // rax
  __int64 v6; // r15
  size_t v7; // r14
  void *v8; // rax
  __m128i v9; // xmm2
  void *v10; // r15
  int *v11; // r14
  _QWORD *v12; // r15
  __m128i si128; // xmm6
  __int64 v15; // rax
  void *v16; // rdi
  const char *v17; // r14
  size_t v18; // r13
  _QWORD *v19; // r14
  const char *v20; // rax
  int *v21; // r13
  char *v22; // rsi
  const char *v23; // rdi
  int v24; // eax
  _QWORD *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  char *v28; // rax
  const char *v29; // rsi
  __int64 v30; // rax
  void *v31; // rcx
  __m128i v32; // xmm1
  int *v33; // r14
  int *v34; // rax
  int *v35; // rdx
  char *v36; // rcx
  unsigned __int64 v37; // xmm1_8
  __int64 v38; // r14
  void *v39; // r9
  const char *v40; // r13
  size_t v41; // rax
  __int64 v42; // r14
  size_t v43; // rbx
  __int64 (__fastcall **v44)(); // rbx
  void *v45; // rdi
  __int64 v46; // rax
  void *v47; // r8
  void *v48; // rax
  const char *v49; // rsi
  __int64 v50; // rsi
  void *v51[2]; // [rsp+0h] [rbp-B8h] BYREF
  __m128i v52; // [rsp+10h] [rbp-A8h] BYREF
  char *v53; // [rsp+20h] [rbp-98h]
  char *s2; // [rsp+28h] [rbp-90h]
  void **p_src; // [rsp+30h] [rbp-88h]
  int *v56; // [rsp+38h] [rbp-80h]
  void *src; // [rsp+40h] [rbp-78h] BYREF
  __int128 v58; // [rsp+48h] [rbp-70h]
  void *ptr; // [rsp+60h] [rbp-58h] BYREF
  __m128i v60; // [rsp+68h] [rbp-50h] BYREF
  unsigned __int64 v61; // [rsp+78h] [rbp-40h]

  v2 = haystack;
  v4 = a1[1] == nullptr;
  v61 = __readfsqword(0x28u);
  if ( !v4 )
    v2 = *a1;
  ptr = nullptr;
  v60 = 0;
  if ( v2 )
  {
    v5 = strlen(v2);
    v6 = v5 + 1;
    v7 = v5;
    v8 = (void *)qvector_reserve(&ptr, 0, v5 + 1, 1);
    v60.m128i_i64[0] = v6;
    ptr = v8;
    memmove(v8, v2, v7);
    v9 = _mm_loadl_epi64((const __m128i *)&off_2B03460);
    *((_BYTE *)ptr + v7) = 0;
    v10 = ptr;
    *(__m128i *)v51 = _mm_unpacklo_epi64(v9, (__m128i)(unsigned __int64)sub_4CEC60);
    v11 = (int *)sub_4D2210((__int64)&qword_2CA1FA0, (__int64)&ptr);
    if ( v10 )
    {
      v60.m128i_i64[0] = 0;
      qfree(v10);
    }
    if ( v11 != &dword_2CA1FA8 )
    {
LABEL_7:
      v12 = *((_QWORD **)v11 + 7);
      if ( v12 )
        return v12;
    }
  }
  else
  {
    *(__m128i *)v51 = _mm_unpacklo_epi64(
                        _mm_loadl_epi64((const __m128i *)&off_2B03460),
                        (__m128i)(unsigned __int64)sub_4CEC60);
    v11 = (int *)sub_4D2210((__int64)&qword_2CA1FA0, (__int64)&ptr);
    if ( v11 != &dword_2CA1FA8 )
      goto LABEL_7;
  }
  v12 = (_QWORD *)operator new(0x88u);
  *((_BYTE *)v12 + 96) = 2;
  si128 = _mm_load_si128((const __m128i *)v51);
  v12[8] = 0;
  v12[11] = 0;
  v12[15] = 0;
  v12[16] = 0;
  *(_OWORD *)(v12 + 9) = 0;
  *(_OWORD *)(v12 + 13) = 0;
  v12[3] = sub_4CEC80;
  *v12 = 900;
  *(__m128i *)(v12 + 1) = si128;
  *((_OWORD *)v12 + 2) = 0;
  *((_OWORD *)v12 + 3) = 0;
  src = nullptr;
  p_src = &src;
  v58 = 0;
  if ( !(unsigned __int8)sub_4D0FC0((__int64)v12, (__int64)a1, a2, (__int64)&src) )
  {
    if ( v12 )
    {
      if ( (debug & 0x20) != 0 )
        sub_383DA0();
      if ( v12 == (_QWORD *)v12[16] )
      {
        v44 = (__int64 (__fastcall **)())&unk_2B03360;
        do
        {
          if ( *(_BYTE *)v44 == 7 )
          {
            v45 = *(void **)((char *)v44[2] + (_QWORD)v12);
            if ( v45 )
              qfree(v45);
          }
          v44 += 4;
        }
        while ( &off_2B03460 != v44 );
        v46 = v12[11];
        if ( v46 )
          --*(_DWORD *)(v46 + 12);
        v12[11] = 0;
      }
      v12[16] = 0;
      free_idcv(v12 + 12);
      v15 = v12[11];
      if ( v15 )
        --*(_DWORD *)(v15 + 12);
      v16 = (void *)v12[8];
      if ( v16 )
      {
        v12[9] = 0;
        qfree(v16);
      }
      operator delete(v12, 0x88u);
    }
    v12 = nullptr;
    goto LABEL_20;
  }
  v17 = haystack;
  if ( a1[1] )
    v17 = *a1;
  ptr = nullptr;
  v60 = 0;
  if ( v17 )
  {
    v18 = strlen(v17);
    v51[0] = (void *)(v18 + 1);
    ptr = (void *)qvector_reserve(&ptr, 0, v18 + 1, 1);
    v60.m128i_i64[0] = (__int64)v51[0];
    memmove(ptr, v17, v18);
    *((_BYTE *)ptr + v18) = 0;
  }
  v19 = (_QWORD *)qword_2CA1F70;
  if ( !qword_2CA1F70 )
  {
    v56 = &dword_2CA1F68;
    v21 = &dword_2CA1F68;
    goto LABEL_47;
  }
  v52.m128i_i64[0] = v60.m128i_i64[0];
  v20 = haystack;
  if ( v60.m128i_i64[0] )
    v20 = (const char *)ptr;
  s2 = (char *)ptr;
  v53 = (char *)v20;
  v56 = &dword_2CA1F68;
  v21 = &dword_2CA1F68;
  while ( 1 )
  {
    v26 = v19[5];
    if ( !v52.m128i_i64[0] )
      break;
    if ( v26 )
      goto LABEL_39;
    v51[0] = v19;
    v22 = s2;
    v23 = haystack;
LABEL_32:
    v24 = strcmp(v23, v22);
    v25 = (_QWORD *)v19[2];
    v19 = (_QWORD *)v19[3];
    if ( v24 >= 0 )
    {
      v21 = (int *)v51[0];
      v19 = v25;
    }
    if ( !v19 )
      goto LABEL_41;
  }
  if ( v26 )
  {
LABEL_39:
    v23 = (const char *)v19[4];
    v22 = v53;
    v51[0] = v19;
    goto LABEL_32;
  }
  while ( 1 )
  {
    v27 = v19[2];
    if ( !v27 )
      break;
    v21 = (int *)v19;
    v19 = (_QWORD *)v19[2];
    if ( *(_QWORD *)(v27 + 40) )
      goto LABEL_39;
  }
  v21 = (int *)v19;
LABEL_41:
  if ( v21 == v56 )
    goto LABEL_47;
  if ( *((_QWORD *)v21 + 5) )
  {
    v28 = (char *)haystack;
    v29 = *((const char **)v21 + 4);
    if ( v52.m128i_i64[0] )
      v28 = s2;
    s2 = v28;
LABEL_46:
    if ( strcmp(s2, v29) < 0 )
    {
LABEL_47:
      v30 = operator new(0x50u);
      v31 = ptr;
      v32 = _mm_loadu_si128(&v60);
      *(_OWORD *)(v30 + 64) = 0;
      v33 = (int *)v30;
      *(_QWORD *)(v30 + 32) = v31;
      *(_QWORD *)(v30 + 56) = 0;
      *(__m128i *)(v30 + 40) = v32;
      v51[0] = v31;
      ptr = nullptr;
      v52 = v32;
      v60 = 0;
      v34 = (int *)sub_4D3870(&qword_2CA1F60, v21, v30 + 32);
      v36 = (char *)v51[0];
      v21 = v34;
      if ( v35 )
      {
        if ( v56 != v35 )
        {
          v37 = _mm_load_si128(&v52).m128i_u64[0];
          if ( !v34 )
          {
            v49 = haystack;
            if ( *((_QWORD *)v35 + 5) )
              v49 = *((const char **)v35 + 4);
            v51[0] = v35;
            if ( !v37 )
              v36 = (char *)haystack;
            strcmp(v36, v49);
          }
        }
        v21 = v33;
        std::_Rb_tree_insert_and_rebalance();
        ++qword_2CA1F88;
      }
      else if ( v33 )
      {
        if ( v51[0] )
        {
          *((_QWORD *)v33 + 5) = 0;
          qfree(v36);
        }
        operator delete(v33, 0x50u);
      }
    }
  }
  else
  {
    v29 = haystack;
    if ( v52.m128i_i64[0] )
      goto LABEL_46;
  }
  if ( v21 + 14 != (int *)p_src )
  {
    v38 = v58;
    if ( (_QWORD)v58 && (v39 = (void *)(v58 - 1), (_QWORD)v58 != 1) )
    {
      v47 = src;
      v48 = *((void **)v21 + 7);
      if ( *((_QWORD *)v21 + 9) < (unsigned __int64)v58 )
      {
        v50 = *((_QWORD *)v21 + 7);
        v52.m128i_i64[0] = (__int64)src;
        v51[0] = (void *)(v58 - 1);
        v48 = (void *)qvector_reserve(v21 + 14, v50, v58, 1);
        v47 = (void *)v52.m128i_i64[0];
        v39 = v51[0];
        *((_QWORD *)v21 + 7) = v48;
      }
      *((_QWORD *)v21 + 8) = v38;
      memmove(v48, v47, (size_t)v39);
      *(_BYTE *)(*((_QWORD *)v21 + 7) + v38 - 1) = 0;
    }
    else
    {
      *((_QWORD *)v21 + 8) = 0;
    }
  }
  if ( ptr )
  {
    v60.m128i_i64[0] = 0;
    qfree(ptr);
  }
  v40 = haystack;
  if ( a1[1] )
    v40 = *a1;
  ptr = nullptr;
  v60 = 0;
  if ( v40 )
  {
    v41 = strlen(v40);
    v42 = v41 + 1;
    v43 = v41;
    ptr = (void *)qvector_reserve(&ptr, 0, v41 + 1, 1);
    v60.m128i_i64[0] = v42;
    memmove(ptr, v40, v43);
    *((_BYTE *)ptr + v43) = 0;
  }
  *sub_4D3D40(&qword_2CA1FA0, (__int64)&ptr) = v12;
  if ( ptr )
  {
    v60.m128i_i64[0] = 0;
    qfree(ptr);
  }
  v12[16] = v12;
LABEL_20:
  if ( src )
  {
    *(_QWORD *)&v58 = 0;
    qfree(src);
  }
  return v12;
}

