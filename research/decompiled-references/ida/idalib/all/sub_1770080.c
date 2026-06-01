unsigned __int64 __fastcall sub_1770080(__int64 *a1, unsigned __int64 a2, __m128 a3)
{
  unsigned __int64 v3; // rbp
  __int64 v5; // rax
  __int64 v6; // r12
  unsigned int v7; // r13d
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rbp
  int v11; // r14d
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  int v16; // eax
  __int64 v17; // rax
  unsigned __int64 v18; // rbp
  int v19; // ecx
  __int64 v20; // r15
  char v21; // r13
  _BYTE *v22; // rsi
  unsigned __int64 v23; // r15
  __int64 v24; // r12
  const __m128i *v25; // rcx
  __int64 v26; // rax
  __m128i *v27; // rax
  bool v28; // al
  unsigned __int64 v29; // rdx
  __int64 v30; // r15
  int v31; // esi
  __int64 v32; // r9
  int v33; // ecx
  __int64 v34; // rdx
  _QWORD *v35; // rdi
  __int64 v36; // r8
  __int64 v37; // [rsp+10h] [rbp-288h]
  unsigned __int64 v38; // [rsp+18h] [rbp-280h]
  __int64 v39; // [rsp+28h] [rbp-270h]
  int v40; // [rsp+48h] [rbp-250h] BYREF
  int v41; // [rsp+4Ch] [rbp-24Ch] BYREF
  __int64 v42[2]; // [rsp+50h] [rbp-248h] BYREF
  __int64 v43; // [rsp+60h] [rbp-238h]
  __int64 v44; // [rsp+68h] [rbp-230h]
  __m128i v45; // [rsp+70h] [rbp-228h] BYREF
  _BYTE v46[192]; // [rsp+80h] [rbp-218h] BYREF
  __m128i ptr; // [rsp+140h] [rbp-158h] BYREF
  _QWORD v48[32]; // [rsp+150h] [rbp-148h] BYREF
  int v49; // [rsp+250h] [rbp-48h]
  int v50; // [rsp+254h] [rbp-44h]

  v3 = a2;
  if ( (*(_DWORD *)a2 & 0x20000) == 0 )
    return v3;
  v39 = *a1;
  sub_18C74E0(*a1, 0, 0, 4);
  if ( (*(_DWORD *)a2 & 0x20000) == 0 || (v5 = *(unsigned int *)(a2 + 28), !(_DWORD)v5) )
  {
    v17 = sub_17473B0((__int64)a1, *(_QWORD *)(a2 + 32));
    if ( v17 )
      v3 = sub_C98D20(
             *(_QWORD **)(*a1 + 248),
             *(_DWORD *)(a2 + 16),
             v17,
             *(_DWORD *)(a2 + 20),
             *(unsigned int *)(a2 + 24),
             0,
             nullptr,
             0);
    else
      v3 = 1;
    goto LABEL_14;
  }
  v6 = a2 + 40;
  v7 = 1;
  v37 = a2 + 40 + 24 * v5;
  while ( !sub_F1D570(v6) )
  {
    ++v7;
LABEL_7:
    v6 += 24;
    if ( v37 == v6 )
    {
      v18 = a2;
      v19 = *(_DWORD *)(a2 + 20);
      if ( !v7 )
        goto LABEL_18;
LABEL_16:
      v3 = sub_C98D20(
             *(_QWORD **)(*a1 + 248),
             *(_DWORD *)(v18 + 16),
             *(_QWORD *)(v18 + 32),
             v19,
             *(unsigned int *)(v18 + 24),
             v7,
             nullptr,
             0);
      goto LABEL_14;
    }
  }
  sub_1D3AAD0(v42, *a1, v6, 0, 0, 0);
  v40 = 0;
  v41 = 0;
  sub_1E4CF80((unsigned int)&v45, *a1, (unsigned int)&v40, (unsigned int)&v41, v8, v9, v42[0], v42[1], v43, v44);
  v10 = *a1;
  ptr.m128i_i64[1] = 0;
  v48[1] = 0;
  ptr.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
  v11 = *(_DWORD *)(v10 + 12632);
  *(_DWORD *)(v10 + 12632) = 0;
  if ( (unsigned __int8)sub_176F680(a1, &v45, &ptr, 1, a3) )
  {
    v30 = v10;
    v18 = a2;
    v7 = 2;
    *(_DWORD *)(v30 + 12632) = v11;
    v19 = *(_DWORD *)(a2 + 20);
    goto LABEL_16;
  }
  v16 = sub_1E4D250(*a1, (unsigned int)&v45, v12, v13, v14, v15, ptr.m128i_i32[0], ptr.m128i_i64[1]);
  if ( v16 )
  {
    v7 = v7 + v16 - 1;
    *(_DWORD *)(v10 + 12632) = v11;
    goto LABEL_7;
  }
  v20 = v10;
  v18 = a2;
  *(_DWORD *)(v20 + 12632) = v11;
  v19 = *(_DWORD *)(a2 + 20);
LABEL_18:
  v49 = v19;
  v50 = v19;
  ptr.m128i_i64[0] = (__int64)v48;
  ptr.m128i_i64[1] = 0x800000000LL;
  v21 = sub_176FBC0(a1, a1, a2 + 40, (__int64)a1, v37, ptr.m128i_i64, 1u);
  if ( v21 )
  {
    v3 = 1;
    goto LABEL_29;
  }
  v45.m128i_i64[1] = 0x800000000LL;
  v22 = v46;
  v23 = ptr.m128i_i64[0];
  v45.m128i_i64[0] = (__int64)v46;
  v24 = ptr.m128i_i64[0] + 32LL * ptr.m128i_u32[2];
  if ( v24 == ptr.m128i_i64[0] )
  {
    v36 = *(unsigned int *)(v18 + 24);
    v32 = 1;
    v34 = *(_QWORD *)(v18 + 32);
    v31 = *(_DWORD *)(v18 + 16);
    v33 = *(_DWORD *)(v18 + 20);
    v35 = *(_QWORD **)(*a1 + 248);
LABEL_39:
    v3 = sub_C98D20(v35, v31, v34, v33, v36, v32, nullptr, 0);
    goto LABEL_34;
  }
  v25 = (const __m128i *)ptr.m128i_i64[0];
  v26 = 0;
  while ( 1 )
  {
    v27 = (__m128i *)&v22[24 * v26];
    *v27 = _mm_loadu_si128(v25);
    v27[1].m128i_i64[0] = v25[1].m128i_i64[0];
    ++v45.m128i_i32[2];
    v28 = sub_F1D570(v23);
    if ( v28 )
      v21 = v28;
    v23 += 32LL;
    v26 = v45.m128i_u32[2];
    if ( v23 == v24 )
      break;
    v29 = v45.m128i_u32[2] + 1LL;
    v22 = (_BYTE *)v45.m128i_i64[0];
    v25 = (const __m128i *)v23;
    if ( v29 > v45.m128i_u32[3] )
    {
      if ( v45.m128i_i64[0] > v23 || v23 >= v45.m128i_i64[0] + 24 * (unsigned __int64)v45.m128i_u32[2] )
      {
        sub_2237220(&v45, v46, v29, 24);
        v22 = (_BYTE *)v45.m128i_i64[0];
        v25 = (const __m128i *)v23;
        v26 = v45.m128i_u32[2];
      }
      else
      {
        v38 = v23 - v45.m128i_i64[0];
        sub_2237220(&v45, v46, v29, 24);
        v22 = (_BYTE *)v45.m128i_i64[0];
        v25 = (const __m128i *)(v45.m128i_i64[0] + v38);
        v26 = v45.m128i_u32[2];
      }
    }
  }
  v31 = *(_DWORD *)(v18 + 16);
  v32 = (unsigned int)(v45.m128i_i32[2] + 1);
  v33 = *(_DWORD *)(v18 + 20);
  v34 = *(_QWORD *)(v18 + 32);
  v35 = *(_QWORD **)(*a1 + 248);
  v36 = *(unsigned int *)(v18 + 24);
  if ( !v21 )
    goto LABEL_39;
  v3 = sub_C98D20(v35, v31, v34, v33, v36, 0, (const __m128i *)v45.m128i_i64[0], v45.m128i_u32[2]);
LABEL_34:
  if ( (_BYTE *)v45.m128i_i64[0] != v46 )
    free((void *)v45.m128i_i64[0]);
LABEL_29:
  if ( (_QWORD *)ptr.m128i_i64[0] != v48 )
    free((void *)ptr.m128i_i64[0]);
LABEL_14:
  sub_190D5E0(v39);
  return v3;
}
