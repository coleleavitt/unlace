void __fastcall sub_1A2D870(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        char a8,
        __int64 *a9,
        unsigned __int64 a10,
        char a11)
{
  __int64 v14; // rdx
  __int64 v15; // rbp
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // r14
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rax
  unsigned __int64 v35; // r14
  unsigned __int64 v36; // r13
  char v37; // al
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r14
  __int64 v41; // r15
  __int64 v42; // rax
  char v43; // al
  __int64 v44; // rax
  __int64 v45; // r13
  __int64 v46; // r15
  __int64 *v47; // r15
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 *v50; // r13
  __int64 v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  unsigned int v57; // eax
  unsigned __int64 v58; // rax
  __int64 v59; // [rsp-8h] [rbp-F0h]
  int v61; // [rsp+18h] [rbp-D0h]
  unsigned __int64 v62; // [rsp+20h] [rbp-C8h]
  __m128i v63[11]; // [rsp+30h] [rbp-B8h] BYREF

  v14 = *(unsigned int *)(a1 + 40);
  v61 = a4;
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v14 - 8);
  if ( *(_QWORD *)a5 )
    sub_B7BE40(a2, a5);
  v16 = *(_QWORD *)(v15 + 1656);
  if ( !v16 )
  {
    a5 = *(unsigned int *)(v15 + 1544);
    if ( (_DWORD)a5 )
    {
      v58 = sub_BC21A0(
              *(_QWORD **)(a1 + 248),
              0,
              *(_DWORD *)(v15 + 1636),
              *(_QWORD *)(v15 + 1536),
              a5,
              *(unsigned int *)(v15 + 1640),
              (_DWORD *)(*(_QWORD *)(v15 + 1648) & 0xFFFFFFFFFFFFFFFELL));
      *(_QWORD *)(v15 + 1656) = v58;
      v16 = v58;
      v14 = v59;
    }
  }
  v17 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v17 = *(_QWORD *)(v17 + 8);
  v18 = *(_QWORD *)(v15 + 1584);
  if ( v18 )
    v18 += 64;
  sub_B90130(a2, v18, v14, a4, a5, a6);
  if ( v16 )
  {
    v62 = sub_B77A30(a2);
    sub_B94AD0((__m128i *)(*(_QWORD *)(v15 + 1584) + 64LL), v62, v23, *(_QWORD *)(v15 + 1584), v24, v25);
    sub_B90130(v62, v17, v26, v27, v28, v29);
  }
  else
  {
    sub_B94AD0((__m128i *)(*(_QWORD *)(v15 + 1584) + 64LL), a2, v19, v20, v21, v22);
  }
  v32 = v17;
  LOBYTE(v16) = v16 != 0;
  v33 = *(_QWORD *)(*(_QWORD *)(v15 + 1584) + 128LL);
  *(_BYTE *)(v33 + 104) = (4 * v16) | *(_BYTE *)(v33 + 104) & 0xFB;
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 1584) + 128LL) + 136LL) = a6;
  sub_B90130(a2, v17, v33, (unsigned int)(4 * v16), v30, v31);
  *(_DWORD *)(a2 + 24) = a3;
  *(_DWORD *)(a2 + 64) = v61;
  v34 = *(_QWORD *)(a2 + 56);
  if ( (v34 & 4) != 0 )
    *(_QWORD *)((v34 & 0xFFFFFFFFFFFFFFF8LL) + 32) = a6;
  else
    *(_QWORD *)(a2 + 56) = a6 & 0xFFFFFFFFFFFFFFFBLL;
  v35 = *(_QWORD *)a6;
  v36 = *(_QWORD *)a6;
  v37 = sub_B8E180(*(_QWORD *)(v15 + 1584) + 64LL);
  if ( (_BYTE)v16 || v37 )
  {
    v40 = *(_QWORD *)(v35 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v40 + 16) != 26 )
      v40 = sub_F63050(v40, v32, v38, v39);
    v41 = *(_QWORD *)(v40 + 24);
    v42 = sub_F57E80(*(_QWORD *)(v41 & 0xFFFFFFFFFFFFFFF0LL));
    if ( v42 && (*(_QWORD *)(v42 + 24) & 0xFFFFFFFFFFFFFFF0LL) == 0 && (*(_BYTE *)(v42 + 17) & 4) == 0 )
    {
      v44 = sub_1D52240(a1, v41);
      v45 = *(_QWORD *)(a1 + 248);
      v46 = v44;
      sub_A5E110((__m128 *)v63, v40);
      v32 = v46;
      v36 = sub_A73610(v45, v46, (__int64 *)(v40 + 48), *(unsigned __int16 *)(v40 + 22), v63, 0);
    }
  }
  v43 = *(_BYTE *)(a2 + 84);
  *(_QWORD *)(a2 + 48) = v36;
  *(_BYTE *)(a2 + 84) = a7 & 3 | v43 & 0xFC;
  *(_BYTE *)(a2 + 81) = (32 * a8) | *(_BYTE *)(a2 + 81) & 0x1F;
  if ( a10 )
  {
    sub_16D8D40(a1, a9, a10, 0);
    v32 = sub_B8C330(a2);
    sub_B7C440(a2, v32, a9, a10);
    v47 = *(__int64 **)(a2 + 120);
    v50 = &v47[(unsigned int)sub_B76070(a2, v32, v48, v49)];
    if ( v50 != v47 )
    {
      do
      {
        v51 = *v47;
        v32 = a2 + 72;
        ++v47;
        sub_B8C080(v51, a2 + 72);
      }
      while ( v50 != v47 );
      if ( a11 )
        goto LABEL_28;
LABEL_20:
      *(_BYTE *)(v15 + 1464) = 1;
      return;
    }
  }
  if ( !a11 )
    goto LABEL_20;
LABEL_28:
  *(_BYTE *)(v15 + 1464) = 0;
  v52 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v53 = (unsigned int)*(unsigned __int8 *)(v52 + 16) - 25;
  if ( (unsigned int)v53 > 1 )
    v52 = sub_F63050(v52, v32, v53, v39);
  v54 = *(_QWORD *)(v52 + 24);
  *(_QWORD *)(v15 + 1472) = v54;
  v55 = *(_QWORD *)(v54 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v55 + 17) & 4) == 0 )
  {
    v56 = *(_QWORD *)(*(_QWORD *)(v55 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v56 + 16) != 13 || ((*(_WORD *)(v56 + 18) >> 3) & 0x1FF) != 0x1B3 )
    {
      v57 = sub_B73090(a2);
      sub_1E63CF0(a1, v57, *(_QWORD *)(v15 + 1472), 1, 4095);
    }
  }
}
