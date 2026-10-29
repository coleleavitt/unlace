__int64 __fastcall sub_7C0220(__int64 a1, const char ***a2, const char *a3)
{
  const char **v4; // rax
  const char **v5; // rsi
  const char **v7; // r12
  const char **v8; // r15
  void *v9; // rdx
  __m128i v10; // xmm1
  __m128 v11; // xmm0
  void *v12; // rdx
  void *v13; // rcx
  __m128i v14; // xmm1
  __m128 v15; // xmm0
  void *v16; // rdx
  __m128i v17; // xmm1
  __m128 v18; // xmm0
  void *v19; // rdi
  void *v20; // rdx
  __int64 v21; // rcx
  __m128 v22; // xmm0
  const char *v24; // rdx
  void *v25; // [rsp+0h] [rbp-F8h] BYREF
  __m128i v26; // [rsp+8h] [rbp-F0h] BYREF
  char *nptr; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v28; // [rsp+28h] [rbp-D0h]
  void *v29; // [rsp+40h] [rbp-B8h] BYREF
  __m128i v30; // [rsp+48h] [rbp-B0h] BYREF
  char *v31; // [rsp+60h] [rbp-98h] BYREF
  __int128 v32; // [rsp+68h] [rbp-90h]
  void *v33; // [rsp+80h] [rbp-78h] BYREF
  __m128i v34; // [rsp+88h] [rbp-70h] BYREF
  void *ptr; // [rsp+A0h] [rbp-58h] BYREF
  __int128 v36; // [rsp+A8h] [rbp-50h] BYREF
  unsigned __int64 v37; // [rsp+B8h] [rbp-40h]

  v4 = a2[1];
  v5 = *a2;
  v37 = __readfsqword(0x28u);
  v25 = nullptr;
  v26 = 0;
  v28 = 0;
  v7 = &v5[6 * (_QWORD)v4];
  v30 = 0;
  nptr = nullptr;
  v29 = nullptr;
  v31 = nullptr;
  v33 = nullptr;
  ptr = nullptr;
  v32 = 0;
  v34 = 0;
  v36 = 0;
  if ( v7 != v5 )
  {
    v8 = v5;
    do
    {
      if ( !(unsigned __int8)sub_7C0130((__int64 *)(a1 + 40), (__int64)v8, "user", a3)
        && !(unsigned __int8)sub_7C0130((__int64 *)(a1 + 64), (__int64)v8, "pass", a3)
        && !(unsigned __int8)sub_7C0130((__int64 *)&v25, (__int64)v8, "host", a3)
        && !(unsigned __int8)sub_7C0130((__int64 *)&nptr, (__int64)v8, "port", a3)
        && !(unsigned __int8)sub_7C0130((__int64 *)&v29, (__int64)v8, "proxy_host", a3)
        && !(unsigned __int8)sub_7C0130((__int64 *)&v31, (__int64)v8, "proxy_port", a3)
        && !(unsigned __int8)sub_7C0130((__int64 *)&v33, (__int64)v8, "proxy_user", a3)
        && !(unsigned __int8)sub_7C0130((__int64 *)&ptr, (__int64)v8, "proxy_pass", a3) )
      {
        v24 = haystack;
        if ( v8[1] )
          v24 = *v8;
        sub_378C70((__int64)"Unknown %s option: %s", a3, v24);
      }
      v8 += 6;
    }
    while ( v7 != v8 );
    if ( v26.m128i_i64[0] > 1uLL )
    {
      v9 = *(void **)(a1 + 8);
      v10 = _mm_loadu_si128((const __m128i *)(a1 + 16));
      v11 = _mm_loadh_ps((const double *)&v26.m128i_i64[1]);
      *(_QWORD *)(a1 + 8) = v25;
      v25 = v9;
      *(__m128 *)(a1 + 16) = v11;
      v26 = v10;
    }
    if ( (unsigned __int64)v28 > 1 )
      *(_WORD *)(a1 + 32) = strtol(nptr, nullptr, 10);
  }
  if ( v30.m128i_i64[0] > 1uLL )
  {
    v12 = *(void **)(a1 + 88);
    v13 = v29;
    *(_DWORD *)(a1 + 168) |= 0x400u;
    v14 = _mm_loadu_si128((const __m128i *)(a1 + 96));
    v15 = _mm_loadh_ps((const double *)&v30.m128i_i64[1]);
    *(_QWORD *)(a1 + 88) = v13;
    v29 = v12;
    *(__m128 *)(a1 + 96) = v15;
    v30 = v14;
  }
  if ( (unsigned __int64)v32 > 1 )
    *(_WORD *)(a1 + 112) = strtol(v31, nullptr, 10);
  if ( v34.m128i_i64[0] > 1uLL )
  {
    v16 = *(void **)(a1 + 120);
    v17 = _mm_loadu_si128((const __m128i *)(a1 + 128));
    v18 = _mm_loadh_ps((const double *)&v34.m128i_i64[1]);
    *(_QWORD *)(a1 + 120) = v33;
    v33 = v16;
    *(__m128 *)(a1 + 128) = v18;
    v34 = v17;
  }
  v19 = ptr;
  if ( (unsigned __int64)v36 > 1 )
  {
    v20 = *(void **)(a1 + 144);
    v21 = *(_QWORD *)(a1 + 160);
    *(_QWORD *)(a1 + 144) = ptr;
    v22 = _mm_loadh_ps((const double *)&v36 + 1);
    ptr = v20;
    v19 = v20;
    *((_QWORD *)&v36 + 1) = v21;
    *(__m128 *)(a1 + 152) = v22;
  }
  if ( v19 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v19);
  }
  if ( v33 )
  {
    v34.m128i_i64[0] = 0;
    qfree(v33);
  }
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v31);
  }
  if ( v29 )
  {
    v30.m128i_i64[0] = 0;
    qfree(v29);
  }
  if ( nptr )
  {
    *(_QWORD *)&v28 = 0;
    qfree(nptr);
  }
  if ( v25 )
  {
    v26.m128i_i64[0] = 0;
    qfree(v25);
  }
  return 1;
}
