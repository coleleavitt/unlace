void __fastcall sub_F39AE0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __m128i *v10; // r13
  __int64 v11; // rax
  __int64 v12; // rax
  __m128i v13; // xmm4
  __m128i *v14; // rdx
  __m128i v15; // xmm0
  void (__fastcall *v16)(__m128i *, __m128i *, __int64); // rax
  __int64 v17; // rdx
  __m128i *v18; // rdi
  __m128i v19; // xmm1
  __int64 v20; // rax
  __int64 v21; // rax
  __m128i v22; // xmm2
  __m128i *v23; // rdx
  __int64 v24; // rdx
  void *v25; // r12
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rdi
  void (__fastcall *v31)(__int64, __int64, __int64); // rax
  _BYTE *v32; // rax
  int v33; // [rsp+0h] [rbp-E8h]
  __int64 (__fastcall *v34)(); // [rsp+8h] [rbp-E0h] BYREF
  __m128i v35; // [rsp+10h] [rbp-D8h] BYREF
  __m128 v36; // [rsp+20h] [rbp-C8h]
  __int64 v37; // [rsp+30h] [rbp-B8h]
  __m128i v38; // [rsp+38h] [rbp-B0h] BYREF
  void *v39; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+50h] [rbp-98h]
  __m128i v41; // [rsp+58h] [rbp-90h] BYREF
  __int64 v42; // [rsp+70h] [rbp-78h] BYREF
  __m128i v43; // [rsp+78h] [rbp-70h] BYREF
  void *v44; // [rsp+88h] [rbp-60h]
  __int64 v45; // [rsp+90h] [rbp-58h]
  __m128i v46[5]; // [rsp+98h] [rbp-50h] BYREF

  if ( *(_BYTE *)(a1 + 1056) )
  {
    *(_BYTE *)(a1 + 1056) = 0;
    v25 = *(void **)(a2 + 8);
    sub_BF7B00((__int64)&v42, a2, a3, a4, a5, a6, v33, (__int64)v34, v35.m128i_i8[0]);
    sub_F37C60((_QWORD *)a1, (__int64)&v42, v25);
    if ( (unsigned int)v42 > 1 )
      sub_A4F8E0((int *)&v42);
LABEL_23:
    v26 = *(unsigned int *)(a1 + 24);
    if ( !(_DWORD)v26 )
    {
LABEL_27:
      v32 = *(_BYTE **)(a1 + 1064);
      *(_QWORD *)(a1 + 1072) = 0;
      *v32 = 0;
      sub_995540(*(_QWORD *)a1, "\n");
      *(_BYTE *)(a1 + 1056) = 1;
      return;
    }
    while ( 1 )
    {
      v27 = *(_QWORD *)(a1 + 16);
      LOBYTE(v42) = 1;
      v28 = v27 + 32 * v26 - 32;
      if ( !*(_QWORD *)(v28 + 16) )
        goto LABEL_32;
      (*(void (__fastcall **)(__int64, __int64 *))(v28 + 24))(v28, &v42);
      v29 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
      *(_DWORD *)(a1 + 24) = v29;
      v30 = *(_QWORD *)(a1 + 16) + 32 * v29;
      v31 = *(void (__fastcall **)(__int64, __int64, __int64))(v30 + 16);
      if ( !v31 )
        goto LABEL_23;
      v31(v30, v30, 3);
      v26 = *(unsigned int *)(a1 + 24);
      if ( !(_DWORD)v26 )
        goto LABEL_27;
    }
  }
  v37 = a1;
  v38.m128i_i64[0] = a2;
  v38.m128i_i64[1] = a1;
  v39 = &v41;
  sub_F24710(&v39, "value", (__int64)"");
  if ( *(_BYTE *)(a1 + 1057) )
  {
    v19 = _mm_loadu_si128(&v38);
    v42 = v37;
    v44 = v46;
    v43 = v19;
    if ( v39 == &v41 )
    {
      v46[0] = _mm_loadu_si128(&v41);
    }
    else
    {
      v44 = v39;
      v46[0].m128i_i64[0] = v41.m128i_i64[0];
    }
    v20 = v40;
    v40 = 0;
    v41.m128i_i8[0] = 0;
    v45 = v20;
    v39 = &v41;
    v36.m128_u64[0] = 0;
    v21 = operator new(0x38u);
    v22 = _mm_loadu_si128(&v43);
    *(_QWORD *)v21 = v42;
    *(_QWORD *)(v21 + 24) = v21 + 40;
    v23 = (__m128i *)v44;
    *(__m128i *)(v21 + 8) = v22;
    if ( v23 == v46 )
    {
      *(__m128i *)(v21 + 40) = _mm_loadu_si128(v46);
    }
    else
    {
      *(_QWORD *)(v21 + 24) = v23;
      *(_QWORD *)(v21 + 40) = v46[0].m128i_i64[0];
    }
    v24 = v45;
    v35.m128i_i64[0] = v21;
    v45 = 0;
    *(_QWORD *)(v21 + 32) = v24;
    v34 = sub_F3AF40;
    v44 = v46;
    v46[0].m128i_i8[0] = 0;
    v36 = _mm_loadh_ps((const double *)&v34);
    sub_ACD330(a1 + 16, &v35);
    v16 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v36.m128_u64[0];
    if ( v36.m128_u64[0] )
      goto LABEL_9;
    goto LABEL_10;
  }
  v7 = *(unsigned int *)(a1 + 24);
  v8 = *(_QWORD *)(a1 + 16);
  v35.m128i_i8[0] = 0;
  v9 = v8 + 32 * v7 - 32;
  if ( !*(_QWORD *)(v9 + 16) )
LABEL_32:
    std::__throw_bad_function_call();
  (*(void (__fastcall **)(__int64, __m128i *))(v9 + 24))(v9, &v35);
  v10 = (__m128i *)(*(_QWORD *)(a1 + 16) + 32LL * *(unsigned int *)(a1 + 24) - 32);
  v43 = _mm_loadu_si128(&v38);
  v42 = v37;
  v44 = v46;
  if ( v39 == &v41 )
  {
    v46[0] = _mm_loadu_si128(&v41);
  }
  else
  {
    v44 = v39;
    v46[0].m128i_i64[0] = v41.m128i_i64[0];
  }
  v11 = v40;
  v40 = 0;
  v41.m128i_i8[0] = 0;
  v45 = v11;
  v39 = &v41;
  v36.m128_u64[0] = 0;
  v12 = operator new(0x38u);
  v13 = _mm_loadu_si128(&v43);
  *(_QWORD *)v12 = v42;
  *(_QWORD *)(v12 + 24) = v12 + 40;
  v14 = (__m128i *)v44;
  *(__m128i *)(v12 + 8) = v13;
  if ( v14 == v46 )
  {
    *(__m128i *)(v12 + 40) = _mm_loadu_si128(v46);
  }
  else
  {
    *(_QWORD *)(v12 + 24) = v14;
    *(_QWORD *)(v12 + 40) = v46[0].m128i_i64[0];
  }
  v35.m128i_i64[0] = v12;
  v46[0].m128i_i8[0] = 0;
  v15 = _mm_load_si128(&v35);
  *(_QWORD *)(v12 + 32) = v45;
  v44 = v46;
  v45 = 0;
  v35 = _mm_loadu_si128(v10);
  v16 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v10[1].m128i_i64[0];
  v17 = v10[1].m128i_i64[1];
  *v10 = v15;
  v36.m128_u64[0] = (unsigned __int64)v16;
  v10[1].m128i_i64[0] = (__int64)sub_F25B70;
  v36.m128_u64[1] = v17;
  v10[1].m128i_i64[1] = (__int64)sub_F3AF40;
  if ( v16 )
LABEL_9:
    v16(&v35, &v35, 3);
LABEL_10:
  if ( v44 != v46 )
    operator delete(v44);
  v18 = (__m128i *)v39;
  *(_BYTE *)(a1 + 1057) = 0;
  if ( v18 != &v41 )
    operator delete(v18);
}
