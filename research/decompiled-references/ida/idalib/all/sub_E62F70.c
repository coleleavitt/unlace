__m128 *__fastcall sub_E62F70(__m128 *a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v12; // rdx
  int v13; // esi
  __int64 v14; // rcx
  int v15; // eax
  unsigned __int64 v16; // r13
  char *v17; // rdi
  size_t v18; // rdx
  bool v19; // al
  __int64 v20; // rax
  void **v21; // rdi
  __int64 v22; // rax
  __m128i v23; // xmm1
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // [rsp+8h] [rbp-60h] BYREF
  unsigned __int64 v27; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v28; // [rsp+18h] [rbp-50h] BYREF
  void *v29; // [rsp+20h] [rbp-48h] BYREF
  void *s2; // [rsp+28h] [rbp-40h]
  __int64 v31; // [rsp+30h] [rbp-38h]

  if ( (unsigned __int8)sub_E5E370((__int64 *)a2, a3, &v27) )
  {
    v10 = *(unsigned int *)(a2 + 16);
    a1[1].m128_i8[0] = 0;
    v26 = *(_QWORD *)a2 + (v10 << 6);
    *a1 = _mm_loadh_ps((const double *)&v26);
    return a1;
  }
  v12 = *(unsigned int *)(a2 + 16);
  v28 = v27;
  v13 = 2 * v12;
  v14 = (unsigned int)(3 * v12);
  v15 = *(_DWORD *)(a2 + 8) + 1;
  if ( 4 * v15 < (unsigned int)v14 )
  {
    v14 = (unsigned int)(v12 - *(_DWORD *)(a2 + 12) - v15);
    if ( (unsigned int)v14 > (unsigned int)v12 >> 3 )
      goto LABEL_5;
    v13 = v12;
  }
  sub_E62B10(a2, v13, v12, v14, v8, v9);
  sub_E5E370((__int64 *)a2, a3, &v28);
  v15 = *(_DWORD *)(a2 + 8) + 1;
LABEL_5:
  *(_DWORD *)(a2 + 8) = v15;
  sub_E59960((void ***)&v29, (void **)0xFFFFFFFFFFFFFFFFLL, nullptr);
  v16 = v28;
  v17 = *(char **)(v28 + 8);
  if ( s2 == (void *)-1LL )
  {
    v19 = v17 + 1 == nullptr;
LABEL_10:
    if ( v19 )
      goto LABEL_11;
LABEL_17:
    --*(_DWORD *)(a2 + 12);
    goto LABEL_11;
  }
  if ( s2 == (void *)-2LL )
  {
    v19 = v17 + 2 == nullptr;
    goto LABEL_10;
  }
  v18 = *(_QWORD *)(v28 + 16);
  if ( v31 != v18 )
    goto LABEL_17;
  if ( v18 )
  {
    v19 = memcmp(v17, s2, v18) == 0;
    goto LABEL_10;
  }
LABEL_11:
  if ( v29 )
    sub_E58590((void **)v29);
  v20 = *(_QWORD *)a3;
  *(_QWORD *)a3 = 0;
  v21 = *(void ***)v16;
  *(_QWORD *)v16 = v20;
  if ( v21 )
    sub_E58590(v21);
  v22 = *a4;
  v23 = _mm_loadu_si128((const __m128i *)(a3 + 8));
  a1->m128_u64[0] = v16;
  *(_WORD *)(v16 + 24) = 3;
  *(_QWORD *)(v16 + 32) = v22;
  v24 = *(unsigned int *)(a2 + 16);
  *(__m128i *)(v16 + 8) = v23;
  v25 = *(_QWORD *)a2 + (v24 << 6);
  a1[1].m128_i8[0] = 1;
  a1->m128_u64[1] = v25;
  return a1;
}
