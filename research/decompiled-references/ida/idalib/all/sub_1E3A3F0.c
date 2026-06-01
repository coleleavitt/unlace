const __m128i *__fastcall sub_1E3A3F0(__int64 a1, __int64 a2, double a3, double a4, __m128i a5)
{
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  const __m128i *v11; // rbp
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // rax
  __m128 v17; // xmm1
  char v18; // r13
  unsigned __int8 v19; // r13
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 *v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 *v32; // rcx
  char v34; // al
  __int64 v35; // rsi
  __int64 v36; // rsi
  __int64 v37; // rbp
  unsigned __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rdi
  __int64 v42; // [rsp-8h] [rbp-160h]
  __int64 v43; // [rsp+8h] [rbp-150h]
  __m128i v44; // [rsp+20h] [rbp-138h] BYREF
  __int64 v45; // [rsp+30h] [rbp-128h]
  __int128 v46; // [rsp+40h] [rbp-118h] BYREF
  void *v47[2]; // [rsp+50h] [rbp-108h]
  __int128 v48; // [rsp+60h] [rbp-F8h]
  __int64 v49; // [rsp+70h] [rbp-E8h] BYREF
  void *ptr; // [rsp+78h] [rbp-E0h]
  __int64 v51; // [rsp+80h] [rbp-D8h]
  _BYTE v52[64]; // [rsp+88h] [rbp-D0h] BYREF
  void *v53; // [rsp+C8h] [rbp-90h]
  __int64 v54; // [rsp+D0h] [rbp-88h]
  __int64 v55; // [rsp+D8h] [rbp-80h]
  _QWORD *v56; // [rsp+E0h] [rbp-78h]
  __m128 v57; // [rsp+E8h] [rbp-70h]
  __int64 v58; // [rsp+F8h] [rbp-60h]
  __int64 v59; // [rsp+100h] [rbp-58h]
  __int64 v60; // [rsp+108h] [rbp-50h]
  __int64 v61; // [rsp+110h] [rbp-48h]

  v7 = sub_1DEB190(*(_QWORD *)a1, *(_QWORD *)(a2 + 64), *(void **)(a2 + 72), *(_QWORD *)(a1 + 32));
  v43 = v10;
  v11 = (const __m128i *)v7;
  if ( !v7 )
    return v11;
  v12 = v7;
  v13 = *(_QWORD *)(a2 + 80);
  v14 = *(unsigned int *)(a2 + 24);
  v44.m128i_i64[0] = *(_QWORD *)(a2 + 40);
  v45 = v13;
  v15 = *(_QWORD **)a1;
  v44.m128i_i32[2] = v14;
  if ( (v44.m128i_i8[0] & 7) == 3 )
  {
    v35 = v15[68];
    if ( (*(_BYTE *)(v35 + 8) & 0x7Fu) - 59 <= 2 )
    {
      v36 = v35 - 64;
      if ( v36 )
      {
        v37 = v15[31];
        v38 = sub_A7A9D0(v37, v36, (__int64)v15, v14, v8, v9);
        v39 = sub_B87BD0(
                v37 + 17536,
                *(_QWORD *)&byte_8[v38 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
              | ((unsigned __int8)*(_QWORD *)&byte_8[v38 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v38) & 7);
        v15 = *(_QWORD **)a1;
        v44.m128i_i64[0] = v39;
      }
    }
  }
  v16 = *(_QWORD *)(a1 + 24);
  v17 = (__m128)_mm_load_si128(&v44);
  v49 = 0;
  v18 = *(_BYTE *)(v16 + 8);
  v56 = v15;
  ptr = v52;
  v51 = 0x800000000LL;
  v53 = nullptr;
  v19 = (v18 + 70) & 0x7F;
  v58 = v45;
  v54 = 0;
  v55 = 0;
  v57 = v17;
  v59 = 0;
  v60 = 8;
  v61 = 65537;
  sub_1A395A0((__int64)&v49);
  v11 = (const __m128i *)sub_B9A360(
                           *(_QWORD **)(*(_QWORD *)a1 + 248LL),
                           *(_QWORD *)(a1 + 24),
                           *(_DWORD *)(a2 + 56),
                           v12,
                           v43,
                           (__int64)&v44,
                           (*(__int64 *)(a2 + 48) >> 2) & 1);
  v46 = 0;
  *(_OWORD *)v47 = 0;
  v48 = 0;
  sub_15AB8B0((__int64)&v46, v12, v43);
  if ( v19 <= 3u )
  {
    v40 = *(_QWORD *)(a1 + 24);
    v41 = *(_QWORD *)a1;
    BYTE2(v61) = 0;
    sub_1A48440(v41, (__int64)&v49, v40, 0);
    if ( (unsigned __int8)sub_184A830(
                            *(_QWORD *)a1,
                            *(unsigned int *)(a2 + 56),
                            (*(__int64 *)(a2 + 48) >> 2) & 1,
                            (__int64 *)&v46,
                            *(_DWORD *)(a2 + 24),
                            (__int64)&v49) )
      sub_B88650((__int64)v11, 1);
  }
  v23 = *(__int64 **)a1;
  if ( v11[1].m128i_i8[12] >= 0 )
  {
    v34 = sub_1855850(
            v23,
            *(_DWORD *)(a2 + 56),
            (*(__int64 *)(a2 + 48) >> 2) & 1,
            (__int64)&v46,
            (__int64)&v44,
            *(unsigned int *)(a2 + 24),
            (__m128i)0LL,
            *(double *)v17.m128_u64,
            0,
            a2);
    v20 = v42;
    if ( v34 )
      sub_B88650((__int64)v11, 1);
    v23 = *(__int64 **)a1;
  }
  sub_A96260(v23[31], (__int64)v11, a2, v20, v21, v22);
  v24 = *(_BYTE *)(a2 + 29) & 0x60;
  v11[1].m128i_i8[13] = v24 | v11[1].m128i_i8[13] & 0x9F;
  sub_B94AD0(*(__m128i **)(a1 + 24), (__int64)v11, v24, v25, v26, v27);
  if ( v11[1].m128i_i8[12] >= 0 )
  {
    if ( (v44.m128i_i8[0] & 7) == 3 )
      sub_185AC30(*(_QWORD *)a1, (__int64)v11, v28, v29, v30, v31);
    v32 = nullptr;
    if ( v19 < 4u )
      v32 = &v49;
    v11 = sub_1E3A1B0((__int64 *)a1, a2, v11, (__int64)v32, (__m128)0LL, v17, a5);
  }
  if ( HIDWORD(v47[1]) )
    free(v47[0]);
  if ( BYTE3(v61) )
  {
    if ( (_DWORD)v49 == 5 )
    {
      if ( !BYTE4(v61) )
        goto LABEL_17;
      goto LABEL_25;
    }
    if ( !v54 || (*(_BYTE *)(v56[29] + 46LL) & 0x20) == 0 )
      goto LABEL_17;
    sub_1663B80(v56, (__int64)&v49);
  }
  if ( !BYTE4(v61) || (_DWORD)v49 != 5 )
    goto LABEL_17;
LABEL_25:
  sub_1A445B0((__int64)v56, (__int64)&v49, v28, v29, v30);
LABEL_17:
  if ( v53 )
    sub_1A39780((char *)v53);
  if ( ptr != v52 )
    free(ptr);
  return v11;
}
