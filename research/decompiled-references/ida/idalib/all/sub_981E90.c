unsigned __int64 __fastcall sub_981E90(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  __int64 i; // rdx
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdi
  unsigned __int8 v11; // cl
  __m128i v12; // xmm1
  __m128i *v13; // r13
  unsigned __int64 v14; // rax
  __m128i v15; // xmm2
  __m128i v16; // xmm0
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdx
  __m128i v20; // xmm0
  __int64 v21; // r13
  unsigned __int8 v22; // al
  __int64 v23; // rdx
  __m128i v24; // xmm1
  __m128i v25; // xmm0
  __m128i v27; // xmm1
  __m128i *v28; // rbp
  unsigned __int64 v29; // rax
  __m128i v30; // xmm2
  __m128i v31; // xmm0
  const __m128i *v32; // r13
  __int64 v33; // rcx
  __int64 v34; // rdx
  __m128i v35; // xmm0
  __m128i v36; // xmm0
  void (__fastcall *v37)(__m128i *, __m128i *, __int64); // rax
  __int64 v38; // [rsp+0h] [rbp-A8h]
  __int64 v39; // [rsp+0h] [rbp-A8h]
  __m128i v41; // [rsp+10h] [rbp-98h] BYREF
  __m128i v42; // [rsp+20h] [rbp-88h]
  __m128i v43; // [rsp+30h] [rbp-78h] BYREF
  __m128i v44; // [rsp+40h] [rbp-68h]
  unsigned __int8 v45; // [rsp+50h] [rbp-58h]
  unsigned __int64 v46; // [rsp+58h] [rbp-50h]
  __int64 v47; // [rsp+60h] [rbp-48h]
  unsigned __int64 v48; // [rsp+68h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  v38 = (a3 - 1) / 2;
  if ( a2 >= v38 )
  {
    v7 = a2;
    v9 = a1 + 56 * a2;
  }
  else
  {
    for ( i = a2; ; i = v7 )
    {
      v7 = 2 * (i + 1) - 1;
      v8 = a1 + 112 * (i + 1);
      v9 = a1 + 56 * v7;
      v10 = *(_QWORD *)(v9 + 48);
      if ( *(_QWORD *)(v8 + 48) <= v10 )
      {
        if ( *(_QWORD *)(v8 + 48) != v10
          || (v11 = *(_BYTE *)(v8 + 32), *(_BYTE *)(v9 + 32) >= v11)
          && (*(_BYTE *)(v9 + 32) != v11 || *(_QWORD *)(v9 + 40) >= *(_QWORD *)(v8 + 40)) )
        {
          v9 = a1 + 112 * (i + 1);
          v7 = 2 * (i + 1);
        }
      }
      v12 = _mm_loadl_epi64((const __m128i *)(v9 + 24));
      v44.m128i_i64[0] = 0;
      v43 = 0;
      v13 = (__m128i *)(a1 + 56 * i);
      v14 = *(_QWORD *)(v9 + 16);
      v44.m128i_i64[1] = v12.m128i_i64[0];
      if ( v14 )
      {
        v43 = _mm_loadu_si128((const __m128i *)v9);
        *(_OWORD *)(v9 + 16) = 0;
      }
      v15 = _mm_loadu_si128(v13);
      *v13 = _mm_load_si128(&v43);
      v16 = _mm_loadu_si128(v13 + 1);
      v43 = v15;
      v44 = v16;
      v13[1] = _mm_unpacklo_epi64((__m128i)v14, v12);
      if ( v16.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v16.m128i_i64[0])(&v43, &v43, 3);
      v13[2].m128i_i8[0] = *(_BYTE *)(v9 + 32);
      v13[2].m128i_i64[1] = *(_QWORD *)(v9 + 40);
      v13[3].m128i_i64[0] = *(_QWORD *)(v9 + 48);
      if ( v7 >= v38 )
        break;
    }
  }
  if ( (a3 & 1) == 0 && (a3 - 2) / 2 == v7 )
  {
    v17 = 2 * v7;
    v44.m128i_i64[0] = 0;
    v7 = 2 * v7 + 1;
    v43 = 0;
    v32 = (const __m128i *)(a1 + 56 * v7);
    v33 = v32[1].m128i_i64[1];
    v34 = v32[1].m128i_i64[0];
    v44.m128i_i64[1] = v33;
    if ( v34 )
    {
      v35 = _mm_loadu_si128(v32);
      v44.m128i_i64[0] = v34;
      v43 = v35;
      v32[1] = 0;
    }
    v36 = _mm_load_si128(&v43);
    v43 = _mm_loadu_si128((const __m128i *)v9);
    v37 = *(void (__fastcall **)(__m128i *, __m128i *, __int64))(v9 + 16);
    *(__m128i *)v9 = v36;
    v44.m128i_i64[0] = (__int64)v37;
    *(_QWORD *)(v9 + 16) = v34;
    v44.m128i_i64[1] = *(_QWORD *)(v9 + 24);
    *(_QWORD *)(v9 + 24) = v33;
    if ( v37 )
    {
      v39 = v17;
      v37(&v43, &v43, 3);
      v17 = v39;
    }
    *(_BYTE *)(v9 + 32) = v32[2].m128i_i8[0];
    *(_QWORD *)(v9 + 40) = v32[2].m128i_i64[1];
    *(_QWORD *)(v9 + 48) = v32[3].m128i_i64[0];
    v9 = a1 + 56 * v7;
  }
  else
  {
    v17 = v7 - 1;
  }
  v18 = a4[1].m128i_i64[1];
  v19 = a4[1].m128i_i64[0];
  v44.m128i_i64[0] = 0;
  v43 = 0;
  v44.m128i_i64[1] = v18;
  if ( v19 )
  {
    v20 = _mm_loadu_si128(a4);
    v44.m128i_i64[0] = v19;
    v43 = v20;
    a4[1] = 0;
  }
  v45 = a4[2].m128i_u8[0];
  v21 = v17 / 2;
  v46 = a4[2].m128i_u64[1];
  v47 = a4[3].m128i_i64[0];
  if ( v7 > a2 )
  {
    while ( 1 )
    {
      v9 = a1 + 56 * v21;
      if ( *(_QWORD *)(v9 + 48) <= v47 )
      {
        if ( *(_QWORD *)(v9 + 48) != v47
          || (v22 = *(_BYTE *)(v9 + 32), v45 >= v22) && (v45 != v22 || v46 >= *(_QWORD *)(v9 + 40)) )
        {
          v9 = a1 + 56 * v7;
          v18 = v44.m128i_i64[1];
          goto LABEL_28;
        }
      }
      v27 = _mm_loadl_epi64((const __m128i *)(v9 + 24));
      v42.m128i_i64[0] = 0;
      v41 = 0;
      v28 = (__m128i *)(a1 + 56 * v7);
      v29 = *(_QWORD *)(v9 + 16);
      v42.m128i_i64[1] = v27.m128i_i64[0];
      if ( v29 )
      {
        v41 = _mm_loadu_si128((const __m128i *)v9);
        *(_OWORD *)(v9 + 16) = 0;
      }
      v30 = _mm_loadu_si128(v28);
      *v28 = _mm_load_si128(&v41);
      v31 = _mm_loadu_si128(v28 + 1);
      v41 = v30;
      v42 = v31;
      v28[1] = _mm_unpacklo_epi64((__m128i)v29, v27);
      if ( v31.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v31.m128i_i64[0])(&v41, &v41, 3);
      v28[2].m128i_i8[0] = *(_BYTE *)(v9 + 32);
      v28[2].m128i_i64[1] = *(_QWORD *)(v9 + 40);
      v28[3].m128i_i64[0] = *(_QWORD *)(v9 + 48);
      v7 = v21;
      if ( a2 >= v21 )
        break;
      v21 = (v21 - 1) / 2;
    }
    v18 = v44.m128i_i64[1];
  }
LABEL_28:
  v23 = v44.m128i_i64[0];
  v42.m128i_i64[1] = v18;
  v42.m128i_i64[0] = 0;
  v41 = 0;
  if ( v44.m128i_i64[0] )
  {
    v41 = _mm_load_si128(&v43);
    v44 = 0;
  }
  v24 = _mm_loadu_si128((const __m128i *)v9);
  *(__m128i *)v9 = _mm_load_si128(&v41);
  v25 = _mm_loadu_si128((const __m128i *)(v9 + 16));
  v41 = v24;
  *(_QWORD *)(v9 + 16) = v23;
  *(_QWORD *)(v9 + 24) = v18;
  v42 = v25;
  if ( v25.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v25.m128i_i64[0])(&v41, &v41, 3);
  *(_BYTE *)(v9 + 32) = v45;
  *(_QWORD *)(v9 + 40) = v46;
  *(_QWORD *)(v9 + 48) = v47;
  if ( v44.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v44.m128i_i64[0])(&v43, &v43, 3);
  return v48 - __readfsqword(0x28u);
}
