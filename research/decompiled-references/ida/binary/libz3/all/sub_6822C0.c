__int64 __fastcall sub_6822C0(const __m128i *a1, __int64 a2, unsigned int a3)
{
  __int16 v4; // ax
  _DWORD *v6; // rax
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // r13
  __int64 v11; // r15
  unsigned __int32 v12; // r14d
  int v13; // eax
  unsigned int v14; // eax
  __m128i *v15; // r12
  __m128i *v16; // r15
  __int64 v17; // rsi
  _QWORD *v18; // rdi
  __int32 v19; // r9d
  __int64 v20; // rax
  __m128i *v21; // r10
  __m128i *v22; // r12
  __int64 v23; // rcx
  __int32 v24; // eax
  __m128i v25; // xmm2
  char v26; // al
  __int32 v27; // eax
  __m128i v28; // xmm3
  char v29; // al
  __m128i v30; // xmm4
  __m128i v31; // xmm0
  __m128i *v32; // rax
  int v33; // ecx
  __int64 v34; // r10
  __m128i *v35; // rdx
  __int64 v36; // rdx
  const __m128i *v37; // rax
  __m128i *v38; // r9
  __int64 v39; // rdx
  __m128i *v40; // rsi
  __m128i *v41; // rdx
  __m128i v42; // xmm6
  __m128i v43; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v44; // [rsp+10h] [rbp-C8h]
  __int64 v45; // [rsp+18h] [rbp-C0h]
  __m128i v46; // [rsp+20h] [rbp-B8h] BYREF
  __m128i *v47; // [rsp+30h] [rbp-A8h]
  __m128i *v48; // [rsp+38h] [rbp-A0h]
  int v49; // [rsp+44h] [rbp-94h]
  __int64 v50; // [rsp+48h] [rbp-90h]
  __int64 v51[2]; // [rsp+50h] [rbp-88h] BYREF
  __m128i v52; // [rsp+60h] [rbp-78h] BYREF
  __m128i v53; // [rsp+70h] [rbp-68h] BYREF
  __m128i v54; // [rsp+80h] [rbp-58h] BYREF
  __m128i v55; // [rsp+90h] [rbp-48h] BYREF

  v4 = *(_WORD *)(a2 + 4);
  if ( v4 )
  {
LABEL_2:
    if ( v4 != 2 )
      return 0;
    LOBYTE(a3) = *(_DWORD *)(a2 + 16) == 2;
    return a3;
  }
  v6 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v6 || *v6 != a1[9].m128i_i32[0] )
    return 0;
  if ( v6[1] != 1 )
  {
LABEL_8:
    a3 = 1;
    if ( v6[1] >= 2u && v6[1] != 5 && v6[1] != 3 )
      LOBYTE(a3) = v6[1] == 2;
    return a3;
  }
  v8 = *(_QWORD *)(a2 + 32);
  sub_676260((__int64)v51, a1[1].m128i_i64[0], a1[1].m128i_i64[1], v8);
  v9 = sub_15D1F10(v8);
  sub_681920((__int64)&v52, (__int64)a1, v51[0], (unsigned int *)a2, v9);
  v46.m128i_i64[0] = v52.m128i_i64[0];
  v44 = v53.m128i_i64[0];
  v10 = sub_678D40(a1, v52.m128i_i64[0], v53.m128i_i64[0]);
  v11 = *(unsigned int *)(v10 + 24);
  v12 = v53.m128i_u32[2];
  v43.m128i_i64[0] = v52.m128i_i64[1];
  v13 = *(_DWORD *)(v10 + 32);
  v54 = _mm_load_si128(&v52);
  v14 = 4 * (*(_DWORD *)(v10 + 28) + v13);
  v55 = _mm_load_si128(&v53);
  if ( 3 * (int)v11 < v14 )
  {
    LODWORD(v47) = 2 * v11;
    v46.m128i_i64[1] = 40LL * (unsigned int)(2 * v11);
    v45 = v46.m128i_i64[1];
    v32 = (__m128i *)sub_186B270(v46.m128i_u64[1]);
    v33 = 2 * v11;
    v34 = v46.m128i_i64[1];
    v15 = v32;
    if ( 2 * (_DWORD)v11 )
    {
      v35 = &v32[5 * (v11 & 0x7FFFFFFF)];
      do
      {
        v32->m128i_i64[0] = 0;
        v32 += 5;
        v32[-3].m128i_i64[1] = 0;
      }
      while ( v35 != v32 );
    }
    v36 = *(unsigned int *)(v10 + 24);
    v37 = *(const __m128i **)(v10 + 16);
    v16 = (__m128i *)((char *)v15 + v34);
    LODWORD(v45) = v33 - 1;
    v38 = (__m128i *)((char *)v37 + 40 * v36);
    if ( v37 != v38 )
    {
      do
      {
        if ( v37->m128i_i32[1] == 2 )
        {
          v39 = 40LL * (v37->m128i_i32[0] & (unsigned int)v45);
          v40 = (__m128i *)((char *)v15 + v39);
          if ( v34 == v39 )
          {
LABEL_58:
            if ( v15 == v40 )
            {
LABEL_66:
              v50 = v34;
              v49 = v33;
              v48 = v38;
              v47 = (__m128i *)v37;
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v41 = v15;
            while ( v41->m128i_i32[1] )
            {
              v41 = (__m128i *)((char *)v41 + 40);
              if ( v40 == v41 )
                goto LABEL_66;
            }
          }
          else
          {
            v41 = (__m128i *)((char *)v15 + v39);
            while ( v41->m128i_i32[1] )
            {
              v41 = (__m128i *)((char *)v41 + 40);
              if ( v16 == v41 )
                goto LABEL_58;
            }
          }
          *v41 = _mm_loadu_si128(v37);
          v41[1] = _mm_loadu_si128(v37 + 1);
          v41[2].m128i_i64[0] = v37[2].m128i_i64[0];
        }
        v37 = (const __m128i *)((char *)v37 + 40);
      }
      while ( v38 != v37 );
      v38 = *(__m128i **)(v10 + 16);
    }
    if ( v38 )
    {
      LODWORD(v47) = v33;
      sub_186B220(v38);
      v33 = (int)v47;
    }
    *(_QWORD *)(v10 + 16) = v15;
    *(_DWORD *)(v10 + 24) = v33;
    *(_DWORD *)(v10 + 32) = 0;
  }
  else
  {
    v15 = *(__m128i **)(v10 + 16);
    LODWORD(v45) = v11 - 1;
    v46.m128i_i64[1] = 40 * v11;
    v16 = (__m128i *)((char *)v15 + 40 * v11);
  }
  v17 = *(unsigned int *)(v43.m128i_i64[0] + 24);
  v18 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)v10 + 40LL) + 8LL * v12);
  v43 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v46), (__m128i)v43.m128i_u64[0]);
  v19 = sub_675480(v18, v17);
  v20 = 40LL * (v19 & (unsigned int)v45);
  v21 = (__m128i *)((char *)v15 + v20);
  if ( v20 == v46.m128i_i64[1] )
  {
    v23 = 0;
LABEL_28:
    if ( v21 == v15 )
    {
LABEL_41:
      sub_1872CE0("");
      sub_1873130(114, 461);
    }
    while ( 1 )
    {
      v27 = v15->m128i_i32[1];
      if ( v27 == 2 )
      {
        if ( v15->m128i_i32[0] == v19 )
        {
          v28 = _mm_load_si128(&v43);
          v46.m128i_i32[2] = v19;
          v46.m128i_i64[0] = v23;
          v45 = (__int64)v21;
          v55.m128i_i64[0] = v44;
          v55.m128i_i32[2] = v12;
          v54 = v28;
          v29 = sub_675CE0(v10 + 8, (__int64)&v15->m128i_i64[1], (__int64)&v54);
          v21 = (__m128i *)v45;
          v23 = v46.m128i_i64[0];
          v19 = v46.m128i_i32[2];
          if ( v29 )
            goto LABEL_23;
        }
      }
      else
      {
        if ( !v27 )
        {
          if ( v23 )
            --*(_DWORD *)(v10 + 32);
          else
            v23 = (__int64)v15;
          v42 = _mm_load_si128(&v43);
          v55.m128i_i32[2] = v12;
          v55.m128i_i64[0] = v44;
          v54 = v42;
          *(__m128i *)(v23 + 8) = v42;
          goto LABEL_40;
        }
        v23 = (__int64)v15;
      }
      v15 = (__m128i *)((char *)v15 + 40);
      if ( v21 == v15 )
        goto LABEL_41;
    }
  }
  v22 = (__m128i *)((char *)v15 + v20);
  v23 = 0;
  v47 = &v54;
  while ( 1 )
  {
    v24 = v22->m128i_i32[1];
    if ( v24 == 2 )
    {
      if ( v22->m128i_i32[0] == v19 )
      {
        v25 = _mm_load_si128(&v43);
        v46.m128i_i32[2] = v19;
        v46.m128i_i64[0] = v23;
        v45 = (__int64)v21;
        v55.m128i_i64[0] = v44;
        v55.m128i_i32[2] = v12;
        v54 = v25;
        v26 = sub_675CE0(v10 + 8, (__int64)&v22->m128i_i64[1], (__int64)v47);
        v21 = (__m128i *)v45;
        v23 = v46.m128i_i64[0];
        v19 = v46.m128i_i32[2];
        if ( v26 )
          goto LABEL_23;
      }
      goto LABEL_19;
    }
    if ( !v24 )
      break;
    v23 = (__int64)v22;
LABEL_19:
    v22 = (__m128i *)((char *)v22 + 40);
    if ( v22 == v16 )
    {
      v15 = *(__m128i **)(v10 + 16);
      goto LABEL_28;
    }
  }
  if ( v23 )
    --*(_DWORD *)(v10 + 32);
  else
    v23 = (__int64)v22;
  v30 = _mm_load_si128(&v43);
  v55.m128i_i32[2] = v12;
  v55.m128i_i64[0] = v44;
  v54 = v30;
  *(__m128i *)(v23 + 8) = v30;
LABEL_40:
  v31 = _mm_load_si128(&v55);
  *(_DWORD *)(v23 + 4) = 2;
  *(_DWORD *)v23 = v19;
  *(__m128i *)(v23 + 24) = v31;
  ++*(_DWORD *)(v10 + 28);
LABEL_23:
  sub_675460(v51[0], v51[1]);
  v4 = *(_WORD *)(a2 + 4);
  a3 = a1[9].m128i_u32[0];
  if ( v4 )
    goto LABEL_2;
  v6 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( v6 && a3 == *v6 )
    goto LABEL_8;
  return 0;
}

