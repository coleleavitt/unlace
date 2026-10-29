__int64 __fastcall sub_7956C0(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5, __int16 a6)
{
  unsigned int v6; // r14d
  __int64 v10; // rdx
  unsigned int v12; // eax
  unsigned int i; // ebx
  __m128i v14; // xmm0
  __m128i v15; // xmm1
  __m128i *v16; // rax
  void *v17; // r15
  __int64 v18; // rax
  char *v19; // rdx
  unsigned __int64 v20; // rsi
  __m128i v21; // xmm0
  __m128i *v22; // rdx
  __int64 v23; // rax
  char *v24; // rdx
  __int64 v25; // r9
  __m128i *v26; // rdi
  __int64 v27; // rcx
  __int32 v28; // esi
  __int64 v29; // rsi
  __m128i v30; // xmm0
  bool v31; // cf
  char *v32; // rbx
  char *v33; // r15
  unsigned int v34; // r14d
  __int64 v35; // rbx
  __int64 v36; // rbp
  char *v37; // rax
  void *v38; // rdi
  __int64 v39; // rax
  char *v40; // rdx
  char *v41; // r9
  __m128i *v42; // rdi
  __int64 v43; // rcx
  __int64 v44; // xmm1_8
  __int32 v45; // esi
  __int64 v46; // rsi
  __m128i v47; // xmm0
  __int32 v48; // eax
  __int64 v49; // r15
  void *v50; // rbx
  __int64 v51; // rax
  char *v52; // rdx
  unsigned __int64 v53; // rsi
  __m128i v54; // xmm0
  __m128i v55; // xmm1
  __m128i *v56; // rax
  __m128i v57; // xmm0
  __m128i *v58; // rdx
  __int64 v59; // rax
  char *v60; // rdx
  __int64 v61; // r9
  __m128i *v62; // rdi
  __int64 v63; // rcx
  __int32 v64; // esi
  __int64 v65; // rsi
  __m128i v66; // xmm0
  __int64 v67; // rax
  char *v68; // rdx
  __int64 v69; // r9
  __m128i *v70; // rdi
  __int64 v71; // rcx
  __int64 v72; // xmm1_8
  __int64 v73; // xmm4_8
  __int32 v74; // esi
  __int64 v75; // rsi
  __m128i v76; // xmm0
  __int64 v77; // [rsp+0h] [rbp-F0h]
  __int64 nb; // [rsp+8h] [rbp-E8h]
  size_t nc; // [rsp+8h] [rbp-E8h]
  char *nd; // [rsp+8h] [rbp-E8h]
  size_t n; // [rsp+8h] [rbp-E8h]
  char *ne; // [rsp+8h] [rbp-E8h]
  int na; // [rsp+8h] [rbp-E8h]
  __m128i v84; // [rsp+10h] [rbp-E0h] BYREF
  unsigned int v85; // [rsp+20h] [rbp-D0h]
  unsigned int v86; // [rsp+24h] [rbp-CCh]
  char *v87; // [rsp+28h] [rbp-C8h]
  __m128i v88; // [rsp+30h] [rbp-C0h] BYREF
  __int64 v89; // [rsp+40h] [rbp-B0h]
  void *ptr; // [rsp+48h] [rbp-A8h] BYREF
  __int128 v91; // [rsp+50h] [rbp-A0h]
  void *src; // [rsp+68h] [rbp-88h] BYREF
  size_t v93; // [rsp+70h] [rbp-80h]
  unsigned int v94; // [rsp+88h] [rbp-68h] BYREF
  void *v95; // [rsp+90h] [rbp-60h]
  __m128i v96; // [rsp+98h] [rbp-58h] BYREF
  unsigned __int64 v97; // [rsp+B0h] [rbp-40h]

  v6 = a3 + a5;
  v85 = a3;
  v86 = a4;
  v97 = __readfsqword(0x28u);
  v91 = 0;
  ptr = nullptr;
  if ( a3 >= a4 || a4 >= v6 )
  {
    if ( v85 )
      v12 = sub_794710(a1, a2, v85 - 1, a6);
    else
      v12 = sub_7946D0(a1, a2, a6);
    for ( i = v12; i < v6; i = sub_794710(a1, a2, i, a6) )
    {
      sub_794910((__int64)&src, a1, a2, i, a6);
      v94 = i;
      v17 = nullptr;
      v95 = nullptr;
      v96 = 0;
      if ( v93 )
      {
        nb = v93;
        v17 = (void *)qalloc_or_throw(v93, (const char *)a1);
        v95 = v17;
        v96.m128i_i64[1] = nb;
        memcpy(v17, src, nb);
        v96.m128i_i64[0] = nb;
      }
      v18 = v91;
      v19 = (char *)ptr;
      v20 = v91 + 1;
      if ( &v94 < ptr || &v94 >= (unsigned int *)((char *)ptr + 32 * *((_QWORD *)&v91 + 1)) )
      {
        if ( *((_QWORD *)&v91 + 1) < v20 )
        {
          nc = *((_QWORD *)&v91 + 1);
          v23 = qvector_reserve(&ptr, 0, v91 + 1, 32);
          v24 = (char *)v23;
          v25 = *((_QWORD *)&v91 + 1);
          v26 = (__m128i *)ptr;
          *((_QWORD *)&v91 + 1) = nc;
          v27 = v91 - 1;
          if ( (__int64)v91 - 1 >= 0 )
          {
            do
            {
              v28 = v26->m128i_i32[0];
              v23 += 32;
              v26 += 2;
              *(_DWORD *)(v23 - 32) = v28;
              v29 = v26[-2].m128i_i64[1];
              v30 = _mm_loadu_si128(v26 - 1);
              v26[-2].m128i_i64[1] = 0;
              *(_QWORD *)(v23 - 24) = v29;
              *(__m128i *)(v23 - 16) = v30;
              v26[-1].m128i_i64[1] = 0;
              v31 = v27-- == 0;
            }
            while ( !v31 );
            v26 = (__m128i *)ptr;
          }
          v84.m128i_i64[0] = v25;
          nd = v24;
          qfree(v26);
          v19 = nd;
          v18 = v91;
          ptr = nd;
          *((_QWORD *)&v91 + 1) = v84.m128i_i64[0];
        }
        v21 = _mm_load_si128(&v96);
        v22 = (__m128i *)&v19[32 * v18];
        v22->m128i_i32[0] = i;
        v22->m128i_i64[1] = (__int64)v17;
        v22[1] = v21;
      }
      else
      {
        v14 = _mm_loadl_epi64(&v96);
        v15 = _mm_loadl_epi64((const __m128i *)&v96.m128i_u64[1]);
        v95 = nullptr;
        v96 = 0;
        if ( *((_QWORD *)&v91 + 1) < v20 )
        {
          v84.m128i_i64[1] = *((_QWORD *)&v91 + 1);
          v84.m128i_i64[0] = v15.m128i_i64[0];
          n = v14.m128i_i64[0];
          v39 = qvector_reserve(&ptr, 0, v91 + 1, 32);
          v40 = (char *)v39;
          v41 = *((char **)&v91 + 1);
          v42 = (__m128i *)ptr;
          v43 = v91 - 1;
          *((_QWORD *)&v91 + 1) = v84.m128i_i64[1];
          v44 = v84.m128i_i64[0];
          if ( (__int64)v91 - 1 >= 0 )
          {
            do
            {
              v45 = v42->m128i_i32[0];
              v39 += 32;
              v42 += 2;
              *(_DWORD *)(v39 - 32) = v45;
              v46 = v42[-2].m128i_i64[1];
              v47 = _mm_loadu_si128(v42 - 1);
              v42[-2].m128i_i64[1] = 0;
              *(_QWORD *)(v39 - 24) = v46;
              *(__m128i *)(v39 - 16) = v47;
              v42[-1].m128i_i64[1] = 0;
              v31 = v43-- == 0;
            }
            while ( !v31 );
            v42 = (__m128i *)ptr;
            v14.m128i_i64[0] = n;
          }
          v87 = v41;
          ne = v40;
          v84.m128i_i64[1] = v44;
          v84.m128i_i64[0] = v14.m128i_i64[0];
          qfree(v42);
          v19 = ne;
          v18 = v91;
          v15 = _mm_loadl_epi64((const __m128i *)&v84.m128i_u64[1]);
          ptr = ne;
          v14 = _mm_loadl_epi64(&v84);
          *((_QWORD *)&v91 + 1) = v87;
        }
        v16 = (__m128i *)&v19[32 * v18];
        v16->m128i_i32[0] = i;
        v16->m128i_i64[1] = (__int64)v17;
        v16[1] = _mm_unpacklo_epi64(v14, v15);
      }
      *(_QWORD *)&v91 = v91 + 1;
      sub_792400(a1, a2, i, a6);
      if ( src )
      {
        v93 = 0;
        qfree(src);
      }
    }
    v10 = v91;
    v32 = (char *)ptr;
    v33 = (char *)ptr + 32 * v91;
  }
  else
  {
    if ( a2 == -1 )
      return 0;
    v84.m128i_i16[0] = (a6 & 0x800) == 0 ? 10 : 7;
    na = a6 & 0x100;
    v84.m128i_i32[2] = _byteswap_ulong(a2);
LABEL_43:
    if ( !na )
      goto LABEL_46;
LABEL_44:
    if ( unk_2CAA7A8 )
      v6 = unk_2CAA7A8(v6);
LABEL_46:
    while ( 1 )
    {
      v48 = v84.m128i_i32[2];
      *(_BYTE *)(a1 + 52) = a6;
      *(_DWORD *)(a1 + 48) = v48;
      if ( (a6 & 0x800) != 0 )
        *(_BYTE *)(a1 + 53) = v6;
      else
        *(_DWORD *)(a1 + 53) = _byteswap_ulong(v6);
      *(_WORD *)(a1 + 45) = v84.m128i_i16[0];
      v6 = sub_7928A0(a1, a6, a2, 0);
      if ( v6 < v85 || v6 == -1 )
        break;
      sub_794910((__int64)&src, a1, a2, v6, a6);
      v49 = v93;
      v50 = nullptr;
      v94 = v6;
      v95 = nullptr;
      v96 = 0;
      if ( v93 )
      {
        v50 = (void *)qalloc_or_throw(v93, (const char *)a1);
        v95 = v50;
        v96.m128i_i64[1] = v49;
        memcpy(v50, src, v49);
        v96.m128i_i64[0] = v49;
      }
      v51 = v91;
      v52 = (char *)ptr;
      v53 = v91 + 1;
      if ( &v94 < ptr || &v94 >= (unsigned int *)((char *)ptr + 32 * *((_QWORD *)&v91 + 1)) )
      {
        if ( *((_QWORD *)&v91 + 1) < v53 )
        {
          v87 = *((char **)&v91 + 1);
          v59 = qvector_reserve(&ptr, 0, v91 + 1, 32);
          v60 = (char *)v59;
          v61 = *((_QWORD *)&v91 + 1);
          v62 = (__m128i *)ptr;
          *((_QWORD *)&v91 + 1) = v87;
          v63 = v91 - 1;
          if ( (__int64)v91 - 1 >= 0 )
          {
            do
            {
              v64 = v62->m128i_i32[0];
              v59 += 32;
              v62 += 2;
              *(_DWORD *)(v59 - 32) = v64;
              v65 = v62[-2].m128i_i64[1];
              v66 = _mm_loadu_si128(v62 - 1);
              v62[-2].m128i_i64[1] = 0;
              *(_QWORD *)(v59 - 24) = v65;
              *(__m128i *)(v59 - 16) = v66;
              v62[-1].m128i_i64[1] = 0;
              v31 = v63-- == 0;
            }
            while ( !v31 );
            v62 = (__m128i *)ptr;
          }
          v88.m128i_i64[0] = v61;
          v87 = v60;
          qfree(v62);
          v52 = v87;
          v51 = v91;
          ptr = v87;
          *((_QWORD *)&v91 + 1) = v88.m128i_i64[0];
        }
        v57 = _mm_load_si128(&v96);
        v58 = (__m128i *)&v52[32 * v51];
        v58->m128i_i32[0] = v6;
        v58->m128i_i64[1] = (__int64)v50;
        v58[1] = v57;
      }
      else
      {
        v54 = _mm_loadl_epi64(&v96);
        v55 = _mm_loadl_epi64((const __m128i *)&v96.m128i_u64[1]);
        v95 = nullptr;
        v96 = 0;
        if ( *((_QWORD *)&v91 + 1) < v53 )
        {
          v88.m128i_i64[1] = *((_QWORD *)&v91 + 1);
          v88.m128i_i64[0] = v55.m128i_i64[0];
          v87 = (char *)v54.m128i_i64[0];
          v67 = qvector_reserve(&ptr, 0, v91 + 1, 32);
          v68 = (char *)v67;
          v69 = *((_QWORD *)&v91 + 1);
          v70 = (__m128i *)ptr;
          v71 = v91 - 1;
          *((_QWORD *)&v91 + 1) = v88.m128i_i64[1];
          v72 = v88.m128i_i64[0];
          if ( (__int64)v91 - 1 >= 0 )
          {
            v73 = (__int64)v87;
            do
            {
              v74 = v70->m128i_i32[0];
              v67 += 32;
              v70 += 2;
              *(_DWORD *)(v67 - 32) = v74;
              v75 = v70[-2].m128i_i64[1];
              v76 = _mm_loadu_si128(v70 - 1);
              v70[-2].m128i_i64[1] = 0;
              *(_QWORD *)(v67 - 24) = v75;
              *(__m128i *)(v67 - 16) = v76;
              v70[-1].m128i_i64[1] = 0;
              v31 = v71-- == 0;
            }
            while ( !v31 );
            v70 = (__m128i *)ptr;
            v54.m128i_i64[0] = v73;
          }
          v89 = v69;
          v87 = v68;
          v88.m128i_i64[1] = v72;
          v88.m128i_i64[0] = v54.m128i_i64[0];
          qfree(v70);
          v52 = v87;
          v51 = v91;
          v55 = _mm_loadl_epi64((const __m128i *)&v88.m128i_u64[1]);
          ptr = v87;
          v54 = _mm_loadl_epi64(&v88);
          *((_QWORD *)&v91 + 1) = v89;
        }
        v56 = (__m128i *)&v52[32 * v51];
        v56->m128i_i32[0] = v6;
        v56->m128i_i64[1] = (__int64)v50;
        v56[1] = _mm_unpacklo_epi64(v54, v55);
      }
      *(_QWORD *)&v91 = v91 + 1;
      sub_792400(a1, a2, v6, a6);
      if ( !src )
        goto LABEL_43;
      v93 = 0;
      qfree(src);
      if ( na )
        goto LABEL_44;
    }
    v10 = v91;
    v32 = (char *)ptr;
    v33 = (char *)ptr + 32 * v91;
  }
  v34 = v86 - v85;
  if ( v32 != v33 )
  {
    do
    {
      sub_791DB0((const char *)a1, a2, v34 + *(_DWORD *)v32, *((const char **)v32 + 1), *((_QWORD *)v32 + 2), a6);
      v32 += 32;
    }
    while ( v33 != v32 );
    v10 = v91;
    v33 = (char *)ptr;
  }
  if ( v33 )
  {
    if ( v10 )
    {
      v35 = 0;
      v36 = v10;
      do
      {
        v37 = &v33[32 * v35];
        v38 = *((void **)v37 + 1);
        if ( v38 )
        {
          *((_QWORD *)v37 + 2) = 0;
          qfree(v38);
          v33 = (char *)ptr;
        }
        ++v35;
      }
      while ( v35 != v36 );
      v10 = v36;
    }
    v77 = v10;
    *(_QWORD *)&v91 = 0;
    qfree(v33);
    return v77;
  }
  return v10;
}

