_BYTE *__fastcall sub_20E0630(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  _BYTE *v3; // rbp
  __m128i v4; // xmm1
  __m128 v5; // xmm0
  __m128i v6; // xmm0
  __m128i v7; // xmm0
  __m128i v8; // xmm0
  __m128i v9; // xmm1
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rdi
  __int64 v16; // rax
  void **v17; // rax
  void **v18; // rdi
  void **v19; // rax
  __int64 v21; // [rsp+0h] [rbp-13B8h] BYREF
  __m128i v22; // [rsp+8h] [rbp-13B0h] BYREF
  __m128i v23; // [rsp+18h] [rbp-13A0h] BYREF
  __m128i v24; // [rsp+28h] [rbp-1390h] BYREF
  _BYTE *v25; // [rsp+38h] [rbp-1380h]
  __int128 v26; // [rsp+40h] [rbp-1378h]
  __int64 v27; // [rsp+50h] [rbp-1368h]
  int v28; // [rsp+58h] [rbp-1360h]
  __m128 v29; // [rsp+60h] [rbp-1358h] BYREF
  void *v30[2]; // [rsp+70h] [rbp-1348h]
  void **v31; // [rsp+80h] [rbp-1338h]
  _BYTE v32[256]; // [rsp+88h] [rbp-1330h] BYREF
  void *v33[2]; // [rsp+188h] [rbp-1230h] BYREF
  void **v34; // [rsp+198h] [rbp-1220h]
  _BYTE v35[256]; // [rsp+1A0h] [rbp-1218h] BYREF
  void *v36[2]; // [rsp+2A0h] [rbp-1118h] BYREF
  void **v37; // [rsp+2B0h] [rbp-1108h]
  _OWORD v38[4]; // [rsp+2B8h] [rbp-1100h] BYREF
  void *v39[2]; // [rsp+2F8h] [rbp-10C0h] BYREF
  void **v40; // [rsp+308h] [rbp-10B0h]
  _OWORD v41[2]; // [rsp+310h] [rbp-10A8h] BYREF
  void *ptr[2]; // [rsp+330h] [rbp-1088h] BYREF
  __int16 *v43; // [rsp+340h] [rbp-1078h]
  _OWORD v44[2]; // [rsp+348h] [rbp-1070h] BYREF
  __int16 v45; // [rsp+368h] [rbp-1050h] BYREF
  char v46; // [rsp+36Ah] [rbp-104Eh]
  __int64 v47; // [rsp+370h] [rbp-1048h]
  __int64 v48; // [rsp+378h] [rbp-1040h]
  int v49; // [rsp+380h] [rbp-1038h]
  _QWORD v50[512]; // [rsp+390h] [rbp-1028h] BYREF
  void *v51; // [rsp+1390h] [rbp-28h]

  v3 = nullptr;
  if ( a1 )
  {
    v21 = a2 + a1;
    v24.m128i_i64[0] = (__int64)v44;
    v22.m128i_i64[0] = (__int64)v41;
    v4 = _mm_loadl_epi64(&v22);
    v23.m128i_i64[1] = (__int64)v38;
    v5 = _mm_loadh_ps((const double *)&v21);
    v23.m128i_i64[0] = (__int64)v35;
    v22.m128i_i64[1] = (__int64)v32;
    v29 = v5;
    v6 = _mm_loadl_epi64((const __m128i *)&v22.m128i_u64[1]);
    v31 = v33;
    memset(v32, 0, sizeof(v32));
    *(__m128i *)v30 = _mm_unpacklo_epi64(v6, v6);
    v7 = _mm_loadl_epi64(&v23);
    v34 = v36;
    memset(v35, 0, sizeof(v35));
    *(__m128i *)v33 = _mm_unpacklo_epi64(v7, v7);
    v8 = _mm_loadl_epi64((const __m128i *)&v23.m128i_u64[1]);
    *(__m128i *)v39 = _mm_unpacklo_epi64(v4, v4);
    v9 = _mm_loadl_epi64(&v24);
    v37 = v39;
    *(__m128i *)v36 = _mm_unpacklo_epi64(v8, v8);
    v40 = ptr;
    memset(v38, 0, sizeof(v38));
    memset(v41, 0, sizeof(v41));
    *(__m128i *)ptr = _mm_unpacklo_epi64(v9, v9);
    v43 = &v45;
    v45 = 1;
    memset(v44, 0, sizeof(v44));
    v46 = 0;
    v47 = -1;
    v48 = 0;
    v49 = 0;
    v50[0] = 0;
    v50[1] = 0;
    v51 = v50;
    v10 = (_QWORD *)sub_20E03E0((__int64)&v29, a3);
    v3 = v10;
    if ( v10 )
    {
      v15 = v10;
      v27 = -1;
      v26 = 0;
      v28 = 1;
      v24.m128i_i64[1] = (__int64)off_2BE8760;
      v16 = *v10;
      v25 = nullptr;
      (*(void (__fastcall **)(_QWORD *, unsigned __int64 *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(v16 + 64))(
        v15,
        &v24.m128i_u64[1],
        v11,
        v12,
        v13,
        v14,
        v21,
        v22.m128i_i64[0],
        v22.m128i_i64[1],
        v23.m128i_i64[0],
        v23.m128i_i64[1],
        v24.m128i_i64[0]);
      if ( (v3[9] & 0xC0) != 0x40 )
        (*(void (__fastcall **)(_BYTE *, unsigned __int64 *))(*(_QWORD *)v3 + 72LL))(v3, &v24.m128i_u64[1]);
      sub_20CFD70((__int64)&v24.m128i_i64[1]);
      v25[v26] = 0;
      v3 = v25;
    }
    while ( 1 )
    {
      v17 = (void **)v51;
      if ( !v51 )
        break;
      v18 = *(void ***)v51;
      v51 = *(void **)v51;
      if ( v17 == v50 )
      {
        while ( v18 )
        {
          v19 = (void **)*v18;
          v51 = *v18;
          if ( v18 != v50 )
            goto LABEL_23;
          v18 = v19;
        }
        break;
      }
      v18 = v17;
LABEL_23:
      free(v18);
    }
    if ( ptr[0] != v44 )
      free(ptr[0]);
    if ( v39[0] != v41 )
      free(v39[0]);
    if ( v36[0] != v38 )
      free(v36[0]);
    if ( v33[0] != v35 )
      free(v33[0]);
    if ( v30[0] != v32 )
      free(v30[0]);
  }
  return v3;
}
