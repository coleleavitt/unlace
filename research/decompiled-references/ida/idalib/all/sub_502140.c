__int64 __fastcall sub_502140(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        double a7,
        double a8,
        __m128 a9,
        int a10)
{
  char v15; // dl
  int v17; // ebp
  int v18; // r12d
  bool v19; // zf
  __m128i v20; // xmm0
  __m128 *v21; // rsi
  __int64 v22; // rax
  Elf64_Sym *v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // r9
  __m128 *v28; // rdi
  __int64 v29; // r12
  __m128i v30; // xmm0
  __m128i v31; // xmm0
  char v32; // dl
  void *v33; // rdi
  unsigned __int8 v34; // dl
  __int64 v35; // r8
  __int64 v36; // rdx
  __m128 *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  Elf64_Sym *v40; // r8
  __int64 v41; // rdx
  __m128 *v42; // rdi
  __int64 v43; // rax
  __m128i v44; // xmm0
  char v45; // dl
  void *v46; // rdi
  __int64 v47; // rdx
  Elf64_Sym *v48; // r8
  __int64 v49; // rax
  unsigned __int64 v50; // rbx
  void *v51; // rbp
  __m128 *v52; // rdi
  __m128i v53; // xmm0
  __m128i *v54; // rax
  void *v55; // rdi
  int v56; // ebp
  unsigned __int64 v57; // r13
  int v58; // r12d
  __int64 v59; // rax
  __int64 v60; // rdx
  char v61; // dl
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rsi
  __m128 *v65; // r12
  __int64 v66; // r9
  __int64 v67; // rax
  __int64 v68; // r8
  __int64 v69; // r13
  __int64 v70; // rax
  __int64 v71; // rdx
  __m128i v72; // [rsp+0h] [rbp-A8h] BYREF
  __m128i v73; // [rsp+10h] [rbp-98h] BYREF
  __m128i v74; // [rsp+20h] [rbp-88h] BYREF
  __int64 v75; // [rsp+38h] [rbp-70h]
  _BYTE src[24]; // [rsp+40h] [rbp-68h] BYREF
  char v77; // [rsp+58h] [rbp-50h]
  unsigned __int64 v78; // [rsp+68h] [rbp-40h]

  v15 = *(_BYTE *)(a3 + 1);
  v78 = __readfsqword(0x28u);
  if ( v15 != 3 )
  {
    if ( v15 != 4 )
    {
      if ( v15 == 2 )
      {
        *(_BYTE *)(a2 + 24) = 10;
        v17 = 0;
        *(_QWORD *)(a2 + 8) = 0;
        v18 = *(unsigned __int16 *)(a4 + 24);
        v19 = *(_BYTE *)(a4 + 81) == 5;
        *(_WORD *)&src[16] = *(_WORD *)(a4 + 24);
        v20 = (__m128i)_mm_loadh_ps((const double *)(a4 + 16));
        *(__m128i *)src = v20;
        if ( v19 )
          v17 = *(_BYTE *)(a4 + 121) == 0;
        v21 = *(__m128 **)a2;
        *(_WORD *)&src[18] = v17;
        v22 = *(_QWORD *)(a2 + 16);
        if ( src >= (_BYTE *)v21 && src < (_BYTE *)v21 + 24 * v22 )
        {
          if ( !v22 )
          {
            v72 = v20;
            v62 = qvector_reserve(a2, v21, 1, 24);
            v63 = *(_QWORD *)(a2 + 8);
            v20 = _mm_load_si128(&v72);
            *(_QWORD *)a2 = v62;
            v21 = (__m128 *)(v62 + 24 * v63);
          }
          *v21 = (__m128)v20;
          v21[1].m128_i32[0] = v18 | (v17 << 16);
LABEL_10:
          ++*(_QWORD *)(a2 + 8);
          return 1;
        }
LABEL_7:
        if ( !v22 )
        {
          v59 = qvector_reserve(a2, v21, 1, 24);
          v60 = *(_QWORD *)(a2 + 8);
          *(_QWORD *)a2 = v59;
          v21 = (__m128 *)(v59 + 24 * v60);
        }
        *(__m128i *)v21 = _mm_load_si128((const __m128i *)src);
        v21[1].m128_u64[0] = *(_QWORD *)&src[16];
        goto LABEL_10;
      }
      if ( !under_debugger )
        interr(2950);
LABEL_87:
      BUG();
    }
    v24 = &stru_10000;
    v25 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) + 24LL) - 1);
    if ( (unsigned int)v25 <= 7 )
    {
      LODWORD(v24) = dword_23AE1C0[v25];
      if ( (_DWORD)v24 != (_DWORD)&stru_10000 )
        LODWORD(v24) = (unsigned int)v24 | *(unsigned __int16 *)(a3 + 6);
    }
    v72.m128i_i64[0] = (__int64)src;
    v26 = a1;
    sub_5001E0((__int64)src, a1, a5, a6, (unsigned __int32)v24, a10, 0);
    v28 = *(__m128 **)a2;
    v29 = *(_QWORD *)src;
    memset(src, 0, sizeof(src));
    v30 = _mm_loadu_si128((const __m128i *)&src[8]);
    if ( v28 )
    {
      *(_QWORD *)(a2 + 8) = 0;
      v73 = v30;
      qfree(v28);
      v31 = _mm_load_si128(&v73);
      v32 = v77;
      *(_QWORD *)a2 = v29;
      v33 = *(void **)src;
      *(_BYTE *)(a2 + 24) = v32;
      *(__m128i *)(a2 + 8) = v31;
      if ( v33 )
      {
        *(_QWORD *)&src[8] = 0;
        qfree(v33);
        v32 = *(_BYTE *)(a2 + 24);
      }
    }
    else
    {
      v32 = v77;
      *(_QWORD *)a2 = v29;
      *(__m128i *)(a2 + 8) = v30;
      *(_BYTE *)(a2 + 24) = v32;
    }
    if ( !v32 )
    {
      if ( !under_debugger )
        interr(2910);
      goto LABEL_87;
    }
    if ( (unsigned __int8)(v32 - 1) <= 1u )
      return 1;
    if ( (unsigned __int8)(v32 - 3) > 6u )
    {
      v34 = v32 - 10;
      if ( v34 > 3u )
        return 1;
      v35 = *(_QWORD *)(a3 + 16);
      if ( v35 )
      {
        v36 = *(_QWORD *)(a2 + 8);
        memset(src, 0, sizeof(src));
        if ( v36 )
        {
          v73.m128i_i64[0] = v35;
          *(_QWORD *)src = qvector_reserve(v72.m128i_i64[0], 0, v36, 8);
          v64 = *(_QWORD *)src;
          v65 = *(__m128 **)a2;
          v66 = *(_QWORD *)a2 + 24LL * *(_QWORD *)(a2 + 8);
          if ( *(_QWORD *)a2 != v66 )
          {
            v67 = *(_QWORD *)&src[8];
            v68 = v73.m128i_i64[0];
            while ( 1 )
            {
              v69 = v68 + v65->m128_u64[0];
              v75 = v69;
              if ( *(_QWORD *)&src[16] < (unsigned __int64)(v67 + 1) )
              {
                v74.m128i_i64[0] = v66;
                v73.m128i_i64[0] = v68;
                *(_QWORD *)src = qvector_reserve(v72.m128i_i64[0], v64, v67 + 1, 8);
                v64 = *(_QWORD *)src;
                v66 = v74.m128i_i64[0];
                v67 = *(_QWORD *)&src[8];
                v68 = v73.m128i_i64[0];
              }
              *(_QWORD *)(v64 + 8 * v67) = v69;
              v65 = (__m128 *)((char *)v65 + 24);
              v67 = ++*(_QWORD *)&src[8];
              if ( (__m128 *)v66 == v65 )
                break;
              v64 = *(_QWORD *)src;
            }
          }
        }
        v26 = v72.m128i_i64[0];
        sub_4F7DC0((__int64 *)a2, v72.m128i_i64[0], a4, 0.0, 0.0, a9);
        if ( *(_QWORD *)src )
        {
          *(_QWORD *)&src[8] = 0;
          qfree(*(void **)src);
        }
        v34 = *(_BYTE *)(a2 + 24) - 10;
      }
      goto LABEL_27;
    }
    goto LABEL_61;
  }
  v40 = &stru_10000;
  v41 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) + 24LL) - 1);
  if ( (unsigned int)v41 <= 7 )
  {
    LODWORD(v40) = dword_23AE1C0[v41];
    if ( (_DWORD)v40 != (_DWORD)&stru_10000 )
      LODWORD(v40) = (unsigned int)v40 | *(unsigned __int16 *)(a3 + 6);
  }
  v72.m128i_i64[0] = (__int64)src;
  sub_5001E0((__int64)src, a1, a5, a6, (unsigned __int32)v40, a10, 0);
  v42 = *(__m128 **)a2;
  v43 = *(_QWORD *)src;
  memset(src, 0, sizeof(src));
  v44 = _mm_loadu_si128((const __m128i *)&src[8]);
  if ( v42 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    v73.m128i_i64[0] = v43;
    v74 = v44;
    qfree(v42);
    v44 = _mm_load_si128(&v74);
    v45 = v77;
    v46 = *(void **)src;
    *(_QWORD *)a2 = v73.m128i_i64[0];
    v73.m128i_i64[0] = a2 + 8;
    *(_BYTE *)(a2 + 24) = v45;
    *(__m128i *)(a2 + 8) = v44;
    if ( v46 )
    {
      *(_QWORD *)&src[8] = 0;
      qfree(v46);
      v45 = *(_BYTE *)(a2 + 24);
    }
  }
  else
  {
    v45 = v77;
    *(_QWORD *)a2 = v43;
    v73.m128i_i64[0] = a2 + 8;
    *(_BYTE *)(a2 + 24) = v45;
    *(__m128i *)(a2 + 8) = v44;
  }
  if ( !v45 )
  {
    if ( !under_debugger )
      interr(2948);
    goto LABEL_87;
  }
  if ( (unsigned __int8)(v45 - 1) <= 1u )
    return 1;
  if ( (unsigned __int8)(v45 - 3) <= 6u )
    goto LABEL_61;
  v47 = *(_QWORD *)(a3 + 8);
  v48 = &stru_10000;
  v49 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) + 24LL) - 1);
  if ( (unsigned int)v49 <= 7 )
  {
    LODWORD(v48) = dword_23AE1C0[v49];
    if ( (_DWORD)v48 != (_DWORD)&stru_10000 )
    {
      LODWORD(v48) = v47 | (unsigned int)v48;
      if ( (unsigned int)v47 >= (unsigned int)&stru_10000 )
        v48 = &stru_10000;
    }
  }
  sub_5001E0(v72.m128i_i64[0], a1, a5, a6, (unsigned __int32)v48, a10, 0);
  if ( !v77 )
  {
    if ( !under_debugger )
      interr(2949);
    goto LABEL_87;
  }
  if ( (unsigned __int8)(v77 - 1) > 1u )
  {
    if ( (unsigned __int8)(v77 - 3) > 6u )
    {
      v26 = v72.m128i_i64[0];
      sub_4F8890(a2, v72.m128i_i64[0], a4, *(double *)v44.m128i_i64, 0.0, a9);
      v61 = *(_BYTE *)(a2 + 24);
      if ( (unsigned __int8)(v61 - 3) > 6u )
      {
        if ( *(_QWORD *)src )
        {
          *(_QWORD *)&src[8] = 0;
          qfree(*(void **)src);
          v61 = *(_BYTE *)(a2 + 24);
        }
        v34 = v61 - 10;
LABEL_27:
        if ( v34 <= 1u )
        {
          v37 = *(__m128 **)a2;
          v38 = 3LL * *(_QWORD *)(a2 + 8);
          v39 = *(_QWORD *)a2 + 24LL * *(_QWORD *)(a2 + 8);
          if ( *(_QWORD *)a2 != v39 )
          {
            v26 = *(_QWORD *)(a1 + 8);
            do
            {
              v38 = *(_QWORD *)(*(_QWORD *)(v26 + 32) + 16LL);
              v37->m128_u64[0] &= v38;
              v37 = (__m128 *)((char *)v37 + 24);
            }
            while ( (__m128 *)v39 != v37 );
          }
          sub_4FB280(a2, v26, v38, v39, v35, v27);
        }
        return 1;
      }
    }
    if ( *(_QWORD *)src )
    {
      *(_QWORD *)&src[8] = 0;
      qfree(*(void **)src);
    }
LABEL_61:
    *(_BYTE *)(a2 + 24) = 4;
    v56 = 0;
    *(_QWORD *)(a2 + 8) = 0;
    v57 = *(_QWORD *)(a4 + 16);
    v58 = *(unsigned __int16 *)(a4 + 24);
    v19 = *(_BYTE *)(a4 + 81) == 5;
    *(_QWORD *)src = -1;
    *(_QWORD *)&src[8] = v57;
    *(_WORD *)&src[16] = v58;
    if ( v19 )
      v56 = *(_BYTE *)(a4 + 121) == 0;
    v21 = *(__m128 **)a2;
    *(_WORD *)&src[18] = v56;
    v22 = *(_QWORD *)(a2 + 16);
    if ( v72.m128i_i64[0] >= (unsigned __int64)v21 && v72.m128i_i64[0] < (unsigned __int64)v21 + 24 * v22 )
    {
      if ( !v22 )
      {
        v70 = qvector_reserve(a2, v21, 1, 24);
        v71 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = v70;
        v21 = (__m128 *)(v70 + 24 * v71);
      }
      v21->m128_u64[0] = -1;
      v21->m128_u64[1] = v57;
      v21[1].m128_i32[0] = v58 | (v56 << 16);
      goto LABEL_10;
    }
    goto LABEL_7;
  }
  v50 = *(_QWORD *)&src[8];
  v51 = nullptr;
  if ( *(_QWORD *)&src[8] )
  {
    v51 = (void *)qalloc_or_throw(24LL * *(_QWORD *)&src[8]);
    memcpy(v51, *(const void **)src, 24 * v50);
  }
  v52 = *(__m128 **)a2;
  v53 = _mm_unpacklo_epi64((__m128i)v50, (__m128i)v50);
  if ( *(_QWORD *)a2 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    v72 = v53;
    qfree(v52);
    v53 = _mm_load_si128(&v72);
  }
  v54 = (__m128i *)v73.m128i_i64[0];
  v55 = *(void **)src;
  *(_QWORD *)a2 = v51;
  *v54 = v53;
  *(_BYTE *)(a2 + 24) = v77;
  if ( v55 )
  {
    *(_QWORD *)&src[8] = 0;
    qfree(v55);
  }
  return 1;
}
