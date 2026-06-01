__m128i *__fastcall sub_204C890(__m128i *a1, __int64 a2, const __m128i *a3)
{
  __int64 v4; // rbp
  void (__fastcall *v5)(_BYTE *, const __m128i *, __int64); // rax
  __int64 v6; // rbx
  __m128i v7; // xmm2
  void (__fastcall *v8)(_BYTE *, _BYTE *, __int64); // rax
  __m128i v9; // xmm1
  void (__fastcall *v10)(_BYTE *, _BYTE *, __int64); // rax
  __int64 v11; // rsi
  void (__fastcall *v12)(_BYTE *, const __m128i *, __int64); // rax
  __m128i v13; // xmm3
  void (__fastcall *v14)(_BYTE *, _BYTE *, __int64); // rax
  __m128i v15; // xmm4
  void (__fastcall *v16)(_BYTE *, _BYTE *, __int64); // rax
  _BYTE v18[16]; // [rsp+0h] [rbp-138h] BYREF
  __m128i v19; // [rsp+10h] [rbp-128h] BYREF
  _BYTE v20[16]; // [rsp+20h] [rbp-118h] BYREF
  __m128i v21; // [rsp+30h] [rbp-108h] BYREF
  _BYTE v22[16]; // [rsp+40h] [rbp-F8h] BYREF
  __m128i v23; // [rsp+50h] [rbp-E8h] BYREF
  _BYTE v24[16]; // [rsp+60h] [rbp-D8h] BYREF
  __m128i v25; // [rsp+70h] [rbp-C8h] BYREF
  __m128i v26; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+90h] [rbp-A8h]
  __int16 v28; // [rsp+98h] [rbp-A0h]
  _BYTE v29[16]; // [rsp+A0h] [rbp-98h] BYREF
  __m128i v30; // [rsp+B0h] [rbp-88h]
  __m128i v31; // [rsp+C0h] [rbp-78h] BYREF
  __int64 v32; // [rsp+D0h] [rbp-68h]
  __int16 v33; // [rsp+D8h] [rbp-60h]
  _BYTE v34[16]; // [rsp+E0h] [rbp-58h] BYREF
  __m128i v35; // [rsp+F0h] [rbp-48h]

  v4 = a2 + 48;
  v5 = (void (__fastcall *)(_BYTE *, const __m128i *, __int64))a3[1].m128i_i64[0];
  v6 = *(_QWORD *)(a2 + 56);
  v21.m128i_i64[0] = 0;
  if ( !v5
    || (v5(v20, a3, 2),
        v7 = _mm_loadu_si128(a3 + 1),
        v8 = (void (__fastcall *)(_BYTE *, _BYTE *, __int64))a3[1].m128i_i64[0],
        v23.m128i_i64[0] = 0,
        v21 = v7,
        !v8) )
  {
    v31.m128i_i64[0] = a2 + 48;
    v31.m128i_i16[4] = 0;
    v32 = a2 + 48;
    v33 = 0;
    v35.m128i_i64[0] = 0;
    v19.m128i_i64[0] = 0;
LABEL_39:
    v25.m128i_i64[0] = 0;
    goto LABEL_40;
  }
  v8(v22, v20, 2);
  v9 = _mm_load_si128(&v21);
  v31.m128i_i64[0] = a2 + 48;
  v23 = v9;
  v31.m128i_i16[4] = 0;
  v32 = a2 + 48;
  v33 = 0;
  v35.m128i_i64[0] = 0;
  if ( v21.m128i_i64[0] )
  {
    ((void (__fastcall *)(_BYTE *, _BYTE *, __int64))v21.m128i_i64[0])(v34, v22, 2);
    v10 = (void (__fastcall *)(_BYTE *, _BYTE *, __int64))v23.m128i_i64[0];
    v11 = v31.m128i_i64[0];
    v35 = _mm_load_si128(&v23);
    if ( v32 != v31.m128i_i64[0] )
    {
      while ( 1 )
      {
        if ( v11 )
          v11 -= 24;
        if ( !v10 )
LABEL_43:
          std::__throw_bad_function_call();
        if ( ((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v35.m128i_i64[1])(v34, v11) )
          break;
        v11 = *(_QWORD *)(v31.m128i_i64[0] + 8);
        v31.m128i_i16[4] = 0;
        v31.m128i_i64[0] = v11;
        if ( v32 == v11 )
          break;
        v10 = (void (__fastcall *)(_BYTE *, _BYTE *, __int64))v35.m128i_i64[0];
      }
      v10 = (void (__fastcall *)(_BYTE *, _BYTE *, __int64))v23.m128i_i64[0];
    }
    if ( v10 )
      v10(v22, v22, 3);
  }
  v19.m128i_i64[0] = 0;
  v12 = (void (__fastcall *)(_BYTE *, const __m128i *, __int64))a3[1].m128i_i64[0];
  if ( !v12 )
    goto LABEL_39;
  v12(v18, a3, 2);
  v13 = _mm_loadu_si128(a3 + 1);
  v14 = (void (__fastcall *)(_BYTE *, _BYTE *, __int64))a3[1].m128i_i64[0];
  v25.m128i_i64[0] = 0;
  v19 = v13;
  if ( !v14 )
  {
LABEL_40:
    v26.m128i_i64[0] = v6;
    v26.m128i_i16[4] = 1;
    v27 = v4;
    v28 = 0;
    v30.m128i_i64[0] = 0;
    goto LABEL_41;
  }
  v14(v24, v18, 2);
  v15 = _mm_load_si128(&v19);
  v26.m128i_i64[0] = v6;
  v25 = v15;
  v26.m128i_i16[4] = 1;
  v27 = v4;
  v28 = 0;
  v30.m128i_i64[0] = 0;
  if ( v19.m128i_i64[0] )
  {
    ((void (__fastcall *)(_BYTE *, _BYTE *, __int64))v19.m128i_i64[0])(v29, v24, 2);
    v16 = (void (__fastcall *)(_BYTE *, _BYTE *, __int64))v25.m128i_i64[0];
    v6 = v26.m128i_i64[0];
    v30 = _mm_load_si128(&v25);
    if ( v26.m128i_i64[0] != v27 )
      goto LABEL_22;
    goto LABEL_27;
  }
LABEL_41:
  v16 = nullptr;
  if ( v4 == v6 )
    goto LABEL_29;
  while ( 1 )
  {
LABEL_22:
    if ( v6 )
      v6 -= 24;
    if ( !v16 )
      goto LABEL_43;
    if ( ((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v30.m128i_i64[1])(v29, v6) )
      break;
    v6 = *(_QWORD *)(v26.m128i_i64[0] + 8);
    v26.m128i_i16[4] = 0;
    v26.m128i_i64[0] = v6;
    if ( v27 == v6 )
      break;
    v16 = (void (__fastcall *)(_BYTE *, _BYTE *, __int64))v30.m128i_i64[0];
  }
  v16 = (void (__fastcall *)(_BYTE *, _BYTE *, __int64))v25.m128i_i64[0];
LABEL_27:
  if ( v16 )
    v16(v24, v24, 3);
LABEL_29:
  sub_204C7F0(a1, &v26, &v31);
  if ( v30.m128i_i64[0] )
    ((void (__fastcall *)(_BYTE *, _BYTE *, __int64))v30.m128i_i64[0])(v29, v29, 3);
  if ( v19.m128i_i64[0] )
    ((void (__fastcall *)(_BYTE *, _BYTE *, __int64))v19.m128i_i64[0])(v18, v18, 3);
  if ( v35.m128i_i64[0] )
    ((void (__fastcall *)(_BYTE *, _BYTE *, __int64))v35.m128i_i64[0])(v34, v34, 3);
  if ( v21.m128i_i64[0] )
    ((void (__fastcall *)(_BYTE *, _BYTE *, __int64))v21.m128i_i64[0])(v20, v20, 3);
  return a1;
}
