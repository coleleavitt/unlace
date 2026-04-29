unsigned __int64 __fastcall sub_3D2920(__int64 a1, __int64 *a2, _DWORD *a3, __int64 a4)
{
  double v6; // rax
  __int64 v8; // rcx
  double v9; // xmm1_8
  __m128i v10; // xmm0
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // r9d
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // r9d
  __int64 v17; // rcx
  void *v18; // r8
  __m128i si128; // xmm0
  unsigned __int64 v21; // rax
  const char *v22; // rdx
  unsigned __int64 v23; // rax
  const char *v24; // rdx
  unsigned __int64 v25; // rax
  const char *v26; // rdx
  unsigned __int64 v27; // rax
  const char *v28; // rdx
  unsigned __int64 v29; // rax
  const char *v30; // rdx
  const void *v31; // rsi
  void *v32; // rax
  void *v33; // rax
  size_t v34; // [rsp+8h] [rbp-A0h]
  size_t v35; // [rsp+8h] [rbp-A0h]
  __int64 v36; // [rsp+8h] [rbp-A0h]
  size_t n[2]; // [rsp+10h] [rbp-98h] BYREF
  __m128i v38; // [rsp+20h] [rbp-88h] BYREF
  __int64 v39; // [rsp+30h] [rbp-78h]
  __int64 v40[2]; // [rsp+40h] [rbp-68h] BYREF
  void *v41; // [rsp+50h] [rbp-58h] BYREF
  __m128i v42; // [rsp+58h] [rbp-50h]
  unsigned __int64 v43; // [rsp+68h] [rbp-40h]

  v6 = *(double *)(a4 + 64);
  v43 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(a4 + 32);
  v39 = 0;
  v9 = v6;
  v10 = _mm_unpacklo_epi64(
          _mm_loadl_epi64((const __m128i *)(*(_QWORD *)&v6 + 1496LL)),
          (__m128i)*(unsigned __int64 *)&v6);
  v38 = v10;
  if ( v8 != -1 )
  {
    v29 = a2[1];
    v30 = (const char *)&unk_3EF793;
    if ( v29 > 1 )
    {
      v30 = "\n";
      if ( *(_BYTE *)(*a2 + v29 - 2) == 10 )
        v30 = (const char *)&unk_3EF793;
    }
    sub_F4410(a2, (__int64)"%sStart: %a\nEnd: %a", v30, *(double *)v10.m128i_i64, v9);
    *a3 += 2;
  }
  if ( !(unsigned __int8)sub_5E300((_QWORD *)(a4 + 120)) || *(_QWORD *)(a4 + 144) )
  {
    v27 = a2[1];
    v28 = (const char *)&unk_3EF793;
    if ( v27 > 1 )
    {
      v28 = "\n";
      if ( *(_BYTE *)(*a2 + v27 - 2) == 10 )
        v28 = (const char *)&unk_3EF793;
    }
    sub_F4410(a2, (__int64)"%sUsed: ", v28);
    sub_1AD400((_QWORD *)(a4 + 120), a2, (__int64)&v38, *(double *)v10.m128i_i64, v9);
    ++*a3;
  }
  if ( !(unsigned __int8)sub_5E300((_QWORD *)(a4 + 200)) || *(_QWORD *)(a4 + 224) )
  {
    v25 = a2[1];
    v26 = (const char *)&unk_3EF793;
    if ( v25 > 1 )
    {
      v26 = "\n";
      if ( *(_BYTE *)(*a2 + v25 - 2) == 10 )
        v26 = (const char *)&unk_3EF793;
    }
    sub_F4410(a2, (__int64)"%sDefined: ", v26);
    sub_1AD400((_QWORD *)(a4 + 200), a2, (__int64)&v38, *(double *)v10.m128i_i64, v9);
    ++*a3;
  }
  sub_5DA80(v40, a4 + 160);
  v14 = *(_QWORD *)(a4 + 184);
  v41 = nullptr;
  v42 = 0;
  if ( v14 )
  {
    v35 = v14;
    n[0] = 16 * v14;
    v41 = (void *)qalloc_or_throw(16 * v14);
    v31 = *(const void **)(a4 + 176);
    v42.m128i_i64[1] = v35;
    memcpy(v41, v31, n[0]);
    v14 = v35;
    v42.m128i_i64[0] = v35;
  }
  sub_5E0C0(v40, (__int64 *)(a4 + 120), v11, v14, v12, v13);
  sub_3108E0((__int64 *)&v41, a4 + 136);
  if ( !(unsigned __int8)sub_5E300(v40) || v42.m128i_i64[0] )
  {
    v23 = a2[1];
    v24 = (const char *)&unk_3EF793;
    if ( v23 > 1 )
    {
      v24 = "\n";
      if ( *(_BYTE *)(*a2 + v23 - 2) == 10 )
        v24 = (const char *)&unk_3EF793;
    }
    sub_F4410(a2, (__int64)"%sMaybe used: ", v24);
    sub_1AD400(v40, a2, (__int64)&v38, 0.0, v9);
    ++*a3;
  }
  sub_5E350(v40, (__int64 *)(a4 + 240));
  v17 = *(_QWORD *)(a4 + 264);
  v18 = nullptr;
  if ( v17 )
  {
    n[0] = *(_QWORD *)(a4 + 264);
    v36 = 16 * v17;
    v32 = (void *)qalloc_or_throw(16 * v17);
    v33 = memcpy(v32, *(const void **)(a4 + 256), v36);
    v17 = n[0];
    v18 = v33;
  }
  si128 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v17, (__m128i)(unsigned __int64)v17);
  if ( v41 )
  {
    v34 = (size_t)v18;
    *(__m128i *)n = si128;
    v42.m128i_i64[0] = 0;
    qfree(v41);
    si128 = _mm_load_si128((const __m128i *)n);
    v18 = (void *)v34;
  }
  v41 = v18;
  v42 = si128;
  sub_5E0C0(v40, (__int64 *)(a4 + 200), v15, v17, (__int64)v18, v16);
  sub_3108E0((__int64 *)&v41, a4 + 216);
  if ( !(unsigned __int8)sub_5E300(v40) || v42.m128i_i64[0] )
  {
    v21 = a2[1];
    v22 = (const char *)&unk_3EF793;
    if ( v21 > 1 )
    {
      v22 = "\n";
      if ( *(_BYTE *)(*a2 + v21 - 2) == 10 )
        v22 = (const char *)&unk_3EF793;
    }
    sub_F4410(a2, (__int64)"%sMaybe defined: ", v22);
    sub_1AD400(v40, a2, (__int64)&v38, *(double *)si128.m128i_i64, v9);
    ++*a3;
  }
  if ( v41 )
  {
    v42.m128i_i64[0] = 0;
    qfree(v41);
  }
  qfree(v40[0]);
  return v43 - __readfsqword(0x28u);
}
