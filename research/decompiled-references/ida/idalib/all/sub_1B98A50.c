unsigned __int64 __fastcall sub_1B98A50(__int64 *a1, unsigned __int64 a2, __m128 a3, __m128 a4)
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
  __int64 v21; // r15
  char v22; // r13
  _BYTE *v23; // rsi
  unsigned __int64 v24; // r15
  __int64 v25; // r12
  const __m128i *v26; // rcx
  __int64 v27; // rax
  __m128 *v28; // rax
  bool v29; // al
  unsigned __int64 v30; // rdx
  __int64 v31; // r15
  int v32; // esi
  __int64 v33; // r9
  int v34; // ecx
  __int64 v35; // rdx
  _QWORD *v36; // rdi
  __int64 v37; // r8
  __int64 v38; // [rsp+10h] [rbp-288h]
  unsigned __int64 v39; // [rsp+18h] [rbp-280h]
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
    v18 = sub_1B04070((__int64)a1, *(_QWORD *)(a2 + 32));
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
  v38 = a2 + 40 + 24 * v6;
  while ( !sub_F1D570(v7) )
  {
    ++v8;
LABEL_7:
    v7 += 24;
    if ( v38 == v7 )
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
  sub_1D3AAD0(v43, *a1, v7, 0, 0, 0);
  v41 = 0;
  v42 = 0;
  sub_1E4CF80((unsigned int)&v46, *a1, (unsigned int)&v41, (unsigned int)&v42, v9, v10, v43[0], v43[1], v44, v45);
  v11 = *a1;
  ptr.m128i_i64[1] = 0;
  v49[1] = 0;
  ptr.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
  v12 = *(_DWORD *)(v11 + 12632);
  *(_DWORD *)(v11 + 12632) = 0;
  if ( (unsigned __int8)sub_1B981A0(a1, &v46, &ptr, 1, a3, a4) )
  {
    v31 = v11;
    v19 = a2;
    v8 = 2;
    *(_DWORD *)(v31 + 12632) = v12;
    v20 = *(_DWORD *)(a2 + 20);
    goto LABEL_16;
  }
  v17 = sub_1E4D250(*a1, (unsigned int)&v46, v13, v14, v15, v16, ptr.m128i_i32[0], ptr.m128i_i64[1]);
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
  v50 = v20;
  v51 = v20;
  ptr.m128i_i64[0] = (__int64)v49;
  ptr.m128i_i64[1] = 0x800000000LL;
  v22 = sub_1B986E0(a1, a1, a2 + 40, (__int64)a1, v38, (__int64)&ptr, 1u);
  if ( v22 )
  {
    v4 = 1;
    goto LABEL_29;
  }
  v46.m128i_i64[1] = 0x800000000LL;
  v23 = v47;
  v24 = ptr.m128i_i64[0];
  v46.m128i_i64[0] = (__int64)v47;
  v25 = ptr.m128i_i64[0] + 32LL * ptr.m128i_u32[2];
  if ( v25 == ptr.m128i_i64[0] )
  {
    v37 = *(unsigned int *)(v19 + 24);
    v33 = 1;
    v35 = *(_QWORD *)(v19 + 32);
    v32 = *(_DWORD *)(v19 + 16);
    v34 = *(_DWORD *)(v19 + 20);
    v36 = *(_QWORD **)(*a1 + 248);
LABEL_39:
    v4 = sub_C98D20(v36, v32, v35, v34, v37, v33, nullptr, 0);
    goto LABEL_34;
  }
  v26 = (const __m128i *)ptr.m128i_i64[0];
  v27 = 0;
  while ( 1 )
  {
    a3 = (__m128)_mm_loadu_si128(v26);
    v28 = (__m128 *)&v23[24 * v27];
    *v28 = a3;
    v28[1].m128_u64[0] = v26[1].m128i_u64[0];
    ++v46.m128i_i32[2];
    v29 = sub_F1D570(v24);
    if ( v29 )
      v22 = v29;
    v24 += 32LL;
    v27 = v46.m128i_u32[2];
    if ( v24 == v25 )
      break;
    v30 = v46.m128i_u32[2] + 1LL;
    v23 = (_BYTE *)v46.m128i_i64[0];
    v26 = (const __m128i *)v24;
    if ( v30 > v46.m128i_u32[3] )
    {
      if ( v46.m128i_i64[0] > v24 || v24 >= v46.m128i_i64[0] + 24 * (unsigned __int64)v46.m128i_u32[2] )
      {
        sub_2237220(&v46, v47, v30, 24);
        v23 = (_BYTE *)v46.m128i_i64[0];
        v26 = (const __m128i *)v24;
        v27 = v46.m128i_u32[2];
      }
      else
      {
        v39 = v24 - v46.m128i_i64[0];
        sub_2237220(&v46, v47, v30, 24);
        v23 = (_BYTE *)v46.m128i_i64[0];
        v26 = (const __m128i *)(v46.m128i_i64[0] + v39);
        v27 = v46.m128i_u32[2];
      }
    }
  }
  v32 = *(_DWORD *)(v19 + 16);
  v33 = (unsigned int)(v46.m128i_i32[2] + 1);
  v34 = *(_DWORD *)(v19 + 20);
  v35 = *(_QWORD *)(v19 + 32);
  v36 = *(_QWORD **)(*a1 + 248);
  v37 = *(unsigned int *)(v19 + 24);
  if ( !v22 )
    goto LABEL_39;
  v4 = sub_C98D20(v36, v32, v35, v34, v37, 0, (const __m128i *)v46.m128i_i64[0], v46.m128i_u32[2]);
LABEL_34:
  if ( (_BYTE *)v46.m128i_i64[0] != v47 )
    free((void *)v46.m128i_i64[0]);
LABEL_29:
  if ( (_QWORD *)ptr.m128i_i64[0] != v49 )
    free((void *)ptr.m128i_i64[0]);
LABEL_14:
  sub_190D5E0(v40, a3);
  return v4;
}
