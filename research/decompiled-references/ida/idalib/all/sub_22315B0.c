unsigned int *__fastcall sub_22315B0(unsigned int *a1, unsigned int *a2, __int64 a3)
{
  unsigned int *v4; // r9
  unsigned int v5; // r8d
  unsigned int v6; // r14d
  int v7; // eax
  unsigned int v8; // esi
  unsigned int v9; // eax
  unsigned int v10; // esi
  unsigned int v11; // r15d
  unsigned int v12; // edx
  unsigned int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // r11d
  unsigned int v16; // ebp
  unsigned int v17; // edi
  unsigned int v18; // r13d
  unsigned int v19; // ecx
  int v20; // esi
  int v21; // eax
  unsigned int v22; // r13d
  unsigned int v23; // esi
  unsigned int v24; // r12d
  unsigned int v25; // edx
  unsigned int v26; // ebp
  __int64 v27; // rbx
  unsigned int v28; // eax
  unsigned int v29; // edi
  int v30; // ecx
  int v31; // esi
  unsigned int v32; // edx
  int v33; // esi
  unsigned int v34; // ebp
  int v35; // edx
  unsigned int v36; // r12d
  unsigned int v37; // r11d
  int v38; // eax
  int v39; // r15d
  int v40; // ecx
  int v41; // esi
  int v42; // edi
  __int64 v43; // rdx
  int v44; // eax
  int v45; // ecx
  int v46; // esi
  int v47; // edi
  int v48; // eax
  int v49; // ecx
  int v50; // esi
  int v51; // edi
  int v52; // eax
  int v53; // ecx
  int v54; // esi
  int v55; // edi
  int v56; // r15d
  int v57; // ecx
  int v58; // eax
  int v59; // esi
  int v60; // edi
  int v61; // ecx
  int v62; // esi
  int v63; // eax
  int v64; // edi
  int v65; // ecx
  int v66; // esi
  int v67; // edi
  int v68; // ecx
  int v69; // eax
  int v70; // esi
  int v71; // edi
  int v72; // ecx
  int v73; // eax
  int v74; // esi
  int v75; // edi
  int v76; // ecx
  int v77; // eax
  int v78; // esi
  int v79; // ecx
  int v80; // edi
  unsigned int v82; // [rsp+0h] [rbp-74h]
  unsigned int v83; // [rsp+4h] [rbp-70h]
  unsigned int v84; // [rsp+8h] [rbp-6Ch]
  unsigned int v85; // [rsp+Ch] [rbp-68h]
  unsigned int v86; // [rsp+10h] [rbp-64h]
  unsigned int v87; // [rsp+14h] [rbp-60h]
  unsigned int v88; // [rsp+18h] [rbp-5Ch]
  unsigned int v89; // [rsp+1Ch] [rbp-58h]
  unsigned int v90; // [rsp+20h] [rbp-54h]
  unsigned int v91; // [rsp+24h] [rbp-50h]
  unsigned int v92; // [rsp+28h] [rbp-4Ch]
  unsigned int v93; // [rsp+2Ch] [rbp-48h]
  unsigned int v94; // [rsp+30h] [rbp-44h]
  unsigned int *v95; // [rsp+34h] [rbp-40h]

  v4 = a2;
  v94 = *a1;
  v5 = a1[1];
  v92 = a1[2];
  v91 = a1[3];
  v95 = (unsigned int *)((char *)a2 + a3);
  do
  {
    v6 = *v4;
    v7 = *v4 + v94 - 680876936;
    a1[22] = *v4;
    v8 = v7 + (v91 ^ v5 & (v91 ^ v92));
    v9 = v4[1];
    v10 = v5 + __ROL4__(v8, 7);
    a1[23] = v9;
    v11 = v4[2];
    v82 = v9;
    a1[24] = v11;
    v93 = v11;
    v12 = v10 + __ROL4__(v9 + v91 - 389564586 + (v92 ^ v10 & (v5 ^ v92)), 12);
    v13 = v4[3];
    v14 = v12 + __ROR4__(v11 + v92 + 606105819 + (v5 ^ v12 & (v5 ^ v10)), 15);
    a1[25] = v13;
    v15 = v4[4];
    v83 = v13;
    a1[26] = v15;
    v16 = v4[5];
    v84 = v15;
    v17 = v14 + __ROR4__(v13 + v5 - 1044525330 + (v10 ^ v14 & (v12 ^ v10)), 10);
    a1[27] = v16;
    v18 = v4[6];
    v85 = v16;
    a1[28] = v18;
    v86 = v18;
    v19 = v17 + __ROL4__(v10 + v15 - 176418897 + (v12 ^ v17 & (v14 ^ v12)), 7);
    v20 = v14 ^ v19 & (v17 ^ v14);
    v21 = v14 + v18 - 1473231341;
    v22 = v4[7];
    a1[29] = v22;
    v23 = v19 + __ROL4__(v12 + v16 + 1200080426 + v20, 12);
    v24 = v4[8];
    v25 = v23 + __ROR4__(v21 + (v17 ^ v23 & (v19 ^ v17)), 15);
    a1[30] = v24;
    v26 = v4[9];
    v87 = v24;
    a1[31] = v26;
    v27 = v4[10];
    v88 = v26;
    a1[32] = v27;
    v28 = v25 + __ROR4__(v17 + v22 - 45705983 + (v19 ^ v25 & (v23 ^ v19)), 10);
    v29 = v28 + __ROL4__(v19 + v24 + 1770035416 + (v23 ^ v28 & (v25 ^ v23)), 7);
    v30 = v29 + __ROL4__(v23 + v26 - 1958414417 + (v25 ^ v29 & (v28 ^ v25)), 12);
    v31 = v25 + v27 - 42063 + (v28 ^ v30 & (v29 ^ v28));
    v32 = v4[11];
    a1[33] = v32;
    v33 = v30 + __ROR4__(v31, 15);
    v34 = v4[12];
    v89 = v32;
    a1[34] = v34;
    v35 = v33 + __ROR4__(v28 + v32 - 1990404162 + (v29 ^ v33 & (v30 ^ v29)), 10);
    v90 = v4[13];
    a1[35] = v90;
    v36 = v4[14];
    a1[36] = v36;
    v37 = v4[15];
    v38 = v35 + __ROL4__(v29 + v34 + 1804603682 + (v30 ^ v35 & (v33 ^ v30)), 7);
    a1[37] = v37;
    v39 = v38 + __ROL4__(v30 + v90 - 40341101 + (v33 ^ v38 & (v35 ^ v33)), 12);
    v40 = v39 + __ROR4__(v33 + v36 - 1502002290 + (v35 ^ v39 & (v38 ^ v35)), 15);
    v41 = v40 + __ROR4__(v35 + v37 + 1236535329 + (v38 ^ v40 & (v39 ^ v38)), 10);
    v42 = v41 + __ROL4__(v82 + v38 - 165796510 + (v40 ^ v39 & (v41 ^ v40)), 5);
    v43 = (unsigned int)(v42 + __ROL4__(v86 + v39 - 1069501632 + (v41 ^ v40 & (v42 ^ v41)), 9));
    v44 = v43 + __ROL4__(v89 + v40 + 643717713 + (v42 ^ v41 & (v43 ^ v42)), 14);
    v45 = v44 + __ROR4__(v6 + v41 - 373897302 + (v43 ^ v42 & (v44 ^ v43)), 12);
    v46 = v45 + __ROL4__(v85 + v42 - 701558691 + (v44 ^ v43 & (v45 ^ v44)), 5);
    v47 = v46 + __ROL4__((unsigned int)&aMissingReducti[v27 + 6 + v43] + (v45 ^ v44 & (v46 ^ v45)), 9);
    LODWORD(v43) = v47 + __ROL4__(v37 + v44 - 660478335 + (v46 ^ v45 & (v47 ^ v46)), 14);
    v48 = v43 + __ROR4__(v84 + v45 - 405537848 + (v47 ^ v46 & (v43 ^ v47)), 12);
    v49 = v48 + __ROL4__(v88 + v46 + 568446438 + (v43 ^ v47 & (v48 ^ v43)), 5);
    v50 = v49 + __ROL4__(v36 + v47 - 1019803690 + (v48 ^ v43 & (v49 ^ v48)), 9);
    v51 = v50 + __ROL4__(v83 + v43 - 187363961 + (v49 ^ v48 & (v50 ^ v49)), 14);
    LODWORD(v43) = v51 + __ROR4__(v87 + v48 + 1163531501 + (v50 ^ v49 & (v51 ^ v50)), 12);
    v52 = v43 + __ROL4__(v90 + v49 - 1444681467 + (v51 ^ v50 & (v43 ^ v51)), 5);
    v53 = v52 + __ROL4__(v93 + v50 - 51403784 + (v43 ^ v51 & (v52 ^ v43)), 9);
    v54 = v53 + __ROL4__(v22 + v51 + 1735328473 + (v52 ^ v43 & (v53 ^ v52)), 14);
    v55 = v54 + __ROR4__(v34 + v43 - 1926607734 + (v53 ^ (v54 ^ v53) & v52), 12);
    v56 = v55 + __ROL4__(v85 + v52 - 378558 + (v55 ^ v54 ^ v53), 4);
    LODWORD(v43) = v56 + __ROL4__(v87 + v53 - 2022574463 + (v56 ^ v55 ^ v54), 11);
    v57 = v43 + __ROL4__(v89 + v54 + 1839030562 + (v43 ^ v56 ^ v55), 16);
    v58 = v57 + __ROR4__(v36 + v55 - 35309556 + (v57 ^ v43 ^ v56), 9);
    v59 = v58 + __ROL4__(v82 + v56 - 1530992060 + (v58 ^ v57 ^ v43), 4);
    v60 = v59 + __ROL4__(v84 + v43 + 1272893353 + (v59 ^ v58 ^ v57), 11);
    LODWORD(v43) = v60 + __ROL4__(v22 + v57 - 155497632 + (v60 ^ v59 ^ v58), 16);
    v61 = v43 + __ROR4__(v27 + v58 - 1094730640 + (v43 ^ v60 ^ v59), 9);
    v62 = v61 + __ROL4__((v61 ^ v43 ^ v60) + v90 + v59 + 681279174, 4);
    v63 = v62 + __ROL4__(v6 + v60 - 358537222 + (v62 ^ v61 ^ v43), 11);
    v64 = v63 + __ROL4__(v83 + v43 - 722521979 + (v63 ^ v62 ^ v61), 16);
    v65 = v64 + __ROR4__((v64 ^ v63 ^ v62) + v86 + v61 + 76029189, 9);
    LODWORD(v43) = v65 + __ROL4__(v88 + v62 - 640364487 + (v65 ^ v64 ^ v63), 4);
    v66 = v43 + __ROL4__(v34 + v63 - 421815835 + (v43 ^ v65 ^ v64), 11);
    v67 = v66 + __ROL4__((v66 ^ v43 ^ v65) + v37 + v64 + 530742520, 16);
    v68 = v67 + __ROR4__((v67 ^ v66 ^ v43) + v93 + v65 - 995338651, 9);
    v69 = v68 + __ROL4__(v6 + v43 - 198630844 + (v67 ^ (v68 | ~v66)), 6);
    LODWORD(v43) = v69 + __ROL4__(v22 + v66 + 1126891415 + (v68 ^ (v69 | ~v67)), 10);
    v70 = v43 + __ROL4__(v36 + v67 - 1416354905 + (v69 ^ (v43 | ~v68)), 15);
    v71 = v70 + __ROR4__(v85 + v68 - 57434055 + (v43 ^ (v70 | ~v69)), 11);
    v72 = v71 + __ROL4__(v34 + v69 + 1700485571 + (v70 ^ (v71 | ~(_DWORD)v43)), 6);
    v73 = v72 + __ROL4__(v83 + v43 - 1894986606 + (v71 ^ (v72 | ~v70)), 10);
    LODWORD(v43) = v73 + __ROL4__(v27 + v70 - 1051523 + (v72 ^ (v73 | ~v71)), 15);
    v74 = v43 + __ROR4__(v82 + v71 - 2054922799 + (v73 ^ (v43 | ~v72)), 11);
    v75 = v74 + __ROL4__(v87 + v72 + 1873313359 + (v43 ^ (v74 | ~v73)), 6);
    v76 = v75 + __ROL4__(v37 + v73 - 30611744 + (v74 ^ (v75 | ~(_DWORD)v43)), 10);
    v77 = v76 + __ROL4__(v86 + v43 - 1560198380 + (v75 ^ (v76 | ~v74)), 15);
    LODWORD(v43) = v77 + __ROR4__(v90 + v74 + 1309151649 + (v76 ^ (v77 | ~v75)), 11);
    v78 = v43 + __ROL4__(v84 + v75 - 145523070 + (v77 ^ (v43 | ~v76)), 6);
    v94 += v78;
    v79 = v78 + __ROL4__((v43 ^ (v78 | ~v77)) + v89 + v76 - 1120210379, 10);
    v80 = v79 + __ROL4__(v93 + v77 + 718787259 + (v78 ^ (v79 | ~(_DWORD)v43)), 15);
    v5 += v80 + __ROR4__(v88 + v43 - 343485551 + (v79 ^ (v80 | ~v78)), 11);
    v92 += v80;
    v4 += 16;
    v91 += v79;
  }
  while ( v4 != v95 );
  *(__m128i *)a1 = _mm_unpacklo_epi64(
                     _mm_unpacklo_epi32(_mm_cvtsi32_si128(v94), _mm_cvtsi32_si128(v5)),
                     _mm_unpacklo_epi32(_mm_cvtsi32_si128(v92), _mm_cvtsi32_si128(v91)));
  return v4;
}
