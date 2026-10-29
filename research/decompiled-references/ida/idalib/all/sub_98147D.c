void __fastcall sub_98147D(_QWORD *a1)
{
  _QWORD *v2; // r8
  _QWORD *v3; // r9
  _QWORD *v4; // r10
  _QWORD *v5; // r11
  char *v6; // rsi
  char *v7; // rbx
  char *v8; // rcx
  char *v9; // rdi
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r13
  __int64 v14; // r14
  __int64 v15; // rdx
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  char *v19; // r15
  char v20; // r15
  __int64 v21; // rax
  unsigned __int64 v22; // rbp
  char *v23; // rsi
  char v24; // r15
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  char *v27; // rbx
  char v28; // r15
  __int64 v29; // rax
  unsigned __int64 v30; // r12
  char *v31; // rcx
  char v32; // r15
  __int64 v33; // rax
  unsigned __int64 v34; // r13
  char *v35; // rdi
  char v36; // r15
  __int64 v37; // rax
  unsigned __int64 v38; // rbp
  char *v39; // rsi
  char v40; // r15
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  char *v43; // rbx
  char v44; // r15
  __int64 v45; // rax
  unsigned __int64 v46; // r12
  char *v47; // rcx
  char v48; // r15
  __int64 v49; // rax
  unsigned __int64 v50; // r13
  char *v51; // rdi
  char v52; // r15
  __int64 v53; // rax
  unsigned __int64 v54; // rbp
  char *v55; // rsi
  char v56; // r15
  __int64 v57; // rax
  unsigned __int64 v58; // rdx
  char *v59; // rbx
  char v60; // r15
  __int64 v61; // rax
  unsigned __int64 v62; // r12
  char *v63; // rcx
  char v64; // r15
  __int64 v65; // rax
  unsigned __int64 v66; // r13
  char *v67; // rdi
  char v68; // r15
  __int64 v69; // rax
  unsigned __int64 v70; // rbp
  char *v71; // rsi
  char v72; // r15
  __int64 v73; // rax
  unsigned __int64 v74; // rdx
  char *v75; // rbx
  char v76; // r15
  __int64 v77; // rax
  unsigned __int64 v78; // r12
  char *v79; // rcx
  char v80; // r15
  __int64 v81; // rax
  unsigned __int64 v82; // r13
  char *v83; // rdi
  char v84; // r15
  __int64 v85; // rax
  unsigned __int64 v86; // rbp
  char v87; // r15
  __int64 v88; // rax
  unsigned __int64 v89; // rdx
  char v90; // r15
  __int64 v91; // rax
  unsigned __int64 v92; // r12
  char v93; // r15
  __int64 v94; // rax
  unsigned __int64 v95; // [rsp+0h] [rbp-B8h]
  char *v96; // [rsp+8h] [rbp-B0h]
  char *v97; // [rsp+10h] [rbp-A8h]
  char *v98; // [rsp+18h] [rbp-A0h]
  __int64 v99; // [rsp+20h] [rbp-98h]
  __int64 v100; // [rsp+28h] [rbp-90h]
  unsigned __int64 v101; // [rsp+30h] [rbp-88h]
  _QWORD *v102; // [rsp+38h] [rbp-80h]

  v2 = (_QWORD *)*a1;
  v3 = (_QWORD *)a1[1];
  v4 = (_QWORD *)a1[2];
  v5 = (_QWORD *)a1[3];
  v6 = (char *)a1[4];
  v7 = (char *)a1[5];
  v8 = (char *)a1[6];
  v9 = (char *)a1[7];
  v10 = a1[8];
  v11 = a1[9];
  v12 = a1[10];
  v13 = a1[11];
  v14 = a1[12];
  v102 = a1;
  v100 = a1[13];
  v99 = a1[14];
  v98 = v9;
  v97 = v8;
  v96 = v7;
  while ( 1 )
  {
    v95 = v11;
    v15 = (0x2492492492492493LL * (unsigned __int128)((unsigned __int64)v2 - v100)) >> 64;
    v16 = ((((unsigned __int64)v2 - v100 - v15) >> 1) + v15) >> 2;
    v17 = v97 - v7;
    if ( v97 - v7 > (unsigned __int64)(v96 - v6) )
      v17 = v96 - v6;
    if ( v17 > v98 - v8 )
      v17 = v98 - v8;
    if ( v17 > v99 - (__int64)v9 )
      v17 = v99 - (_QWORD)v9;
    v18 = v17 / 0xA;
    if ( v16 > v18 )
      v16 = v18;
    v19 = &v9[4 * v16 + v16];
    v11 = v95;
    if ( v19 == v9 || v3 < v2 || v4 < v3 || v5 < v4 )
      break;
    v101 = (unsigned __int64)v19;
    do
    {
      v20 = *(_BYTE *)(v14 + 4 * (v10 >> 53) + 2);
      v21 = *(unsigned __int8 *)(v14 + 4 * (v10 >> 53) + 3);
      *(_WORD *)v6 = *(_WORD *)(v14 + 4 * (v10 >> 53));
      v22 = v10 << v20;
      v23 = &v6[v21];
      v24 = *(_BYTE *)(v14 + 4 * (v11 >> 53) + 2);
      v25 = *(unsigned __int8 *)(v14 + 4 * (v11 >> 53) + 3);
      *(_WORD *)v7 = *(_WORD *)(v14 + 4 * (v11 >> 53));
      v26 = v11 << v24;
      v27 = &v7[v25];
      v28 = *(_BYTE *)(v14 + 4 * (v12 >> 53) + 2);
      v29 = *(unsigned __int8 *)(v14 + 4 * (v12 >> 53) + 3);
      *(_WORD *)v8 = *(_WORD *)(v14 + 4 * (v12 >> 53));
      v30 = v12 << v28;
      v31 = &v8[v29];
      v32 = *(_BYTE *)(v14 + 4 * (v13 >> 53) + 2);
      v33 = *(unsigned __int8 *)(v14 + 4 * (v13 >> 53) + 3);
      *(_WORD *)v9 = *(_WORD *)(v14 + 4 * (v13 >> 53));
      v34 = v13 << v32;
      v35 = &v9[v33];
      v36 = *(_BYTE *)(v14 + 4 * (v22 >> 53) + 2);
      v37 = *(unsigned __int8 *)(v14 + 4 * (v22 >> 53) + 3);
      *(_WORD *)v23 = *(_WORD *)(v14 + 4 * (v22 >> 53));
      v38 = v22 << v36;
      v39 = &v23[v37];
      v40 = *(_BYTE *)(v14 + 4 * (v26 >> 53) + 2);
      v41 = *(unsigned __int8 *)(v14 + 4 * (v26 >> 53) + 3);
      *(_WORD *)v27 = *(_WORD *)(v14 + 4 * (v26 >> 53));
      v42 = v26 << v40;
      v43 = &v27[v41];
      v44 = *(_BYTE *)(v14 + 4 * (v30 >> 53) + 2);
      v45 = *(unsigned __int8 *)(v14 + 4 * (v30 >> 53) + 3);
      *(_WORD *)v31 = *(_WORD *)(v14 + 4 * (v30 >> 53));
      v46 = v30 << v44;
      v47 = &v31[v45];
      v48 = *(_BYTE *)(v14 + 4 * (v34 >> 53) + 2);
      v49 = *(unsigned __int8 *)(v14 + 4 * (v34 >> 53) + 3);
      *(_WORD *)v35 = *(_WORD *)(v14 + 4 * (v34 >> 53));
      v50 = v34 << v48;
      v51 = &v35[v49];
      v52 = *(_BYTE *)(v14 + 4 * (v38 >> 53) + 2);
      v53 = *(unsigned __int8 *)(v14 + 4 * (v38 >> 53) + 3);
      *(_WORD *)v39 = *(_WORD *)(v14 + 4 * (v38 >> 53));
      v54 = v38 << v52;
      v55 = &v39[v53];
      v56 = *(_BYTE *)(v14 + 4 * (v42 >> 53) + 2);
      v57 = *(unsigned __int8 *)(v14 + 4 * (v42 >> 53) + 3);
      *(_WORD *)v43 = *(_WORD *)(v14 + 4 * (v42 >> 53));
      v58 = v42 << v56;
      v59 = &v43[v57];
      v60 = *(_BYTE *)(v14 + 4 * (v46 >> 53) + 2);
      v61 = *(unsigned __int8 *)(v14 + 4 * (v46 >> 53) + 3);
      *(_WORD *)v47 = *(_WORD *)(v14 + 4 * (v46 >> 53));
      v62 = v46 << v60;
      v63 = &v47[v61];
      v64 = *(_BYTE *)(v14 + 4 * (v50 >> 53) + 2);
      v65 = *(unsigned __int8 *)(v14 + 4 * (v50 >> 53) + 3);
      *(_WORD *)v51 = *(_WORD *)(v14 + 4 * (v50 >> 53));
      v66 = v50 << v64;
      v67 = &v51[v65];
      v68 = *(_BYTE *)(v14 + 4 * (v54 >> 53) + 2);
      v69 = *(unsigned __int8 *)(v14 + 4 * (v54 >> 53) + 3);
      *(_WORD *)v55 = *(_WORD *)(v14 + 4 * (v54 >> 53));
      v70 = v54 << v68;
      v71 = &v55[v69];
      v72 = *(_BYTE *)(v14 + 4 * (v58 >> 53) + 2);
      v73 = *(unsigned __int8 *)(v14 + 4 * (v58 >> 53) + 3);
      *(_WORD *)v59 = *(_WORD *)(v14 + 4 * (v58 >> 53));
      v74 = v58 << v72;
      v75 = &v59[v73];
      v76 = *(_BYTE *)(v14 + 4 * (v62 >> 53) + 2);
      v77 = *(unsigned __int8 *)(v14 + 4 * (v62 >> 53) + 3);
      *(_WORD *)v63 = *(_WORD *)(v14 + 4 * (v62 >> 53));
      v78 = v62 << v76;
      v79 = &v63[v77];
      v80 = *(_BYTE *)(v14 + 4 * (v66 >> 53) + 2);
      v81 = *(unsigned __int8 *)(v14 + 4 * (v66 >> 53) + 3);
      *(_WORD *)v67 = *(_WORD *)(v14 + 4 * (v66 >> 53));
      v82 = v66 << v80;
      v83 = &v67[v81];
      v84 = *(_BYTE *)(v14 + 4 * (v70 >> 53) + 2);
      v85 = *(unsigned __int8 *)(v14 + 4 * (v70 >> 53) + 3);
      *(_WORD *)v71 = *(_WORD *)(v14 + 4 * (v70 >> 53));
      v86 = v70 << v84;
      v6 = &v71[v85];
      v87 = *(_BYTE *)(v14 + 4 * (v74 >> 53) + 2);
      v88 = *(unsigned __int8 *)(v14 + 4 * (v74 >> 53) + 3);
      *(_WORD *)v75 = *(_WORD *)(v14 + 4 * (v74 >> 53));
      v89 = v74 << v87;
      v7 = &v75[v88];
      v90 = *(_BYTE *)(v14 + 4 * (v78 >> 53) + 2);
      v91 = *(unsigned __int8 *)(v14 + 4 * (v78 >> 53) + 3);
      *(_WORD *)v79 = *(_WORD *)(v14 + 4 * (v78 >> 53));
      v92 = v78 << v90;
      v8 = &v79[v91];
      v93 = *(_BYTE *)(v14 + 4 * (v82 >> 53) + 2);
      v94 = *(unsigned __int8 *)(v14 + 4 * (v82 >> 53) + 3);
      *(_WORD *)v83 = *(_WORD *)(v14 + 4 * (v82 >> 53));
      v9 = &v83[v94];
      _BitScanForward64(&v86, v86);
      v2 = (_QWORD *)((char *)v2 - (v86 >> 3));
      v10 = (*v2 | 1LL) << (v86 & 7);
      _BitScanForward64(&v89, v89);
      v3 = (_QWORD *)((char *)v3 - (v89 >> 3));
      v11 = (*v3 | 1LL) << (v89 & 7);
      _BitScanForward64(&v92, v92);
      v4 = (_QWORD *)((char *)v4 - (v92 >> 3));
      v12 = (*v4 | 1LL) << (v92 & 7);
      _BitScanForward64(&v82, v82 << v93);
      v5 = (_QWORD *)((char *)v5 - (v82 >> 3));
      v13 = (*v5 | 1LL) << (v82 & 7);
    }
    while ( v101 > (unsigned __int64)v9 );
  }
  *v102 = v2;
  v102[1] = v3;
  v102[2] = v4;
  v102[3] = v5;
  v102[4] = v6;
  v102[5] = v7;
  v102[6] = v8;
  v102[7] = v9;
  v102[8] = v10;
  v102[9] = v95;
  v102[10] = v12;
  v102[11] = v13;
}
