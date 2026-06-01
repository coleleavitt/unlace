__int64 __fastcall sub_166F80(
        int a1,
        __int64 *a2,
        double a3,
        double a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  int v12; // r13d
  __int64 v13; // rax
  __m128 v14; // xmm0
  unsigned int *v15; // rbp
  void (__fastcall **v16)(__int64 *, __int64, unsigned __int16 *); // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __m128 v21; // xmm4
  __m128 v22; // xmm5
  __int64 v23; // rax
  __m128i v24; // xmm0
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // rdx
  __int64 v29; // rsi
  __m128i v30; // xmm0
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int64 v34; // rdx
  __int64 v35; // rsi
  __m128i v36; // xmm0
  __int64 v37; // r8
  __int64 v38; // rax
  __m128i si128; // xmm0
  char v40; // [rsp+0h] [rbp-F8h]
  unsigned __int64 v41; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v42; // [rsp+8h] [rbp-F0h]
  __int64 v43; // [rsp+10h] [rbp-E8h]
  __int64 v44; // [rsp+10h] [rbp-E8h]
  __int64 v45; // [rsp+18h] [rbp-E0h]
  __int64 v46; // [rsp+18h] [rbp-E0h]
  unsigned __int16 v47; // [rsp+2Eh] [rbp-CAh] BYREF
  __int64 v48; // [rsp+30h] [rbp-C8h] BYREF
  __m128i v49; // [rsp+38h] [rbp-C0h] BYREF
  __m128 v50; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v51; // [rsp+60h] [rbp-98h]
  __int64 v52; // [rsp+70h] [rbp-88h] BYREF
  __int128 v53; // [rsp+78h] [rbp-80h]
  __m128i v54; // [rsp+90h] [rbp-68h] BYREF
  __m128i v55; // [rsp+A0h] [rbp-58h]
  int v56; // [rsp+B0h] [rbp-48h]
  unsigned __int64 v57; // [rsp+B8h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  if ( a1 == 3 )
  {
    (*(void (__fastcall **)(__int64 *, __int64, char *, __int64))(*a2 + 80))(a2, 3, byte_253340, 4096);
    return 1;
  }
  if ( a1 > 3 )
  {
    if ( a1 != 4 )
      return 1;
    (*(void (__fastcall **)(__int64 *, __int64, __m128i *))*a2)(a2, 4, &v54);
    if ( v54.m128i_i16[0] )
      sub_92120((__int64)"The data in clipboard will be overwritten each time\nthe dialog will be opened");
  }
  else if ( ((a1 + 1) & 0xFFFFFFFD) != 0 )
  {
    return 1;
  }
  (*(void (__fastcall **)(__int64 *, __int64, unsigned __int16 *))*a2)(a2, 1, &v47);
  v12 = v47;
  v48 = 0;
  v49 = 0;
  if ( v47 == 6 )
  {
    v38 = qvector_reserve();
    si128 = _mm_load_si128((const __m128i *)&xmmword_1D29E0);
    *(_BYTE *)(v38 + 26) = 0;
    v49.m128i_i64[0] = 27;
    v48 = v38;
    *(__m128i *)v38 = si128;
    *(__m128i *)(v38 + 10) = _mm_load_si128((const __m128i *)&xmmword_1D29F0);
  }
  else
  {
    v13 = *a2;
    v51 = 0x10000;
    v14 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)off_234588, (__m128i)(unsigned __int64)&v48);
    v50 = v14;
    v15 = (unsigned int *)(*(__int64 (__fastcall **)(__int64 *))(v13 + 72))(a2);
    if ( !(unsigned __int8)sub_1660D0((__int64)&v50, v12, v15) )
    {
      v32 = v49.m128i_i64[0];
      if ( v49.m128i_i64[0] )
      {
        v33 = v49.m128i_i64[0] + 24;
        v34 = v49.m128i_i64[0] + 25;
        v32 = v49.m128i_i64[0] - 1;
      }
      else
      {
        v34 = 26;
        v33 = 25;
      }
      v35 = v48;
      if ( v49.m128i_i64[1] < v34 )
      {
        v46 = v32;
        v44 = v33;
        v42 = v34;
        v48 = qvector_reserve();
        v32 = v46;
        v35 = v48;
        v33 = v44;
        v34 = v42;
      }
      v36 = _mm_load_si128((const __m128i *)&xmmword_1D2A00);
      v49.m128i_i64[0] = v34;
      *(_BYTE *)(v35 + v33) = 0;
      v37 = v48 + v32;
      *(__m128i *)v37 = v36;
      v14 = (__m128)_mm_load_si128((const __m128i *)&xmmword_1D2A10);
      *(__m128 *)(v37 + 9) = v14;
    }
    if ( byte_25332C )
    {
      v26 = v49.m128i_i64[0];
      if ( v49.m128i_i64[0] )
      {
        v27 = v49.m128i_i64[0] + 92;
        v28 = v49.m128i_i64[0] + 93;
        v26 = v49.m128i_i64[0] - 1;
      }
      else
      {
        v28 = 94;
        v27 = 93;
      }
      v29 = v48;
      if ( v49.m128i_i64[1] < v28 )
      {
        v45 = v26;
        v43 = v27;
        v41 = v28;
        v48 = qvector_reserve();
        v26 = v45;
        v29 = v48;
        v27 = v43;
        v28 = v41;
      }
      v49.m128i_i64[0] = v28;
      v30 = _mm_load_si128((const __m128i *)&xmmword_1D2A20);
      *(_BYTE *)(v29 + v27) = 0;
      v31 = v26 + v48;
      *(__m128i *)v31 = v30;
      *(__m128i *)(v31 + 16) = _mm_load_si128((const __m128i *)&xmmword_1D2A30);
      *(__m128i *)(v31 + 32) = _mm_load_si128((const __m128i *)&xmmword_1D2A40);
      *(__m128i *)(v31 + 48) = _mm_load_si128((const __m128i *)&xmmword_1D2A50);
      *(__m128i *)(v31 + 64) = _mm_load_si128((const __m128i *)&xmmword_1D2A60);
      v14 = (__m128)_mm_load_si128((const __m128i *)&xmmword_1D2A70);
      *(__m128 *)(v31 + 77) = v14;
    }
    v16 = (void (__fastcall **)(__int64 *, __int64, unsigned __int16 *))*a2;
    v47 = 0;
    (*v16)(a2, 4, &v47);
    if ( v47 )
    {
      sub_10DDF0(
        (__int64)"Copying data to clipboard...",
        4,
        v17,
        v18,
        v19,
        v20,
        v14,
        (__m128)(unsigned __int64)&v48,
        a5,
        a6,
        v21,
        v22,
        a9,
        a10,
        v40);
      v53 = 0;
      v52 = 0;
      v55.m128i_i64[0] = 0xFFFFFFFFLL;
      v54 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_234588, (__m128i)(unsigned __int64)&v52);
      sub_1660D0((__int64)&v54, v12, v15);
      sub_10D850();
      if ( v52 )
      {
        *(_QWORD *)&v53 = 0;
        qfree();
      }
    }
  }
  v23 = v48;
  v48 = 0;
  v24 = _mm_loadu_si128(&v49);
  v54.m128i_i64[1] = v23;
  v25 = *a2;
  v55 = v24;
  v54.m128i_i64[0] = 40;
  v56 = 4;
  v49 = 0;
  (*(void (__fastcall **)(__int64 *, __int64, __m128i *))(v25 + 8))(a2, 2, &v54);
  if ( v54.m128i_i64[1] )
  {
    v55.m128i_i64[0] = 0;
    qfree();
  }
  if ( v48 )
  {
    v49.m128i_i64[0] = 0;
    qfree();
  }
  return 1;
}

