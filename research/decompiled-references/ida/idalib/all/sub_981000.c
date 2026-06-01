void __fastcall sub_981000(__int64 a1)
{
  _QWORD *v2; // r8
  unsigned __int64 v3; // r9
  _QWORD *v4; // r10
  _QWORD *v5; // r11
  _BYTE *v6; // rsi
  _BYTE *v7; // rbx
  _BYTE *v8; // rcx
  _BYTE *v9; // rdi
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r13
  __int64 v14; // r14
  unsigned __int64 v15; // r15
  _BYTE *v16; // r15
  __int16 v17; // r15
  __int16 v18; // r9
  __int16 v19; // r10
  __int16 v20; // r11
  unsigned __int64 v21; // rbp
  __int16 v22; // r15
  unsigned __int64 v23; // rdx
  __int16 v24; // r9
  unsigned __int64 v25; // r12
  __int16 v26; // r10
  unsigned __int64 v27; // r13
  __int16 v28; // r11
  unsigned __int64 v29; // rbp
  __int16 v30; // r15
  unsigned __int64 v31; // rdx
  __int16 v32; // r9
  unsigned __int64 v33; // r12
  __int16 v34; // r10
  unsigned __int64 v35; // r13
  __int16 v36; // r11
  unsigned __int64 v37; // rbp
  __int16 v38; // r15
  unsigned __int64 v39; // rdx
  __int16 v40; // r9
  unsigned __int64 v41; // r12
  __int16 v42; // r10
  unsigned __int64 v43; // r13
  __int16 v44; // r11
  unsigned __int64 v45; // rbp
  __int16 v46; // r15
  unsigned __int64 v47; // rdx
  __int16 v48; // r9
  unsigned __int64 v49; // r12
  __int16 v50; // r10
  unsigned __int64 v51; // r13
  __int16 v52; // r11
  _QWORD *v53; // r9
  _QWORD *v54; // r10
  _QWORD *v55; // r11
  _QWORD *v56; // [rsp+0h] [rbp-B0h]
  _QWORD *v57; // [rsp+8h] [rbp-A8h]
  _QWORD *v58; // [rsp+10h] [rbp-A0h]
  unsigned __int64 v59; // [rsp+18h] [rbp-98h]
  __int64 v60; // [rsp+20h] [rbp-90h]
  __int64 v61; // [rsp+28h] [rbp-88h]

  v2 = *(_QWORD **)a1;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD **)(a1 + 16);
  v5 = *(_QWORD **)(a1 + 24);
  v6 = *(_BYTE **)(a1 + 32);
  v7 = *(_BYTE **)(a1 + 40);
  v8 = *(_BYTE **)(a1 + 48);
  v9 = *(_BYTE **)(a1 + 56);
  v10 = *(_QWORD *)(a1 + 64);
  v11 = *(_QWORD *)(a1 + 72);
  v12 = *(_QWORD *)(a1 + 80);
  v13 = *(_QWORD *)(a1 + 88);
  v14 = *(_QWORD *)(a1 + 96);
  v61 = *(_QWORD *)(a1 + 104);
  v60 = *(_QWORD *)(a1 + 112);
  while ( 1 )
  {
    v15 = (v60 - (__int64)v9) / 5uLL;
    if ( v15 > ((unsigned __int64)v2 - v61) / 7 )
      v15 = ((unsigned __int64)v2 - v61) / 7;
    v16 = &v9[5 * v15];
    if ( v16 == v9 || v3 < (unsigned __int64)v2 || (unsigned __int64)v4 < v3 || v5 < v4 )
      break;
    v59 = (unsigned __int64)v16;
    v56 = (_QWORD *)v3;
    v57 = v4;
    v58 = v5;
    v17 = *(_WORD *)(v14 + 2 * (v10 >> 53));
    v18 = *(_WORD *)(v14 + 2 * (v11 >> 53));
    v19 = *(_WORD *)(v14 + 2 * (v12 >> 53));
    v20 = *(_WORD *)(v14 + 2 * (v13 >> 53));
    do
    {
      v21 = v10 << v17;
      *v6 = HIBYTE(v17);
      v22 = *(_WORD *)(v14 + 2 * (v21 >> 53));
      v23 = v11 << v18;
      *v7 = HIBYTE(v18);
      v24 = *(_WORD *)(v14 + 2 * (v23 >> 53));
      v25 = v12 << v19;
      *v8 = HIBYTE(v19);
      v26 = *(_WORD *)(v14 + 2 * (v25 >> 53));
      v27 = v13 << v20;
      *v9 = HIBYTE(v20);
      v28 = *(_WORD *)(v14 + 2 * (v27 >> 53));
      v29 = v21 << v22;
      v6[1] = HIBYTE(v22);
      v30 = *(_WORD *)(v14 + 2 * (v29 >> 53));
      v31 = v23 << v24;
      v7[1] = HIBYTE(v24);
      v32 = *(_WORD *)(v14 + 2 * (v31 >> 53));
      v33 = v25 << v26;
      v8[1] = HIBYTE(v26);
      v34 = *(_WORD *)(v14 + 2 * (v33 >> 53));
      v35 = v27 << v28;
      v9[1] = HIBYTE(v28);
      v36 = *(_WORD *)(v14 + 2 * (v35 >> 53));
      v37 = v29 << v30;
      v6[2] = HIBYTE(v30);
      v38 = *(_WORD *)(v14 + 2 * (v37 >> 53));
      v39 = v31 << v32;
      v7[2] = HIBYTE(v32);
      v40 = *(_WORD *)(v14 + 2 * (v39 >> 53));
      v41 = v33 << v34;
      v8[2] = HIBYTE(v34);
      v42 = *(_WORD *)(v14 + 2 * (v41 >> 53));
      v43 = v35 << v36;
      v9[2] = HIBYTE(v36);
      v44 = *(_WORD *)(v14 + 2 * (v43 >> 53));
      v45 = v37 << v38;
      v6[3] = HIBYTE(v38);
      v46 = *(_WORD *)(v14 + 2 * (v45 >> 53));
      v47 = v39 << v40;
      v7[3] = HIBYTE(v40);
      v48 = *(_WORD *)(v14 + 2 * (v47 >> 53));
      v49 = v41 << v42;
      v8[3] = HIBYTE(v42);
      v50 = *(_WORD *)(v14 + 2 * (v49 >> 53));
      v51 = v43 << v44;
      v9[3] = HIBYTE(v44);
      v52 = *(_WORD *)(v14 + 2 * (v51 >> 53));
      v6[4] = HIBYTE(v46);
      v7[4] = HIBYTE(v48);
      v8[4] = HIBYTE(v50);
      v9[4] = HIBYTE(v52);
      _BitScanForward64(&v45, v45 << v46);
      v6 += 5;
      v2 = (_QWORD *)((char *)v2 - (v45 >> 3));
      v10 = (*v2 | 1LL) << (v45 & 7);
      v17 = *(_WORD *)(v14 + 2 * (v10 >> 53));
      _BitScanForward64(&v47, v47 << v48);
      v7 += 5;
      v53 = (_QWORD *)((char *)v56 - (v47 >> 3));
      v11 = (*v53 | 1LL) << (v47 & 7);
      v56 = v53;
      v18 = *(_WORD *)(v14 + 2 * (v11 >> 53));
      _BitScanForward64(&v49, v49 << v50);
      v8 += 5;
      v54 = (_QWORD *)((char *)v57 - (v49 >> 3));
      v12 = (*v54 | 1LL) << (v49 & 7);
      v57 = v54;
      v19 = *(_WORD *)(v14 + 2 * (v12 >> 53));
      _BitScanForward64(&v51, v51 << v52);
      v9 += 5;
      v55 = (_QWORD *)((char *)v58 - (v51 >> 3));
      v13 = (*v55 | 1LL) << (v51 & 7);
      v58 = v55;
      v20 = *(_WORD *)(v14 + 2 * (v13 >> 53));
    }
    while ( v59 > (unsigned __int64)v9 );
    v3 = (unsigned __int64)v56;
    v4 = v57;
    v5 = v58;
  }
  *(_QWORD *)a1 = v2;
  *(_QWORD *)(a1 + 8) = v3;
  *(_QWORD *)(a1 + 16) = v4;
  *(_QWORD *)(a1 + 24) = v5;
  *(_QWORD *)(a1 + 32) = v6;
  *(_QWORD *)(a1 + 40) = v7;
  *(_QWORD *)(a1 + 48) = v8;
  *(_QWORD *)(a1 + 56) = v9;
  *(_QWORD *)(a1 + 64) = v10;
  *(_QWORD *)(a1 + 72) = v11;
  *(_QWORD *)(a1 + 80) = v12;
  *(_QWORD *)(a1 + 88) = v13;
}
