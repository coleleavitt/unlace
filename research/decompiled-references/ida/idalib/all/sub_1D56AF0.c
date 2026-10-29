unsigned __int64 __fastcall sub_1D56AF0(__int64 *a1, unsigned __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v4; // rbp
  __int64 v6; // rax
  const __m128i *v7; // r12
  unsigned int v8; // r13d
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rbp
  int v12; // r14d
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  int v17; // eax
  __int64 v18; // rax
  unsigned __int64 v19; // rbp
  int v20; // ecx
  __int64 v21; // r15
  char v22; // r12
  const __m128i *v23; // r15
  __int64 v24; // r13
  unsigned __int64 v25; // rax
  bool v26; // bp
  unsigned __int64 v27; // r12
  bool v28; // al
  int v29; // esi
  int v30; // ecx
  __int64 v31; // rdx
  __int64 v32; // r8
  _QWORD *v33; // rdi
  __int64 v34; // r9
  __int64 v35; // r15
  const __m128i *v36; // [rsp+10h] [rbp-288h]
  __int64 v37; // [rsp+28h] [rbp-270h]
  int v38; // [rsp+48h] [rbp-250h] BYREF
  int v39; // [rsp+4Ch] [rbp-24Ch] BYREF
  __m128i v40; // [rsp+50h] [rbp-248h] BYREF
  __int64 v41; // [rsp+60h] [rbp-238h]
  __int64 v42; // [rsp+68h] [rbp-230h]
  __m128i v43; // [rsp+70h] [rbp-228h] BYREF
  _BYTE v44[192]; // [rsp+80h] [rbp-218h] BYREF
  __m128i ptr; // [rsp+140h] [rbp-158h] BYREF
  _QWORD v46[32]; // [rsp+150h] [rbp-148h] BYREF
  int v47; // [rsp+250h] [rbp-48h]
  int v48; // [rsp+254h] [rbp-44h]

  v4 = a2;
  if ( (*(_DWORD *)a2 & 0x20000) == 0 )
    return v4;
  v37 = *a1;
  sub_18C74E0(*a1, 0, 0, 4);
  if ( (*(_DWORD *)a2 & 0x20000) == 0 || (v6 = *(unsigned int *)(a2 + 28), !(_DWORD)v6) )
  {
    v18 = sub_1D41150((__int64)a1, *(_QWORD *)(a2 + 32));
    if ( v18 )
      v4 = sub_C98D20(
             *(_QWORD **)(*a1 + 248),
             *(_DWORD *)(a2 + 16),
             v18,
             *(_DWORD *)(a2 + 20),
             *(unsigned int *)(a2 + 24),
             0,
             nullptr,
             0);
    else
      v4 = 1;
    goto LABEL_14;
  }
  v7 = (const __m128i *)(a2 + 40);
  v8 = 1;
  v36 = (const __m128i *)(a2 + 40 + 24 * v6);
  while ( !sub_F1D570((__int64)v7) )
  {
    ++v8;
LABEL_7:
    v7 = (const __m128i *)((char *)v7 + 24);
    if ( v36 == v7 )
    {
      v19 = a2;
      v20 = *(_DWORD *)(a2 + 20);
      if ( !v8 )
        goto LABEL_18;
LABEL_16:
      v4 = sub_C98D20(
             *(_QWORD **)(*a1 + 248),
             *(_DWORD *)(v19 + 16),
             *(_QWORD *)(v19 + 32),
             v20,
             *(unsigned int *)(v19 + 24),
             v8,
             nullptr,
             0);
      goto LABEL_14;
    }
  }
  sub_1D37A30(&v40, *a1, v7, 0, 0, 0, *(double *)a3.m128_u64, a4);
  v38 = 0;
  v39 = 0;
  sub_1E4CF80(
    (unsigned int)&v43,
    *a1,
    (unsigned int)&v38,
    (unsigned int)&v39,
    v9,
    v10,
    v40.m128i_i64[0],
    v40.m128i_i64[1],
    v41,
    v42);
  v11 = *a1;
  ptr.m128i_i64[1] = 0;
  v46[1] = 0;
  ptr.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
  v12 = *(_DWORD *)(v11 + 12632);
  *(_DWORD *)(v11 + 12632) = 0;
  if ( (unsigned __int8)sub_1D56220((__int64 **)a1, &v43, &ptr, 1, a3, a4) )
  {
    v35 = v11;
    v19 = a2;
    v8 = 2;
    *(_DWORD *)(v35 + 12632) = v12;
    v20 = *(_DWORD *)(a2 + 20);
    goto LABEL_16;
  }
  v17 = sub_1E4D250(*a1, (unsigned int)&v43, v13, v14, v15, v16, ptr.m128i_i32[0], ptr.m128i_i64[1]);
  if ( v17 )
  {
    v8 = v8 + v17 - 1;
    *(_DWORD *)(v11 + 12632) = v12;
    goto LABEL_7;
  }
  v21 = v11;
  v19 = a2;
  *(_DWORD *)(v21 + 12632) = v12;
  v20 = *(_DWORD *)(a2 + 20);
LABEL_18:
  v47 = v20;
  v48 = v20;
  ptr.m128i_i64[0] = (__int64)v46;
  ptr.m128i_i64[1] = 0x800000000LL;
  v22 = sub_1D56710((__int64 **)a1, a1, (const __m128i *)(a2 + 40), a3, a4, (__int64)a1, v36, (__int64)&ptr, 1u);
  if ( v22 )
  {
    v4 = 1;
    goto LABEL_20;
  }
  v43.m128i_i64[1] = 0x800000000LL;
  v23 = (const __m128i *)ptr.m128i_i64[0];
  v43.m128i_i64[0] = (__int64)v44;
  v24 = ptr.m128i_i64[0] + 32LL * ptr.m128i_u32[2];
  if ( v24 == ptr.m128i_i64[0] )
  {
    v32 = *(unsigned int *)(v19 + 24);
    v34 = 1;
    v31 = *(_QWORD *)(v19 + 32);
    v29 = *(_DWORD *)(v19 + 16);
    v30 = *(_DWORD *)(v19 + 20);
    v33 = *(_QWORD **)(*a1 + 248);
  }
  else
  {
    v25 = v19;
    v26 = v22;
    v27 = v25;
    do
    {
      sub_1CB6790((__int64)&v43, v23);
      v28 = sub_F1D570((__int64)v23);
      if ( v28 )
        v26 = v28;
      v23 += 2;
    }
    while ( (const __m128i *)v24 != v23 );
    v29 = *(_DWORD *)(v27 + 16);
    v30 = *(_DWORD *)(v27 + 20);
    v31 = *(_QWORD *)(v27 + 32);
    v32 = *(unsigned int *)(v27 + 24);
    v33 = *(_QWORD **)(*a1 + 248);
    v34 = (unsigned int)(v43.m128i_i32[2] + 1);
    if ( v26 )
    {
      v4 = sub_C98D20(v33, v29, v31, v30, v32, 0, (const __m128i *)v43.m128i_i64[0], v43.m128i_u32[2]);
      goto LABEL_29;
    }
  }
  v4 = sub_C98D20(v33, v29, v31, v30, v32, v34, nullptr, 0);
LABEL_29:
  if ( (_BYTE *)v43.m128i_i64[0] != v44 )
    free((void *)v43.m128i_i64[0]);
LABEL_20:
  if ( (_QWORD *)ptr.m128i_i64[0] != v46 )
    free((void *)ptr.m128i_i64[0]);
LABEL_14:
  sub_190D5E0(v37, a3);
  return v4;
}
