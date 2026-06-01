__int64 __fastcall sub_D54E0(__int64 *a1, __int64 *a2, __int64 *a3)
{
  unsigned __int64 v3; // rax
  unsigned int v4; // r12d
  int v5; // r13d
  unsigned int *v6; // rdx
  unsigned int v7; // ebx
  __int64 v8; // rbp
  unsigned int v9; // r14d
  size_t v10; // r12
  void *v11; // r14
  void *v12; // r15
  int v13; // r11d
  __int16 v14; // r10
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdi
  __m128i v20; // xmm0
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rbp
  __int64 v25; // r15
  __int64 *v26; // rbx
  __m128i v27; // xmm1
  __int64 v28; // rdi
  __m128i v29; // xmm0
  __int64 v30; // rbp
  _QWORD *v31; // rbx
  int v33; // r10d
  __int64 v34; // rax
  __int16 v35; // r15
  __int64 v36; // rsi
  __m128i v37; // xmm0
  __int64 v38; // rax
  void *v39; // rsi
  __m128i v40; // xmm0
  void *v41; // rsi
  __int64 v42; // rax
  void *v43; // rax
  const void *v44; // rsi
  void *v45; // rax
  const void *v46; // rsi
  __int64 *v47; // [rsp+0h] [rbp-F8h]
  __m128i v49; // [rsp+10h] [rbp-E8h] BYREF
  void *v50; // [rsp+20h] [rbp-D8h]
  void *v51; // [rsp+28h] [rbp-D0h]
  __int64 v52; // [rsp+30h] [rbp-C8h]
  int v53; // [rsp+38h] [rbp-C0h]
  int v54; // [rsp+3Ch] [rbp-BCh]
  __int64 *v55; // [rsp+40h] [rbp-B8h]
  __int64 *v56; // [rsp+48h] [rbp-B0h]
  __int64 v57; // [rsp+50h] [rbp-A8h] BYREF
  __m128i v58; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v59; // [rsp+70h] [rbp-88h]
  int v60; // [rsp+A8h] [rbp-50h]
  __int16 v61; // [rsp+ACh] [rbp-4Ch]
  unsigned __int64 v62; // [rsp+B8h] [rbp-40h]

  v56 = a1;
  v47 = a2;
  v62 = __readfsqword(0x28u);
  if ( !a2[1] )
  {
    a2 = a3;
    return sub_BD8E0(v56, a2);
  }
  v3 = a3[1];
  if ( !v3 )
    return sub_BD8E0(v56, a2);
  v4 = 0;
  v5 = 0;
  v57 = 0;
  v6 = (unsigned int *)*a2;
  v58 = 0;
  v53 = 0;
  v7 = *v6;
  while ( 1 )
  {
    v52 = v53;
    if ( v53 < v3 )
    {
      v49.m128i_i64[1] = (__int64)v53 << 6;
      v8 = v49.m128i_i64[1] + *a3;
      v9 = *(_DWORD *)v8;
      if ( v4 == *(_DWORD *)v8 )
        goto LABEL_5;
    }
    else
    {
      if ( v4 == -1 )
        goto LABEL_14;
      v9 = -1;
    }
    if ( v5 >= (unsigned __int64)v47[1] || v7 >= v9 )
      goto LABEL_14;
    v23 = *v47;
    v24 = (__int64)v5 << 6;
    v25 = *v47 + v24;
    if ( v4 < *(_DWORD *)(v25 + 4) )
      goto LABEL_34;
    while ( ++v5 < (unsigned __int64)v47[1] )
    {
      v7 = *(_DWORD *)(v23 + ((__int64)v5 << 6));
      if ( v7 >= v9 )
        break;
      v24 = (__int64)v5 << 6;
      v25 = v23 + v24;
      if ( v4 < *(_DWORD *)(v23 + v24 + 4) )
      {
LABEL_34:
        v50 = nullptr;
        v59 = *(_QWORD *)v25;
        v49.m128i_i64[0] = *(_QWORD *)(v25 + 16);
        if ( v49.m128i_i64[0] )
        {
          v45 = (void *)qalloc_or_throw();
          v46 = *(const void **)(v25 + 8);
          v50 = v45;
          memcpy(v45, v46, v49.m128i_u64[0]);
        }
        v51 = nullptr;
        v49.m128i_i64[1] = *(_QWORD *)(v25 + 40);
        if ( v49.m128i_i64[1] )
        {
          v43 = (void *)qalloc_or_throw();
          v44 = *(const void **)(v25 + 32);
          v51 = v43;
          memcpy(v43, v44, v49.m128i_u64[1]);
        }
        v33 = *(_DWORD *)(v25 + 56);
        v34 = v58.m128i_i64[0];
        v35 = *(_WORD *)(v25 + 60);
        v36 = v57;
        v60 = v33;
        v61 = v35;
        if ( v58.m128i_i64[1] < (unsigned __int64)(v58.m128i_i64[0] + 1) )
        {
          v54 = v33;
          v55 = &v57;
          v57 = qvector_reserve();
          v36 = v57;
          v33 = v54;
          v34 = v58.m128i_i64[0];
        }
        v37 = _mm_loadl_epi64(&v49);
        v38 = v36 + (v34 << 6);
        v39 = v50;
        *(_QWORD *)v38 = v59;
        *(__m128i *)(v38 + 16) = _mm_unpacklo_epi64(v37, v37);
        v40 = _mm_loadl_epi64((const __m128i *)&v49.m128i_u64[1]);
        *(_QWORD *)(v38 + 8) = v39;
        v41 = v51;
        *(_DWORD *)(v38 + 56) = v33;
        *(_QWORD *)(v38 + 32) = v41;
        *(_WORD *)(v38 + 60) = v35;
        *(__m128i *)(v38 + 40) = _mm_unpacklo_epi64(v40, v40);
        v42 = ++v58.m128i_i64[0];
        if ( v4 >= v7 )
          *(_DWORD *)(v57 + (v42 << 6) - 64) = v4;
        v23 = *v47;
        v4 = *(_DWORD *)(*v47 + v24 + 4);
        if ( v9 < v4 )
        {
          v7 = v9;
          *(_DWORD *)(v57 + (v58.m128i_i64[0] << 6) - 60) = v9;
          v3 = a3[1];
LABEL_14:
          v22 = v52;
          if ( v52 == v3 )
            goto LABEL_22;
          goto LABEL_15;
        }
      }
    }
    v22 = v52;
    if ( v52 == a3[1] )
      break;
LABEL_15:
    v49.m128i_i64[1] = v22 << 6;
    v8 = (v22 << 6) + *a3;
LABEL_5:
    v10 = *(_QWORD *)(v8 + 16);
    v11 = nullptr;
    v59 = *(_QWORD *)v8;
    if ( v10 )
    {
      v11 = (void *)qalloc_or_throw();
      memcpy(v11, *(const void **)(v8 + 8), v10);
    }
    v12 = nullptr;
    v49.m128i_i64[0] = *(_QWORD *)(v8 + 40);
    if ( v49.m128i_i64[0] )
    {
      v12 = (void *)qalloc_or_throw();
      memcpy(v12, *(const void **)(v8 + 32), v49.m128i_u64[0]);
    }
    v13 = *(_DWORD *)(v8 + 56);
    v14 = *(_WORD *)(v8 + 60);
    v15 = v58.m128i_i64[0];
    v16 = v57;
    v60 = v13;
    v61 = v14;
    if ( v58.m128i_i64[1] < (unsigned __int64)(v58.m128i_i64[0] + 1) )
    {
      LODWORD(v51) = v13;
      LOWORD(v50) = v14;
      v55 = &v57;
      v57 = qvector_reserve();
      v16 = v57;
      v13 = (int)v51;
      v15 = v58.m128i_i64[0];
      v14 = (__int16)v50;
    }
    v17 = v59;
    v18 = v16 + (v15 << 6);
    v19 = v49.m128i_i64[1];
    ++v53;
    *(__m128i *)(v18 + 16) = _mm_unpacklo_epi64((__m128i)v10, (__m128i)v10);
    v20 = _mm_loadl_epi64(&v49);
    *(_QWORD *)v18 = v17;
    *(_QWORD *)(v18 + 8) = v11;
    *(_QWORD *)(v18 + 32) = v12;
    *(_DWORD *)(v18 + 56) = v13;
    *(_WORD *)(v18 + 60) = v14;
    *(__m128i *)(v18 + 40) = _mm_unpacklo_epi64(v20, v20);
    v21 = *a3;
    ++v58.m128i_i64[0];
    v4 = *(_DWORD *)(v21 + v19 + 4);
    v3 = a3[1];
  }
LABEL_22:
  v26 = v56;
  v27 = _mm_loadu_si128(&v58);
  v28 = *v56;
  v29 = _mm_loadu_si128((const __m128i *)(v56 + 1));
  *v56 = v57;
  *(__m128i *)(v26 + 1) = v27;
  v57 = v28;
  v58 = v29;
  if ( v28 )
  {
    if ( v29.m128i_i64[0] )
    {
      v30 = 0;
      do
      {
        v31 = (_QWORD *)(v28 + (v30 << 6));
        if ( v31[4] )
        {
          v31[5] = 0;
          qfree();
        }
        if ( v31[1] )
        {
          v31[2] = 0;
          qfree();
        }
        ++v30;
        v28 = v57;
      }
      while ( v30 != v29.m128i_i64[0] );
    }
    v58.m128i_i64[0] = 0;
    qfree();
  }
  return v62 - __readfsqword(0x28u);
}

