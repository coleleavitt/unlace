__int64 __fastcall sub_20740(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r14
  size_t v6; // r13
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  void *v11; // rbp
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  __int64 v14; // rax
  void *v15; // rdi
  const char *v16; // rbp
  size_t v17; // r13
  void *v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rdi
  unsigned int v23; // eax
  char *v24; // r14
  unsigned int v25; // ebx
  __int128 v26; // xmm1
  char *v27; // r13
  __int64 v28; // rax
  __int64 v29; // rdx
  __m128i v30; // xmm0
  __int64 v31; // rdx
  __int64 v32; // rsi
  __int64 v33; // rax
  __m128i v34; // xmm0
  __int64 v35; // rax
  __int64 v36; // rax
  char *v37; // rdx
  __int64 v38; // r12
  __int64 v39; // rbp
  char *v40; // rax
  void *v41; // rdi
  char *v42; // rdx
  __int64 v43; // r12
  __int64 v44; // rbp
  char *v45; // rax
  void *v46; // rdi
  __int64 v47; // rax
  void *v48; // rdi
  __int64 v49; // r12
  __int64 v50; // rbp
  __int64 v51; // rdx
  void *v52; // rdi
  __int64 v54; // rax
  __int64 v55; // r12
  __int64 v56; // rbp
  char *v57; // rax
  void *v58; // rdi
  __int64 v59; // r12
  __int64 v60; // rbp
  char *v61; // rax
  void *v62; // rdi
  __m128i v63; // [rsp+0h] [rbp-B0h] BYREF
  __m128i v64; // [rsp+10h] [rbp-A0h] BYREF
  __int128 v65; // [rsp+20h] [rbp-90h]
  void *v66; // [rsp+38h] [rbp-78h] BYREF
  __int128 v67; // [rsp+40h] [rbp-70h]
  void *ptr; // [rsp+58h] [rbp-58h] BYREF
  __m128i v69; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v70; // [rsp+70h] [rbp-40h]

  v2 = *a1;
  v63.m128i_i64[1] = (__int64)a1;
  v70 = __readfsqword(0x28u);
  v3 = a1[1];
  v65 = 0;
  v64.m128i_i64[1] = 0;
  v4 = v2 + 72 * v3;
  if ( v2 == v4 )
    return 0;
  do
  {
    while ( *(_QWORD *)(v2 + 8) > 1u )
    {
      v16 = *(const char **)v2;
      if ( !(unsigned __int8)sub_64130(*(char **)v2) )
      {
        ptr = nullptr;
        v69 = 0;
        if ( v16 )
        {
          v6 = strlen(v16);
          v63.m128i_i64[0] = v6 + 1;
          ptr = (void *)sub_96080(&ptr, 0, v6 + 1, 1);
          v69.m128i_i64[0] = v63.m128i_i64[0];
          memmove(ptr, v16, v6);
          *((_BYTE *)ptr + v6) = 0;
        }
        goto LABEL_5;
      }
LABEL_14:
      v17 = *(_QWORD *)(v2 + 8);
      v18 = nullptr;
      if ( v17 )
      {
        v18 = (void *)sub_96030(*(_QWORD *)(v2 + 8));
        memcpy(v18, *(const void **)v2, v17);
      }
      v19 = v65;
      v20 = v64.m128i_i64[1];
      if ( *((_QWORD *)&v65 + 1) < (unsigned __int64)(v65 + 1) )
      {
        v64.m128i_i64[1] = sub_96080(&v64.m128i_u64[1], v64.m128i_i64[1], v65 + 1, 24);
        v19 = v65;
        v20 = v64.m128i_i64[1];
      }
      v2 += 72;
      v21 = v20 + 24 * v19;
      *(_QWORD *)v21 = v18;
      *(__m128i *)(v21 + 8) = _mm_unpacklo_epi64((__m128i)v17, (__m128i)v17);
      *(_QWORD *)&v65 = v65 + 1;
      if ( v4 == v2 )
        goto LABEL_19;
    }
    if ( (unsigned __int8)sub_64130(nullptr) )
      goto LABEL_14;
    ptr = nullptr;
    v69 = 0;
LABEL_5:
    v7 = a2[1];
    v8 = *a2;
    v9 = a2[2];
    v10 = v7 + 1;
    if ( (unsigned __int64)&ptr < *a2 || (unsigned __int64)&ptr >= v8 + 24 * v9 )
    {
      if ( v9 < v10 )
      {
        v36 = sub_96080(a2, v8, v7 + 1, 24);
        *a2 = v36;
        v8 = v36;
        v7 = a2[1];
      }
      v34 = _mm_loadu_si128(&v69);
      v35 = v8 + 24 * v7;
      *(_QWORD *)v35 = ptr;
      *(__m128i *)(v35 + 8) = v34;
      ++a2[1];
    }
    else
    {
      v11 = ptr;
      v12 = _mm_loadl_epi64(&v69);
      ptr = nullptr;
      v13 = _mm_loadl_epi64((const __m128i *)&v69.m128i_u64[1]);
      v69 = 0;
      if ( v9 < v10 )
      {
        v64.m128i_i64[0] = v13.m128i_i64[0];
        v63.m128i_i64[0] = v12.m128i_i64[0];
        v54 = sub_96080(a2, v8, v7 + 1, 24);
        *a2 = v54;
        v8 = v54;
        v13 = _mm_loadl_epi64(&v64);
        v7 = a2[1];
        v12 = _mm_loadl_epi64(&v63);
      }
      v14 = v8 + 24 * v7;
      *(_QWORD *)v14 = v11;
      *(__m128i *)(v14 + 8) = _mm_unpacklo_epi64(v12, v13);
      v15 = ptr;
      ++a2[1];
      if ( v15 )
      {
        v69.m128i_i64[0] = 0;
        j__free(v15);
      }
    }
    v2 += 72;
  }
  while ( v4 != v2 );
LABEL_19:
  if ( !(_QWORD)v65 )
  {
    v48 = (void *)v64.m128i_i64[1];
    if ( v64.m128i_i64[1] )
    {
      v25 = 0;
      goto LABEL_51;
    }
    return 0;
  }
  v66 = nullptr;
  v67 = 0;
  v22 = *(_QWORD *)(v63.m128i_i64[1] + 24);
  ptr = nullptr;
  v63.m128i_i64[0] = (__int64)&v66;
  v69 = 0;
  v23 = (*(__int64 (__fastcall **)(__int64, void **, void **, unsigned __int64 *, __int64, _QWORD))(*(_QWORD *)v22
                                                                                                  + 208LL))(
          v22,
          &v66,
          &ptr,
          &v64.m128i_u64[1],
          4294967293LL,
          0);
  v24 = (char *)ptr;
  v25 = v23;
  if ( v23 )
  {
    if ( ptr )
    {
      v55 = v69.m128i_i64[0];
      if ( v69.m128i_i64[0] )
      {
        v56 = 0;
        do
        {
          v57 = &v24[80 * v56];
          v58 = *(void **)v57;
          if ( *(_QWORD *)v57 )
          {
            *((_QWORD *)v57 + 1) = 0;
            j__free(v58);
            v24 = (char *)ptr;
          }
          ++v56;
        }
        while ( v55 != v56 );
      }
      v69.m128i_i64[0] = 0;
      j__free(v24);
    }
    v42 = (char *)v66;
    if ( v66 )
    {
      v59 = v67;
      if ( (_QWORD)v67 )
      {
        v60 = 0;
        do
        {
          v61 = &v42[32 * v60];
          v62 = *((void **)v61 + 1);
          if ( v62 )
          {
            *((_QWORD *)v61 + 2) = 0;
            j__free(v62);
            v42 = (char *)v66;
          }
          ++v60;
        }
        while ( v59 != v60 );
      }
LABEL_44:
      *(_QWORD *)&v67 = 0;
      j__free(v42);
    }
  }
  else
  {
    v26 = 0;
    v27 = (char *)ptr + 80 * v69.m128i_i64[0];
    if ( v27 != ptr )
    {
      do
      {
        v31 = a2[1];
        v32 = *a2;
        if ( a2[2] < (unsigned __int64)(v31 + 1) )
        {
          v33 = sub_96080(a2, v32, v31 + 1, 24);
          *a2 = v33;
          v31 = a2[1];
          v32 = v33;
          v26 = 0;
        }
        v24 += 80;
        v28 = v32 + 24 * v31;
        *(_OWORD *)(v28 + 8) = v26;
        *(_QWORD *)v28 = 0;
        ++a2[1];
        v29 = *(_QWORD *)v28;
        v30 = _mm_loadu_si128((const __m128i *)(v28 + 8));
        *(_QWORD *)v28 = *((_QWORD *)v24 - 10);
        *(_QWORD *)(v28 + 8) = *((_QWORD *)v24 - 9);
        *(_QWORD *)(v28 + 16) = *((_QWORD *)v24 - 8);
        *((_QWORD *)v24 - 10) = v29;
        *(__m128i *)(v24 - 72) = v30;
      }
      while ( v27 != v24 );
    }
    sub_1A410(v63.m128i_i64[1], (unsigned int **)v63.m128i_i64[0]);
    v37 = (char *)ptr;
    if ( ptr )
    {
      v38 = v69.m128i_i64[0];
      if ( v69.m128i_i64[0] )
      {
        v39 = 0;
        do
        {
          v40 = &v37[80 * v39];
          v41 = *(void **)v40;
          if ( *(_QWORD *)v40 )
          {
            *((_QWORD *)v40 + 1) = 0;
            j__free(v41);
            v37 = (char *)ptr;
          }
          ++v39;
        }
        while ( v38 != v39 );
      }
      v69.m128i_i64[0] = 0;
      j__free(v37);
    }
    v42 = (char *)v66;
    if ( v66 )
    {
      v43 = v67;
      if ( (_QWORD)v67 )
      {
        v44 = 0;
        do
        {
          v45 = &v42[32 * v44];
          v46 = *((void **)v45 + 1);
          if ( v46 )
          {
            *((_QWORD *)v45 + 2) = 0;
            j__free(v46);
            v42 = (char *)v66;
          }
          ++v44;
        }
        while ( v43 != v44 );
      }
      goto LABEL_44;
    }
  }
  v47 = v64.m128i_i64[1];
  v48 = (void *)v64.m128i_i64[1];
  if ( v64.m128i_i64[1] )
  {
    v49 = v65;
    if ( (_QWORD)v65 )
    {
      v50 = 0;
      do
      {
        v51 = v47 + 24 * v50;
        v52 = *(void **)v51;
        if ( *(_QWORD *)v51 )
        {
          *(_QWORD *)(v51 + 8) = 0;
          j__free(v52);
          v47 = v64.m128i_i64[1];
        }
        ++v50;
        v48 = (void *)v47;
      }
      while ( v49 != v50 );
    }
LABEL_51:
    *(_QWORD *)&v65 = 0;
    j__free(v48);
  }
  return v25;
}

