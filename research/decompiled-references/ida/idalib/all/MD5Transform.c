__int64 __fastcall MD5Transform(__m128i *a1, _DWORD *a2)
{
  _DWORD *v3; // rax
  __int32 v4; // r15d
  int v5; // r14d
  __int32 v6; // edi
  int v7; // edx
  int v8; // ecx
  int v9; // ebp
  int v10; // esi
  int v11; // edi
  int v12; // edx
  int v13; // r13d
  int v14; // ecx
  int v15; // r12d
  int v16; // esi
  int v17; // edi
  int v18; // ebx
  int v19; // edx
  int v20; // ecx
  int v21; // esi
  int v22; // r9d
  int v23; // edi
  int v24; // edx
  int v25; // r10d
  int v26; // ecx
  int v27; // esi
  __int64 v28; // rdx
  int v29; // ecx
  int v30; // esi
  int v31; // ecx
  int v32; // esi
  int v33; // ecx
  int v34; // edi
  int v35; // esi
  int v36; // edi
  int v37; // ecx
  int v38; // esi
  int v39; // ecx
  int v40; // edi
  int v41; // esi
  int v42; // ecx
  int v43; // edi
  int v44; // esi
  int v45; // ecx
  int v46; // edi
  int v47; // ecx
  int v48; // esi
  int v49; // ecx
  int v50; // esi
  int v51; // ecx
  int v52; // esi
  int v53; // edi
  __m128i v54; // xmm1
  int v55; // ecx
  __int64 result; // rax
  int v57; // [rsp+0h] [rbp-5Ch]
  int v58; // [rsp+4h] [rbp-58h]
  int v59; // [rsp+8h] [rbp-54h]
  int v60; // [rsp+Ch] [rbp-50h]
  int v61; // [rsp+10h] [rbp-4Ch]
  int v62; // [rsp+14h] [rbp-48h]
  int v63; // [rsp+18h] [rbp-44h]
  int v64; // [rsp+1Ch] [rbp-40h]
  int v65; // [rsp+20h] [rbp-3Ch]

  v3 = a2;
  v4 = a1->m128i_i32[1];
  v5 = *a2;
  v57 = a2[1];
  v6 = v4
     + __ROL4__(*a2 + a1->m128i_i32[0] - 680876936 + (a1->m128i_i32[3] ^ v4 & (a1->m128i_i32[3] ^ a1->m128i_i32[2])), 7);
  v64 = a2[3];
  v58 = a2[2];
  v7 = v6 + __ROL4__(v57 + a1->m128i_i32[3] - 389564586 + (a1->m128i_i32[2] ^ v6 & (v4 ^ a1->m128i_i32[2])), 12);
  v8 = v7 + __ROR4__(v58 + a1->m128i_i32[2] + 606105819 + (v4 ^ v7 & (v6 ^ v4)), 15);
  v59 = a2[4];
  v9 = a2[5];
  v10 = v8 + __ROR4__(v64 + v4 - 1044525330 + (v6 ^ v8 & (v7 ^ v6)), 10);
  v11 = v10 + __ROL4__(v59 + v6 - 176418897 + (v7 ^ v10 & (v8 ^ v7)), 7);
  v60 = v3[6];
  v12 = v11 + __ROL4__(v9 + v7 + 1200080426 + (v8 ^ v11 & (v10 ^ v8)), 12);
  v13 = v3[7];
  v62 = v3[9];
  v14 = v12 + __ROR4__(v60 + v8 - 1473231341 + (v10 ^ v12 & (v11 ^ v10)), 15);
  v61 = v3[8];
  v15 = v3[14];
  v16 = v14 + __ROR4__(v13 + v10 - 45705983 + (v11 ^ v14 & (v12 ^ v11)), 10);
  v17 = v16 + __ROL4__(v61 + v11 + 1770035416 + (v12 ^ v16 & (v14 ^ v12)), 7);
  v63 = v3[10];
  v18 = v3[12];
  v19 = v17 + __ROL4__(v62 + v12 - 1958414417 + (v14 ^ v17 & (v16 ^ v14)), 12);
  v20 = v19 + __ROR4__(v63 + v14 - 42063 + (v16 ^ v19 & (v17 ^ v16)), 15);
  v65 = v3[11];
  v21 = v20 + __ROR4__(v65 + v16 - 1990404162 + (v17 ^ v20 & (v19 ^ v17)), 10);
  v22 = v3[13];
  v23 = v21 + __ROL4__(v18 + v17 + 1804603682 + (v19 ^ v21 & (v20 ^ v19)), 7);
  v24 = v23 + __ROL4__(v22 + v19 - 40341101 + (v20 ^ v23 & (v21 ^ v20)), 12);
  v25 = v3[15];
  v26 = v24 + __ROR4__(v15 + v20 - 1502002290 + (v21 ^ v24 & (v23 ^ v21)), 15);
  v27 = v26 + __ROR4__(v25 + v21 + 1236535329 + (v23 ^ v26 & (v24 ^ v23)), 10);
  LODWORD(v3) = v27 + __ROL4__(v57 + v23 - 165796510 + (v26 ^ v24 & (v27 ^ v26)), 5);
  v28 = (unsigned int)((_DWORD)v3 + __ROL4__(v60 + v24 - 1069501632 + (v27 ^ v26 & ((unsigned int)v3 ^ v27)), 9));
  v29 = v28 + __ROL4__(v65 + v26 + 643717713 + ((unsigned int)v3 ^ v27 & (v28 ^ (unsigned int)v3)), 14);
  v30 = v29 + __ROR4__(v5 + v27 - 373897302 + (v28 ^ (unsigned int)v3 & (v29 ^ v28)), 12);
  LODWORD(v3) = v30 + __ROL4__(v9 + (_DWORD)v3 - 701558691 + (v29 ^ v28 & (v30 ^ v29)), 5);
  LODWORD(v28) = (_DWORD)v3
               + __ROL4__((unsigned int)&aMissingReducti[v63 + 6 + v28] + (v30 ^ v29 & ((unsigned int)v3 ^ v30)), 9);
  v31 = v28 + __ROL4__(v25 + v29 - 660478335 + ((unsigned int)v3 ^ v30 & (v28 ^ (unsigned int)v3)), 14);
  v32 = v31 + __ROR4__(v59 + v30 - 405537848 + (v28 ^ (unsigned int)v3 & (v31 ^ v28)), 12);
  LODWORD(v3) = v32 + __ROL4__(v62 + (_DWORD)v3 + 568446438 + (v31 ^ v28 & (v32 ^ v31)), 5);
  LODWORD(v28) = (_DWORD)v3 + __ROL4__(v15 + v28 - 1019803690 + (v32 ^ v31 & ((unsigned int)v3 ^ v32)), 9);
  v33 = v28 + __ROL4__(v64 + v31 - 187363961 + ((unsigned int)v3 ^ v32 & (v28 ^ (unsigned int)v3)), 14);
  v34 = v33 + __ROR4__(v61 + v32 + 1163531501 + (v28 ^ (unsigned int)v3 & (v33 ^ v28)), 12);
  LODWORD(v3) = v34 + __ROL4__(v22 + (_DWORD)v3 - 1444681467 + (v33 ^ v28 & (v34 ^ v33)), 5);
  LODWORD(v28) = (_DWORD)v3 + __ROL4__(v58 + v28 - 51403784 + (v34 ^ v33 & ((unsigned int)v3 ^ v34)), 9);
  v35 = v28 + __ROL4__(v13 + v33 + 1735328473 + ((unsigned int)v3 ^ v34 & (v28 ^ (unsigned int)v3)), 14);
  v36 = v35 + __ROR4__(v18 + v34 - 1926607734 + (v28 ^ (unsigned int)v3 & (v35 ^ v28)), 12);
  v37 = v36 + __ROL4__(v9 + (_DWORD)v3 - 378558 + (v36 ^ v35 ^ v28), 4);
  LODWORD(v28) = v37 + __ROL4__(v61 + v28 - 2022574463 + (v37 ^ v36 ^ v35), 11);
  v38 = v28 + __ROL4__(v65 + v35 + 1839030562 + (v28 ^ v37 ^ v36), 16);
  LODWORD(v3) = v38 + __ROR4__(v15 + v36 - 35309556 + (v38 ^ v28 ^ v37), 9);
  v39 = (_DWORD)v3 + __ROL4__(v57 + v37 - 1530992060 + ((unsigned int)v3 ^ v38 ^ v28), 4);
  v40 = v39 + __ROL4__(v59 + v28 + 1272893353 + (v39 ^ (unsigned int)v3 ^ v38), 11);
  LODWORD(v28) = v40 + __ROL4__(v13 + v38 - 155497632 + (v40 ^ v39 ^ (unsigned int)v3), 16);
  v41 = v28 + __ROR4__(v63 + (_DWORD)v3 - 1094730640 + (v28 ^ v40 ^ v39), 9);
  v42 = v41 + __ROL4__(v22 + v39 + 681279174 + (v41 ^ v28 ^ v40), 4);
  LODWORD(v3) = v42 + __ROL4__(v5 + v40 - 358537222 + (v42 ^ v41 ^ v28), 11);
  v43 = (_DWORD)v3 + __ROL4__(v64 + v28 - 722521979 + ((unsigned int)v3 ^ v42 ^ v41), 16);
  v44 = v43 + __ROR4__(v60 + v41 + 76029189 + (v43 ^ (unsigned int)v3 ^ v42), 9);
  LODWORD(v28) = v44 + __ROL4__(v62 + v42 - 640364487 + (v44 ^ v43 ^ (unsigned int)v3), 4);
  v45 = v28 + __ROL4__(v18 + (_DWORD)v3 - 421815835 + (v28 ^ v44 ^ v43), 11);
  v46 = v45 + __ROL4__(v25 + v43 + 530742520 + (v45 ^ v28 ^ v44), 16);
  LODWORD(v3) = v46 + __ROR4__(v58 + v44 - 995338651 + (v46 ^ v45 ^ v28), 9);
  LODWORD(v28) = (_DWORD)v3 + __ROL4__(v5 + v28 - 198630844 + (v46 ^ ((unsigned int)v3 | ~v45)), 6);
  v47 = v28 + __ROL4__(v13 + v45 + 1126891415 + ((unsigned int)v3 ^ (v28 | ~v46)), 10);
  v48 = v47 + __ROL4__(v15 + v46 - 1416354905 + (v28 ^ (v47 | ~(_DWORD)v3)), 15);
  LODWORD(v3) = v48 + __ROR4__(v9 + (_DWORD)v3 - 57434055 + (v47 ^ (v48 | ~(_DWORD)v28)), 11);
  LODWORD(v28) = (_DWORD)v3 + __ROL4__(v18 + v28 + 1700485571 + (v48 ^ ((unsigned int)v3 | ~v47)), 6);
  v49 = v28 + __ROL4__(v64 + v47 - 1894986606 + ((unsigned int)v3 ^ (v28 | ~v48)), 10);
  v50 = v49 + __ROL4__(v63 + v48 - 1051523 + (v28 ^ (v49 | ~(_DWORD)v3)), 15);
  LODWORD(v3) = v50 + __ROR4__(v57 + (_DWORD)v3 - 2054922799 + (v49 ^ (v50 | ~(_DWORD)v28)), 11);
  LODWORD(v28) = (_DWORD)v3 + __ROL4__(v61 + v28 + 1873313359 + (v50 ^ ((unsigned int)v3 | ~v49)), 6);
  v51 = v28 + __ROL4__(v25 + v49 - 30611744 + ((unsigned int)v3 ^ (v28 | ~v50)), 10);
  v52 = v51 + __ROL4__(v60 + v50 - 1560198380 + (v28 ^ (v51 | ~(_DWORD)v3)), 15);
  v53 = v52 + __ROR4__(v22 + (_DWORD)v3 + 1309151649 + (v51 ^ (v52 | ~(_DWORD)v28)), 11);
  LODWORD(v3) = v53 + __ROL4__(v59 + v28 - 145523070 + (v52 ^ (v53 | ~v51)), 6);
  LODWORD(v28) = (_DWORD)v3 + __ROL4__(v65 + v51 - 1120210379 + (v53 ^ ((unsigned int)v3 | ~v52)), 10);
  v54 = _mm_cvtsi32_si128(a1->m128i_i32[0] + (int)v3);
  v55 = v28 + __ROL4__(v58 + v52 + 718787259 + ((unsigned int)v3 ^ (v28 | ~v53)), 15);
  result = (unsigned int)(v4 + v55 + __ROR4__(v62 + v53 - 343485551 + (v28 ^ (v55 | ~(_DWORD)v3)), 11));
  *a1 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(v54, _mm_cvtsi32_si128(result)),
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(a1->m128i_i32[2] + v55), _mm_cvtsi32_si128(a1->m128i_i32[3] + (int)v28)));
  return result;
}
