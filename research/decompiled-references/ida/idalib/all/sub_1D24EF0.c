unsigned __int64 __fastcall sub_1D24EF0(__int64 *a1, unsigned __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v4; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // r12
  unsigned int v12; // r13d
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rbp
  int v16; // r14d
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  int v21; // eax
  __int64 v22; // rax
  unsigned __int64 v23; // rbp
  int v24; // ecx
  __int64 v25; // r15
  char v26; // r12
  const __m128i *v27; // r15
  __int64 v28; // r13
  unsigned __int64 v29; // rax
  bool v30; // bp
  unsigned __int64 v31; // r12
  bool v32; // al
  int v33; // esi
  int v34; // ecx
  __int64 v35; // rdx
  __int64 v36; // r8
  _QWORD *v37; // rdi
  __int64 v38; // r9
  __int64 v39; // r15
  __int64 v40; // [rsp+10h] [rbp-288h]
  __int64 v41; // [rsp+28h] [rbp-270h]
  int v42; // [rsp+48h] [rbp-250h] BYREF
  int v43; // [rsp+4Ch] [rbp-24Ch] BYREF
  __int64 v44[2]; // [rsp+50h] [rbp-248h] BYREF
  __int64 v45; // [rsp+60h] [rbp-238h]
  __int64 v46; // [rsp+68h] [rbp-230h]
  __m128i v47; // [rsp+70h] [rbp-228h] BYREF
  _BYTE v48[192]; // [rsp+80h] [rbp-218h] BYREF
  __m128i ptr; // [rsp+140h] [rbp-158h] BYREF
  _QWORD v50[32]; // [rsp+150h] [rbp-148h] BYREF
  int v51; // [rsp+250h] [rbp-48h]
  int v52; // [rsp+254h] [rbp-44h]

  v4 = a2;
  if ( (*(_DWORD *)a2 & 0x20000) == 0 )
    return v4;
  v41 = *a1;
  sub_18C74E0(*a1, 0, 0, 4);
  if ( (*(_DWORD *)a2 & 0x20000) == 0 || (v10 = *(unsigned int *)(a2 + 28), !(_DWORD)v10) )
  {
    v22 = sub_1D1B120((__int64)a1, *(_QWORD *)(a2 + 32), a3, a4, v6, v7, v8, v9);
    if ( v22 )
      v4 = sub_C98D20(
             *(_QWORD **)(*a1 + 248),
             *(_DWORD *)(a2 + 16),
             v22,
             *(_DWORD *)(a2 + 20),
             *(unsigned int *)(a2 + 24),
             0,
             nullptr,
             0);
    else
      v4 = 1;
    goto LABEL_14;
  }
  v11 = a2 + 40;
  v12 = 1;
  v40 = a2 + 40 + 24 * v10;
  while ( !sub_F1D570(v11) )
  {
    ++v12;
LABEL_7:
    v11 += 24;
    if ( v40 == v11 )
    {
      v23 = a2;
      v24 = *(_DWORD *)(a2 + 20);
      if ( !v12 )
        goto LABEL_18;
LABEL_16:
      v4 = sub_C98D20(
             *(_QWORD **)(*a1 + 248),
             *(_DWORD *)(v23 + 16),
             *(_QWORD *)(v23 + 32),
             v24,
             *(unsigned int *)(v23 + 24),
             v12,
             nullptr,
             0);
      goto LABEL_14;
    }
  }
  sub_1D3AAD0(v44, *a1, v11, 0, 0, 0);
  v42 = 0;
  v43 = 0;
  sub_1E4CF80((unsigned int)&v47, *a1, (unsigned int)&v42, (unsigned int)&v43, v13, v14, v44[0], v44[1], v45, v46);
  v15 = *a1;
  ptr.m128i_i64[1] = 0;
  v50[1] = 0;
  ptr.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
  v16 = *(_DWORD *)(v15 + 12632);
  *(_DWORD *)(v15 + 12632) = 0;
  if ( (unsigned __int8)sub_1D24620((__int64 **)a1, &v47, &ptr, 1, a3, a4) )
  {
    v39 = v15;
    v23 = a2;
    v12 = 2;
    *(_DWORD *)(v39 + 12632) = v16;
    v24 = *(_DWORD *)(a2 + 20);
    goto LABEL_16;
  }
  v21 = sub_1E4D250(*a1, (unsigned int)&v47, v17, v18, v19, v20, ptr.m128i_i32[0], ptr.m128i_i64[1]);
  if ( v21 )
  {
    v12 = v12 + v21 - 1;
    *(_DWORD *)(v15 + 12632) = v16;
    goto LABEL_7;
  }
  v25 = v15;
  v23 = a2;
  *(_DWORD *)(v25 + 12632) = v16;
  v24 = *(_DWORD *)(a2 + 20);
LABEL_18:
  v51 = v24;
  v52 = v24;
  ptr.m128i_i64[0] = (__int64)v50;
  ptr.m128i_i64[1] = 0x800000000LL;
  v26 = sub_1D24B10((__int64 **)a1, a1, a2 + 40, (__int64)a1, v40, (__int64)&ptr, 1u);
  if ( v26 )
  {
    v4 = 1;
    goto LABEL_20;
  }
  v47.m128i_i64[1] = 0x800000000LL;
  v27 = (const __m128i *)ptr.m128i_i64[0];
  v47.m128i_i64[0] = (__int64)v48;
  v28 = ptr.m128i_i64[0] + 32LL * ptr.m128i_u32[2];
  if ( v28 == ptr.m128i_i64[0] )
  {
    v36 = *(unsigned int *)(v23 + 24);
    v38 = 1;
    v35 = *(_QWORD *)(v23 + 32);
    v33 = *(_DWORD *)(v23 + 16);
    v34 = *(_DWORD *)(v23 + 20);
    v37 = *(_QWORD **)(*a1 + 248);
  }
  else
  {
    v29 = v23;
    v30 = v26;
    v31 = v29;
    do
    {
      sub_1CB6790((__int64)&v47, v27);
      v32 = sub_F1D570((__int64)v27);
      if ( v32 )
        v30 = v32;
      v27 += 2;
    }
    while ( (const __m128i *)v28 != v27 );
    v33 = *(_DWORD *)(v31 + 16);
    v34 = *(_DWORD *)(v31 + 20);
    v35 = *(_QWORD *)(v31 + 32);
    v36 = *(unsigned int *)(v31 + 24);
    v37 = *(_QWORD **)(*a1 + 248);
    v38 = (unsigned int)(v47.m128i_i32[2] + 1);
    if ( v30 )
    {
      v4 = sub_C98D20(v37, v33, v35, v34, v36, 0, (const __m128i *)v47.m128i_i64[0], v47.m128i_u32[2]);
      goto LABEL_29;
    }
  }
  v4 = sub_C98D20(v37, v33, v35, v34, v36, v38, nullptr, 0);
LABEL_29:
  if ( (_BYTE *)v47.m128i_i64[0] != v48 )
    free((void *)v47.m128i_i64[0]);
LABEL_20:
  if ( (_QWORD *)ptr.m128i_i64[0] != v50 )
    free((void *)ptr.m128i_i64[0]);
LABEL_14:
  sub_190D5E0(v41, a3);
  return v4;
}
