__int64 __fastcall sub_208D420(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r12
  __m128i v3; // xmm0
  __m128i v4; // xmm1
  void (__fastcall *v5)(_BYTE *, _BYTE *, __int64); // rax
  __m128i v6; // xmm3
  __m128i v7; // xmm4
  __m128i v8; // xmm5
  void (__fastcall *v9)(_BYTE *, _BYTE *, __int64); // rcx
  __m128i v10; // xmm6
  __m128i v11; // xmm7
  __int64 v12; // rsi
  int v13; // r12d
  unsigned int v15; // [rsp+14h] [rbp-244h]
  __int64 v16; // [rsp+18h] [rbp-240h]
  __m128i v17; // [rsp+20h] [rbp-238h] BYREF
  __m128i v18; // [rsp+30h] [rbp-228h] BYREF
  _BYTE v19[16]; // [rsp+40h] [rbp-218h] BYREF
  __m128i v20; // [rsp+50h] [rbp-208h] BYREF
  __m128i v21; // [rsp+60h] [rbp-1F8h] BYREF
  __m128i v22; // [rsp+70h] [rbp-1E8h] BYREF
  _BYTE v23[16]; // [rsp+80h] [rbp-1D8h] BYREF
  __m128i si128; // [rsp+90h] [rbp-1C8h] BYREF
  __m128i v25; // [rsp+A0h] [rbp-1B8h]
  __m128i v26; // [rsp+B0h] [rbp-1A8h]
  _BYTE v27[16]; // [rsp+C0h] [rbp-198h] BYREF
  __m128i v28; // [rsp+D0h] [rbp-188h]
  __m128i v29; // [rsp+E0h] [rbp-178h]
  __m128i v30; // [rsp+F0h] [rbp-168h]
  _BYTE v31[16]; // [rsp+100h] [rbp-158h] BYREF
  __m128i v32; // [rsp+110h] [rbp-148h]
  __m128i v33; // [rsp+120h] [rbp-138h] BYREF
  __m128i v34; // [rsp+130h] [rbp-128h] BYREF
  _BYTE v35[16]; // [rsp+140h] [rbp-118h] BYREF
  __m128i v36[3]; // [rsp+150h] [rbp-108h] BYREF
  _BYTE v37[16]; // [rsp+180h] [rbp-D8h] BYREF
  void (__fastcall *v38)(_BYTE *, _BYTE *, __int64); // [rsp+190h] [rbp-C8h]
  __m128i v39[2]; // [rsp+1A0h] [rbp-B8h] BYREF
  _BYTE v40[16]; // [rsp+1C0h] [rbp-98h] BYREF
  void (__fastcall *v41)(_BYTE *, _BYTE *, __int64); // [rsp+1D0h] [rbp-88h]
  __m128i v42; // [rsp+1E0h] [rbp-78h] BYREF
  __m128i v43; // [rsp+1F0h] [rbp-68h] BYREF
  _BYTE v44[16]; // [rsp+200h] [rbp-58h] BYREF
  __m128i v45[4]; // [rsp+210h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(a1 + 80);
  v16 = a1 + 72;
  v15 = 0;
  if ( a1 + 72 != v1 )
  {
    while ( 1 )
    {
      v2 = v1 - 24;
      if ( !v1 )
        v2 = 0;
      sub_204CCA0(v39, v2, 1);
      v3 = _mm_load_si128(&v42);
      si128.m128i_i64[0] = 0;
      v4 = _mm_load_si128(&v43);
      v21 = v3;
      v22 = v4;
      if ( v45[0].m128i_i64[0] )
      {
        ((void (__fastcall *)(_BYTE *, _BYTE *, __int64))v45[0].m128i_i64[0])(v23, v44, 2);
        si128 = _mm_load_si128(v45);
      }
      sub_204CCA0(&v33, v2, 1);
      v5 = (void (__fastcall *)(_BYTE *, _BYTE *, __int64))v36[0].m128i_i64[0];
      v20.m128i_i64[0] = 0;
      v6 = _mm_load_si128(&v34);
      v17 = _mm_load_si128(&v33);
      v18 = v6;
      if ( v36[0].m128i_i64[0] )
      {
        ((void (__fastcall *)(_BYTE *, _BYTE *, __int64))v36[0].m128i_i64[0])(v19, v35, 2);
        v5 = (void (__fastcall *)(_BYTE *, _BYTE *, __int64))v36[0].m128i_i64[0];
        v20 = _mm_load_si128(v36);
      }
      v7 = _mm_load_si128(&v21);
      v8 = _mm_load_si128(&v22);
      v32.m128i_i64[0] = 0;
      v9 = (void (__fastcall *)(_BYTE *, _BYTE *, __int64))si128.m128i_i64[0];
      v29 = v7;
      v30 = v8;
      if ( si128.m128i_i64[0] )
      {
        ((void (__fastcall *)(_BYTE *, _BYTE *, __int64))si128.m128i_i64[0])(v31, v23, 2);
        v9 = (void (__fastcall *)(_BYTE *, _BYTE *, __int64))si128.m128i_i64[0];
        v5 = (void (__fastcall *)(_BYTE *, _BYTE *, __int64))v20.m128i_i64[0];
        v32 = _mm_load_si128(&si128);
      }
      v10 = _mm_load_si128(&v17);
      v11 = _mm_load_si128(&v18);
      v28.m128i_i64[0] = 0;
      v25 = v10;
      v26 = v11;
      if ( v5 )
        break;
      v12 = v25.m128i_i64[0];
      if ( v25.m128i_i64[0] != v29.m128i_i64[0] )
        goto LABEL_12;
LABEL_26:
      if ( v9 )
        v9(v31, v31, 3);
      if ( v20.m128i_i64[0] )
        ((void (__fastcall *)(_BYTE *, _BYTE *, __int64))v20.m128i_i64[0])(v19, v19, 3);
      if ( v38 )
        v38(v37, v37, 3);
      if ( v36[0].m128i_i64[0] )
        ((void (__fastcall *)(_BYTE *, _BYTE *, __int64))v36[0].m128i_i64[0])(v35, v35, 3);
      if ( si128.m128i_i64[0] )
        ((void (__fastcall *)(_BYTE *, _BYTE *, __int64))si128.m128i_i64[0])(v23, v23, 3);
      if ( v45[0].m128i_i64[0] )
        ((void (__fastcall *)(_BYTE *, _BYTE *, __int64))v45[0].m128i_i64[0])(v44, v44, 3);
      if ( v41 )
      {
        v41(v40, v40, 3);
        v1 = *(_QWORD *)(v1 + 8);
        if ( v16 == v1 )
          return v15;
      }
      else
      {
        v1 = *(_QWORD *)(v1 + 8);
        if ( v16 == v1 )
          return v15;
      }
    }
    v5(v27, v19, 2);
    v5 = (void (__fastcall *)(_BYTE *, _BYTE *, __int64))v20.m128i_i64[0];
    v12 = v25.m128i_i64[0];
    v28 = _mm_load_si128(&v20);
    if ( v29.m128i_i64[0] != v25.m128i_i64[0] )
    {
LABEL_12:
      v13 = 0;
      do
      {
        v12 = *(_QWORD *)(v12 + 8);
        v25.m128i_i16[4] = 0;
        v25.m128i_i64[0] = v12;
        if ( v12 != v26.m128i_i64[0] )
        {
          while ( 1 )
          {
            if ( v12 )
              v12 -= 24;
            if ( !v5 )
              std::__throw_bad_function_call();
            if ( ((unsigned __int8 (__fastcall *)(_BYTE *, __int64))v28.m128i_i64[1])(v27, v12) )
              break;
            v12 = *(_QWORD *)(v25.m128i_i64[0] + 8);
            v25.m128i_i16[4] = 0;
            v5 = (void (__fastcall *)(_BYTE *, _BYTE *, __int64))v28.m128i_i64[0];
            v25.m128i_i64[0] = v12;
            if ( v26.m128i_i64[0] == v12 )
              goto LABEL_21;
          }
          v12 = v25.m128i_i64[0];
          v5 = (void (__fastcall *)(_BYTE *, _BYTE *, __int64))v28.m128i_i64[0];
        }
LABEL_21:
        ++v13;
      }
      while ( v29.m128i_i64[0] != v12 );
      v15 += v13;
    }
    if ( v5 )
      v5(v27, v27, 3);
    v9 = (void (__fastcall *)(_BYTE *, _BYTE *, __int64))v32.m128i_i64[0];
    goto LABEL_26;
  }
  return v15;
}
