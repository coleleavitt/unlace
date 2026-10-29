unsigned __int64 __fastcall sub_3DA220(__int64 a1, __int64 *a2, _DWORD *a3, __int64 a4)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // r9d
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // r9d
  __int64 v15; // rcx
  void *v16; // r8
  __m128i si128; // xmm0
  const void *v19; // rsi
  void *v20; // rax
  void *v21; // rax
  size_t v22; // [rsp+8h] [rbp-A0h]
  size_t v23; // [rsp+8h] [rbp-A0h]
  __int64 v24; // [rsp+8h] [rbp-A0h]
  size_t n[2]; // [rsp+10h] [rbp-98h] BYREF
  __m128i v26; // [rsp+20h] [rbp-88h] BYREF
  __int64 v27; // [rsp+30h] [rbp-78h]
  __int64 v28[2]; // [rsp+40h] [rbp-68h] BYREF
  void *v29; // [rsp+50h] [rbp-58h] BYREF
  __m128i v30; // [rsp+58h] [rbp-50h]
  unsigned __int64 v31; // [rsp+68h] [rbp-40h]

  v6 = *(_QWORD *)(a4 + 64);
  v31 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(a4 + 32);
  v27 = 0;
  v26 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(v6 + 1496)), (__m128i)v6);
  if ( v8 != -1 )
  {
    sub_FAAD0(a2);
    *a3 += 2;
  }
  if ( !(unsigned __int8)sub_64880((_QWORD *)(a4 + 120)) || *(_QWORD *)(a4 + 144) )
  {
    sub_FAAD0(a2);
    sub_1B3C00((_QWORD *)(a4 + 120), a2, (__int64)&v26);
    ++*a3;
  }
  if ( !(unsigned __int8)sub_64880((_QWORD *)(a4 + 200)) || *(_QWORD *)(a4 + 224) )
  {
    sub_FAAD0(a2);
    sub_1B3C00((_QWORD *)(a4 + 200), a2, (__int64)&v26);
    ++*a3;
  }
  sub_64000(v28, a4 + 160);
  v12 = *(_QWORD *)(a4 + 184);
  v29 = nullptr;
  v30 = 0;
  if ( v12 )
  {
    v23 = v12;
    n[0] = 16 * v12;
    v29 = (void *)qalloc_or_throw();
    v19 = *(const void **)(a4 + 176);
    v30.m128i_i64[1] = v23;
    memcpy(v29, v19, n[0]);
    v12 = v23;
    v30.m128i_i64[0] = v23;
  }
  sub_64640(v28, (__int64 *)(a4 + 120), v9, v12, v10, v11);
  sub_317C60((__int64 *)&v29, a4 + 136);
  if ( !(unsigned __int8)sub_64880(v28) || v30.m128i_i64[0] )
  {
    sub_FAAD0(a2);
    sub_1B3C00(v28, a2, (__int64)&v26);
    ++*a3;
  }
  sub_648D0(v28, (__int64 *)(a4 + 240));
  v15 = *(_QWORD *)(a4 + 264);
  v16 = nullptr;
  if ( v15 )
  {
    n[0] = *(_QWORD *)(a4 + 264);
    v24 = 16 * v15;
    v20 = (void *)qalloc_or_throw();
    v21 = memcpy(v20, *(const void **)(a4 + 256), v24);
    v15 = n[0];
    v16 = v21;
  }
  si128 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v15, (__m128i)(unsigned __int64)v15);
  if ( v29 )
  {
    v22 = (size_t)v16;
    *(__m128i *)n = si128;
    v30.m128i_i64[0] = 0;
    qfree();
    si128 = _mm_load_si128((const __m128i *)n);
    v16 = (void *)v22;
  }
  v29 = v16;
  v30 = si128;
  sub_64640(v28, (__int64 *)(a4 + 200), v13, v15, (__int64)v16, v14);
  sub_317C60((__int64 *)&v29, a4 + 216);
  if ( !(unsigned __int8)sub_64880(v28) || v30.m128i_i64[0] )
  {
    sub_FAAD0(a2);
    sub_1B3C00(v28, a2, (__int64)&v26);
    ++*a3;
  }
  if ( v29 )
  {
    v30.m128i_i64[0] = 0;
    qfree();
  }
  qfree();
  return v31 - __readfsqword(0x28u);
}
