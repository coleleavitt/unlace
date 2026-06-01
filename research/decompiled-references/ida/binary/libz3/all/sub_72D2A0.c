__int64 __fastcall sub_72D2A0(const __m128i *a1, __int64 a2, const __m128i *a3, const __m128i *a4, const __m128i *a5)
{
  void (*v9)(void); // rax
  _QWORD *v10; // rbp
  _QWORD *v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rdi
  void (__fastcall *v15)(const __m128i *, const __m128i *, __int64); // rax
  void (__fastcall *v16)(const __m128i *, const __m128i *, __int64); // rax
  void (__fastcall *v17)(const __m128i *, const __m128i *, __int64); // rax
  void (__fastcall *v18)(const __m128i *, const __m128i *, __int64); // rax
  void (__fastcall *v19)(const __m128i *, const __m128i *, __int64); // rax
  void (__fastcall *v20)(const __m128i *, const __m128i *, __int64); // rax
  void (__fastcall *v21)(unsigned __int64 *, unsigned __int64 *, __int64); // rax
  void (__fastcall *v22)(__m128i *, const __m128i *, __int64); // rax
  __m128i v23; // xmm1
  __m128i v24; // xmm2
  __m128i v25; // xmm0
  void (__fastcall *v26)(__m128i *, const __m128i *, __int64); // rax
  __m128i v27; // xmm1
  __m128i v28; // xmm2
  __m128i v29; // xmm0
  void (__fastcall *v30)(__m128i *, const __m128i *, __int64); // rax
  __m128i v31; // xmm1
  __m128i v32; // xmm2
  __m128i v33; // xmm0
  __int64 result; // rax
  __m128i v36; // [rsp+10h] [rbp-58h] BYREF
  __m128i v37; // [rsp+20h] [rbp-48h]

  v9 = *(void (**)(void))(a1->m128i_i64[0] + 88);
  if ( (char *)v9 == (char *)sub_72CA80 )
  {
    v10 = (_QWORD *)a1[50].m128i_i64[0];
    a1[56].m128i_i64[1] = 0;
    if ( v10 )
    {
      v11 = &v10[*((unsigned int *)v10 - 1)];
      if ( v10 >= v11 )
        goto LABEL_10;
      do
      {
        while ( 1 )
        {
          v12 = *v10;
          if ( *v10 )
          {
            v13 = a1[49].m128i_i64[1];
            if ( (*(_DWORD *)(v12 + 8))-- == 1 )
              break;
          }
          if ( ++v10 >= v11 )
            goto LABEL_9;
        }
        sub_15D7BC0(v13, v12);
        ++v10;
      }
      while ( v10 < v11 );
LABEL_9:
      v10 = (_QWORD *)a1[50].m128i_i64[0];
      if ( v10 )
LABEL_10:
        *((_DWORD *)v10 - 1) = 0;
    }
    v15 = (void (__fastcall *)(const __m128i *, const __m128i *, __int64))a1[64].m128i_i64[0];
    if ( v15 )
    {
      v15(a1 + 63, a1 + 63, 3);
      a1[64] = 0;
    }
    v16 = (void (__fastcall *)(const __m128i *, const __m128i *, __int64))a1[66].m128i_i64[0];
    if ( v16 )
    {
      v16(a1 + 65, a1 + 65, 3);
      a1[66] = 0;
    }
    v17 = (void (__fastcall *)(const __m128i *, const __m128i *, __int64))a1[68].m128i_i64[0];
    if ( v17 )
    {
      v17(a1 + 67, a1 + 67, 3);
      a1[68] = 0;
    }
    v18 = (void (__fastcall *)(const __m128i *, const __m128i *, __int64))a1[70].m128i_i64[0];
    if ( v18 )
    {
      v18(a1 + 69, a1 + 69, 3);
      a1[70] = 0;
    }
    v19 = (void (__fastcall *)(const __m128i *, const __m128i *, __int64))a1[72].m128i_i64[0];
    if ( v19 )
    {
      v19(a1 + 71, a1 + 71, 3);
      a1[72] = 0;
    }
    v20 = (void (__fastcall *)(const __m128i *, const __m128i *, __int64))a1[74].m128i_i64[0];
    if ( v20 )
    {
      v20(a1 + 73, a1 + 73, 3);
      a1[74] = 0;
    }
    v21 = (void (__fastcall *)(unsigned __int64 *, unsigned __int64 *, __int64))a1[76].m128i_i64[1];
    if ( v21 )
    {
      v21(&a1[75].m128i_u64[1], &a1[75].m128i_u64[1], 3);
      *(const __m128i *)((char *)&a1[76] + 8) = 0;
    }
    a1[75].m128i_i64[0] = 0;
  }
  else
  {
    v9();
  }
  v37 = 0u;
  a1[56].m128i_i64[1] = a2;
  v22 = (void (__fastcall *)(__m128i *, const __m128i *, __int64))a3[1].m128i_i64[0];
  v36 = 0;
  if ( v22 )
  {
    v22(&v36, a3, 2);
    v23 = _mm_loadu_si128(a3 + 1);
  }
  else
  {
    v23 = 0;
  }
  v24 = _mm_loadu_si128(a1 + 57);
  a1[57] = _mm_load_si128(&v36);
  v25 = _mm_loadu_si128(a1 + 58);
  v36 = v24;
  v37 = v25;
  a1[58] = v23;
  if ( v25.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v25.m128i_i64[0])(&v36, &v36, 3);
  v26 = (void (__fastcall *)(__m128i *, const __m128i *, __int64))a4[1].m128i_i64[0];
  v37 = 0u;
  v36 = 0;
  if ( v26 )
  {
    v26(&v36, a4, 2);
    v27 = _mm_loadu_si128(a4 + 1);
  }
  else
  {
    v27 = 0;
  }
  v28 = _mm_loadu_si128(a1 + 59);
  a1[59] = _mm_load_si128(&v36);
  v29 = _mm_loadu_si128(a1 + 60);
  v36 = v28;
  v37 = v29;
  a1[60] = v27;
  if ( v29.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v29.m128i_i64[0])(&v36, &v36, 3);
  v30 = (void (__fastcall *)(__m128i *, const __m128i *, __int64))a5[1].m128i_i64[0];
  v37 = 0u;
  v36 = 0;
  if ( v30 )
  {
    v30(&v36, a5, 2);
    v31 = _mm_loadu_si128(a5 + 1);
  }
  else
  {
    v31 = 0;
  }
  v32 = _mm_loadu_si128(a1 + 61);
  a1[61] = _mm_load_si128(&v36);
  v33 = _mm_loadu_si128(a1 + 62);
  v36 = v32;
  result = v33.m128i_i64[0];
  v37 = v33;
  a1[62] = v31;
  if ( v33.m128i_i64[0] )
    return ((__int64 (__fastcall *)(__m128i *, __m128i *, __int64))v33.m128i_i64[0])(&v36, &v36, 3);
  return result;
}

