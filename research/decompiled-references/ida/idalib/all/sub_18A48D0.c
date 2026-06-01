__m128i *__fastcall sub_18A48D0(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __m128 a7,
        __m128i a8,
        __int64 a9)
{
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r13
  unsigned __int64 v21; // rax
  __int64 v22; // r15
  __m128i *v23; // r14
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // rax
  __int64 *v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned __int64 *v40; // rax
  __int64 *v41; // rdx
  unsigned __int64 v42; // rcx
  __int64 *v43; // rax
  __int64 v44; // rcx
  __int64 *v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rax
  _QWORD *v55; // [rsp+0h] [rbp-F8h]
  __int64 v56; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v57[2]; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v58; // [rsp+28h] [rbp-D0h] BYREF
  _WORD v59[100]; // [rsp+30h] [rbp-C8h] BYREF

  v57[0] = a3;
  v56 = a5;
  v55 = (_QWORD *)sub_168B6C0((__int64)a1);
  v12 = sub_1897000(a1, v57, a4, 1);
  if ( !v12 )
  {
    v23 = (__m128i *)sub_BAC5D0(v55, *(_QWORD *)(*a1 + 544), v56, 0, a4, a2, a6);
    sub_168B9F0((__int64)v59, a1, a4, 0x14E8u, 0);
    sub_17AE460((__int64)v59, v57);
    sub_15F7200(v59);
    sub_B88650((__int64)v23, 1);
    v45 = (__int64 *)*a1;
    v59[0] = 1;
    sub_1836B60(v45, v45[24], v23, a9, v59, a7, a8);
    sub_16660F0(*a1, *(_QWORD *)(*a1 + 192), (__int64)v23);
    sub_B94AD0(*(__m128i **)(*a1 + 544), (__int64)v23, v46, v47, v48, v49);
    goto LABEL_10;
  }
  v17 = v12;
  v18 = *(_QWORD *)(v12 + 120);
  if ( v18 )
  {
    v19 = v56;
    v20 = 0;
    if ( (v18 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      goto LABEL_4;
  }
  else
  {
    v20 = 0;
    sub_A794E0((__int64 *)(*(_QWORD *)(v17 + 96) + 88LL), *(_QWORD *)(v17 + 96), v13, v14, v15, v16);
    v19 = v56;
    if ( (*(_QWORD *)(v17 + 120) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      goto LABEL_4;
  }
  v20 = sub_BADD00(v17, v19, v19, v14, v15, v16);
  if ( !v20 )
  {
    v54 = sub_BAB010(v55, *(_QWORD *)(*a1 + 544), a2, a4, a6, v56, v17, 0, 0, 0);
    *(_BYTE *)(v54 + 29) |= 2u;
    v20 = v54;
  }
  v19 = v56;
LABEL_4:
  v21 = sub_BAC5D0(v55, *(_QWORD *)(*a1 + 544), v19, v17, a4, a2, a6);
  v22 = *a1;
  v23 = (__m128i *)v21;
  v27 = sub_A82070((__int64)v55, v17, 0, v24, v25, v26);
  if ( (unsigned __int8)sub_1E63CF0(v22, a4, v27, 1, 5352) )
    sub_B88650((__int64)v23, 1);
  v28 = (__int64 *)*a1;
  v59[0] = 1;
  sub_1836B60(v28, v28[24], v23, a9, v59, a7, a8);
  sub_16660F0(*a1, *(_QWORD *)(*a1 + 192), (__int64)v23);
  sub_B94AD0(*(__m128i **)(*a1 + 544), (__int64)v23, v29, v30, v31, v32);
  if ( (*(_BYTE *)(v17 + 29) & 1) == 0 )
    goto LABEL_7;
  v40 = sub_B8C3D0(v17, (__int64)v23, v33, v34, v35, v36);
  v41 = (__int64 *)*v40;
  v42 = *v40 + 8LL * *((unsigned int *)v40 + 2);
  if ( *v40 < v42 )
  {
    v53 = *v40;
    while ( *(_WORD *)(*(_QWORD *)v53 + 36LL) != 433 )
    {
      v53 += 8LL;
      if ( v42 == v53 )
        goto LABEL_7;
    }
    if ( v42 == v53 )
      goto LABEL_7;
  }
  else
  {
    if ( v41 == (__int64 *)v42 )
      goto LABEL_7;
    if ( *(_WORD *)(*(_QWORD *)v42 + 36LL) != 433 )
    {
      v43 = (__int64 *)(v42 + 8);
      while ( v41 != v43 )
      {
        v44 = *v43++;
        if ( *(_WORD *)(v44 + 36) == 433 )
          goto LABEL_30;
      }
      goto LABEL_7;
    }
  }
LABEL_30:
  sub_168B9F0((__int64)v59, a1, a4, 0x111Du, 0);
  v58 = *(_QWORD *)(v17 + 40);
  sub_15894B0((__int64)v59, &v58);
  sub_15F7200(v59);
LABEL_7:
  if ( v20 )
  {
    if ( sub_BA8FC0(v20) )
    {
      sub_168B9F0((__int64)v59, a1, a4, 0xE7Bu, 0);
      v37 = sub_17AE460((__int64)v59, v57);
      sub_17AE460(v37, &v56);
      sub_15F7200(v59);
      v38 = sub_BA8FC0(v20);
      sub_168B9F0((__int64)v59, a1, *(_DWORD *)(v38 + 24), 0x71u, 0);
      sub_15F7200(v59);
      sub_B88650((__int64)v23, 1);
    }
    else
    {
      sub_BA8FE0(v20, (__int64)v23);
      sub_18A3E00(*a1, v20, v23[1].m128i_u32[2], v50, v51, v52);
    }
  }
LABEL_10:
  sub_18954B0(a1, (__int64)v23);
  sub_1A865C0(a1, v23);
  return v23;
}
