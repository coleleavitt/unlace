void __fastcall sub_AAE4E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  bool v7; // zf
  __m128i v8; // xmm0
  __m128i v9; // xmm1
  __int64 v10; // rax
  __m128i v11; // xmm2
  __m128i *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __m128i *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rdi
  void (__fastcall *v24)(__int64, __int64, __int64); // rax
  __int64 v25; // rax
  _BYTE *v26; // rax
  __m128i v27; // [rsp+0h] [rbp-D8h] BYREF
  __m128i v28; // [rsp+10h] [rbp-C8h] BYREF
  __m128 v29; // [rsp+20h] [rbp-B8h]
  __int64 v30; // [rsp+30h] [rbp-A8h] BYREF
  __m128i v31; // [rsp+38h] [rbp-A0h]
  void *v32; // [rsp+48h] [rbp-90h]
  __int64 v33; // [rsp+50h] [rbp-88h]
  __m128i v34; // [rsp+58h] [rbp-80h] BYREF
  __int64 v35; // [rsp+70h] [rbp-68h] BYREF
  __m128i v36; // [rsp+78h] [rbp-60h] BYREF
  void *v37; // [rsp+88h] [rbp-50h]
  __int64 v38; // [rsp+90h] [rbp-48h]
  __m128i v39[4]; // [rsp+98h] [rbp-40h] BYREF

  v7 = *(_BYTE *)(a1 + 1056) == 0;
  v27.m128i_i64[0] = a4;
  v27.m128i_i64[1] = a5;
  if ( !v7 )
  {
    *(_BYTE *)(a1 + 1056) = 0;
    sub_AADD40((__int64)&v27);
    v18 = *(unsigned int *)(a1 + 24);
    if ( (_DWORD)v18 )
    {
      v19 = *(_QWORD *)(a1 + 16);
      LOBYTE(v35) = 1;
      v20 = v19 + 32 * v18 - 32;
      if ( !*(_QWORD *)(v20 + 16) )
        goto LABEL_23;
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, __int64 *))(v20 + 24))(v20, &v35);
        v22 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
        *(_DWORD *)(a1 + 24) = v22;
        v23 = *(_QWORD *)(a1 + 16) + 32 * v22;
        v24 = *(void (__fastcall **)(__int64, __int64, __int64))(v23 + 16);
        if ( v24 )
          v24(v23, v23, 3);
        v25 = *(unsigned int *)(a1 + 24);
        if ( !(_DWORD)v25 )
          break;
        v21 = *(_QWORD *)(a1 + 16);
        LOBYTE(v35) = 1;
        v20 = v21 + 32 * v25 - 32;
        if ( !*(_QWORD *)(v20 + 16) )
          goto LABEL_23;
      }
    }
    v26 = *(_BYTE **)(a1 + 1064);
    *(_QWORD *)(a1 + 1072) = 0;
    *v26 = 0;
    sub_971800(*(_QWORD *)a1, "\n");
    *(_BYTE *)(a1 + 1056) = 1;
    return;
  }
  v8 = _mm_load_si128(&v27);
  v30 = a1;
  v7 = *(_BYTE *)(a1 + 1057) == 0;
  v34.m128i_i8[0] = 0;
  v31 = v8;
  v32 = &v34;
  v33 = 0;
  if ( !v7 )
  {
    v9 = _mm_loadu_si128(&v34);
    v35 = a1;
    v36 = v8;
    v37 = v39;
    v39[0] = v9;
    v38 = 0;
    v29.m128_u64[0] = 0;
    v10 = operator new(0x38u);
    v11 = _mm_loadu_si128(&v36);
    *(_QWORD *)v10 = v35;
    *(_QWORD *)(v10 + 24) = v10 + 40;
    v12 = (__m128i *)v37;
    *(__m128i *)(v10 + 8) = v11;
    if ( v12 == v39 )
    {
      *(__m128i *)(v10 + 40) = _mm_loadu_si128(v39);
    }
    else
    {
      *(_QWORD *)(v10 + 24) = v12;
      *(_QWORD *)(v10 + 40) = v39[0].m128i_i64[0];
    }
    v13 = v38;
    v28.m128i_i64[0] = v10;
    v38 = 0;
    *(_QWORD *)(v10 + 32) = v13;
    v37 = v39;
    v39[0].m128i_i8[0] = 0;
    v29 = _mm_loadh_ps((const double *)off_2C4DE00);
    sub_AA95F0(a1 + 16, &v28);
    if ( v29.m128_u64[0] )
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v29.m128_u64[0])(&v28, &v28, 3);
    if ( v37 != v39 )
      operator delete(v37);
    goto LABEL_11;
  }
  v14 = *(unsigned int *)(a1 + 24);
  v15 = *(_QWORD *)(a1 + 16);
  v28.m128i_i8[0] = 0;
  v16 = v15 + 32 * v14 - 32;
  if ( !*(_QWORD *)(v16 + 16) )
LABEL_23:
    std::__throw_bad_function_call();
  (*(void (__fastcall **)(__int64, __m128i *, __int64, __int64, __int64, __int64, __int64, __int64))(v16 + 24))(
    v16,
    &v28,
    v15,
    a4,
    a5,
    a6,
    v27.m128i_i64[0],
    v27.m128i_i64[1]);
  sub_AA8B20((__m128i *)(*(_QWORD *)(a1 + 16) + 32LL * *(unsigned int *)(a1 + 24) - 32), &v30);
LABEL_11:
  v17 = (__m128i *)v32;
  *(_BYTE *)(a1 + 1057) = 0;
  if ( v17 != &v34 )
    operator delete(v17);
}

