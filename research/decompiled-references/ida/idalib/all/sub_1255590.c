__int64 __fastcall sub_1255590(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, int a5)
{
  _QWORD *v6; // r8
  __int64 v7; // rax
  unsigned __int64 v10; // rsi
  const __m128i *v11; // rax
  const __m128i *v12; // rdx
  unsigned __int64 v13; // rdi
  const __m128i *v14; // rsi
  const __m128i *v15; // rcx
  const __m128i *v16; // rax
  unsigned int v17; // r13d
  unsigned __int64 v19; // rbx
  __m128 v20; // xmm0
  _QWORD *v21; // rax
  _QWORD *v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // r14
  unsigned __int64 v25; // rbx
  void *v26; // rcx
  _QWORD *v27; // r14
  _QWORD *v28; // rbx
  void *v29; // rdi
  __m128i *v30; // rdi
  const __m128i *v31; // rdx
  unsigned __int64 v32; // rdi
  __m128i *v33; // rax
  __int64 *v34; // rcx
  __m128 v35; // xmm0
  _QWORD *v36; // rax
  _QWORD *v37; // rdx
  const __m128i **v38; // rsi
  __int64 v39; // rax
  _QWORD *v41; // [rsp+8h] [rbp-140h] BYREF
  const __m128i *v42[3]; // [rsp+10h] [rbp-138h] BYREF
  unsigned __int64 v43; // [rsp+28h] [rbp-120h]
  __m128 v44; // [rsp+30h] [rbp-118h]
  __m128 v45; // [rsp+40h] [rbp-108h]
  const __m128i **v46; // [rsp+50h] [rbp-F8h]
  void *v47; // [rsp+58h] [rbp-F0h]
  __int128 v48; // [rsp+60h] [rbp-E8h]
  __int64 v49; // [rsp+70h] [rbp-D8h]
  __int64 v50; // [rsp+78h] [rbp-D0h]
  int v51; // [rsp+80h] [rbp-C8h]
  unsigned __int8 v52; // [rsp+84h] [rbp-C4h]
  void *v53[3]; // [rsp+90h] [rbp-B8h] BYREF
  unsigned __int64 v54; // [rsp+A8h] [rbp-A0h]
  __m128 v55; // [rsp+B0h] [rbp-98h]
  __m128 v56; // [rsp+C0h] [rbp-88h]
  __int64 v57; // [rsp+D0h] [rbp-78h]
  void *v58; // [rsp+D8h] [rbp-70h]
  __int128 v59; // [rsp+E0h] [rbp-68h]
  void *v60[2]; // [rsp+F0h] [rbp-58h]
  __int64 v61; // [rsp+100h] [rbp-48h]
  void *v62; // [rsp+108h] [rbp-40h]
  __int64 v63; // [rsp+110h] [rbp-38h]
  int v64; // [rsp+118h] [rbp-30h]

  v6 = (_QWORD *)a4[2];
  if ( !v6 )
    return 0;
  v7 = v6[5];
  *(_QWORD *)(a3 + 24) = a1;
  v10 = (unsigned int)(v7 + 3);
  v11 = *(const __m128i **)a3;
  v12 = *(const __m128i **)(a3 + 8);
  v13 = 0xAAAAAAAAAAAAAAABLL * (((char *)v12 - (char *)v11) >> 3);
  if ( v10 > v13 )
  {
    v41 = a4;
    sub_124FCD0((const __m128i **)a3, v10 - v13);
    a4 = v41;
    v11 = *(const __m128i **)a3;
    v12 = *(const __m128i **)(a3 + 8);
    v6 = (_QWORD *)v41[2];
  }
  else if ( v10 < v13 )
  {
    v14 = (const __m128i *)((char *)v11 + 24 * v10);
    if ( v12 != v14 )
    {
      *(_QWORD *)(a3 + 8) = v14;
      v12 = v14;
    }
  }
  for ( ; v11 != v12; v11 = (const __m128i *)((char *)v11 + 24) )
    v11[1].m128i_i8[0] = 0;
  v19 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v6[8] - v6[7]) >> 4);
  if ( (*(_DWORD *)a4 & 0x400) != 0 )
  {
    v41 = (_QWORD *)a2;
    memset(v53, 0, sizeof(v53));
    v55 = _mm_loadh_ps((const double *)&v41);
    v41 = v6;
    v54 = 0;
    v20 = _mm_loadh_ps((const double *)&v41);
    v57 = a3;
    v56 = v20;
    v58 = nullptr;
    v59 = 0;
    if ( !v19 )
    {
      v24 = v6[4];
      v59 = 0u;
      *(_OWORD *)v60 = 0;
      v61 = 0;
      v26 = (void *)operator new[](0);
      goto LABEL_25;
    }
    if ( v19 <= 0xFFFFFFFFFFFFFFFLL )
    {
      v21 = (_QWORD *)operator new(16 * v19);
      v22 = &v21[2 * v19];
      v58 = v21;
      *((_QWORD *)&v59 + 1) = v22;
      do
      {
        *v21 = 0;
        v21 += 2;
        *((_DWORD *)v21 - 2) = 0;
        --v19;
      }
      while ( v19 );
      v23 = *(_QWORD *)(v56.m128_u64[1] + 64) - *(_QWORD *)(v56.m128_u64[1] + 56);
      *(_QWORD *)&v59 = v22;
      v24 = *(_QWORD *)(v56.m128_u64[1] + 32);
      *(_OWORD *)v60 = 0;
      v61 = 0;
      v25 = 0xAAAAAAAAAAAAAAABLL * (v23 >> 4);
      v26 = (void *)operator new[](v25);
      if ( (__int64)(v25 - 1) >= 0 )
        v26 = memset(v26, 0, v25);
LABEL_25:
      v62 = v26;
      v63 = v24;
      if ( (a5 & 0x80u) != 0 )
        a5 &= 0xFFFFFFFA;
      v64 = a5;
      v54 = v55.m128_u64[0];
      v17 = sub_1254A00((__int64)v53, 0);
      if ( v62 )
        operator delete[](v62);
      v27 = v60[1];
      v28 = v60[0];
      if ( v60[1] != v60[0] )
      {
        do
        {
          while ( 1 )
          {
            v29 = (void *)v28[1];
            if ( !v29 )
              break;
            operator delete(v29);
            v28 += 4;
            if ( v27 == v28 )
              goto LABEL_32;
          }
          v28 += 4;
        }
        while ( v27 != v28 );
LABEL_32:
        v28 = v60[0];
      }
      if ( v28 )
        operator delete(v28);
      if ( v58 )
        operator delete(v58);
      v30 = (__m128i *)v53[0];
      if ( v53[0] )
        goto LABEL_38;
      goto LABEL_39;
    }
LABEL_61:
    std::__throw_bad_alloc();
  }
  v41 = (_QWORD *)a2;
  memset(v42, 0, sizeof(v42));
  v44 = _mm_loadh_ps((const double *)&v41);
  v41 = v6;
  v43 = 0;
  v35 = _mm_loadh_ps((const double *)&v41);
  v46 = (const __m128i **)a3;
  v45 = v35;
  v47 = nullptr;
  v48 = 0;
  if ( v19 )
  {
    if ( v19 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_61;
    v36 = (_QWORD *)operator new(16 * v19);
    v37 = &v36[2 * v19];
    v47 = v36;
    *((_QWORD *)&v48 + 1) = v37;
    do
    {
      *v36 = 0;
      v36 += 2;
      *((_DWORD *)v36 - 2) = 0;
      --v19;
    }
    while ( v19 );
    v38 = v46;
    v6 = (_QWORD *)v45.m128_u64[1];
  }
  else
  {
    *((_QWORD *)&v48 + 1) = 0;
    v38 = (const __m128i **)a3;
    v37 = nullptr;
  }
  v39 = v6[4];
  *(_QWORD *)&v48 = v37;
  v52 = 0;
  v49 = v39;
  v50 = 0;
  if ( (a5 & 0x80u) != 0 )
    a5 &= 0xFFFFFFFA;
  v51 = a5;
  v43 = v44.m128_u64[0];
  sub_1250570(v42, v38);
  sub_12550F0((__int64)v42, 0, v49);
  v17 = v52;
  if ( v47 )
    operator delete(v47);
  v30 = (__m128i *)v42[0];
  if ( v42[0] )
LABEL_38:
    operator delete(v30);
LABEL_39:
  v15 = *(const __m128i **)(a3 + 8);
  v31 = *(const __m128i **)a3;
  v32 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v15->m128i_i64 - *(_QWORD *)a3) >> 3);
  if ( !(_BYTE)v17 )
  {
    if ( v32 <= 2 )
    {
      sub_124FCD0((const __m128i **)a3, 3 - v32);
      v15 = *(const __m128i **)(a3 + 8);
      v31 = *(const __m128i **)a3;
    }
    else if ( v32 != 3 && &v31[4].m128i_u64[1] != (unsigned __int64 *)v15 )
    {
      *(_QWORD *)(a3 + 8) = (char *)v31 + 72;
      v15 = (const __m128i *)((char *)v31 + 72);
    }
    if ( v15 != v31 )
    {
      v16 = v31;
      do
      {
        v16[1].m128i_i8[0] = 0;
        v16 = (const __m128i *)((char *)v16 + 24);
        v16[-1].m128i_i64[0] = a2;
        v16[-2].m128i_i64[1] = a2;
      }
      while ( v15 != v16 );
    }
    return 0;
  }
  v33 = *(__m128i **)a3;
  if ( v31 != v15 )
  {
    do
    {
      if ( !v33[1].m128i_i8[0] )
      {
        v33->m128i_i64[1] = a2;
        v33->m128i_i64[0] = a2;
      }
      v33 = (__m128i *)((char *)v33 + 24);
    }
    while ( v15 != v33 );
  }
  v34 = &v31[-3].m128i_i64[3 * v32];
  *((_BYTE *)v34 + 16) = 0;
  *v34 = a1;
  v34[1] = a1;
  *((_BYTE *)v34 + 40) = 0;
  v34[3] = a2;
  v34[4] = a2;
  return v17;
}
