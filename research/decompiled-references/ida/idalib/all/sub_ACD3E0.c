void __fastcall sub_ACD3E0(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int64 a8)
{
  __m128i v9; // xmm2
  __int64 v10; // rax
  __int64 v11; // rax
  __m128i v12; // xmm3
  __int64 v13; // rdx
  __int64 v14; // rdx
  __m128i *v15; // rdi
  bool v16; // zf
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __m128i *v20; // r13
  __int64 v21; // rax
  __int64 v22; // rax
  __m128i v23; // xmm5
  __int64 v24; // rdx
  __m128i v25; // xmm0
  void (__fastcall *v26)(__m128i *, __m128i *, __int64); // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // rdi
  void (__fastcall *v33)(__int64, __int64, __int64); // rax
  __int64 v34; // rax
  _BYTE *v35; // rax
  __m128i v36; // [rsp+0h] [rbp-C8h] BYREF
  __m128 v37; // [rsp+10h] [rbp-B8h]
  __int64 v38; // [rsp+20h] [rbp-A8h]
  __m128i v39; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+38h] [rbp-90h]
  void *v41; // [rsp+40h] [rbp-88h] BYREF
  __int64 v42; // [rsp+48h] [rbp-80h]
  __m128i v43; // [rsp+50h] [rbp-78h] BYREF
  __int64 v44; // [rsp+60h] [rbp-68h] BYREF
  __m128i v45; // [rsp+68h] [rbp-60h] BYREF
  __int64 v46; // [rsp+78h] [rbp-50h]
  void *v47; // [rsp+80h] [rbp-48h]
  __int64 v48; // [rsp+88h] [rbp-40h]
  __m128i v49[3]; // [rsp+90h] [rbp-38h] BYREF

  if ( *(_BYTE *)(a1 + 1056) )
  {
    *(_BYTE *)(a1 + 1056) = 0;
    sub_ACD8C0(&a7);
    v27 = *(unsigned int *)(a1 + 24);
    if ( (_DWORD)v27 )
    {
      v28 = *(_QWORD *)(a1 + 16);
      v36.m128i_i8[0] = 1;
      v29 = v28 + 32 * v27 - 32;
      if ( !*(_QWORD *)(v29 + 16) )
        goto LABEL_35;
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, __m128i *))(v29 + 24))(v29, &v36);
        v31 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
        *(_DWORD *)(a1 + 24) = v31;
        v32 = *(_QWORD *)(a1 + 16) + 32 * v31;
        v33 = *(void (__fastcall **)(__int64, __int64, __int64))(v32 + 16);
        if ( v33 )
          v33(v32, v32, 3);
        v34 = *(unsigned int *)(a1 + 24);
        if ( !(_DWORD)v34 )
          break;
        v30 = *(_QWORD *)(a1 + 16);
        v36.m128i_i8[0] = 1;
        v29 = v30 + 32 * v34 - 32;
        if ( !*(_QWORD *)(v29 + 16) )
          goto LABEL_35;
      }
    }
    v35 = *(_BYTE **)(a1 + 1064);
    *(_QWORD *)(a1 + 1072) = 0;
    *v35 = 0;
    sub_995540(*(_QWORD *)a1, "\n");
    *(_BYTE *)(a1 + 1056) = 1;
    return;
  }
  v38 = a1;
  v40 = a8;
  v39 = _mm_loadu_si128((const __m128i *)&a7);
  v41 = &v43;
  if ( a2 )
  {
    sub_ACAA20(&v41, a2, (__int64)&a2[a3]);
    if ( *(_BYTE *)(a1 + 1057) )
      goto LABEL_4;
    goto LABEL_16;
  }
  v16 = *(_BYTE *)(a1 + 1057) == 0;
  v43.m128i_i8[0] = 0;
  v42 = 0;
  if ( v16 )
  {
LABEL_16:
    v17 = *(unsigned int *)(a1 + 24);
    v18 = *(_QWORD *)(a1 + 16);
    LOBYTE(v44) = 0;
    v19 = v18 + 32 * v17 - 32;
    if ( *(_QWORD *)(v19 + 16) )
    {
      (*(void (__fastcall **)(__int64, __int64 *))(v19 + 24))(v19, &v44);
      v20 = (__m128i *)(*(_QWORD *)(a1 + 16) + 32LL * *(unsigned int *)(a1 + 24) - 32);
      v45 = _mm_loadu_si128(&v39);
      v44 = v38;
      v46 = v40;
      v47 = v49;
      if ( v41 == &v43 )
      {
        v49[0] = _mm_load_si128(&v43);
      }
      else
      {
        v47 = v41;
        v49[0].m128i_i64[0] = v43.m128i_i64[0];
      }
      v21 = v42;
      v42 = 0;
      v43.m128i_i8[0] = 0;
      v48 = v21;
      v41 = &v43;
      v37.m128_u64[0] = 0;
      v22 = operator new(0x40u);
      v23 = _mm_loadu_si128(&v45);
      *(_QWORD *)v22 = v44;
      v24 = v46;
      *(__m128i *)(v22 + 8) = v23;
      *(_QWORD *)(v22 + 24) = v24;
      *(_QWORD *)(v22 + 32) = v22 + 48;
      if ( v47 == v49 )
      {
        *(__m128i *)(v22 + 48) = _mm_load_si128(v49);
      }
      else
      {
        *(_QWORD *)(v22 + 32) = v47;
        *(_QWORD *)(v22 + 48) = v49[0].m128i_i64[0];
      }
      v36.m128i_i64[0] = v22;
      v49[0].m128i_i8[0] = 0;
      v25 = _mm_load_si128(&v36);
      *(_QWORD *)(v22 + 40) = v48;
      v47 = v49;
      v48 = 0;
      v36 = _mm_loadu_si128(v20);
      v26 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v20[1].m128i_i64[0];
      *v20 = v25;
      v37.m128_u64[0] = (unsigned __int64)v26;
      v20[1].m128i_i64[0] = (__int64)sub_ACC180;
      v37.m128_u64[1] = v20[1].m128i_u64[1];
      v20[1].m128i_i64[1] = (__int64)sub_ACD960;
      if ( v26 )
        v26(&v36, &v36, 3);
      goto LABEL_10;
    }
LABEL_35:
    std::__throw_bad_function_call();
  }
LABEL_4:
  v9 = _mm_loadu_si128(&v39);
  v44 = v38;
  v45 = v9;
  v46 = v40;
  v47 = v49;
  if ( v41 == &v43 )
  {
    v49[0] = _mm_load_si128(&v43);
  }
  else
  {
    v47 = v41;
    v49[0].m128i_i64[0] = v43.m128i_i64[0];
  }
  v10 = v42;
  v42 = 0;
  v43.m128i_i8[0] = 0;
  v48 = v10;
  v41 = &v43;
  v37.m128_u64[0] = 0;
  v11 = operator new(0x40u);
  v12 = _mm_loadu_si128(&v45);
  *(_QWORD *)v11 = v44;
  v13 = v46;
  *(__m128i *)(v11 + 8) = v12;
  *(_QWORD *)(v11 + 24) = v13;
  *(_QWORD *)(v11 + 32) = v11 + 48;
  if ( v47 == v49 )
  {
    *(__m128i *)(v11 + 48) = _mm_load_si128(v49);
  }
  else
  {
    *(_QWORD *)(v11 + 32) = v47;
    *(_QWORD *)(v11 + 48) = v49[0].m128i_i64[0];
  }
  v14 = v48;
  v36.m128i_i64[0] = v11;
  v48 = 0;
  *(_QWORD *)(v11 + 40) = v14;
  v47 = v49;
  v49[0].m128i_i8[0] = 0;
  v37 = _mm_loadh_ps((const double *)off_2C78498);
  sub_ACD330(a1 + 16, &v36);
  if ( v37.m128_u64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v37.m128_u64[0])(&v36, &v36, 3);
LABEL_10:
  if ( v47 != v49 )
    operator delete(v47);
  v15 = (__m128i *)v41;
  *(_BYTE *)(a1 + 1057) = 0;
  if ( v15 != &v43 )
    operator delete(v15);
}
