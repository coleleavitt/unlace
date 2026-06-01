void __fastcall sub_AD46D0(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4, __int64 a5)
{
  bool v6; // zf
  __m128i v7; // xmm1
  __m128i v8; // xmm2
  __int64 v9; // rax
  __int64 v10; // rax
  __m128i v11; // xmm3
  __m128i *v12; // rdx
  __int64 v13; // rdx
  __m128i *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __m128i *v18; // r13
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  __m128i v23; // xmm5
  __m128i *v24; // rdx
  __m128i v25; // xmm0
  void (__fastcall *v26)(__m128i *, __m128i *, __int64, __m128i *, __int64, __int64, __int64, __int64); // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rdi
  void (__fastcall *v35)(__int64, __int64, __int64); // rax
  __int64 v36; // rax
  _BYTE *v37; // rax
  __m128i v38; // [rsp+0h] [rbp-D8h] BYREF
  __m128i v39; // [rsp+10h] [rbp-C8h] BYREF
  __m128 v40; // [rsp+20h] [rbp-B8h]
  __int64 v41; // [rsp+30h] [rbp-A8h]
  __m128i v42; // [rsp+38h] [rbp-A0h] BYREF
  void *v43; // [rsp+48h] [rbp-90h] BYREF
  __int64 v44; // [rsp+50h] [rbp-88h]
  __m128i v45; // [rsp+58h] [rbp-80h] BYREF
  __int64 v46; // [rsp+70h] [rbp-68h] BYREF
  __m128i v47; // [rsp+78h] [rbp-60h] BYREF
  void *v48; // [rsp+88h] [rbp-50h]
  __int64 v49; // [rsp+90h] [rbp-48h]
  __m128i v50[4]; // [rsp+98h] [rbp-40h] BYREF

  v6 = *(_BYTE *)(a1 + 1056) == 0;
  v38.m128i_i64[0] = a4;
  v38.m128i_i64[1] = a5;
  if ( !v6 )
  {
    *(_BYTE *)(a1 + 1056) = 0;
    sub_AD4540(v38.m128i_i64);
    v30 = *(unsigned int *)(a1 + 24);
    if ( (_DWORD)v30 )
    {
      v31 = *(_QWORD *)(a1 + 16);
      v39.m128i_i8[0] = 1;
      v32 = v31 + 32 * v30 - 32;
      if ( !*(_QWORD *)(v32 + 16) )
        goto LABEL_35;
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, __m128i *, __int64, __int64, __int64, __int64, __int64, __int64))(v32 + 24))(
          v32,
          &v39,
          v31,
          v27,
          v28,
          v29,
          v38.m128i_i64[0],
          v38.m128i_i64[1]);
        v33 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
        *(_DWORD *)(a1 + 24) = v33;
        v34 = *(_QWORD *)(a1 + 16) + 32 * v33;
        v35 = *(void (__fastcall **)(__int64, __int64, __int64))(v34 + 16);
        if ( v35 )
          v35(v34, v34, 3);
        v36 = *(unsigned int *)(a1 + 24);
        if ( !(_DWORD)v36 )
          break;
        v31 = *(_QWORD *)(a1 + 16);
        v39.m128i_i8[0] = 1;
        v32 = v31 + 32 * v36 - 32;
        if ( !*(_QWORD *)(v32 + 16) )
          goto LABEL_35;
      }
    }
    v37 = *(_BYTE **)(a1 + 1064);
    *(_QWORD *)(a1 + 1072) = 0;
    *v37 = 0;
    sub_995540(*(_QWORD *)a1, "\n");
    *(_BYTE *)(a1 + 1056) = 1;
    return;
  }
  v7 = _mm_load_si128(&v38);
  v41 = a1;
  v42 = v7;
  v43 = &v45;
  if ( a2 )
  {
    sub_ACAA20(&v43, a2, (__int64)&a2[a3]);
    if ( *(_BYTE *)(a1 + 1057) )
      goto LABEL_4;
    goto LABEL_16;
  }
  v6 = *(_BYTE *)(a1 + 1057) == 0;
  v45.m128i_i8[0] = 0;
  v44 = 0;
  if ( v6 )
  {
LABEL_16:
    v15 = *(unsigned int *)(a1 + 24);
    v16 = *(_QWORD *)(a1 + 16);
    LOBYTE(v46) = 0;
    v17 = v16 + 32 * v15 - 32;
    if ( *(_QWORD *)(v17 + 16) )
    {
      (*(void (__fastcall **)(__int64, __int64 *))(v17 + 24))(v17, &v46);
      v18 = (__m128i *)(*(_QWORD *)(a1 + 16) + 32LL * *(unsigned int *)(a1 + 24) - 32);
      v47 = _mm_loadu_si128(&v42);
      v46 = v41;
      v48 = v50;
      if ( v43 == &v45 )
      {
        v50[0] = _mm_loadu_si128(&v45);
      }
      else
      {
        v48 = v43;
        v50[0].m128i_i64[0] = v45.m128i_i64[0];
      }
      v19 = v44;
      v44 = 0;
      v45.m128i_i8[0] = 0;
      v49 = v19;
      v43 = &v45;
      v40.m128_u64[0] = 0;
      v20 = operator new(0x38u);
      v23 = _mm_loadu_si128(&v47);
      *(_QWORD *)v20 = v46;
      *(_QWORD *)(v20 + 24) = v20 + 40;
      v24 = (__m128i *)v48;
      *(__m128i *)(v20 + 8) = v23;
      if ( v24 == v50 )
      {
        *(__m128i *)(v20 + 40) = _mm_loadu_si128(v50);
      }
      else
      {
        *(_QWORD *)(v20 + 24) = v24;
        *(_QWORD *)(v20 + 40) = v50[0].m128i_i64[0];
      }
      v39.m128i_i64[0] = v20;
      v50[0].m128i_i8[0] = 0;
      v25 = _mm_load_si128(&v39);
      *(_QWORD *)(v20 + 32) = v49;
      v48 = v50;
      v49 = 0;
      v39 = _mm_loadu_si128(v18);
      v26 = (void (__fastcall *)(__m128i *, __m128i *, __int64, __m128i *, __int64, __int64, __int64, __int64))v18[1].m128i_i64[0];
      *v18 = v25;
      v40.m128_u64[0] = (unsigned __int64)v26;
      v18[1].m128i_i64[0] = (__int64)sub_ACB000;
      v40.m128_u64[1] = v18[1].m128i_u64[1];
      v18[1].m128i_i64[1] = (__int64)sub_AD4BF0;
      if ( v26 )
        v26(&v39, &v39, 3, v50, v21, v22, v38.m128i_i64[0], v38.m128i_i64[1]);
      goto LABEL_10;
    }
LABEL_35:
    std::__throw_bad_function_call();
  }
LABEL_4:
  v8 = _mm_loadu_si128(&v42);
  v46 = v41;
  v48 = v50;
  v47 = v8;
  if ( v43 == &v45 )
  {
    v50[0] = _mm_loadu_si128(&v45);
  }
  else
  {
    v48 = v43;
    v50[0].m128i_i64[0] = v45.m128i_i64[0];
  }
  v9 = v44;
  v44 = 0;
  v45.m128i_i8[0] = 0;
  v49 = v9;
  v43 = &v45;
  v40.m128_u64[0] = 0;
  v10 = operator new(0x38u);
  v11 = _mm_loadu_si128(&v47);
  *(_QWORD *)v10 = v46;
  *(_QWORD *)(v10 + 24) = v10 + 40;
  v12 = (__m128i *)v48;
  *(__m128i *)(v10 + 8) = v11;
  if ( v12 == v50 )
  {
    *(__m128i *)(v10 + 40) = _mm_loadu_si128(v50);
  }
  else
  {
    *(_QWORD *)(v10 + 24) = v12;
    *(_QWORD *)(v10 + 40) = v50[0].m128i_i64[0];
  }
  v13 = v49;
  v39.m128i_i64[0] = v10;
  v49 = 0;
  *(_QWORD *)(v10 + 32) = v13;
  v48 = v50;
  v50[0].m128i_i8[0] = 0;
  v40 = _mm_loadh_ps((const double *)off_2C77C98);
  sub_ACD330(a1 + 16, &v39);
  if ( v40.m128_u64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v40.m128_u64[0])(&v39, &v39, 3);
LABEL_10:
  if ( v48 != v50 )
    operator delete(v48);
  v14 = (__m128i *)v43;
  *(_BYTE *)(a1 + 1057) = 0;
  if ( v14 != &v45 )
    operator delete(v14);
}
