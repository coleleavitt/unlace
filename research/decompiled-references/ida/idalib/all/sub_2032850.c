__m128i *__fastcall sub_2032850(const __m128i *a1)
{
  __int8 v1; // r13
  __int64 v2; // rsi
  __m128i *v3; // rbx
  void *v4; // r12
  void (__fastcall *v5)(void *); // rax
  void (__fastcall *v6)(_BYTE *, const __m128i *, __int64); // rax
  __m128i v7; // xmm1
  __m128i v8; // rax
  __m128i v9; // xmm0
  void (__fastcall *v10)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v11; // rsi
  void (__fastcall *v12)(_BYTE *, const __m128i *, __int64); // rax
  __m128i v13; // xmm3
  __m128i v14; // rax
  __m128i v15; // xmm0
  void (__fastcall *v16)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v17; // rsi
  _BYTE v19[16]; // [rsp+0h] [rbp-68h] BYREF
  __m128i v20; // [rsp+10h] [rbp-58h]
  __m128i v21; // [rsp+20h] [rbp-48h] BYREF
  void (__fastcall *v22)(_QWORD, _QWORD, _QWORD); // [rsp+30h] [rbp-38h]
  __int64 v23; // [rsp+38h] [rbp-30h]

  a1[1].m128i_i8[0] = 0;
  v1 = a1[1].m128i_i8[1];
  v2 = a1[1].m128i_i64[1];
  v3 = (__m128i *)operator new(0x168u);
  sub_20326F0(v3, v2, v1);
  v4 = (void *)a1->m128i_i64[1];
  a1->m128i_i64[1] = (__int64)v3;
  if ( v4 )
  {
    v5 = *(void (__fastcall **)(void *))(*(_QWORD *)v4 + 8LL);
    if ( v5 == sub_202F1B0 )
    {
      sub_202EF80((__int64)v4);
      operator delete(v4, 0x168u);
    }
    else
    {
      v5(v4);
    }
    v3 = (__m128i *)a1->m128i_i64[1];
  }
  v6 = (void (__fastcall *)(_BYTE *, const __m128i *, __int64))a1[4].m128i_i64[0];
  a1[2].m128i_i64[1] = (__int64)v3;
  if ( v6 )
  {
    v20.m128i_i64[0] = 0;
    v6(v19, a1 + 3, 2);
    v7 = _mm_loadu_si128(a1 + 4);
    v8.m128i_i64[0] = a1[4].m128i_i64[0];
    v22 = nullptr;
    v8.m128i_i64[1] = v23;
    v20 = v7;
    if ( v8.m128i_i64[0] )
    {
      ((void (__fastcall *)(__m128i *, _BYTE *, __int64))v8.m128i_i64[0])(&v21, v19, 2);
      v8 = v20;
    }
    v9 = _mm_load_si128(&v21);
    v21 = _mm_loadu_si128(v3 + 2);
    v10 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))v3[3].m128i_i64[0];
    v11 = v3[3].m128i_i64[1];
    v3[2] = v9;
    v22 = v10;
    v3[3].m128i_i64[0] = v8.m128i_i64[0];
    v23 = v11;
    v3[3].m128i_i64[1] = v8.m128i_i64[1];
    if ( v10 )
    {
      v10(&v21, &v21, 3);
      v8.m128i_i64[0] = v20.m128i_i64[0];
    }
    if ( v8.m128i_i64[0] )
      ((void (__fastcall *)(_BYTE *, _BYTE *, __int64))v8.m128i_i64[0])(v19, v19, 3);
    v3 = (__m128i *)a1[2].m128i_i64[1];
  }
  v12 = (void (__fastcall *)(_BYTE *, const __m128i *, __int64))a1[6].m128i_i64[0];
  if ( v12 )
  {
    v20.m128i_i64[0] = 0;
    v12(v19, a1 + 5, 2);
    v13 = _mm_loadu_si128(a1 + 6);
    v14.m128i_i64[0] = a1[6].m128i_i64[0];
    v22 = nullptr;
    v14.m128i_i64[1] = v23;
    v20 = v13;
    if ( v14.m128i_i64[0] )
    {
      ((void (__fastcall *)(__m128i *, _BYTE *, __int64))v14.m128i_i64[0])(&v21, v19, 2);
      v14 = v20;
    }
    v15 = _mm_load_si128(&v21);
    v21 = _mm_loadu_si128(v3 + 4);
    v16 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))v3[5].m128i_i64[0];
    v17 = v3[5].m128i_i64[1];
    v3[4] = v15;
    v22 = v16;
    v3[5].m128i_i64[0] = v14.m128i_i64[0];
    v23 = v17;
    v3[5].m128i_i64[1] = v14.m128i_i64[1];
    if ( v16 )
    {
      v16(&v21, &v21, 3);
      v14.m128i_i64[0] = v20.m128i_i64[0];
    }
    if ( v14.m128i_i64[0] )
      ((void (__fastcall *)(_BYTE *, _BYTE *, __int64))v14.m128i_i64[0])(v19, v19, 3);
    return (__m128i *)a1[2].m128i_i64[1];
  }
  return v3;
}
