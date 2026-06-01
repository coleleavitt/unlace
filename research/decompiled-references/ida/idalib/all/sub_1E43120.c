void __fastcall sub_1E43120(
        __int64 a1,
        __m128i *a2,
        __int64 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        double a8,
        double a9,
        __m128 a10,
        __m128i a11)
{
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // r15
  unsigned __int64 v25; // rax
  __int64 *v26; // r14
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // r12
  unsigned __int64 v30; // r13
  unsigned __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int16 *v34; // r13
  __int64 v35; // r8
  __int64 *v36; // rdi
  unsigned int v37; // ecx
  __int64 v38; // r13
  double v39; // xmm4_8
  double v40; // xmm5_8
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rcx
  unsigned __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned __int64 v49; // rax
  __int64 v50; // r8
  unsigned __int64 v51; // r8
  __int64 v53; // [rsp+20h] [rbp-98h] BYREF
  void *ptr; // [rsp+28h] [rbp-90h]
  __int64 v55; // [rsp+30h] [rbp-88h]
  _BYTE v56[24]; // [rsp+38h] [rbp-80h] BYREF
  void *v57; // [rsp+50h] [rbp-68h] BYREF
  __int64 v58; // [rsp+58h] [rbp-60h]
  _BYTE v59[88]; // [rsp+60h] [rbp-58h] BYREF

  sub_B809C0((__int64)a2);
  a2[1].m128i_i32[2] = *(_DWORD *)(a3 + 24);
  v57 = v59;
  v58 = 0x400000000LL;
  sub_B7E870(a3, (__int64)a2, v14, v15, v16, v17);
  v22 = sub_B7E870(a3, (__int64)a2, v18, v19, v20, v21);
  if ( !v22 )
    v22 = (_QWORD *)a3;
  v23 = sub_B8E970((__int64)(v22 + 8));
  if ( !v23 )
  {
LABEL_8:
    v26 = *(__int64 **)a1;
    goto LABEL_9;
  }
  v24 = v23;
  if ( (*(_BYTE *)(v23 + 28) & 0x7F) != 0x21 )
  {
    do
    {
      v25 = *(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v24 = v25;
      if ( !v25 )
        goto LABEL_8;
    }
    while ( (*(_BYTE *)(v25 + 28) & 0x7F) != 0x21 );
  }
  v26 = *(__int64 **)a1;
  v29 = 0;
LABEL_15:
  v30 = *(_QWORD *)(v24 + 72);
  if ( !v30 )
    goto LABEL_34;
  sub_18C74E0((__int64)v26, 4, 0, 4);
  v34 = sub_1DF2070(*(_QWORD *)a1, v30, *(_QWORD *)(a1 + 32), v31, v32, v33, a4, a5);
  sub_190D5E0((__int64)v26, a4);
  if ( v34 != (unsigned __int16 *)((char *)&dword_0 + 1) )
  {
    v26 = *(__int64 **)a1;
    v30 = (unsigned __int64)v34 & 0xFFFFFFFFFFFFFFFELL;
LABEL_34:
    v50 = *(_QWORD *)(v24 + 40);
    if ( (v50 & 7) != 0 )
      v51 = 0;
    else
      v51 = v50 & 0xFFFFFFFFFFFFFFF8LL;
    v38 = sub_17AFA10(
            v26,
            (__int64)a2,
            v29,
            *(_DWORD *)(v24 + 24),
            v51,
            v30,
            *(double *)a4.m128_u64,
            *(double *)a5.m128_u64);
    goto LABEL_22;
  }
  v35 = *(_QWORD *)(v24 + 40);
  v36 = *(__int64 **)a1;
  v37 = *(_DWORD *)(v24 + 24);
  if ( (v35 & 7) != 0 )
    v38 = sub_17AFA10(v36, (__int64)a2, v29, v37, 0, 0, *(double *)a4.m128_u64, *(double *)a5.m128_u64);
  else
    v38 = sub_17AFA10(
            v36,
            (__int64)a2,
            v29,
            v37,
            v35 & 0xFFFFFFFFFFFFFFF8LL,
            0,
            *(double *)a4.m128_u64,
            *(double *)a5.m128_u64);
  if ( v38 )
    sub_B88650(v38, 1);
  sub_B88650((__int64)a2, 1);
LABEL_22:
  v26 = *(__int64 **)a1;
  if ( !v38 )
    goto LABEL_31;
  sub_1E40A90(*(_QWORD *)a1, *(__int64 **)(a1 + 32), v24, v38, 0, nullptr, a4, a5, a6, a7, v39, v40, a10, a11);
  v41 = a2[1].m128i_i8[13] & 0x60;
  v42 = (unsigned int)v41 | *(_BYTE *)(v38 + 29) & 0x9F;
  *(_BYTE *)(v38 + 29) = v41 | *(_BYTE *)(v38 + 29) & 0x9F;
  sub_B94AD0(a2 + 4, v38, v42, v41, v43, v44);
  v45 = (unsigned int)v58;
  v46 = (unsigned int)v58 + 1LL;
  if ( v46 > HIDWORD(v58) )
  {
    sub_2237220(&v57, v59, v46, 8);
    v45 = (unsigned int)v58;
  }
  *((_QWORD *)v57 + v45) = v38;
  v47 = *(_QWORD *)(a3 + 16);
  LODWORD(v58) = v58 + 1;
  if ( (v47 & 4) != 0 )
  {
    v26 = *(__int64 **)a1;
    v48 = *(_BYTE *)(*(_QWORD *)(v47 & 0xFFFFFFFFFFFFFFF8LL) + 8LL) & 0x7F;
    if ( (unsigned __int8)v48 <= 0x12u )
    {
LABEL_27:
      v29 = v38;
      if ( ((1LL << v48) & 0x40182) == 0 )
        goto LABEL_31;
      goto LABEL_28;
    }
  }
  else
  {
    v26 = *(__int64 **)a1;
    v48 = *(_BYTE *)((v47 & 0xFFFFFFFFFFFFFFF8LL) + 8) & 0x7F;
    if ( (unsigned __int8)v48 <= 0x12u )
      goto LABEL_27;
  }
  v29 = v38;
  v48 = ((_BYTE)v48 + 94) & 0x7F;
  if ( (unsigned __int8)v48 > 5u )
    goto LABEL_31;
LABEL_28:
  v29 = v38;
  if ( a2[4].m128i_i8[12] >= 0 )
  {
    sub_1DC20B0(v26[1410], v24, v38, v48);
    v26 = *(__int64 **)a1;
  }
LABEL_31:
  while ( 1 )
  {
    v49 = *(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    v24 = v49;
    if ( !v49 )
      break;
    if ( (*(_BYTE *)(v49 + 28) & 0x7F) == 0x21 )
      goto LABEL_15;
  }
LABEL_9:
  v27 = a2[1].m128i_u32[2];
  ptr = v56;
  v28 = a2[7].m128i_i64[0];
  v55 = 0x200000000LL;
  v53 = 0;
  sub_17D2B30(
    (__int64)v26,
    (__m128i)a4,
    *(double *)a5.m128_u64,
    v27,
    v28,
    (__int64)a2,
    (__int64 *)v57,
    (unsigned int)v58,
    0,
    (__int64)&v53);
  if ( ptr != v56 )
    free(ptr);
  if ( v57 != v59 )
    free(v57);
}
