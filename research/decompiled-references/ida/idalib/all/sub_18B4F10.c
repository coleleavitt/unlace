__int64 __fastcall sub_18B4F10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __m128i a5, __m128 a6)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // r15d
  int v14; // r12d
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int8 v17; // r13
  int v18; // r12d
  __int64 *v19; // rax
  __int64 v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 *v23; // rax
  __int64 v24; // r9
  unsigned int v25; // ebx
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  __m128i v28; // xmm0
  __int64 v30; // rdi
  unsigned __int64 v31; // rdi
  __m128i v32; // [rsp+0h] [rbp-F8h] BYREF
  unsigned int v33; // [rsp+14h] [rbp-E4h]
  __int64 v34; // [rsp+38h] [rbp-C0h]
  unsigned __int64 v35; // [rsp+40h] [rbp-B8h] BYREF
  unsigned __int64 v36; // [rsp+48h] [rbp-B0h]
  __int8 *v37; // [rsp+60h] [rbp-98h] BYREF
  unsigned __int64 v38; // [rsp+68h] [rbp-90h]
  unsigned __int64 v39; // [rsp+80h] [rbp-78h] BYREF
  unsigned __int64 v40; // [rsp+88h] [rbp-70h]
  unsigned __int64 v41; // [rsp+A0h] [rbp-58h] BYREF
  unsigned __int64 v42; // [rsp+A8h] [rbp-50h]

  v8 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v8 + 16) != 26 )
    v8 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4);
  if ( ((*(_BYTE *)(v8 + 19) >> 1) & 0xF) == 0xB )
    return 0;
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x24 )
  {
    v30 = *(_QWORD *)(sub_B8C1B0(a2 + 72) + 16);
    if ( (v30 & 4) != 0 )
      v31 = *(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFF8LL);
    else
      v31 = v30 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v31 )
      v31 -= 64LL;
    if ( (unsigned __int8)sub_B8E180(v31 + 64) )
      return 0;
  }
  if ( sub_18B0030(a3, a2, a3, a4) || sub_18B0030(a2, a2, v9, v10) )
  {
    v26 = *(unsigned int *)(a1 + 4328);
    v27 = *(unsigned int *)(a1 + 4332);
    v32.m128i_i64[0] = a3;
    v28 = (__m128i)_mm_loadh_ps((const double *)v32.m128i_i64);
    if ( v26 + 1 > v27 )
    {
      v32 = v28;
      sub_2237220(a1 + 4320, a1 + 4336, v26 + 1, 16);
      v26 = *(unsigned int *)(a1 + 4328);
      v28 = _mm_load_si128(&v32);
    }
    *(__m128i *)(*(_QWORD *)(a1 + 4320) + 16 * v26) = v28;
    ++*(_DWORD *)(a1 + 4328);
    return 0;
  }
  v13 = *(_DWORD *)(a2 + 24);
  v14 = -((**(_BYTE **)(a1 + 232) & 0x20) == 0);
  v17 = sub_B771C0(a2, a2, v11, v12);
  v18 = (v14 & 0xFFFFFC7B) + 5642;
  v19 = (__int64 *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v20 = *v19;
  if ( *(_BYTE *)(*v19 + 16) != 26 )
    v20 = sub_F63050(*v19, a2, v15, v16);
  v33 = *(_DWORD *)(a3 + 24);
  v32.m128i_i32[0] = (unsigned __int8)sub_B771C0(a3, a2, v15, v16);
  v23 = (__int64 *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v24 = *v23;
  if ( *(_BYTE *)(*v23 + 16) != 26 )
    v24 = sub_F63050(*v23, a2, v21, v22);
  v34 = v24;
  sub_168B9B0((__int64)&v41, a1 + 8, 5642);
  sub_168B9B0((__int64)&v39, a1 + 8, 6204);
  sub_168B9B0((__int64)&v37, a1 + 8, 3626);
  sub_168B9B0((__int64)&v35, a1 + 8, v18);
  v25 = sub_18B4A40(
          (_QWORD *)a1,
          (__int64)&v35,
          &v37,
          (__int64)&v39,
          (__int64)&v41,
          v34,
          a5,
          a6,
          v32.m128i_u8[0],
          v33,
          v20,
          v17,
          v13);
  if ( v35 && v36 )
    sub_1580C40(v36, v35);
  if ( v37 && v38 )
    sub_1580C40(v38, (unsigned __int64)v37);
  if ( v39 && v40 )
    sub_1580C40(v40, v39);
  if ( v41 && v42 )
    sub_1580C40(v42, v41);
  return v25;
}
