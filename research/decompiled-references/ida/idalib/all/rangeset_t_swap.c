unsigned __int64 __fastcall rangeset_t_swap(__int64 a1, const __m128i **a2, __int64 a3)
{
  int v4; // eax
  const __m128i *v5; // rax
  void *v6; // rdi
  const __m128i *v7; // rdx
  __m128i v8; // xmm0
  const __m128i *v9; // rdx
  const __m128i *v10; // rax
  __int64 v12; // r12
  const __m128i *v13; // r15
  const __m128i *v14; // r12
  __int64 v15; // rax
  __m128i v16; // xmm0
  __m128i v17; // xmm2
  __m128i *v18; // rax
  __m128i v19; // xmm0
  char *v20; // r13
  unsigned __int64 v21; // rdx
  __m128i v22; // xmm0
  __m128i *v23; // rax
  __int64 v24; // rax
  __int64 v25; // r9
  __m128i *v26; // rdi
  __int64 v27; // rdx
  __m128i v28; // xmm0
  bool v29; // cf
  const __m128i *v30; // r13
  unsigned __int64 v31; // rbp
  __int64 v32; // rax
  __m128i v33; // xmm0
  __m128i v34; // xmm2
  __m128i *v35; // rax
  __m128i v36; // xmm0
  char *v37; // r12
  unsigned __int64 v38; // rdx
  __m128i v39; // xmm0
  __m128i *v40; // rax
  __int64 v41; // rax
  __int64 v42; // r9
  __m128i *v43; // rdi
  __int64 v44; // rdx
  __m128i v45; // xmm0
  __int64 v46; // rax
  __int64 v47; // r9
  __m128i *v48; // rdi
  __int64 v49; // rdx
  __int64 v50; // xmm0_8
  __int64 v51; // xmm2_8
  __m128i v52; // xmm1
  __int64 v53; // rax
  __int64 v54; // r9
  __m128i *v55; // rdi
  __int64 v56; // rdx
  __int64 v57; // xmm0_8
  __int64 v58; // xmm2_8
  __m128i v59; // xmm1
  __m128i v60; // [rsp+0h] [rbp-C8h] BYREF
  __m128i v61; // [rsp+10h] [rbp-B8h] BYREF
  __m128i v62; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v63; // [rsp+30h] [rbp-98h]
  __m128i v64; // [rsp+40h] [rbp-88h] BYREF
  __int64 v65; // [rsp+50h] [rbp-78h]
  void *ptr; // [rsp+60h] [rbp-68h] BYREF
  __int128 v67; // [rsp+68h] [rbp-60h]
  int v68; // [rsp+78h] [rbp-50h]
  char v69; // [rsp+7Ch] [rbp-4Ch]
  unsigned __int64 v70; // [rsp+88h] [rbp-40h]

  v4 = *(_DWORD *)(a1 + 32);
  v70 = __readfsqword(0x28u);
  v67 = 0;
  ptr = nullptr;
  v68 = v4;
  if ( v4 == -1 )
  {
    v69 = 0;
    v5 = *a2;
    v6 = nullptr;
    goto LABEL_3;
  }
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
  {
    v6 = ptr;
    v5 = *a2;
    v69 = 0;
    goto LABEL_3;
  }
  v12 = *(_QWORD *)(a1 + 8);
  v13 = *(const __m128i **)a1;
  v69 = 1;
  v14 = &v13[v12];
  if ( v13 >= v14 )
  {
    v5 = *a2;
    v30 = *a2;
    v31 = (unsigned __int64)&(*a2)[(_QWORD)a2[1]];
  }
  else
  {
    v15 = v67;
    v60.m128i_i64[1] = (__int64)&ptr;
    do
    {
      v19 = _mm_loadu_si128(v13);
      v20 = (char *)ptr;
      LOBYTE(v63) = 1;
      v21 = v15 + 1;
      v62 = v19;
      if ( &v62 < ptr || &v62 >= (__m128i *)((char *)ptr + 24 * *((_QWORD *)&v67 + 1)) )
      {
        if ( *((_QWORD *)&v67 + 1) < v21 )
        {
          v60.m128i_i64[0] = *((_QWORD *)&v67 + 1);
          v24 = qvector_reserve(v60.m128i_i64[1], 0, v21, 24);
          v20 = (char *)v24;
          v25 = *((_QWORD *)&v67 + 1);
          v26 = (__m128i *)ptr;
          *((_QWORD *)&v67 + 1) = v60.m128i_i64[0];
          v27 = v67 - 1;
          if ( (__int64)v67 - 1 >= 0 )
          {
            do
            {
              v28 = _mm_loadu_si128(v26);
              v24 += 24;
              v26 = (__m128i *)((char *)v26 + 24);
              *(__m128i *)(v24 - 24) = v28;
              *(_QWORD *)(v24 - 8) = v26[-1].m128i_i64[1];
              v29 = v27-- == 0;
            }
            while ( !v29 );
            v26 = (__m128i *)ptr;
          }
          v60.m128i_i64[0] = v25;
          qfree(v26);
          v15 = v67;
          ptr = v20;
          *((_QWORD *)&v67 + 1) = v60.m128i_i64[0];
        }
        v22 = _mm_load_si128(&v62);
        v23 = (__m128i *)&v20[24 * v15];
        v23[1].m128i_i64[0] = v63;
        *v23 = v22;
      }
      else
      {
        v16 = _mm_loadl_epi64(&v62);
        v17 = _mm_loadl_epi64((const __m128i *)&v62.m128i_u64[1]);
        if ( *((_QWORD *)&v67 + 1) < v21 )
        {
          v61.m128i_i64[1] = *((_QWORD *)&v67 + 1);
          v61.m128i_i64[0] = v17.m128i_i64[0];
          v60.m128i_i64[0] = v16.m128i_i64[0];
          v46 = qvector_reserve(v60.m128i_i64[1], 0, v21, 24);
          v20 = (char *)v46;
          v47 = *((_QWORD *)&v67 + 1);
          v48 = (__m128i *)ptr;
          v49 = v67 - 1;
          *((_QWORD *)&v67 + 1) = v61.m128i_i64[1];
          v50 = v60.m128i_i64[0];
          v51 = v61.m128i_i64[0];
          if ( (__int64)v67 - 1 >= 0 )
          {
            do
            {
              v52 = _mm_loadu_si128(v48);
              v46 += 24;
              v48 = (__m128i *)((char *)v48 + 24);
              *(__m128i *)(v46 - 24) = v52;
              *(_QWORD *)(v46 - 8) = v48[-1].m128i_i64[1];
              v29 = v49-- == 0;
            }
            while ( !v29 );
            v48 = (__m128i *)ptr;
          }
          v61.m128i_i64[1] = v47;
          v61.m128i_i64[0] = v51;
          v60.m128i_i64[0] = v50;
          qfree(v48);
          ptr = v20;
          v15 = v67;
          v17 = _mm_loadl_epi64(&v61);
          *((_QWORD *)&v67 + 1) = v61.m128i_i64[1];
          v16 = _mm_loadl_epi64(&v60);
        }
        v18 = (__m128i *)&v20[24 * v15];
        v18[1].m128i_i8[0] = 1;
        *v18 = _mm_unpacklo_epi64(v16, v17);
      }
      ++v13;
      v15 = v67 + 1;
      *(_QWORD *)&v67 = v67 + 1;
    }
    while ( v13 < v14 );
    v5 = *a2;
    v30 = *a2;
    v31 = (unsigned __int64)&(*a2)[(_QWORD)a2[1]];
    if ( !v69 )
      goto LABEL_44;
  }
  if ( (unsigned __int64)v5 >= v31 )
  {
LABEL_44:
    v6 = ptr;
    goto LABEL_3;
  }
  v32 = v67;
  v60.m128i_i64[1] = (__int64)&ptr;
  do
  {
    v36 = _mm_loadu_si128(v30);
    v37 = (char *)ptr;
    LOBYTE(v65) = 0;
    v38 = v32 + 1;
    v64 = v36;
    if ( &v64 < ptr || &v64 >= (__m128i *)((char *)ptr + 24 * *((_QWORD *)&v67 + 1)) )
    {
      if ( *((_QWORD *)&v67 + 1) < v38 )
      {
        v60.m128i_i64[0] = *((_QWORD *)&v67 + 1);
        v41 = qvector_reserve(v60.m128i_i64[1], 0, v38, 24);
        v37 = (char *)v41;
        v42 = *((_QWORD *)&v67 + 1);
        v43 = (__m128i *)ptr;
        *((_QWORD *)&v67 + 1) = v60.m128i_i64[0];
        v44 = v67 - 1;
        if ( (__int64)v67 - 1 >= 0 )
        {
          do
          {
            v45 = _mm_loadu_si128(v43);
            v41 += 24;
            v43 = (__m128i *)((char *)v43 + 24);
            *(__m128i *)(v41 - 24) = v45;
            *(_QWORD *)(v41 - 8) = v43[-1].m128i_i64[1];
            v29 = v44-- == 0;
          }
          while ( !v29 );
          v43 = (__m128i *)ptr;
        }
        v60.m128i_i64[0] = v42;
        qfree(v43);
        v32 = v67;
        ptr = v37;
        *((_QWORD *)&v67 + 1) = v60.m128i_i64[0];
      }
      v39 = _mm_load_si128(&v64);
      v40 = (__m128i *)&v37[24 * v32];
      v40[1].m128i_i64[0] = v65;
      *v40 = v39;
    }
    else
    {
      v33 = _mm_loadl_epi64(&v64);
      v34 = _mm_loadl_epi64((const __m128i *)&v64.m128i_u64[1]);
      if ( *((_QWORD *)&v67 + 1) < v38 )
      {
        v61.m128i_i64[1] = *((_QWORD *)&v67 + 1);
        v61.m128i_i64[0] = v34.m128i_i64[0];
        v60.m128i_i64[0] = v33.m128i_i64[0];
        v53 = qvector_reserve(&ptr, 0, v38, 24);
        v37 = (char *)v53;
        v54 = *((_QWORD *)&v67 + 1);
        v55 = (__m128i *)ptr;
        v56 = v67 - 1;
        *((_QWORD *)&v67 + 1) = v61.m128i_i64[1];
        v57 = v60.m128i_i64[0];
        v58 = v61.m128i_i64[0];
        if ( (__int64)v67 - 1 >= 0 )
        {
          do
          {
            v59 = _mm_loadu_si128(v55);
            v53 += 24;
            v55 = (__m128i *)((char *)v55 + 24);
            *(__m128i *)(v53 - 24) = v59;
            *(_QWORD *)(v53 - 8) = v55[-1].m128i_i64[1];
            v29 = v56-- == 0;
          }
          while ( !v29 );
          v55 = (__m128i *)ptr;
        }
        v61.m128i_i64[1] = v54;
        v61.m128i_i64[0] = v58;
        v60.m128i_i64[0] = v57;
        qfree(v55);
        ptr = v37;
        v32 = v67;
        v34 = _mm_loadl_epi64(&v61);
        *((_QWORD *)&v67 + 1) = v61.m128i_i64[1];
        v33 = _mm_loadl_epi64(&v60);
      }
      v35 = (__m128i *)&v37[24 * v32];
      v35[1].m128i_i8[0] = 0;
      *v35 = _mm_unpacklo_epi64(v33, v34);
    }
    ++v30;
    v32 = v67 + 1;
    *(_QWORD *)&v67 = v67 + 1;
  }
  while ( (unsigned __int64)v30 < v31 );
  v6 = ptr;
  v5 = *a2;
LABEL_3:
  v7 = *(const __m128i **)a1;
  v8 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  *(_QWORD *)a1 = v5;
  *(_QWORD *)(a1 + 8) = a2[1];
  *(_QWORD *)(a1 + 16) = a2[2];
  *a2 = v7;
  v9 = a2[3];
  *(__m128i *)(a2 + 1) = v8;
  v10 = *(const __m128i **)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v9;
  a2[3] = v10;
  if ( v6 )
  {
    *(_QWORD *)&v67 = 0;
    qfree(v6);
  }
  return v70 - __readfsqword(0x28u);
}
