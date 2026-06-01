__m128i *__fastcall sub_7DBC50(__m128i *a1, const __m128i *a2, __int64 a3)
{
  const __m128i *v3; // r14
  int v6; // esi
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rsi
  unsigned int v10; // ecx
  __int64 *v11; // rax
  __int64 v12; // r8
  __int64 v13; // rax
  __m128i *v14; // rdx
  unsigned __int64 v15; // r15
  __int64 v16; // rax
  __m128i *v17; // r15
  __int64 v18; // rax
  __m128i v19; // xmm2
  __m128i v20; // xmm1
  __m128i v21; // xmm0
  __m128i v23; // xmm0
  int v24; // esi
  __int64 v25; // r13
  __int64 *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  int v29; // eax
  int v30; // r9d
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  __m128i v33[3]; // [rsp+0h] [rbp-108h] BYREF
  __m128i v34; // [rsp+30h] [rbp-D8h] BYREF
  __m128i v35; // [rsp+40h] [rbp-C8h] BYREF
  __m128i v36; // [rsp+50h] [rbp-B8h] BYREF
  __m128i v37; // [rsp+90h] [rbp-78h] BYREF
  __m128i v38; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v39; // [rsp+B0h] [rbp-58h]

  v3 = a2;
  if ( !a2[2].m128i_i8[8] )
    v3 = (const __m128i *)a2->m128i_i64[0];
  v6 = v3->m128i_i32[0];
  v37.m128i_i32[0] = 142;
  if ( !sub_7204C0(v37.m128i_i32, v6) )
    goto LABEL_15;
  v7 = v3->m128i_i64[1];
  if ( !v7 )
    goto LABEL_15;
  v8 = *(unsigned int *)(a3 + 16);
  v9 = *(_QWORD *)a3;
  if ( !(_DWORD)v8 )
    goto LABEL_13;
  v10 = (v8 - 1) & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
  v11 = (__int64 *)(v9 + 16LL * v10);
  v12 = *v11;
  if ( v7 != *v11 )
  {
    v29 = 1;
    while ( v12 != -4096 )
    {
      v30 = v29 + 1;
      v31 = ((_DWORD)v8 - 1) & (v10 + v29);
      v10 = v31;
      v11 = (__int64 *)(v9 + 16 * v31);
      v12 = *v11;
      if ( v7 == *v11 )
        goto LABEL_7;
      v29 = v30;
    }
    goto LABEL_13;
  }
LABEL_7:
  if ( v11 == (__int64 *)(16 * v8 + v9) )
  {
LABEL_13:
    v36.m128i_i8[8] = 0;
    v17 = nullptr;
    v18 = 0;
    goto LABEL_14;
  }
  v13 = v11[1];
  v14 = (__m128i *)(v13 & 0xFFFFFFFFFFFFFFF8LL);
  v15 = v13 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v13 )
    goto LABEL_19;
  v16 = v13 & 6;
  if ( v16 == 6 )
  {
    if ( !v14 )
      goto LABEL_19;
    v17 = (__m128i *)v14->m128i_i64[0];
    v18 = v14->m128i_u32[2];
    v36.m128i_i8[8] = 0;
LABEL_14:
    v34.m128i_i64[1] = v18;
    v34.m128i_i64[0] = (__int64)v17;
    if ( 5 * v18 != 5 )
      goto LABEL_15;
    goto LABEL_21;
  }
  if ( v16 )
  {
    if ( v16 == 2 && v14 )
    {
      v37.m128i_i32[0] = sub_720B10(v14);
      goto LABEL_20;
    }
    goto LABEL_19;
  }
  if ( !v14 )
  {
LABEL_19:
    v37 = _mm_loadu_si128(v14);
    v38 = _mm_loadu_si128(v14 + 1);
    v39 = v14[2].m128i_i64[0];
    v15 = v14->m128i_u64[1];
    goto LABEL_20;
  }
  v37.m128i_i32[0] = sub_720580((__int64)v14);
LABEL_20:
  v37.m128i_i64[1] = v15;
  v17 = &v34;
  v23 = _mm_load_si128(&v37);
  v36.m128i_i8[8] = 1;
  v36.m128i_i64[0] = v39;
  v34 = v23;
  v35 = _mm_load_si128(&v38);
LABEL_21:
  v24 = v17->m128i_i32[0];
  v37.m128i_i32[0] = 231;
  if ( sub_7204C0(v37.m128i_i32, v24) )
  {
    v25 = v17->m128i_i64[1];
    if ( v25 )
    {
      v26 = sub_7DB590((__int64 *)a3, v17->m128i_i64[1]);
      if ( v26 == (__int64 *)(*(_QWORD *)a3 + 16LL * *(unsigned int *)(a3 + 16)) )
      {
        v28 = 0;
      }
      else
      {
        v27 = v26[1];
        if ( !v27 || (~(_BYTE)v27 & 6) != 0 || (v32 = v27 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        {
          sub_7DB1A0(v33, v26[1]);
LABEL_27:
          a1[4].m128i_i8[0] = 1;
          *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v25, (__m128i)(unsigned __int64)v7);
          a1[1] = _mm_load_si128(&v34);
          a1[2] = _mm_load_si128(&v35);
          a1[3] = _mm_load_si128(&v36);
          return a1;
        }
        v28 = *(unsigned int *)(v32 + 8);
      }
      if ( 5 * v28 == 5 )
        goto LABEL_27;
    }
  }
LABEL_15:
  v19 = _mm_loadu_si128(a2);
  v20 = _mm_loadu_si128(a2 + 1);
  v21 = _mm_loadu_si128(a2 + 2);
  a1[4].m128i_i8[0] = 0;
  *a1 = 0;
  a1[1] = v19;
  a1[2] = v20;
  a1[3] = v21;
  return a1;
}

