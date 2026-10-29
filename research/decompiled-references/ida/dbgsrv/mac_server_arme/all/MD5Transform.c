/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: MD5Transform
// Address: 0x0000000100071A34

//----- (0000000100071A34) ----------------------------------------------------
_DWORD *__fastcall MD5Transform(_DWORD *result, int *a2)
{
  int v2; // w10
  int v3; // w8
  int v4; // w9
  int v5; // w13
  int v6; // w17
  unsigned __int64 v7; // t2
  int v8; // w16
  int v9; // w2
  int v10; // w12
  int v11; // w15
  int v12; // w4
  int v13; // w5
  int v14; // w3
  int v15; // w14
  int v16; // w7
  int v17; // w19
  int v18; // w2
  int v19; // w6
  int v20; // w20
  int v21; // w21
  int v22; // w5
  int v23; // w16
  int v24; // w22
  int v25; // w23
  int v26; // w4
  int v27; // w19
  int v28; // w24
  int v29; // w25
  int v30; // w7
  int v31; // w20
  int v32; // w22
  int v33; // w23
  int v34; // w1
  int v35; // w21
  int v36; // w24
  int v37; // w25
  int v38; // w22
  int v39; // w23
  int v40; // w24
  int v41; // w25
  int v42; // w22
  int v43; // w23
  int v44; // w24
  int v45; // w25
  int v46; // w22
  int v47; // w23
  int v48; // w24
  int v49; // w25
  int v50; // w22
  int v51; // w23
  int v52; // w24
  int v53; // w25
  int v54; // w22
  int v55; // w23
  int v56; // w24
  int v57; // w25
  int v58; // w22
  int v59; // w23
  int v60; // w24
  int v61; // w25
  int v62; // w22
  int v63; // w23
  int v64; // w24
  int v65; // w25
  int v66; // w22
  int v67; // w23
  int v68; // w24
  int v69; // w25
  int v70; // w17
  int v71; // w6
  int v72; // w21
  int v73; // w3
  int v74; // w17
  int v75; // w15
  int v76; // w6
  int v77; // w13
  int v78; // w17
  int v79; // w15
  int v80; // w1
  int v81; // w13
  int v82; // w14
  int v83; // w15
  int v84; // w12

  v2 = result[1];
  v4 = result[2];
  v3 = result[3];
  v6 = *a2;
  v5 = a2[1];
  HIDWORD(v7) = *result + *a2 - 680876936 + (v4 & v2 | v3 & ~v2);
  LODWORD(v7) = HIDWORD(v7);
  v8 = (v7 >> 25) + v2;
  HIDWORD(v7) = v3 + v5 - 389564586 + (v2 & v8 | v4 & ~v8);
  LODWORD(v7) = HIDWORD(v7);
  v9 = (v7 >> 20) + v8;
  v10 = a2[2];
  v11 = a2[3];
  HIDWORD(v7) = v4 + v10 + 606105819 + (v8 & v9 | v2 & ~v9);
  LODWORD(v7) = HIDWORD(v7);
  v12 = (v7 >> 15) + v9;
  HIDWORD(v7) = v2 + v11 - 1044525330 + (v9 & v12 | v8 & ~v12);
  LODWORD(v7) = HIDWORD(v7);
  v13 = (v7 >> 10) + v12;
  v15 = a2[4];
  v14 = a2[5];
  HIDWORD(v7) = v15 + v8 - 176418897 + (v12 & v13 | v9 & ~v13);
  LODWORD(v7) = HIDWORD(v7);
  v16 = (v7 >> 25) + v13;
  HIDWORD(v7) = v14 + v9 + 1200080426 + (v13 & v16 | v12 & ~v16);
  LODWORD(v7) = HIDWORD(v7);
  v17 = (v7 >> 20) + v16;
  v18 = a2[6];
  v19 = a2[7];
  HIDWORD(v7) = v18 + v12 - 1473231341 + (v16 & v17 | v13 & ~v17);
  LODWORD(v7) = HIDWORD(v7);
  v20 = (v7 >> 15) + v17;
  HIDWORD(v7) = v19 + v13 - 45705983 + (v17 & v20 | v16 & ~v20);
  LODWORD(v7) = HIDWORD(v7);
  v21 = (v7 >> 10) + v20;
  v22 = a2[8];
  v23 = a2[9];
  HIDWORD(v7) = v22 + v16 + 1770035416 + (v20 & v21 | v17 & ~v21);
  LODWORD(v7) = HIDWORD(v7);
  v24 = (v7 >> 25) + v21;
  HIDWORD(v7) = v23 + v17 - 1958414417 + (v21 & v24 | v20 & ~v24);
  LODWORD(v7) = HIDWORD(v7);
  v25 = (v7 >> 20) + v24;
  v27 = a2[10];
  v26 = a2[11];
  HIDWORD(v7) = v27 + v20 - 42063 + (v24 & v25 | v21 & ~v25);
  LODWORD(v7) = HIDWORD(v7);
  v28 = (v7 >> 15) + v25;
  HIDWORD(v7) = v26 + v21 - 1990404162 + (v25 & v28 | v24 & ~v28);
  LODWORD(v7) = HIDWORD(v7);
  v29 = (v7 >> 10) + v28;
  v31 = a2[12];
  v30 = a2[13];
  HIDWORD(v7) = v31 + v24 + 1804603682 + (v28 & v29 | v25 & ~v29);
  LODWORD(v7) = HIDWORD(v7);
  v32 = (v7 >> 25) + v29;
  HIDWORD(v7) = v30 + v25 - 40341101 + (v29 & v32 | v28 & ~v32);
  LODWORD(v7) = HIDWORD(v7);
  v33 = (v7 >> 20) + v32;
  v35 = a2[14];
  v34 = a2[15];
  HIDWORD(v7) = v35 + v28 - 1502002290 + (v32 & v33 | v29 & ~v33);
  LODWORD(v7) = HIDWORD(v7);
  v36 = (v7 >> 15) + v33;
  HIDWORD(v7) = v34 + v29 + 1236535329 + (v33 & v36 | v32 & ~v36);
  LODWORD(v7) = HIDWORD(v7);
  v37 = (v7 >> 10) + v36;
  HIDWORD(v7) = v5 + v32 - 165796510 + (v37 & v33 | v36 & ~v33);
  LODWORD(v7) = HIDWORD(v7);
  v38 = (v7 >> 27) + v37;
  HIDWORD(v7) = v18 + v33 - 1069501632 + (v38 & v36 | v37 & ~v36);
  LODWORD(v7) = HIDWORD(v7);
  v39 = (v7 >> 23) + v38;
  HIDWORD(v7) = v26 + v36 + 643717713 + (v39 & v37 | v38 & ~v37);
  LODWORD(v7) = HIDWORD(v7);
  v40 = (v7 >> 18) + v39;
  HIDWORD(v7) = v6 + v37 - 373897302 + (v40 & v38 | v39 & ~v38);
  LODWORD(v7) = HIDWORD(v7);
  v41 = (v7 >> 12) + v40;
  HIDWORD(v7) = v14 + v38 - 701558691 + (v41 & v39 | v40 & ~v39);
  LODWORD(v7) = HIDWORD(v7);
  v42 = (v7 >> 27) + v41;
  HIDWORD(v7) = v27 + v39 + 38016083 + (v42 & v40 | v41 & ~v40);
  LODWORD(v7) = HIDWORD(v7);
  v43 = (v7 >> 23) + v42;
  HIDWORD(v7) = v34 + v40 - 660478335 + (v43 & v41 | v42 & ~v41);
  LODWORD(v7) = HIDWORD(v7);
  v44 = (v7 >> 18) + v43;
  HIDWORD(v7) = v15 + v41 - 405537848 + (v44 & v42 | v43 & ~v42);
  LODWORD(v7) = HIDWORD(v7);
  v45 = (v7 >> 12) + v44;
  HIDWORD(v7) = v23 + v42 + 568446438 + (v45 & v43 | v44 & ~v43);
  LODWORD(v7) = HIDWORD(v7);
  v46 = (v7 >> 27) + v45;
  HIDWORD(v7) = v35 + v43 - 1019803690 + (v46 & v44 | v45 & ~v44);
  LODWORD(v7) = HIDWORD(v7);
  v47 = (v7 >> 23) + v46;
  HIDWORD(v7) = v11 + v44 - 187363961 + (v47 & v45 | v46 & ~v45);
  LODWORD(v7) = HIDWORD(v7);
  v48 = (v7 >> 18) + v47;
  HIDWORD(v7) = v22 + v45 + 1163531501 + (v48 & v46 | v47 & ~v46);
  LODWORD(v7) = HIDWORD(v7);
  v49 = (v7 >> 12) + v48;
  HIDWORD(v7) = v30 + v46 - 1444681467 + (v49 & v47 | v48 & ~v47);
  LODWORD(v7) = HIDWORD(v7);
  v50 = (v7 >> 27) + v49;
  HIDWORD(v7) = v10 + v47 - 51403784 + (v50 & v48 | v49 & ~v48);
  LODWORD(v7) = HIDWORD(v7);
  v51 = (v7 >> 23) + v50;
  HIDWORD(v7) = v19 + v48 + 1735328473 + (v51 & v49 | v50 & ~v49);
  LODWORD(v7) = HIDWORD(v7);
  v52 = (v7 >> 18) + v51;
  HIDWORD(v7) = v31 + v49 - 1926607734 + ((v52 ^ v51) & v50 ^ v51);
  LODWORD(v7) = HIDWORD(v7);
  v53 = (v7 >> 12) + v52;
  HIDWORD(v7) = v14 + v50 - 378558 + (v52 ^ v51 ^ v53);
  LODWORD(v7) = HIDWORD(v7);
  v54 = (v7 >> 28) + v53;
  HIDWORD(v7) = v22 + v51 - 2022574463 + (v53 ^ v52 ^ v54);
  LODWORD(v7) = HIDWORD(v7);
  v55 = (v7 >> 21) + v54;
  HIDWORD(v7) = v26 + v52 + 1839030562 + (v54 ^ v53 ^ v55);
  LODWORD(v7) = HIDWORD(v7);
  v56 = (v7 >> 16) + v55;
  HIDWORD(v7) = v35 + v53 - 35309556 + (v55 ^ v54 ^ v56);
  LODWORD(v7) = HIDWORD(v7);
  v57 = (v7 >> 9) + v56;
  HIDWORD(v7) = v5 + v54 - 1530992060 + (v56 ^ v55 ^ v57);
  LODWORD(v7) = HIDWORD(v7);
  v58 = (v7 >> 28) + v57;
  HIDWORD(v7) = v15 + v55 + 1272893353 + (v57 ^ v56 ^ v58);
  LODWORD(v7) = HIDWORD(v7);
  v59 = (v7 >> 21) + v58;
  HIDWORD(v7) = v19 + v56 - 155497632 + (v58 ^ v57 ^ v59);
  LODWORD(v7) = HIDWORD(v7);
  v60 = (v7 >> 16) + v59;
  HIDWORD(v7) = v27 + v57 - 1094730640 + (v59 ^ v58 ^ v60);
  LODWORD(v7) = HIDWORD(v7);
  v61 = (v7 >> 9) + v60;
  HIDWORD(v7) = v30 + v58 + 681279174 + (v60 ^ v59 ^ v61);
  LODWORD(v7) = HIDWORD(v7);
  v62 = (v7 >> 28) + v61;
  HIDWORD(v7) = v6 + v59 - 358537222 + (v61 ^ v60 ^ v62);
  LODWORD(v7) = HIDWORD(v7);
  v63 = (v7 >> 21) + v62;
  HIDWORD(v7) = v11 + v60 - 722521979 + (v62 ^ v61 ^ v63);
  LODWORD(v7) = HIDWORD(v7);
  v64 = (v7 >> 16) + v63;
  HIDWORD(v7) = v18 + v61 + 76029189 + (v63 ^ v62 ^ v64);
  LODWORD(v7) = HIDWORD(v7);
  v65 = (v7 >> 9) + v64;
  HIDWORD(v7) = v23 + v62 - 640364487 + (v64 ^ v63 ^ v65);
  LODWORD(v7) = HIDWORD(v7);
  v66 = (v7 >> 28) + v65;
  HIDWORD(v7) = v31 + v63 - 421815835 + (v65 ^ v64 ^ v66);
  LODWORD(v7) = HIDWORD(v7);
  v67 = (v7 >> 21) + v66;
  HIDWORD(v7) = v34 + v64 + 530742520 + (v66 ^ v65 ^ v67);
  LODWORD(v7) = HIDWORD(v7);
  v68 = (v7 >> 16) + v67;
  HIDWORD(v7) = v10 + v65 - 995338651 + (v67 ^ v66 ^ v68);
  LODWORD(v7) = HIDWORD(v7);
  v69 = (v7 >> 9) + v68;
  HIDWORD(v7) = v6 + v66 - 198630844 + ((v69 | ~v67) ^ v68);
  LODWORD(v7) = HIDWORD(v7);
  v70 = (v7 >> 26) + v69;
  HIDWORD(v7) = v19 + v67 + 1126891415 + ((v70 | ~v68) ^ v69);
  LODWORD(v7) = HIDWORD(v7);
  v71 = (v7 >> 22) + v70;
  HIDWORD(v7) = v35 + v68 - 1416354905 + ((v71 | ~v69) ^ v70);
  LODWORD(v7) = HIDWORD(v7);
  v72 = (v7 >> 17) + v71;
  HIDWORD(v7) = v14 + v69 - 57434055 + ((v72 | ~v70) ^ v71);
  LODWORD(v7) = HIDWORD(v7);
  v73 = (v7 >> 11) + v72;
  HIDWORD(v7) = v31 + v70 + 1700485571 + ((v73 | ~v71) ^ v72);
  LODWORD(v7) = HIDWORD(v7);
  v74 = (v7 >> 26) + v73;
  HIDWORD(v7) = v11 + v71 - 1894986606 + ((v74 | ~v72) ^ v73);
  LODWORD(v7) = HIDWORD(v7);
  v75 = (v7 >> 22) + v74;
  HIDWORD(v7) = v27 + v72 - 1051523 + ((v75 | ~v73) ^ v74);
  LODWORD(v7) = HIDWORD(v7);
  v76 = (v7 >> 17) + v75;
  HIDWORD(v7) = v5 + v73 - 2054922799 + ((v76 | ~v74) ^ v75);
  LODWORD(v7) = HIDWORD(v7);
  v77 = (v7 >> 11) + v76;
  HIDWORD(v7) = v22 + v74 + 1873313359 + ((v77 | ~v75) ^ v76);
  LODWORD(v7) = HIDWORD(v7);
  v78 = (v7 >> 26) + v77;
  HIDWORD(v7) = v34 + v75 - 30611744 + ((v78 | ~v76) ^ v77);
  LODWORD(v7) = HIDWORD(v7);
  v79 = (v7 >> 22) + v78;
  HIDWORD(v7) = v18 + v76 - 1560198380 + ((v79 | ~v77) ^ v78);
  LODWORD(v7) = HIDWORD(v7);
  v80 = (v7 >> 17) + v79;
  HIDWORD(v7) = v30 + v77 + 1309151649 + ((v80 | ~v78) ^ v79);
  LODWORD(v7) = HIDWORD(v7);
  v81 = (v7 >> 11) + v80;
  HIDWORD(v7) = v15 + v78 - 145523070 + ((v81 | ~v79) ^ v80);
  LODWORD(v7) = HIDWORD(v7);
  v82 = (v7 >> 26) + v81;
  HIDWORD(v7) = v26 + v79 - 1120210379 + ((v82 | ~v80) ^ v81);
  LODWORD(v7) = HIDWORD(v7);
  v83 = (v7 >> 22) + v82;
  HIDWORD(v7) = v10 + v80 + 718787259 + ((v83 | ~v81) ^ v82);
  LODWORD(v7) = HIDWORD(v7);
  v84 = (v7 >> 17) + v83;
  HIDWORD(v7) = v23 + v81 - 343485551 + ((v84 | ~v82) ^ v83);
  LODWORD(v7) = HIDWORD(v7);
  *result += v82;
  result[1] = v84 + v2 + (v7 >> 11);
  result[2] = v84 + v4;
  result[3] = v83 + v3;
  return result;
}
