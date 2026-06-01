unsigned __int64 __fastcall sub_19FA400(__int64 a1, __int64 a2)
{
  _QWORD *v4; // r15
  __m128i *v5; // r12
  _WORD *v6; // rbx
  unsigned __int64 v7; // r13
  unsigned __int64 v9; // rax
  __m128i *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  _QWORD *v27; // r14
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rdi
  const __m128i *v45; // rax
  unsigned __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 *v51; // r13
  __int64 v52; // rax
  __int64 *v53; // rax
  unsigned __int8 v54; // dl
  __int64 v55; // [rsp-10h] [rbp-78h]
  __int64 v56; // [rsp-8h] [rbp-70h]
  const __m128i *v57; // [rsp+8h] [rbp-60h] BYREF
  __m128i v58; // [rsp+10h] [rbp-58h] BYREF
  __int64 *v59; // [rsp+20h] [rbp-48h]

  v4 = *(_QWORD **)(a1 + 248);
  v5 = (__m128i *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v5 = (__m128i *)v5->m128i_i64[0];
  v6 = sub_19F9FC0(a1, a2, 0);
  v7 = sub_19F5210((__int64)v6, (unsigned __int64)v5);
  if ( v7 )
    return v7;
  v9 = sub_B96A60(v4, 0, (__int64)v5, 0, 0, (__int64)v6, 0, 0);
  *(_BYTE *)(v9 + 29) |= 2u;
  v10 = (__m128i *)v9;
  v11 = sub_B32990((__int64)v4, 0, 0);
  sub_B8CC60((__int64)v10, v11, v12, v13, v14, v15);
  sub_B809C0((__int64)v10);
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v16, v17, v18, v19);
  v22 = v55;
  v23 = v56;
  v24 = *(unsigned int *)(*(_QWORD *)(a2 + 128) + 16LL);
  if ( (_DWORD)v24 )
  {
    v24 = *(_QWORD *)(a2 + 104);
    sub_7052B0((__int64 *)(v24 + 96), v24, v55, v56, v20, v21);
    v44 = *(_QWORD *)(a2 + 128);
    if ( (*(_BYTE *)(v44 + 24) & 1) != 0 )
      v45 = (const __m128i *)sub_B96980(v44);
    else
      v45 = *(const __m128i **)(v44 + 24);
    v58 = _mm_loadu_si128(v45);
    v59 = (__int64 *)v45[1].m128i_i64[0];
    v46 = sub_19F6590(v59, v24, v41, v42, v43);
    v51 = sub_F63270(*(_QWORD *)(v46 & 0xFFFFFFFFFFFFFFF0LL), v24, v47, v48, v49, v50);
    if ( (unsigned __int8)sub_19F8CB0(v51, v24) )
    {
      v24 = (__int64)v51;
      v52 = sub_19FA400(a1, v51);
      if ( !v52 )
        goto LABEL_6;
      v53 = sub_A81910(v4, *(_QWORD *)(v52 + 48) & 0xFFFFFFFFFFFFFFF0LL, 0);
      v54 = *(_BYTE *)(a2 + 73);
      v58.m128i_i64[0] = 0;
      v58.m128i_i32[2] = 0;
      v59 = v53;
      v58.m128i_i8[12] = (2 * (v54 >> 5 == 3)) | v58.m128i_i8[12] & 0xE0 | 0xC;
    }
    else if ( !v51 )
    {
      goto LABEL_6;
    }
    v24 = (__int64)&v57;
    v57 = &v58;
    sub_BA0230((__int64)v10, &v57, 1u);
  }
LABEL_6:
  v27 = (_QWORD *)sub_B7E900(a2, v24, v22, v23, v20, v21);
  if ( v27 )
  {
LABEL_7:
    v24 = sub_F63050(*(_QWORD *)(v27[6] & 0xFFFFFFFFFFFFFFF0LL), v24, v25, v26);
    v28 = v27[5] & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v27[5] & 7) != 0 )
      v28 = 0;
    v29 = sub_19FA690(a1, v24, v28, v10);
    if ( v29 )
    {
      v24 = v29;
      sub_B94AD0(v10 + 4, v29, v25, v26, v30, v31);
    }
    while ( 1 )
    {
      v32 = v27[1] & 0xFFFFFFFFFFFFFFF8LL;
      v27 = (_QWORD *)v32;
      if ( !v32 )
        break;
      if ( (*(_BYTE *)(v32 + 28) & 0x7Fu) - 49 <= 2 )
        goto LABEL_7;
    }
  }
  (*(void (__fastcall **)(__m128i *))(v10->m128i_i64[0] + 104))(v10);
  v7 = sub_B7E900((__int64)v10, v24, v33, v34, v35, v36);
  if ( v7
    || (sub_7052B0((__int64 *)(v10[6].m128i_i64[1] + 96), v10[6].m128i_i64[1], v37, v38, v39, v40),
        *(_DWORD *)(v10[8].m128i_i64[0] + 16)) )
  {
    v7 = (unsigned __int64)v10;
    sub_B94AD0(v5, (__int64)v10, v37, v38, v39, v40);
  }
  return v7;
}
