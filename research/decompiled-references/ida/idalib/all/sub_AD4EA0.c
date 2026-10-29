void __fastcall sub_AD4EA0(
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
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rdi
  __int64 v33; // rdi
  void (__fastcall *v34)(__int64, __int64, __int64); // rax
  __int64 v35; // rax
  _BYTE *v36; // rax
  __m128i v37; // [rsp+0h] [rbp-C8h] BYREF
  __m128 v38; // [rsp+10h] [rbp-B8h]
  __int64 v39; // [rsp+20h] [rbp-A8h]
  __m128i v40; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+38h] [rbp-90h]
  void *v42; // [rsp+40h] [rbp-88h] BYREF
  __int64 v43; // [rsp+48h] [rbp-80h]
  __m128i v44; // [rsp+50h] [rbp-78h] BYREF
  __int64 v45; // [rsp+60h] [rbp-68h] BYREF
  __m128i v46; // [rsp+68h] [rbp-60h] BYREF
  __int64 v47; // [rsp+78h] [rbp-50h]
  void *v48; // [rsp+80h] [rbp-48h]
  __int64 v49; // [rsp+88h] [rbp-40h]
  __m128i v50[3]; // [rsp+90h] [rbp-38h] BYREF

  if ( *(_BYTE *)(a1 + 1056) )
  {
    *(_BYTE *)(a1 + 1056) = 0;
    sub_F2AA90(a7 + 8, (char *)&a7 + 8);
    if ( a8 )
      sub_AD2220(a7 + 8, 0, 0, a8, a7, v27);
    v28 = *(unsigned int *)(a1 + 24);
    if ( (_DWORD)v28 )
    {
      v29 = *(_QWORD *)(a1 + 16);
      v37.m128i_i8[0] = 1;
      v30 = v29 + 32 * v28 - 32;
      if ( !*(_QWORD *)(v30 + 16) )
        goto LABEL_37;
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, __m128i *))(v30 + 24))(v30, &v37);
        v32 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
        *(_DWORD *)(a1 + 24) = v32;
        v33 = *(_QWORD *)(a1 + 16) + 32 * v32;
        v34 = *(void (__fastcall **)(__int64, __int64, __int64))(v33 + 16);
        if ( v34 )
          v34(v33, v33, 3);
        v35 = *(unsigned int *)(a1 + 24);
        if ( !(_DWORD)v35 )
          break;
        v31 = *(_QWORD *)(a1 + 16);
        v37.m128i_i8[0] = 1;
        v30 = v31 + 32 * v35 - 32;
        if ( !*(_QWORD *)(v30 + 16) )
          goto LABEL_37;
      }
    }
    v36 = *(_BYTE **)(a1 + 1064);
    *(_QWORD *)(a1 + 1072) = 0;
    *v36 = 0;
    sub_995540(*(_QWORD *)a1, "\n");
    *(_BYTE *)(a1 + 1056) = 1;
    return;
  }
  v39 = a1;
  v41 = a8;
  v40 = _mm_loadu_si128((const __m128i *)&a7);
  v42 = &v44;
  if ( a2 )
  {
    sub_ACAA20(&v42, a2, (__int64)&a2[a3]);
    if ( *(_BYTE *)(a1 + 1057) )
      goto LABEL_4;
    goto LABEL_16;
  }
  v16 = *(_BYTE *)(a1 + 1057) == 0;
  v44.m128i_i8[0] = 0;
  v43 = 0;
  if ( v16 )
  {
LABEL_16:
    v17 = *(unsigned int *)(a1 + 24);
    v18 = *(_QWORD *)(a1 + 16);
    LOBYTE(v45) = 0;
    v19 = v18 + 32 * v17 - 32;
    if ( *(_QWORD *)(v19 + 16) )
    {
      (*(void (__fastcall **)(__int64, __int64 *))(v19 + 24))(v19, &v45);
      v20 = (__m128i *)(*(_QWORD *)(a1 + 16) + 32LL * *(unsigned int *)(a1 + 24) - 32);
      v46 = _mm_loadu_si128(&v40);
      v45 = v39;
      v47 = v41;
      v48 = v50;
      if ( v42 == &v44 )
      {
        v50[0] = _mm_load_si128(&v44);
      }
      else
      {
        v48 = v42;
        v50[0].m128i_i64[0] = v44.m128i_i64[0];
      }
      v21 = v43;
      v43 = 0;
      v44.m128i_i8[0] = 0;
      v49 = v21;
      v42 = &v44;
      v38.m128_u64[0] = 0;
      v22 = operator new(0x40u);
      v23 = _mm_loadu_si128(&v46);
      *(_QWORD *)v22 = v45;
      v24 = v47;
      *(__m128i *)(v22 + 8) = v23;
      *(_QWORD *)(v22 + 24) = v24;
      *(_QWORD *)(v22 + 32) = v22 + 48;
      if ( v48 == v50 )
      {
        *(__m128i *)(v22 + 48) = _mm_load_si128(v50);
      }
      else
      {
        *(_QWORD *)(v22 + 32) = v48;
        *(_QWORD *)(v22 + 48) = v50[0].m128i_i64[0];
      }
      v37.m128i_i64[0] = v22;
      v50[0].m128i_i8[0] = 0;
      v25 = _mm_load_si128(&v37);
      *(_QWORD *)(v22 + 40) = v49;
      v48 = v50;
      v49 = 0;
      v37 = _mm_loadu_si128(v20);
      v26 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v20[1].m128i_i64[0];
      *v20 = v25;
      v38.m128_u64[0] = (unsigned __int64)v26;
      v20[1].m128i_i64[0] = (__int64)sub_ACB700;
      v38.m128_u64[1] = v20[1].m128i_u64[1];
      v20[1].m128i_i64[1] = (__int64)sub_AD6690;
      if ( v26 )
        v26(&v37, &v37, 3);
      goto LABEL_10;
    }
LABEL_37:
    std::__throw_bad_function_call();
  }
LABEL_4:
  v9 = _mm_loadu_si128(&v40);
  v45 = v39;
  v46 = v9;
  v47 = v41;
  v48 = v50;
  if ( v42 == &v44 )
  {
    v50[0] = _mm_load_si128(&v44);
  }
  else
  {
    v48 = v42;
    v50[0].m128i_i64[0] = v44.m128i_i64[0];
  }
  v10 = v43;
  v43 = 0;
  v44.m128i_i8[0] = 0;
  v49 = v10;
  v42 = &v44;
  v38.m128_u64[0] = 0;
  v11 = operator new(0x40u);
  v12 = _mm_loadu_si128(&v46);
  *(_QWORD *)v11 = v45;
  v13 = v47;
  *(__m128i *)(v11 + 8) = v12;
  *(_QWORD *)(v11 + 24) = v13;
  *(_QWORD *)(v11 + 32) = v11 + 48;
  if ( v48 == v50 )
  {
    *(__m128i *)(v11 + 48) = _mm_load_si128(v50);
  }
  else
  {
    *(_QWORD *)(v11 + 32) = v48;
    *(_QWORD *)(v11 + 48) = v50[0].m128i_i64[0];
  }
  v14 = v49;
  v37.m128i_i64[0] = v11;
  v49 = 0;
  *(_QWORD *)(v11 + 40) = v14;
  v48 = v50;
  v50[0].m128i_i8[0] = 0;
  v38 = _mm_loadh_ps((const double *)off_2C782C0);
  sub_ACD330(a1 + 16, &v37);
  if ( v38.m128_u64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v38.m128_u64[0])(&v37, &v37, 3);
LABEL_10:
  if ( v48 != v50 )
    operator delete(v48);
  v15 = (__m128i *)v42;
  *(_BYTE *)(a1 + 1057) = 0;
  if ( v15 != &v44 )
    operator delete(v15);
}
