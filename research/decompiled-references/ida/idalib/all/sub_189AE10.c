__m128i *__fastcall sub_189AE10(
        __int64 *a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        __int64 *a5,
        unsigned int a6,
        __m128 a7,
        __m128i a8,
        const void *a9,
        int a10,
        __int64 a11,
        __int64 a12)
{
  _QWORD *v14; // r15
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 *v23; // rax
  __int64 v24; // r9
  __m128i *v25; // rbp
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 *v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 *v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 *v40; // r13
  __int64 v42; // [rsp+0h] [rbp-E8h] BYREF
  __int64 *v43; // [rsp+8h] [rbp-E0h]
  unsigned int v44; // [rsp+14h] [rbp-D4h] BYREF
  __int64 v45; // [rsp+18h] [rbp-D0h] BYREF
  __int64 v46; // [rsp+20h] [rbp-C8h] BYREF
  int v47; // [rsp+28h] [rbp-C0h]

  v45 = a3;
  v44 = a4;
  v43 = a5;
  v14 = (_QWORD *)sub_168B6C0((__int64)a1);
  v15 = sub_1A3A250(*a1);
  v16 = sub_1A86640(a1, v45, v44, v15);
  v21 = v16;
  if ( !v16 )
  {
    LOBYTE(v42) = 1;
LABEL_13:
    v25 = (__m128i *)sub_BAF3D0(v14, *(_QWORD *)(*a1 + 544), v45, v44, a2, v21);
    sub_17B7670(*a1, (__int64)v25, *(_QWORD *)(*a1 + 192), 1, v33, v34);
    sub_BAA5B0((__int64)v25);
    v35 = (__int64 *)*a1;
    LOWORD(v46) = 1;
    sub_1836B60(v35, v35[24], v25, a11, &v46, a7, a8);
    sub_16660F0(*a1, *(_QWORD *)(*a1 + 192), (__int64)v25);
    sub_167AF90(*a1, (__int64)v25, v36, v37, v38, v39, (__m128i)a7, *(double *)a8.m128i_i64);
    if ( !v21 )
      goto LABEL_14;
    goto LABEL_11;
  }
  v22 = *(_QWORD *)(v16 + 104);
  if ( v22 )
  {
    v23 = (__int64 *)(v22 & 0xFFFFFFFFFFFFFFF8LL);
    if ( !v23 )
    {
LABEL_12:
      v47 = 0;
      v46 = 0;
      sub_BA9F50((__int64)&v46, v43, a6, (__int64)v14);
      LOBYTE(v42) = sub_18969A0(a1, v45, &v44, *(_DWORD *)(v21 + 24), &v46) ^ 1;
      goto LABEL_13;
    }
  }
  else
  {
    sub_A79820((__int64 *)(*(_QWORD *)(v21 + 96) + 88LL), *(_QWORD *)(v21 + 96), v17, v18, v19, v20);
    v23 = (__int64 *)(*(_QWORD *)(v21 + 104) & 0xFFFFFFFFFFFFFFF8LL);
    if ( !v23 )
      goto LABEL_12;
  }
  v24 = *v23;
  v42 = v24;
  if ( !v24 )
    goto LABEL_12;
  v25 = (__m128i *)sub_BAF3D0(v14, *(_QWORD *)(*a1 + 544), v45, v44, a2, v24);
  if ( a12 && !(unsigned __int8)sub_1E61520(*a1, v42, &v46, 0) )
  {
    v42 = (__int64)v25;
    a7 = _mm_loadh_ps((const double *)&v42);
    *(_BYTE *)(a12 + 1) = 1;
    *(__m128 *)(a12 + 8) = a7;
  }
  else
  {
    sub_168B9F0((__int64)&v46, a1, v44, 0x1AD0u, 0);
    sub_169D880((__int64)&v46, &v45);
    sub_15F7200(&v46);
    sub_168B9F0((__int64)&v46, a1, *(_DWORD *)(v42 + 24), 0x71u, 0);
    sub_15F7200(&v46);
  }
  if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 21) & 2) != 0 )
    sub_17B7670(*a1, (__int64)v25, *(_QWORD *)(*a1 + 192), 1, v26, v27);
  sub_BA9E30((__int64)v25);
  v28 = (__int64 *)*a1;
  LOWORD(v46) = 1;
  sub_1836B60(v28, v28[24], v25, a11, &v46, a7, a8);
  sub_16660F0(*a1, *(_QWORD *)(*a1 + 192), (__int64)v25);
  sub_167AF90(*a1, (__int64)v25, v29, v30, v31, v32, (__m128i)a7, *(double *)a8.m128i_i64);
  LOBYTE(v42) = 1;
LABEL_11:
  sub_17C44D0((__int64 *)*a1, v25->m128i_i64, v21, 1u);
LABEL_14:
  if ( a6 && (_BYTE)v42 )
  {
    v40 = v43;
    sub_1893F00(*a1, (__int64)v25, v43, a6, (__int64)a9);
    sub_BA9FB0((v25[6].m128i_i64[1] & 0xFFFFFFFFFFFFFFF8LL) + 8, v40, a6, a9, (__int64)v14);
  }
  sub_18954B0(a1, (__int64)v25);
  sub_1A865C0(a1, v25);
  return v25;
}
