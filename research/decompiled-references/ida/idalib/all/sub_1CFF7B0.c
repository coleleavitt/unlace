unsigned __int64 __fastcall sub_1CFF7B0(__int64 *a1, unsigned __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v4; // rbp
  __int64 v6; // rax
  __int64 v7; // r12
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
  int v21; // r13d
  __int64 v22; // r15
  char v23; // r12
  __int64 v24; // r13
  const __m128i *v25; // r15
  __int64 v26; // r13
  unsigned __int64 v27; // rax
  bool v28; // bp
  unsigned __int64 v29; // r12
  bool v30; // al
  int v31; // esi
  int v32; // ecx
  __int64 v33; // r11
  __int64 v34; // r8
  _QWORD *v35; // rdi
  __int64 v36; // r15
  __int64 v37; // r9
  __int64 v38; // r15
  __int64 v39; // [rsp+10h] [rbp-288h]
  __int64 v40; // [rsp+28h] [rbp-270h]
  int v41; // [rsp+48h] [rbp-250h] BYREF
  int v42; // [rsp+4Ch] [rbp-24Ch] BYREF
  __int64 v43[2]; // [rsp+50h] [rbp-248h] BYREF
  __int64 v44; // [rsp+60h] [rbp-238h]
  __int64 v45; // [rsp+68h] [rbp-230h]
  __m128i v46; // [rsp+70h] [rbp-228h] BYREF
  _BYTE v47[192]; // [rsp+80h] [rbp-218h] BYREF
  __m128i ptr; // [rsp+140h] [rbp-158h] BYREF
  _QWORD v49[32]; // [rsp+150h] [rbp-148h] BYREF
  int v50; // [rsp+250h] [rbp-48h]
  int v51; // [rsp+254h] [rbp-44h]

  v4 = a2;
  if ( (*(_DWORD *)a2 & 0x20000) == 0 )
    return v4;
  v40 = *a1;
  sub_18C74E0(*a1, 0, 0, 4);
  if ( (*(_DWORD *)a2 & 0x20000) == 0 || (v6 = *(unsigned int *)(a2 + 28), !(_DWORD)v6) )
  {
    v18 = sub_1CB9120((__int64)a1, *(_QWORD *)(a2 + 32));
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
  v7 = a2 + 40;
  v8 = 1;
  v39 = a2 + 40 + 24 * v6;
  while ( !sub_F1D570(v7) )
  {
    ++v8;
LABEL_7:
    v7 += 24;
    if ( v39 == v7 )
    {
      v19 = a2;
      v20 = *(_DWORD *)(a2 + 20);
      if ( !v8 )
        goto LABEL_16;
LABEL_32:
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
  sub_1D3AAD0(v43, *a1, v7, 0, *((unsigned int *)a1 + 8), 0);
  v41 = 0;
  v42 = 0;
  sub_1E4CF80((unsigned int)&v46, *a1, (unsigned int)&v41, (unsigned int)&v42, v9, v10, v43[0], v43[1], v44, v45);
  v11 = *a1;
  ptr.m128i_i64[1] = 0;
  v49[1] = 0;
  ptr.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
  v12 = *(_DWORD *)(v11 + 12632);
  *(_DWORD *)(v11 + 12632) = 0;
  if ( (unsigned __int8)sub_1CFEEE0((unsigned int *)a1, &v46, &ptr, 1, a3, a4) )
  {
    v36 = v11;
    v19 = a2;
    v8 = 2;
    *(_DWORD *)(v36 + 12632) = v12;
    v20 = *(_DWORD *)(a2 + 20);
    goto LABEL_32;
  }
  v17 = sub_1E4D250(*a1, (unsigned int)&v46, v13, v14, v15, v16, ptr.m128i_i32[0], ptr.m128i_i64[1]);
  if ( v17 )
  {
    v8 = v8 + v17 - 1;
    *(_DWORD *)(v11 + 12632) = v12;
    goto LABEL_7;
  }
  v38 = v11;
  v19 = a2;
  *(_DWORD *)(v38 + 12632) = v12;
  v20 = *(_DWORD *)(a2 + 20);
LABEL_16:
  v50 = v20;
  v21 = *((_DWORD *)a1 + 8);
  ptr.m128i_i64[0] = (__int64)v49;
  v22 = a1[5];
  ptr.m128i_i64[1] = 0x800000000LL;
  v51 = v20;
  if ( v20 )
  {
    *((_DWORD *)a1 + 8) = v20;
    a1[5] = 0;
  }
  v23 = sub_1CFF3D0((unsigned int *)a1, a1, a2 + 40, (__int64)a1, v39, (__int64)&ptr, 1u);
  if ( v23 )
  {
    *((_DWORD *)a1 + 8) = v21;
    v4 = 1;
    a1[5] = v22;
    goto LABEL_20;
  }
  *((_DWORD *)a1 + 8) = v21;
  v24 = ptr.m128i_u32[2];
  a1[5] = v22;
  v25 = (const __m128i *)ptr.m128i_i64[0];
  v46.m128i_i64[0] = (__int64)v47;
  v26 = ptr.m128i_i64[0] + 32 * v24;
  v46.m128i_i64[1] = 0x800000000LL;
  if ( v26 == ptr.m128i_i64[0] )
  {
    v34 = *(unsigned int *)(v19 + 24);
    v37 = 1;
    v31 = *(_DWORD *)(v19 + 16);
    v33 = *(_QWORD *)(v19 + 32);
    v32 = *(_DWORD *)(v19 + 20);
    v35 = *(_QWORD **)(*a1 + 248);
  }
  else
  {
    v27 = v19;
    v28 = v23;
    v29 = v27;
    do
    {
      sub_1CB6790((__int64)&v46, v25);
      v30 = sub_F1D570((__int64)v25);
      if ( v30 )
        v28 = v30;
      v25 += 2;
    }
    while ( (const __m128i *)v26 != v25 );
    v31 = *(_DWORD *)(v29 + 16);
    v32 = *(_DWORD *)(v29 + 20);
    v33 = *(_QWORD *)(v29 + 32);
    v34 = *(unsigned int *)(v29 + 24);
    v35 = *(_QWORD **)(*a1 + 248);
    if ( v28 )
    {
      v4 = sub_C98D20(v35, v31, v33, v32, v34, 0, (const __m128i *)v46.m128i_i64[0], v46.m128i_u32[2]);
      goto LABEL_29;
    }
    v37 = (unsigned int)(v46.m128i_i32[2] + 1);
  }
  v4 = sub_C98D20(v35, v31, v33, v32, v34, v37, nullptr, 0);
LABEL_29:
  if ( (_BYTE *)v46.m128i_i64[0] != v47 )
    free((void *)v46.m128i_i64[0]);
LABEL_20:
  if ( (_QWORD *)ptr.m128i_i64[0] != v49 )
    free((void *)ptr.m128i_i64[0]);
LABEL_14:
  sub_190D5E0(v40, a3);
  return v4;
}
