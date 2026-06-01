unsigned __int64 __fastcall sub_6D5A80(__int64 *a1, __int64 a2, const char *a3, const void *a4, int a5)
{
  const char *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // r15
  __int64 v10; // r14
  const char *v11; // rdi
  __int64 *v12; // r8
  __int64 *v13; // rbp
  __int64 *v14; // r15
  const char *v15; // rdi
  size_t v16; // rax
  size_t v17; // rbp
  size_t v18; // rax
  size_t v19; // rbx
  size_t v21; // rax
  size_t v22; // r8
  size_t v23; // rax
  size_t v24; // rbx
  unsigned __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // r12
  __int64 v28; // r12
  void *v29; // rdx
  void *v30; // rax
  __m128i v31; // xmm0
  void *v32; // rax
  __m128i v33; // xmm0
  __int64 v34; // rax
  void *v35; // rdi
  size_t v36; // r12
  void *v37; // rdi
  size_t v38; // rbp
  void *v39; // rdi
  size_t v40; // r12
  void *v41; // rdi
  size_t v42; // rdx
  __int64 v43; // rax
  __int64 v44; // r14
  char *v45; // rax
  char *v46; // rbx
  __int64 v47; // r14
  __int64 v48; // r15
  __int64 v49; // rdx
  __m128i v50; // xmm0
  __int64 v51; // rdx
  __m128i v52; // xmm0
  void *v53; // rdi
  void *v54; // rdi
  __int64 v56; // rax
  __int64 v57; // rax
  void *v58; // rax
  char *sa; // [rsp+8h] [rbp-B0h]
  size_t v61; // [rsp+10h] [rbp-A8h]
  size_t v62; // [rsp+10h] [rbp-A8h]
  size_t v64; // [rsp+28h] [rbp-90h]
  void *ptr; // [rsp+30h] [rbp-88h] BYREF
  __m128i v66; // [rsp+38h] [rbp-80h]
  void *dest; // [rsp+48h] [rbp-70h] BYREF
  __m128i v68; // [rsp+50h] [rbp-68h]
  __int64 v69; // [rsp+60h] [rbp-58h] BYREF
  int v70; // [rsp+68h] [rbp-50h]
  unsigned __int64 v71; // [rsp+78h] [rbp-40h]

  v6 = a3;
  v71 = __readfsqword(0x28u);
  v7 = *a1;
  if ( a3 )
  {
    v8 = *(_QWORD *)(v7 + 568);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v7 + 560);
      v10 = 0;
      while ( 1 )
      {
        v11 = haystack;
        if ( *(_QWORD *)(v9 + 32) )
          v11 = *(const char **)(v9 + 24);
        if ( !strcmp(v11, v6) )
          break;
        ++v10;
        v9 += 56;
        if ( v10 == v8 )
          goto LABEL_9;
      }
      v6 = *(const char **)v9;
    }
  }
LABEL_9:
  v12 = (__int64 *)a1[1];
  v13 = &v12[8 * a1[2]];
  if ( v12 == v13 )
    goto LABEL_24;
  v14 = (__int64 *)a1[1];
  while ( 1 )
  {
    v15 = haystack;
    if ( v14[1] )
      v15 = (const char *)*v14;
    if ( !strcmp(v15, v6) )
      break;
    v14 += 8;
    if ( v13 == v14 )
      goto LABEL_24;
  }
  if ( !v14 )
  {
LABEL_24:
    ptr = nullptr;
    dest = nullptr;
    v69 = 0;
    v66 = 0;
    v68 = 0;
    copy_tinfo_t(&v69);
    if ( v6 && (v21 = strlen(v6), (v22 = v21) != 0) )
    {
      v41 = ptr;
      v42 = v21 + 1;
      if ( v66.m128i_i64[1] < v21 + 1 )
      {
        v62 = v21 + 1;
        v64 = v21;
        v58 = (void *)qvector_reserve(&ptr, ptr, v42, 1);
        v22 = v64;
        v42 = v62;
        ptr = v58;
        v41 = v58;
      }
      v66.m128i_i64[0] = v42;
      v61 = v22;
      memmove(v41, v6, v22);
      *((_BYTE *)ptr + v61) = 0;
    }
    else
    {
      v66.m128i_i64[0] = 0;
    }
    if ( a4 && (v23 = strlen((const char *)a4), (v24 = v23) != 0) )
    {
      v39 = dest;
      v40 = v23 + 1;
      if ( v68.m128i_i64[1] < v23 + 1 )
      {
        dest = (void *)qvector_reserve(&dest, dest, v40, 1);
        v39 = dest;
      }
      v68.m128i_i64[0] = v40;
      memmove(v39, a4, v24);
      *((_BYTE *)dest + v24) = 0;
    }
    else
    {
      v68.m128i_i64[0] = 0;
    }
    v25 = a1[3];
    v70 = a5;
    v26 = a1[2];
    if ( v25 < v26 + 1 )
    {
      v43 = qvector_reserve(a1 + 1, 0, v26 + 1, 64);
      v44 = a1[2];
      v27 = v43;
      v45 = (char *)a1[3];
      a1[3] = v25;
      v46 = (char *)a1[1];
      sa = v45;
      v47 = v44 - 1;
      if ( v47 >= 0 )
      {
        v48 = v27;
        do
        {
          v49 = *(_QWORD *)v46;
          v50 = _mm_loadu_si128((const __m128i *)(v46 + 8));
          *(_OWORD *)(v46 + 8) = 0;
          *(_QWORD *)v48 = v49;
          *(__m128i *)(v48 + 8) = v50;
          v51 = *((_QWORD *)v46 + 3);
          v52 = _mm_loadu_si128((const __m128i *)v46 + 2);
          *(_QWORD *)v46 = 0;
          *((_OWORD *)v46 + 2) = 0;
          *(_QWORD *)(v48 + 24) = v51;
          *((_QWORD *)v46 + 3) = 0;
          *(_QWORD *)(v48 + 48) = 0;
          *(__m128i *)(v48 + 32) = v52;
          copy_tinfo_t(v48 + 48);
          *(_DWORD *)(v48 + 56) = *((_DWORD *)v46 + 14);
          clear_tinfo_t(v46 + 48);
          v53 = *((void **)v46 + 3);
          if ( v53 )
          {
            *((_QWORD *)v46 + 4) = 0;
            qfree(v53);
          }
          v54 = *(void **)v46;
          if ( *(_QWORD *)v46 )
          {
            *((_QWORD *)v46 + 1) = 0;
            qfree(v54);
          }
          v46 += 64;
          v48 += 64;
        }
        while ( v47-- != 0 );
        v46 = (char *)a1[1];
      }
      qfree(v46);
      a1[1] = v27;
      a1[3] = (__int64)sa;
      v26 = a1[2];
    }
    else
    {
      v27 = a1[1];
    }
    v28 = (v26 << 6) + v27;
    *(_QWORD *)v28 = 0;
    v29 = ptr;
    *(_OWORD *)(v28 + 8) = 0;
    *(_QWORD *)(v28 + 24) = 0;
    *(_OWORD *)(v28 + 32) = 0;
    *(_QWORD *)(v28 + 48) = 0;
    ++a1[2];
    v30 = *(void **)v28;
    *(_QWORD *)v28 = v29;
    v31 = _mm_loadu_si128((const __m128i *)(v28 + 8));
    ptr = v30;
    *(_QWORD *)(v28 + 8) = v66.m128i_i64[0];
    v32 = *(void **)(v28 + 24);
    *(_QWORD *)(v28 + 16) = v66.m128i_i64[1];
    v66 = v31;
    v33 = _mm_loadu_si128((const __m128i *)(v28 + 32));
    *(_QWORD *)(v28 + 24) = dest;
    dest = v32;
    v34 = *(_QWORD *)(v28 + 48);
    *(__m128i *)(v28 + 32) = v68;
    v68 = v33;
    *(_QWORD *)(v28 + 48) = v69;
    v69 = v34;
    LODWORD(v34) = *(_DWORD *)(v28 + 56);
    *(_DWORD *)(v28 + 56) = v70;
    v70 = v34;
    clear_tinfo_t(&v69);
    if ( dest )
    {
      v68.m128i_i64[0] = 0;
      qfree(dest);
    }
    if ( ptr )
    {
      v66.m128i_i64[0] = 0;
      qfree(ptr);
    }
  }
  else
  {
    copy_tinfo_t(v14 + 6);
    if ( v6 && (v16 = strlen(v6), (v17 = v16) != 0) )
    {
      v35 = (void *)*v14;
      v36 = v16 + 1;
      if ( v14[2] < v16 + 1 )
      {
        v56 = qvector_reserve(v14, *v14, v16 + 1, 1);
        *v14 = v56;
        v35 = (void *)v56;
      }
      v14[1] = v36;
      memmove(v35, v6, v17);
      *(_BYTE *)(*v14 + v17) = 0;
    }
    else
    {
      v14[1] = 0;
    }
    if ( a4 && (v18 = strlen((const char *)a4), (v19 = v18) != 0) )
    {
      v37 = (void *)v14[3];
      v38 = v18 + 1;
      if ( v14[5] < v18 + 1 )
      {
        v57 = qvector_reserve(v14 + 3, v14[3], v38, 1);
        v14[3] = v57;
        v37 = (void *)v57;
      }
      v14[4] = v38;
      memmove(v37, a4, v19);
      *(_BYTE *)(v14[3] + v19) = 0;
    }
    else
    {
      v14[4] = 0;
    }
    *((_DWORD *)v14 + 14) = a5;
  }
  return v71 - __readfsqword(0x28u);
}
