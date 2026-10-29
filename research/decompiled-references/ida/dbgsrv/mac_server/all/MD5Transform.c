/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: MD5Transform
// Address: 0x000000010007A6A0

//----- (000000010007A6A0) ----------------------------------------------------
__int64 __fastcall MD5Transform(int *a1, _DWORD *a2)
{
  _DWORD *v2; // r9
  int v3; // r10d
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // r8d
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // r8d
  int v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // esi
  int v17; // eax
  int v18; // edi
  int v19; // r12d
  int v20; // edx
  int v21; // esi
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // esi
  int v26; // eax
  int v27; // ecx
  int v28; // edx
  int v29; // esi
  int v30; // eax
  int v31; // ecx
  int v32; // edx
  int v33; // esi
  int v34; // eax
  int v35; // ecx
  int v36; // edx
  int v37; // esi
  int v38; // eax
  int v39; // ecx
  int v40; // edx
  int v41; // esi
  int v42; // eax
  int v43; // ecx
  int v44; // edx
  int v45; // esi
  int v46; // eax
  int v47; // ecx
  int v48; // edx
  int v49; // esi
  int v50; // eax
  int v51; // ecx
  int v52; // edx
  int v53; // ebx
  int v54; // ecx
  int v55; // eax
  int v56; // r8d
  int v57; // ecx
  int v58; // eax
  int v59; // r8d
  int v60; // esi
  int v61; // ecx
  int v62; // eax
  int v63; // edx
  int v64; // esi
  int v65; // ecx
  __int64 result; // rax
  int v67; // [rsp+0h] [rbp-A8h]
  int v68; // [rsp+8h] [rbp-A0h]
  int v69; // [rsp+10h] [rbp-98h]
  int v71; // [rsp+28h] [rbp-80h]
  int v72; // [rsp+30h] [rbp-78h]
  int v73; // [rsp+38h] [rbp-70h]
  int v74; // [rsp+44h] [rbp-64h]
  int v75; // [rsp+48h] [rbp-60h]
  int v76; // [rsp+4Ch] [rbp-5Ch]
  int v77; // [rsp+50h] [rbp-58h]
  int v78; // [rsp+58h] [rbp-50h]
  int v79; // [rsp+64h] [rbp-44h]
  int v80; // [rsp+68h] [rbp-40h]
  int v81; // [rsp+6Ch] [rbp-3Ch]
  int v82; // [rsp+70h] [rbp-38h]
  int v83; // [rsp+74h] [rbp-34h]
  int v84; // [rsp+78h] [rbp-30h]
  int v85; // [rsp+7Ch] [rbp-2Ch]

  v2 = a2;
  v67 = *a1;
  v3 = a1[1];
  v4 = a1[2];
  v68 = a1[3];
  v72 = *a2;
  v78 = a2[1];
  v5 = v3 + __ROL4__(*a1 + *a2 + (v68 ^ v3 & (v4 ^ v68)) - 680876936, 7);
  v69 = v4;
  v6 = v5 + __ROL4__(v68 + v78 + (v4 ^ v5 & (v3 ^ v4)) - 389564586, 12);
  v71 = a2[2];
  v7 = v6 + __ROL4__(v4 + v71 + (v3 ^ v6 & (v3 ^ v5)) + 606105819, 17);
  v73 = a2[3];
  v8 = v7 + __ROL4__((v5 ^ v7 & (v5 ^ v6)) + v3 + v73 - 1044525330, 22);
  v82 = a2[4];
  v9 = v8 + __ROL4__((v6 ^ v8 & (v6 ^ v7)) + v82 + v5 - 176418897, 7);
  v85 = a2[5];
  v10 = v9 + __ROL4__((v7 ^ v9 & (v7 ^ v8)) + v85 + v6 + 1200080426, 12);
  v74 = a2[6];
  v11 = v10 + __ROL4__((v8 ^ v10 & (v8 ^ v9)) + v74 + v7 - 1473231341, 17);
  v75 = a2[7];
  v12 = v11 + __ROL4__((v9 ^ v11 & (v9 ^ v10)) + v75 + v8 - 45705983, 22);
  v83 = a2[8];
  v13 = v12 + __ROL4__((v10 ^ v12 & (v10 ^ v11)) + v83 + v9 + 1770035416, 7);
  v80 = a2[9];
  v14 = v13 + __ROL4__((v11 ^ v13 & (v11 ^ v12)) + v80 + v10 - 1958414417, 12);
  v77 = a2[10];
  v15 = v14 + __ROL4__((v12 ^ v14 & (v12 ^ v13)) + v77 + v11 - 42063, 17);
  v79 = a2[11];
  v16 = v15 + __ROL4__(v79 + v12 + (v13 ^ v15 & (v13 ^ v14)) - 1990404162, 22);
  v81 = v2[12];
  v17 = v16 + __ROL4__((v14 ^ v16 & (v14 ^ v15)) + v81 + v13 + 1804603682, 7);
  v84 = v2[13];
  v18 = v17 + __ROL4__((v15 ^ v17 & (v15 ^ v16)) + v84 + v14 - 40341101, 12);
  v19 = v2[14];
  v20 = v18 + __ROL4__((v16 ^ v18 & (v16 ^ v17)) + v19 + v15 - 1502002290, 17);
  v76 = v2[15];
  v21 = v20 + __ROL4__((v17 ^ v20 & (v17 ^ v18)) + v76 + v16 + 1236535329, 22);
  v22 = v21 + __ROL4__((v20 ^ v18 & (v20 ^ v21)) + v78 + v17 - 165796510, 5);
  v23 = v22 + __ROL4__(v74 + v18 + (v21 ^ v20 & (v21 ^ v22)) - 1069501632, 9);
  v24 = v23 + __ROL4__((v22 ^ v21 & (v22 ^ v23)) + v79 + v20 + 643717713, 14);
  v25 = v24 + __ROL4__((v23 ^ v22 & (v23 ^ v24)) + *v2 + v21 - 373897302, 20);
  v26 = v25 + __ROL4__((v24 ^ v23 & (v24 ^ v25)) + v85 + v22 - 701558691, 5);
  v27 = v26 + __ROL4__((v25 ^ v24 & (v25 ^ v26)) + v77 + v23 + 38016083, 9);
  v28 = v27 + __ROL4__((v26 ^ v25 & (v26 ^ v27)) + v76 + v24 - 660478335, 14);
  v29 = v28 + __ROL4__((v27 ^ v26 & (v27 ^ v28)) + v82 + v25 - 405537848, 20);
  v30 = v29 + __ROL4__((v28 ^ v27 & (v28 ^ v29)) + v80 + v26 + 568446438, 5);
  v31 = v30 + __ROL4__((v29 ^ v28 & (v29 ^ v30)) + v19 + v27 - 1019803690, 9);
  v32 = v31 + __ROL4__((v30 ^ v29 & (v30 ^ v31)) + v73 + v28 - 187363961, 14);
  v33 = v32 + __ROL4__((v31 ^ v30 & (v31 ^ v32)) + v83 + v29 + 1163531501, 20);
  v34 = v33 + __ROL4__((v32 ^ v31 & (v32 ^ v33)) + v84 + v30 - 1444681467, 5);
  v35 = v34 + __ROL4__((v33 ^ v32 & (v33 ^ v34)) + v71 + v31 - 51403784, 9);
  v36 = v35 + __ROL4__((v34 ^ v33 & (v34 ^ v35)) + v75 + v32 + 1735328473, 14);
  v37 = v36 + __ROL4__((v35 ^ v34 & (v35 ^ v36)) + v81 + v33 - 1926607734, 20);
  v38 = v37 + __ROL4__((v37 ^ v35 ^ v36) + v85 + v34 - 378558, 4);
  v39 = v38 + __ROL4__((v38 ^ v36 ^ v37) + v83 + v35 - 2022574463, 11);
  v40 = v39 + __ROL4__((v39 ^ v37 ^ v38) + v79 + v36 + 1839030562, 16);
  v41 = v40 + __ROL4__((v40 ^ v38 ^ v39) + v19 + v37 - 35309556, 23);
  v42 = v41 + __ROL4__((v41 ^ v39 ^ v40) + v78 + v38 - 1530992060, 4);
  v43 = v42 + __ROL4__((v42 ^ v40 ^ v41) + v82 + v39 + 1272893353, 11);
  v44 = v43 + __ROL4__((v43 ^ v41 ^ v42) + v75 + v40 - 155497632, 16);
  v45 = v44 + __ROL4__((v44 ^ v42 ^ v43) + v77 + v41 - 1094730640, 23);
  v46 = v45 + __ROL4__((v45 ^ v43 ^ v44) + v84 + v42 + 681279174, 4);
  v47 = v46 + __ROL4__((v46 ^ v44 ^ v45) + v72 + v43 - 358537222, 11);
  v48 = v47 + __ROL4__((v47 ^ v45 ^ v46) + v73 + v44 - 722521979, 16);
  LODWORD(v2) = v48 + __ROL4__((v48 ^ v46 ^ v47) + v74 + v45 + 76029189, 23);
  v49 = (_DWORD)v2 + __ROL4__(v80 + v46 + ((unsigned int)v2 ^ v47 ^ v48) - 640364487, 4);
  v50 = v49 + __ROL4__(v81 + v47 + (v49 ^ v48 ^ (unsigned int)v2) - 421815835, 11);
  v51 = v50 + __ROL4__(v76 + v48 + (v50 ^ (unsigned int)v2 ^ v49) + 530742520, 16);
  v52 = v51 + __ROL4__(v71 + (_DWORD)v2 + (v51 ^ v49 ^ v50) - 995338651, 23);
  v53 = v52 + __ROL4__((v51 ^ (v52 | ~v50)) + v72 + v49 - 198630844, 6);
  LODWORD(v2) = v53 + __ROL4__((v52 ^ (v53 | ~v51)) + v75 + v50 + 1126891415, 10);
  v54 = (_DWORD)v2 + __ROL4__((v53 ^ ((unsigned int)v2 | ~v52)) + v19 + v51 - 1416354905, 15);
  v55 = v54 + __ROL4__(v85 + v52 + ((unsigned int)v2 ^ (v54 | ~v53)) - 57434055, 21);
  v56 = v55 + __ROL4__((v54 ^ (v55 | ~(_DWORD)v2)) + v81 + v53 + 1700485571, 6);
  LODWORD(v2) = v56 + __ROL4__((v55 ^ (v56 | ~v54)) + v73 + (_DWORD)v2 - 1894986606, 10);
  v57 = (_DWORD)v2 + __ROL4__((v56 ^ ((unsigned int)v2 | ~v55)) + v77 + v54 - 1051523, 15);
  v58 = v57 + __ROL4__(((unsigned int)v2 ^ (v57 | ~v56)) + v78 + v55 - 2054922799, 21);
  v59 = v58 + __ROL4__((v57 ^ (v58 | ~(_DWORD)v2)) + v83 + v56 + 1873313359, 6);
  v60 = v59 + __ROL4__((v58 ^ (v59 | ~v57)) + v76 + (_DWORD)v2 - 30611744, 10);
  v61 = v60 + __ROL4__((v59 ^ (v60 | ~v58)) + v74 + v57 - 1560198380, 15);
  v62 = v61 + __ROL4__((v60 ^ (v61 | ~v59)) + v84 + v58 + 1309151649, 21);
  v63 = v62 + __ROL4__(v82 + v59 + (v61 ^ (v62 | ~v60)) - 145523070, 6);
  v64 = v63 + __ROL4__((v62 ^ (v63 | ~v61)) + v79 + v60 - 1120210379, 10);
  v65 = v64 + __ROL4__((v63 ^ (v64 | ~v62)) + v71 + v61 + 718787259, 15);
  result = (unsigned int)__ROL4__((v64 ^ (v65 | ~v63)) + v80 + v62 - 343485551, 21);
  *a1 = v67 + v63;
  a1[1] = result + v65 + v3;
  a1[2] = v69 + v65;
  a1[3] = v68 + v64;
  return result;
}
