void __fastcall sub_1218F10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _BYTE *v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r15
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r9
  _BYTE *v23; // r15
  void *v24; // rdx
  __int64 v26; // [rsp+8h] [rbp-178h]
  __int64 v28; // [rsp+28h] [rbp-158h]
  void *s1[2]; // [rsp+38h] [rbp-148h] BYREF
  _BYTE v31[16]; // [rsp+48h] [rbp-138h] BYREF
  void *v32[2]; // [rsp+58h] [rbp-128h] BYREF
  __int64 v33; // [rsp+68h] [rbp-118h] BYREF
  __m128i v34; // [rsp+78h] [rbp-108h] BYREF
  __int64 v35; // [rsp+88h] [rbp-F8h] BYREF
  __m128i v36; // [rsp+98h] [rbp-E8h] BYREF
  __int64 v37; // [rsp+A8h] [rbp-D8h] BYREF
  __m128i v38; // [rsp+B8h] [rbp-C8h] BYREF
  _QWORD v39[2]; // [rsp+C8h] [rbp-B8h] BYREF
  __int16 v40; // [rsp+D8h] [rbp-A8h]
  __m128i v41; // [rsp+E8h] [rbp-98h] BYREF
  _BYTE v42[16]; // [rsp+F8h] [rbp-88h] BYREF
  __int16 v43; // [rsp+108h] [rbp-78h]
  __m128i v44[2]; // [rsp+118h] [rbp-68h] BYREF
  __int16 v45; // [rsp+138h] [rbp-48h]

  if ( *(_BYTE *)(a1 + 2384) )
  {
    v7 = *(_BYTE **)(a1 + 2488);
    s1[0] = v31;
    sub_1213C40(s1, v7, (__int64)&v7[*(_QWORD *)(a1 + 2496)]);
    if ( *(_QWORD *)(a1 + 2160) )
    {
      (*(void (__fastcall **)(__m128i *, __int64, __int64))(a1 + 2168))(
        &v36,
        a1 + 2144,
        *(_QWORD *)(a1 + 2176) + 192LL * *(unsigned int *)(a1 + 2184) - 192);
      v26 = v36.m128i_i64[1];
      v12 = v36.m128i_i64[0];
      if ( v36.m128i_i64[0] != v36.m128i_i64[1] )
      {
        v13 = v36.m128i_i64[0];
        do
        {
          v14 = *(_QWORD *)(a1 + 2456);
          v15 = *(_QWORD *)(a1 + 2464);
          v41.m128i_i64[0] = v13;
          v13 += 32;
          v38.m128i_i64[0] = v14;
          v38.m128i_i64[1] = v15;
          v43 = 260;
          v40 = 261;
          sub_A41580(v44, &v38, &v41, v12, v10, v11);
          sub_11C52D0(a2, (__int64)v44, a6);
        }
        while ( v26 != v13 );
      }
      sub_9B4A30((void ***)&v36);
    }
    v16 = *(unsigned int *)(a1 + 2184);
    v17 = *(_QWORD *)(a1 + 2176);
    v40 = 261;
    v41.m128i_i64[0] = v17 + 192 * v16 - 192;
    v18 = *(_QWORD *)(a1 + 2464);
    v43 = 260;
    v19 = *(_QWORD *)(a1 + 2456);
    v38.m128i_i64[1] = v18;
    v38.m128i_i64[0] = v19;
    sub_A41580(v44, &v38, &v41, v19, v8, v9);
    sub_11C52D0(a2, (__int64)v44, a6);
    v20 = *(_QWORD *)(a1 + 2464);
    v21 = *(_QWORD *)(a1 + 2456);
    v39[0] = "/../";
    v43 = 260;
    v38.m128i_i64[1] = v20;
    v40 = 773;
    v41.m128i_i64[0] = a4;
    v38.m128i_i64[0] = v21;
    sub_A41580(v44, &v38, &v41, v21, 773, v22);
    sub_11C52D0(a2, (__int64)v44, a6);
    v28 = *(_QWORD *)(a1 + 2176) + 192LL * *(unsigned int *)(a1 + 2184) - 160;
    sub_F7DA00((size_t *)v32, (__int64)s1, "/../");
    sub_12182E0(&v34, v32, a1 + 2392);
    sub_10E1980(&v36, &v34, "/lib/../");
    sub_12182E0(&v38, &v36, a4);
    sub_12182E0(&v41, &v38, v28);
    v44[0].m128i_i64[0] = (__int64)&v41;
    v45 = 260;
    sub_11C52D0(a2, (__int64)v44, a6);
    if ( (_BYTE *)v41.m128i_i64[0] != v42 )
      operator delete((void *)v41.m128i_i64[0]);
    if ( (_QWORD *)v38.m128i_i64[0] != v39 )
      operator delete((void *)v38.m128i_i64[0]);
    if ( (__int64 *)v36.m128i_i64[0] != &v37 )
      operator delete((void *)v36.m128i_i64[0]);
    if ( (__int64 *)v34.m128i_i64[0] != &v35 )
      operator delete((void *)v34.m128i_i64[0]);
    if ( v32[0] != &v33 )
      operator delete(v32[0]);
    v23 = s1[0];
    v24 = *(void **)(a3 + 8);
    if ( v24 <= s1[1] && (!v24 || !memcmp(s1[0], *(const void **)a3, (size_t)v24)) )
    {
      sub_F7DA00((size_t *)&v38, (__int64)s1, "/../");
      sub_12182E0(&v41, &v38, a4);
      v44[0].m128i_i64[0] = (__int64)&v41;
      v45 = 260;
      sub_11C52D0(a2, (__int64)v44, a6);
      if ( (_BYTE *)v41.m128i_i64[0] != v42 )
        operator delete((void *)v41.m128i_i64[0]);
      if ( (_QWORD *)v38.m128i_i64[0] != v39 )
        operator delete((void *)v38.m128i_i64[0]);
      v23 = s1[0];
    }
    if ( v23 != v31 )
      operator delete(v23);
  }
}
