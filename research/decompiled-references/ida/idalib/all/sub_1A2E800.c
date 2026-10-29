__int64 __fastcall sub_1A2E800(__int64 a1, __int32 a2, int a3, __int64 a4, __int64 a5, __m128 a6, __m128 a7)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r13
  unsigned __int64 *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rbp
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rbx
  __int64 v26; // rsi
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  char v29; // al
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // r15
  unsigned __int64 v33; // rdx
  __int64 v34; // rdi
  char v35; // bp
  unsigned __int64 v36; // r14
  unsigned __int64 v37; // rbx
  int v38; // eax
  __int64 v39; // rax
  unsigned __int64 v40; // rdx
  _QWORD *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rsi
  _QWORD *v44; // rsi
  __int64 v45; // rbp
  __int16 v46; // ax
  bool v47; // zf
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // r13
  unsigned __int8 v52; // al
  __int64 v53; // rax
  __int64 *v54; // rdi
  __int64 v55; // [rsp-8h] [rbp-D0h]
  int v56; // [rsp+0h] [rbp-C8h]
  __int64 v57; // [rsp+0h] [rbp-C8h]
  __int64 v58; // [rsp+8h] [rbp-C0h]
  __int64 v59; // [rsp+10h] [rbp-B8h]
  __int64 v60; // [rsp+18h] [rbp-B0h]
  __int64 v63; // [rsp+30h] [rbp-98h]
  __int64 v65; // [rsp+48h] [rbp-80h]
  __m128i v66; // [rsp+50h] [rbp-78h] BYREF
  void *ptr; // [rsp+60h] [rbp-68h] BYREF
  __int64 v68; // [rsp+68h] [rbp-60h]
  __int64 v69; // [rsp+70h] [rbp-58h] BYREF
  int v70; // [rsp+78h] [rbp-50h]
  int v71; // [rsp+80h] [rbp-48h]
  char v72; // [rsp+84h] [rbp-44h]

  v10 = *(_QWORD *)(sub_B8C1B0(a4 + 72) + 16);
  if ( (v10 & 4) != 0 )
    v13 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v13 = v10 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v13 )
    v13 -= 64LL;
  v14 = sub_B94670(v13 + 64, (*(_QWORD *)(a1 + 248) + 18264LL) | 6, v8, v9, v11, v12);
  v15 = v14 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v14 & 4) != 0 )
  {
    v16 = (unsigned __int64 *)(v14 & 0xFFFFFFFFFFFFFFF8LL);
    v15 = 0;
    if ( v16 )
      v15 = *v16;
  }
  *(_BYTE *)(v15 + 29) |= 8u;
  sub_B8C4D0(v15, *(_QWORD *)(a1 + 248));
  LODWORD(ptr) = 14;
  v17 = *(_QWORD *)(a5 + 8);
  v70 = 0;
  v68 = 0;
  v69 = v17;
  v72 = 0;
  v71 = a3;
  v18 = sub_1A24E20(a1, (__int64)&ptr, a2, a5, 0, 0, a6, a7);
  if ( v18 == 1 )
    return 1;
  v23 = 0;
  v24 = v18 & 0xFFFFFFFFFFFFFFFELL;
  v25 = v24;
  if ( v24 )
    v23 = (unsigned int)sub_C00A40(v24, (__int64)&ptr, 0, v19, v20);
  v65 = sub_19B4A30(a1, v25, v23, 0, 0, 0, a6, a7);
  if ( v65 == 1 )
    return 1;
  v26 = *(_QWORD *)(a1 + 544);
  v63 = sub_B79D10(*(_QWORD *)(a1 + 248), v26, a3);
  v28 = *(_QWORD *)(v15 + 56) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v15 + 56) & 4) != 0 )
    v28 = *(_QWORD *)(v28 + 32);
  *(_QWORD *)(v63 + 96) = v28;
  v29 = sub_B748A0(v15, v26, v28, v27);
  *(_BYTE *)(v63 + 49) = (32 * (v29 & 1)) | *(_BYTE *)(v63 + 49) & 0x5F;
  ptr = &v69;
  v68 = 0x400000000LL;
  v31 = sub_B76070(v15, v26, 32 * (v29 & 1u), v30);
  v59 = v63 + 40;
  if ( v31 )
  {
    v32 = 0;
    v60 = 8LL * (unsigned int)(v31 - 1) + 8;
    do
    {
      while ( 1 )
      {
        v34 = *(_QWORD *)(*(_QWORD *)(v15 + 120) + v32);
        v35 = *(_BYTE *)(v34 + 96) & 7;
        v36 = *(_QWORD *)(v34 + 56) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v34 + 56) & 4) != 0 )
          v36 = *(_QWORD *)(v36 + 32);
        v58 = *(_QWORD *)(v34 + 48);
        v37 = *(_QWORD *)(v34 + 40) & 0xFFFFFFFFFFFFFFF8LL;
        v56 = *(_DWORD *)(v34 + 24);
        if ( (*(_QWORD *)(v34 + 40) & 7) != 0 )
          v37 = 0;
        v38 = sub_B73090(v34);
        v39 = sub_B74530(*(_QWORD *)(a1 + 248), v59, v38, v56, v37, v58, v36, v35, 0);
        v40 = (unsigned int)v68 + 1LL;
        if ( v40 > HIDWORD(v68) )
          break;
        v32 += 8;
        *((_QWORD *)ptr + (unsigned int)v68) = v39;
        v33 = (unsigned int)(v68 + 1);
        LODWORD(v68) = v68 + 1;
        if ( v60 == v32 )
          goto LABEL_26;
      }
      v57 = v39;
      v32 += 8;
      sub_2237220(&ptr, &v69, v40, 8);
      *((_QWORD *)ptr + (unsigned int)v68) = v57;
      v33 = (unsigned int)(v68 + 1);
      LODWORD(v68) = v68 + 1;
    }
    while ( v32 != v60 );
  }
  else
  {
    v33 = (unsigned int)v68;
  }
LABEL_26:
  sub_B7C580(v63, ptr, v33);
  *(_BYTE *)(v63 + 50) |= 1u;
  v41 = sub_A81910(*(_QWORD **)(a1 + 248), *(_QWORD *)(a5 + 8), 0);
  v42 = sub_B731A0(*(_QWORD *)(a1 + 248), v59, a3, a3, 0, *(_QWORD *)(a5 + 8), (__int64)v41, 0);
  v43 = *(_QWORD *)(a1 + 248);
  v66.m128i_i64[0] = v42 & 0xFFFFFFFFFFFFFFF9LL;
  v66.m128i_i64[1] = v65 & 0xFFFFFFFFFFFFFFFELL;
  sub_B7C620(v63, v43, &v66, 1, 0);
  v44 = *(_QWORD **)(a1 + 248);
  v45 = sub_EEE9A0(16, v44, 8u);
  v46 = *(_WORD *)v45 & 0xFE00;
  LOBYTE(v46) = -7;
  v47 = unk_2CD7484 == 0;
  *(_WORD *)v45 = v46;
  v48 = v55;
  if ( !v47 )
    sub_EE9B50(249);
  *(_DWORD *)(v45 + 4) = 0;
  *(_BYTE *)(v45 + 1) &= ~2u;
  *(_DWORD *)(v45 + 8) = a3;
  *(_DWORD *)(v45 + 12) = a3;
  *(_QWORD *)(v63 + 88) = v45;
  v49 = *(_QWORD *)(*(_QWORD *)(a4 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v50 = (unsigned int)*(unsigned __int8 *)(v49 + 16) - 25;
  if ( (unsigned int)v50 > 1 )
    v49 = sub_F63050(v49, v44, v50, v48);
  v51 = *(_QWORD *)(v49 + 24);
  v21 = sub_EEE9A0(24, *(_QWORD **)(a1 + 248), 8u);
  v47 = unk_2CD7484 == 0;
  *(_WORD *)v21 = *(_WORD *)v21 & 0xFE00 | 0x75;
  if ( !v47 )
    sub_EE9B50(117);
  *(_WORD *)(v21 + 1) &= 0xF801u;
  *(_QWORD *)(v21 + 8) = v51;
  *(_QWORD *)(v21 + 16) = v63;
  v52 = sub_B631C0(v21, 0);
  *(_BYTE *)(v21 + 1) = (v52 << 6) | *(_BYTE *)(v21 + 1) & 0x3F;
  *(_BYTE *)(v21 + 2) = *(_BYTE *)(v21 + 2) & 0xF8 | (v52 >> 2) & 7;
  v53 = *(unsigned int *)(a1 + 4528);
  if ( v53 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 4532) )
  {
    sub_2237220(a1 + 4520, a1 + 4536, v53 + 1, 8);
    v53 = *(unsigned int *)(a1 + 4528);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 4520) + 8 * v53) = v63 & 0xFFFFFFFFFFFFFFFBLL;
  v54 = (__int64 *)ptr;
  *(_WORD *)(a1 + 4512) = 257;
  ++*(_DWORD *)(a1 + 4528);
  if ( v54 != &v69 )
    free(v54);
  return v21;
}
