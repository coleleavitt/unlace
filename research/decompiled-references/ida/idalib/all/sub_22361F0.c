__int64 __fastcall sub_22361F0(unsigned __int8 *a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int64 v6; // r9
  __int64 v7; // r10
  unsigned __int64 v8; // rsi
  unsigned __int8 *v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r11
  __int64 i; // rbx
  __int64 v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r11
  __int64 v19; // rdx
  __int64 v20; // r11
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rbx
  __int64 v25; // r11
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r11
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rdi
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // r9
  __int64 v40; // rdi
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // r8
  __int64 v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // rax
  unsigned __int64 v49; // rsi
  __int64 v50; // rdx
  __int64 v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rdi
  __int64 v54; // rsi
  __int64 v55; // r8
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rdi
  __int64 v61; // rsi
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rdi
  __int64 v65; // rdx
  __int64 v66; // rsi
  __int64 v67; // rax
  __int64 v68; // rdi
  __int64 v69; // rdx
  __int64 v70; // rdi
  __int64 v71; // rsi
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 result; // rax

  v4 = a3[1];
  v5 = *a3;
  v6 = a2 & 0xFFFFFFFFFFFFFFF8LL;
  v7 = a2 & 7;
  v8 = a2 << 56;
  v9 = &a1[v6];
  v10 = v4 ^ 0x7465646279746573LL;
  v11 = v4 ^ 0x646F72616E646F6DLL;
  v12 = v5 ^ 0x6C7967656E657261LL;
  for ( i = v5 ^ 0x736F6D6570736575LL; a1 != v9; i = v14 ^ v29 )
  {
    v14 = *(_QWORD *)a1;
    v15 = v11 + i;
    a1 += 8;
    v16 = v15 ^ __ROL8__(v11, 13);
    v17 = v14 ^ v10;
    v18 = v17 + v12;
    v19 = v18 ^ __ROL8__(v17, 16);
    v20 = v16 + v18;
    v21 = v19 + __ROL8__(v15, 32);
    v22 = v20 ^ __ROL8__(v16, 17);
    v23 = v21 ^ __ROL8__(v19, 21);
    v24 = v22 + v21;
    v25 = v23 + __ROL8__(v20, 32);
    v26 = v24 ^ __ROL8__(v22, 13);
    v27 = v25 ^ __ROL8__(v23, 16);
    v28 = v26 + v25;
    v29 = v27 + __ROL8__(v24, 32);
    v11 = v28 ^ __ROL8__(v26, 17);
    v10 = v29 ^ __ROL8__(v27, 21);
    v12 = __ROL8__(v28, 32);
  }
  switch ( v7 )
  {
    case 0LL:
      goto LABEL_11;
    case 1LL:
      goto LABEL_10;
    case 2LL:
      goto LABEL_9;
    case 3LL:
      goto LABEL_8;
    case 4LL:
      goto LABEL_7;
    case 5LL:
      goto LABEL_6;
    case 6LL:
      goto LABEL_5;
    case 7LL:
      v8 |= (unsigned __int64)v9[6] << 48;
LABEL_5:
      v8 |= (unsigned __int64)v9[5] << 40;
LABEL_6:
      v8 |= (unsigned __int64)v9[4] << 32;
LABEL_7:
      v8 |= (unsigned __int64)v9[3] << 24;
LABEL_8:
      v8 |= (unsigned __int64)v9[2] << 16;
LABEL_9:
      v8 |= (unsigned __int64)v9[1] << 8;
LABEL_10:
      v8 |= *v9;
LABEL_11:
      v30 = v8 ^ v10;
      v31 = i + v11;
      v32 = v30 + v12;
      v33 = (i + v11) ^ __ROL8__(v11, 13);
      v34 = (v30 + v12) ^ __ROL8__(v30, 16);
      v35 = v33 + v32;
      v36 = v34 + __ROL8__(v31, 32);
      v37 = __ROL8__(v34, 21);
      v38 = v35 ^ __ROL8__(v33, 17);
      v39 = v36 ^ v37;
      v40 = v38 + v36;
      v41 = v39 + __ROL8__(v35, 32);
      v42 = v40 ^ __ROL8__(v38, 13);
      v43 = v41 ^ __ROL8__(v39, 16);
      v44 = v42 + v41;
      v45 = v43 + __ROL8__(v40, 32);
      v46 = v44 ^ __ROL8__(v42, 17);
      v47 = __ROL8__(v44, 32);
      v48 = v45 ^ __ROL8__(v43, 21);
      v49 = v46 + (v45 ^ v8);
      LOBYTE(v47) = ~(_BYTE)v47;
      v50 = v49 ^ __ROL8__(v46, 13);
      v51 = v47 + v48;
      v52 = (v47 + v48) ^ __ROL8__(v48, 16);
      v53 = v50 + v51;
      v54 = v52 + __ROL8__(v49, 32);
      v55 = v54 ^ __ROL8__(v52, 21);
      v56 = v53 ^ __ROL8__(v50, 17);
      v57 = v56 + v54;
      v58 = __ROL8__(v53, 32) + v55;
      v59 = v57 ^ __ROL8__(v56, 13);
      v60 = v58 ^ __ROL8__(v55, 16);
      v61 = v59 + v58;
      v62 = v60 + __ROL8__(v57, 32);
      v63 = v61 ^ __ROL8__(v59, 17);
      v64 = v62 ^ __ROL8__(v60, 21);
      v65 = v63 + v62;
      v66 = v64 + __ROL8__(v61, 32);
      v67 = v65 ^ __ROL8__(v63, 13);
      v68 = v66 ^ __ROL8__(v64, 16);
      v69 = v68 + __ROL8__(v65, 32);
      v70 = v69 ^ __ROL8__(v68, 21);
      v71 = v67 + v66;
      v72 = v71 ^ __ROL8__(v67, 17);
      v73 = (v72 + v69) ^ __ROL8__(v72, 13);
      v74 = __ROL8__(v71, 32) + v70;
      result = __ROL8__(v73 + v74, 32) ^ (v73 + v74) ^ __ROL8__(__ROL8__(v70, 16) ^ v74, 21) ^ __ROL8__(v73, 17);
      *a4 = result;
      return result;
  }
}
