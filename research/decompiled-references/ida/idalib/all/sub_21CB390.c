_DWORD *__fastcall sub_21CB390(__int64 a1, int a2, _DWORD *a3, __int32 a4)
{
  _DWORD *v4; // rbx
  unsigned __int64 v5; // rdi
  _QWORD *v6; // r15
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rbp
  __int64 v13; // rdx
  __m128i *v14; // r12
  __m128i *v15; // rsi
  unsigned int v16; // ebp
  __int64 v17; // rax
  __m128i *v18; // r13
  __m128i *v19; // rbx
  __m128i v20; // xmm2
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // r12
  signed __int64 v24; // rdx
  __int64 v25; // rdi
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rsi
  __m128i *v28; // rax
  __int64 v29; // rcx
  __m128i v30; // xmm4
  __int8 *v31; // rdx
  const __m128i *v32; // rdx
  __m128i *v33; // rcx
  __m128i v34; // xmm1
  _QWORD **v35; // r13
  __int64 v36; // rax
  char *v37; // r10
  __int64 v38; // r14
  __int64 v39; // rdx
  char *v40; // rax
  __m128i v41; // xmm0
  int v42; // eax
  _QWORD *v43; // rbp
  __m128 v44; // xmm0
  int v45; // eax
  __m128 v46; // xmm0
  void *v47; // rdi
  __int64 v49; // rbp
  void *v50; // rcx
  __int64 v51; // r14
  __m128 v52; // xmm0
  void *v53; // rax
  _QWORD *v54; // rbp
  void *v55; // rdi
  void *v56; // rbp
  void *v57; // rdi
  _QWORD **v58; // rbp
  _QWORD **v59; // r12
  unsigned int v60; // edx
  __int64 v61; // rax
  __m128i v62; // [rsp+0h] [rbp-128h] BYREF
  unsigned __int64 v63; // [rsp+10h] [rbp-118h]
  unsigned __int64 v64; // [rsp+18h] [rbp-110h] BYREF
  signed __int64 v65; // [rsp+20h] [rbp-108h]
  _DWORD *v66; // [rsp+28h] [rbp-100h] BYREF
  __int64 v67; // [rsp+30h] [rbp-F8h]
  __int64 v68; // [rsp+38h] [rbp-F0h]
  __int64 v69; // [rsp+40h] [rbp-E8h]
  int v70; // [rsp+4Ch] [rbp-DCh]
  void *v71; // [rsp+58h] [rbp-D0h] BYREF
  char v72[8]; // [rsp+60h] [rbp-C8h] BYREF
  int v73; // [rsp+68h] [rbp-C0h] BYREF
  void *v74; // [rsp+70h] [rbp-B8h]
  int *v75; // [rsp+78h] [rbp-B0h]
  int *v76; // [rsp+80h] [rbp-A8h]
  __int64 v77; // [rsp+88h] [rbp-A0h]
  void *v78[2]; // [rsp+90h] [rbp-98h]
  __int64 v79; // [rsp+A0h] [rbp-88h]
  void *v80; // [rsp+A8h] [rbp-80h]
  __int128 v81; // [rsp+B0h] [rbp-78h]
  __int128 v82; // [rsp+C0h] [rbp-68h]
  __int64 v83; // [rsp+D0h] [rbp-58h]
  __int64 v84; // [rsp+D8h] [rbp-50h]
  __int64 v85; // [rsp+E0h] [rbp-48h]

  v4 = a3;
  v62.m128i_i64[0] = a1;
  v62.m128i_i32[2] = a4;
  if ( a2 > 3 )
  {
    v5 = (unsigned int)(8 * (3 * a3[2] + *a3 + 2));
    v63 = (unsigned int)v5;
    v6 = (_QWORD *)operator new(v5);
    memset(v6, 0, (unsigned int)v5);
    v7 = (unsigned __int64)(unsigned int)v5 >> 3;
    if ( v7 )
    {
      if ( v7 - 5 > 0xFFFFFFFA )
      {
        v60 = 0;
        v61 = 0;
        do
        {
          v6[v61] = *(_QWORD *)&v4[2 * v61];
          v61 = ++v60;
        }
        while ( v60 < v7 );
      }
      else
      {
        v8 = 0;
        v9 = 0;
        v10 = v63 >> 4;
        do
        {
          ++v9;
          *(__m128i *)&v6[v8 / 2] = _mm_loadu_si128((const __m128i *)&v4[v8]);
          v8 += 4LL;
        }
        while ( v9 < v10 );
        if ( 2 * v10 != v7 )
          v6[2 * v10] = *(_QWORD *)&v4[4 * v10];
      }
    }
    v11 = v6[1];
    v12 = 0;
    v13 = 0;
    v14 = nullptr;
    if ( v11 )
    {
      v66 = v4;
      v15 = nullptr;
      v16 = 0;
      v17 = 0;
      v18 = nullptr;
      v19 = nullptr;
      while ( 1 )
      {
        while ( 1 )
        {
          v21 = *v6 + 3 * v17;
          v22 = (__int64)&v6[v21 + 2];
          v23 = *(_QWORD *)v22;
          if ( v18 == v15 )
            break;
          v20 = _mm_loadu_si128((const __m128i *)&v6[v21 + 3]);
          v18->m128i_i32[0] = v23;
          v18 = (__m128i *)((char *)v18 + 24);
          v17 = ++v16;
          v18[-1] = v20;
          if ( (unsigned __int64)v16 >= v6[1] )
            goto LABEL_22;
        }
        v24 = (char *)v18 - (char *)v19;
        v25 = ((char *)v18 - (char *)v19) >> 3;
        if ( 0xAAAAAAAAAAAAAAABLL * v25 )
        {
          v26 = 0x5555555555555556LL * v25;
          v27 = -16;
          if ( 0xAAAAAAAAAAAAAAABLL * v25 <= 0x5555555555555556LL * v25 && v26 <= 0xAAAAAAAAAAAAAAALL )
          {
            if ( !v26 )
            {
              v29 = 24;
              v15 = nullptr;
              v28 = nullptr;
              goto LABEL_15;
            }
            v27 = 16 * v25;
          }
        }
        else
        {
          v27 = 24;
        }
        v65 = (char *)v18 - (char *)v19;
        v64 = v27;
        v28 = (__m128i *)operator new(v27);
        v24 = (char *)v18 - (char *)v19;
        v29 = (__int64)&v28[1].m128i_i64[1];
        v15 = (__m128i *)((char *)v28 + v27);
LABEL_15:
        v30 = _mm_loadu_si128((const __m128i *)(v22 + 8));
        v31 = &v28->m128i_i8[v24];
        *(_DWORD *)v31 = v23;
        *(__m128i *)(v31 + 8) = v30;
        if ( v18 == v19 )
        {
          v18 = (__m128i *)v29;
        }
        else
        {
          v32 = v19;
          v33 = v28;
          do
          {
            v34 = _mm_loadu_si128(v32);
            v32 = (const __m128i *)((char *)v32 + 24);
            v33 = (__m128i *)((char *)v33 + 24);
            *(__m128i *)((char *)v33 - 24) = v34;
            v33[-1].m128i_i64[1] = v32[-1].m128i_i64[1];
          }
          while ( v18 != v32 );
          v18 = (__m128i *)((char *)v28
                          + 24
                          * ((0xAAAAAAAAAAAAAABLL
                            * ((unsigned __int64)((char *)&v18[-2].m128i_u64[1] - (char *)v19) >> 3))
                           & 0x1FFFFFFFFFFFFFFFLL)
                          + 48);
        }
        if ( v19 )
        {
          v65 = (signed __int64)v15;
          v64 = (unsigned __int64)v28;
          operator delete(v19);
          v28 = (__m128i *)v64;
        }
        v19 = v28;
        v17 = ++v16;
        if ( (unsigned __int64)v16 >= v6[1] )
        {
LABEL_22:
          v14 = v19;
          v4 = v66;
          v13 = (__int64)v18;
          v12 = (char *)v18 - (char *)v14;
          v11 = 0xAAAAAAAAAAAAAAABLL * (((char *)v18 - (char *)v14) >> 3);
          break;
        }
      }
    }
    v67 = v6[2];
    v68 = v6[3];
    v66 = (_DWORD *)v6[4];
    v69 = v6[6];
    v64 = v6[5];
    v65 = v6[7];
    if ( v62.m128i_i8[8] )
    {
      v70 = 1;
      v35 = (_QWORD **)(v62.m128i_i64[0] + 152);
    }
    else
    {
      v35 = (_QWORD **)(v62.m128i_i64[0] + 144);
      v70 = 0;
    }
    v62.m128i_i64[1] = v13;
    v62.m128i_i64[0] = v11;
    v36 = operator new(0x58u);
    v37 = nullptr;
    v38 = v36;
    LODWORD(v36) = v70;
    v39 = v62.m128i_i64[1];
    *(_OWORD *)(v38 + 8) = 0;
    *(_DWORD *)v38 = v36;
    *(_QWORD *)(v38 + 24) = 0;
    if ( !v11 )
      goto LABEL_28;
    if ( v11 <= 0xAAAAAAAAAAAAAAALL )
    {
      v62.m128i_i64[0] = v39;
      v40 = (char *)operator new(v12);
      v39 = v62.m128i_i64[0];
      v37 = v40;
LABEL_28:
      v62.m128i_i64[0] = (__int64)v37;
      v41 = _mm_loadl_epi64(&v62);
      *(_QWORD *)(v38 + 24) = &v37[v12];
      *(__m128i *)(v38 + 8) = _mm_unpacklo_epi64(v41, v41);
      if ( v14 != (__m128i *)v39 )
        v37 = (char *)memcpy(v37, v14, 8 * ((unsigned __int64)(v39 - 24 - (_QWORD)v14) >> 3) + 24)
            + 8 * ((unsigned __int64)(v39 - 24 - (_QWORD)v14) >> 3)
            + 24;
      v42 = v68;
      *(_QWORD *)(v38 + 16) = v37;
      v43 = *v35;
      *(_BYTE *)(v38 + 72) = 0;
      v44 = _mm_loadh_ps((const double *)&v64);
      *(_DWORD *)(v38 + 64) = v42;
      v45 = v67;
      *(__m128 *)(v38 + 32) = v44;
      *(_DWORD *)(v38 + 68) = v45;
      v46 = _mm_loadh_ps((const double *)&v66);
      *(_QWORD *)(v38 + 80) = 0;
      *(__m128 *)(v38 + 48) = v46;
      *v35 = (_QWORD *)v38;
      if ( v43 )
      {
        v47 = (void *)v43[1];
        if ( v47 )
          operator delete(v47);
        operator delete(v43, 0x58u);
      }
      v4 = (_DWORD *)((char *)v4 + v63);
      if ( v14 )
        operator delete(v14);
      operator delete(v6);
      return v4;
    }
LABEL_67:
    std::__throw_bad_alloc();
  }
  v49 = 4LL * (_QWORD)&word_10;
  if ( (4 * (__int64)&word_10) >> 2 )
  {
    if ( (unsigned __int64)((4 * (__int64)&word_10) >> 2) > 0x3FFFFFFFFFFFFFFFLL )
      goto LABEL_67;
    v50 = (void *)operator new(4LL * (_QWORD)&word_10);
  }
  else
  {
    v50 = nullptr;
  }
  v51 = (__int64)v50 + v49;
  if ( v49 )
    memmove(v50, &unk_26F78C0, 4LL * (_QWORD)&word_10);
  v62.m128i_i64[1] = v51;
  v75 = &v73;
  v76 = &v73;
  v52 = _mm_loadh_ps((const double *)&v62.m128i_i64[1]);
  v73 = 0;
  *(__m128 *)v78 = v52;
  v74 = nullptr;
  v77 = 0;
  v79 = v51;
  v80 = nullptr;
  v81 = 0;
  v82 = 0;
  v83 = 0;
  v84 = 0;
  v85 = 0;
  sub_21E7A50(&v71, v72);
  v53 = v71;
  v71 = nullptr;
  v54 = *(_QWORD **)(v62.m128i_i64[0] + 144);
  *(_QWORD *)(v62.m128i_i64[0] + 144) = v53;
  if ( v54 )
  {
    v55 = (void *)v54[1];
    if ( v55 )
      operator delete(v55);
    operator delete(v54, 0x58u);
    v56 = v71;
    if ( v71 )
    {
      v57 = *((void **)v71 + 1);
      if ( v57 )
        operator delete(v57);
      operator delete(v56, 0x58u);
    }
  }
  if ( v80 )
    operator delete(v80);
  if ( v78[0] )
    operator delete(v78[0]);
  v58 = (_QWORD **)v74;
  if ( v74 )
  {
    do
    {
      sub_21CB350((__int64)v72, v58[3]);
      v59 = (_QWORD **)v58[2];
      operator delete(v58);
      v58 = v59;
    }
    while ( v59 );
  }
  return v4;
}
