__int64 __fastcall sub_931100(__int64 a1)
{
  int v1; // edx
  char v2; // cl
  __int64 v3; // rax
  __int64 v4; // rdx
  char v5; // si
  __int64 v6; // rax
  char v7; // cl
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 result; // rax
  __int64 v11; // rcx
  unsigned int *v12; // rbp
  void *v13; // r15
  void *v14; // r14
  void *v15; // r14
  void *v16; // r14
  void *v17; // r14
  void *v18; // r14
  void *v19; // r14
  __int64 v20; // r14
  void *v21; // r15
  int *v22; // r14
  int v23; // eax
  __int64 v24; // r14
  void *v25; // r15
  __int64 v26; // r14
  int v27; // eax
  __int64 v28; // r14
  void *v29; // r15
  int *v30; // r14
  int v31; // eax
  __int64 v32; // r14
  void *v33; // r15
  __int64 v34; // r14
  int v35; // eax
  void *v36; // r14
  int v37; // eax
  void *v38; // r14
  int v39; // eax
  char v40; // r15
  void *v41; // r15
  void *v42; // r15
  void *v43; // r15
  void *v44; // r14
  void *v45; // r14
  void *v46; // r14
  void *v47; // [rsp+10h] [rbp-248h]
  void *v48; // [rsp+10h] [rbp-248h]
  void *v49; // [rsp+10h] [rbp-248h]
  void *v50; // [rsp+40h] [rbp-218h]
  void *v51; // [rsp+40h] [rbp-218h]
  __int64 v52; // [rsp+60h] [rbp-1F8h]
  void *v53; // [rsp+78h] [rbp-1E0h]
  int v54; // [rsp+80h] [rbp-1D8h] BYREF
  char v55; // [rsp+84h] [rbp-1D4h]
  __int64 v56; // [rsp+88h] [rbp-1D0h]
  int v57; // [rsp+90h] [rbp-1C8h] BYREF
  char v58; // [rsp+94h] [rbp-1C4h]
  __int64 v59; // [rsp+98h] [rbp-1C0h]
  int v60; // [rsp+A0h] [rbp-1B8h] BYREF
  char v61; // [rsp+A4h] [rbp-1B4h]
  __int64 v62; // [rsp+A8h] [rbp-1B0h]
  int v63; // [rsp+B0h] [rbp-1A8h] BYREF
  char v64; // [rsp+B4h] [rbp-1A4h]
  __int64 v65; // [rsp+B8h] [rbp-1A0h]
  int v66; // [rsp+C0h] [rbp-198h] BYREF
  char v67; // [rsp+C4h] [rbp-194h]
  __int64 v68; // [rsp+C8h] [rbp-190h]
  int v69; // [rsp+D0h] [rbp-188h] BYREF
  char v70; // [rsp+D4h] [rbp-184h]
  __int64 v71; // [rsp+D8h] [rbp-180h]
  int v72; // [rsp+E0h] [rbp-178h] BYREF
  char v73; // [rsp+E4h] [rbp-174h]
  __int64 v74; // [rsp+E8h] [rbp-170h]
  int v75; // [rsp+F0h] [rbp-168h] BYREF
  char v76; // [rsp+F4h] [rbp-164h]
  __int64 v77; // [rsp+F8h] [rbp-160h]
  unsigned int v78; // [rsp+100h] [rbp-158h] BYREF
  char v79; // [rsp+104h] [rbp-154h]
  __int64 v80; // [rsp+108h] [rbp-150h]
  int v81; // [rsp+110h] [rbp-148h] BYREF
  char v82; // [rsp+114h] [rbp-144h]
  __int64 v83; // [rsp+118h] [rbp-140h]
  unsigned int v84; // [rsp+120h] [rbp-138h] BYREF
  char v85; // [rsp+124h] [rbp-134h]
  __int64 v86; // [rsp+128h] [rbp-130h]
  int v87; // [rsp+130h] [rbp-128h] BYREF
  char v88; // [rsp+134h] [rbp-124h]
  __int64 v89; // [rsp+138h] [rbp-120h]
  int v90; // [rsp+140h] [rbp-118h] BYREF
  char v91; // [rsp+144h] [rbp-114h]
  __int64 v92; // [rsp+148h] [rbp-110h]
  int v93; // [rsp+150h] [rbp-108h] BYREF
  char v94; // [rsp+154h] [rbp-104h]
  __int64 v95; // [rsp+158h] [rbp-100h]
  _BYTE v96[16]; // [rsp+160h] [rbp-F8h] BYREF
  _BYTE v97[16]; // [rsp+170h] [rbp-E8h] BYREF
  int v98; // [rsp+180h] [rbp-D8h] BYREF
  char v99; // [rsp+184h] [rbp-D4h]
  int v100; // [rsp+190h] [rbp-C8h] BYREF
  char v101; // [rsp+194h] [rbp-C4h]
  _BYTE v102[16]; // [rsp+1A0h] [rbp-B8h] BYREF
  _BYTE v103[16]; // [rsp+1B0h] [rbp-A8h] BYREF
  _BYTE v104[16]; // [rsp+1C0h] [rbp-98h] BYREF
  _BYTE v105[16]; // [rsp+1D0h] [rbp-88h] BYREF
  int v106; // [rsp+1E0h] [rbp-78h] BYREF
  char v107; // [rsp+1E4h] [rbp-74h]
  int v108; // [rsp+1F0h] [rbp-68h] BYREF
  char v109; // [rsp+1F4h] [rbp-64h]
  __int64 v110; // [rsp+200h] [rbp-58h] BYREF
  __int64 v111; // [rsp+208h] [rbp-50h]
  __int64 v112; // [rsp+210h] [rbp-48h] BYREF
  __int64 v113; // [rsp+218h] [rbp-40h]

  v110 = 1;
  v111 = 0;
  v112 = 2;
  v113 = 0;
  sub_6E0DD0((__int64)qword_1C7F2C0, (__int64)&v110);
  v1 = v110;
  v2 = BYTE4(v110);
  LODWORD(v110) = *(_DWORD *)(a1 + 456);
  v3 = *(_QWORD *)(a1 + 464);
  *(_DWORD *)(a1 + 456) = v1;
  v4 = v111;
  v111 = v3;
  LOBYTE(v3) = *(_BYTE *)(a1 + 460);
  *(_QWORD *)(a1 + 464) = v4;
  LOBYTE(v4) = v2;
  v2 &= ~2u;
  v5 = v3 & 0xFD;
  BYTE4(v110) = v3 & 1 | v2 & 0xFE | v3 & 2;
  LODWORD(v3) = *(_DWORD *)(a1 + 472);
  *(_BYTE *)(a1 + 460) = v2 & 1 | v5 & 0xFE | v4 & 2;
  LODWORD(v4) = v112;
  LODWORD(v112) = v3;
  v6 = *(_QWORD *)(a1 + 480);
  v7 = BYTE4(v112);
  *(_DWORD *)(a1 + 472) = v4;
  v8 = v113;
  v113 = v6;
  LOBYTE(v6) = *(_BYTE *)(a1 + 476);
  *(_QWORD *)(a1 + 480) = v8;
  LOBYTE(v8) = v7;
  v7 &= ~2u;
  BYTE4(v112) = v6 & 1 | v7 & 0xFE | v6 & 2;
  *(_BYTE *)(a1 + 476) = v7 & 1 | v6 & 0xFC | v8 & 2;
  sub_25A130((char *)&v110);
  v9 = *(_QWORD *)(a1 + 304);
  if ( !v9 )
  {
    v52 = 0;
    v12 = (unsigned int *)&qword_50;
    goto LABEL_6;
  }
  result = 80LL * *(unsigned int *)(v9 - 4);
  v11 = v9 + result;
  v12 = (unsigned int *)(v9 + 80);
  v52 = v11;
  if ( result != 80 )
  {
    do
    {
LABEL_6:
      v20 = v12[1];
      v21 = qword_1C7F2C0;
      v54 = 0;
      v55 &= 0xFCu;
      v22 = (int *)(*(_QWORD *)(a1 + 400) + (v20 << 6));
      v58 &= 0xFCu;
      v56 = 0;
      v57 = 1;
      v59 = 0;
      if ( (v22[1] & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v54, v22);
      else
        v54 = *v22;
      if ( (v22[5] & 1) != 0 )
      {
        sub_182C690(v21, &v57, v22 + 4);
      }
      else
      {
        v23 = v22[4];
        v58 &= ~1u;
        v57 = v23;
      }
      v24 = v12[1];
      v25 = qword_1C7F2C0;
      v60 = 0;
      v61 &= 0xFCu;
      v26 = *(_QWORD *)(a1 + 400) + (v24 << 6);
      v64 &= 0xFCu;
      v62 = 0;
      v63 = 1;
      v65 = 0;
      if ( (*(_BYTE *)(v26 + 36) & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v60, v26 + 32);
      else
        v60 = *(_DWORD *)(v26 + 32);
      if ( (*(_BYTE *)(v26 + 52) & 1) != 0 )
      {
        sub_182C690(v25, &v63, v26 + 48);
      }
      else
      {
        v27 = *(_DWORD *)(v26 + 48);
        v64 &= ~1u;
        v63 = v27;
      }
      v28 = *v12;
      v29 = qword_1C7F2C0;
      v66 = 0;
      v67 &= 0xFCu;
      v30 = (int *)(*(_QWORD *)(a1 + 400) + (v28 << 6));
      v70 &= 0xFCu;
      v68 = 0;
      v69 = 1;
      v71 = 0;
      if ( (v30[1] & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v66, v30);
      else
        v66 = *v30;
      if ( (v30[5] & 1) != 0 )
      {
        sub_182C690(v29, &v69, v30 + 4);
      }
      else
      {
        v31 = v30[4];
        v70 &= ~1u;
        v69 = v31;
      }
      v32 = *v12;
      v33 = qword_1C7F2C0;
      v72 = 0;
      v73 &= 0xFCu;
      v34 = *(_QWORD *)(a1 + 400) + (v32 << 6);
      v76 &= 0xFCu;
      v74 = 0;
      v75 = 1;
      v77 = 0;
      if ( (*(_BYTE *)(v34 + 36) & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v72, v34 + 32);
      else
        v72 = *(_DWORD *)(v34 + 32);
      if ( (*(_BYTE *)(v34 + 52) & 1) != 0 )
      {
        sub_182C690(v33, &v75, v34 + 48);
      }
      else
      {
        v35 = *(_DWORD *)(v34 + 48);
        v76 &= ~1u;
        v75 = v35;
      }
      v79 &= 0xFCu;
      v36 = qword_1C7F2C0;
      v82 &= 0xFCu;
      v78 = 0;
      v80 = 0;
      v81 = 1;
      v83 = 0;
      if ( (v12[3] & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v78, v12 + 2);
      else
        v78 = v12[2];
      if ( (v12[7] & 1) != 0 )
      {
        sub_182C690(v36, &v81, v12 + 6);
      }
      else
      {
        v37 = v12[6];
        v82 &= ~1u;
        v81 = v37;
      }
      v85 &= 0xFCu;
      v38 = qword_1C7F2C0;
      v88 &= 0xFCu;
      v84 = 0;
      v86 = 0;
      v87 = 1;
      v89 = 0;
      if ( (v12[11] & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v84, v12 + 10);
      else
        v84 = v12[10];
      if ( (v12[15] & 1) != 0 )
      {
        sub_182C690(v38, &v87, v12 + 14);
      }
      else
      {
        v39 = v12[14];
        v88 &= ~1u;
        v87 = v39;
      }
      sub_27B340((__int64)&v106, (__int64)&v66, (int *)&v78);
      if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v54, (__int64)&v106) )
      {
        sub_27B340((__int64)&v110, (__int64)&v72, (int *)&v84);
        v40 = sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v110, (__int64)&v60);
        v50 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v110);
        sub_182CBA0(v50, &v112);
        v51 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v106);
        sub_182CBA0(v51, &v108);
        if ( v40 )
        {
          sub_3EBB80((__int64)v102, (__int64)&v60, (__int64)&v72);
          sub_3EBB80((__int64)v104, (__int64)v102, (__int64)&v84);
          v110 = 2;
          v111 = 0;
          v112 = 1;
          v113 = 0;
          sub_182CBA0(qword_1C7F2C0, &v112);
          BYTE4(v112) &= ~1u;
          LODWORD(v112) = 1;
          sub_3EBE30((__int64)&v106, (__int64)&v110, (__int64)v104);
          v41 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v110);
          sub_182CBA0(v41, &v112);
          sub_27B340((__int64)v96, (__int64)&v66, (int *)&v78);
          sub_3EBB80((__int64)&v98, (__int64)v96, (__int64)&v54);
          v110 = 0;
          v42 = qword_1C7F2C0;
          v111 = 0;
          v112 = 1;
          v113 = 0;
          if ( (v99 & 1) != 0 )
            sub_182C690(qword_1C7F2C0, &v110, &v98);
          else
            LODWORD(v110) = v98;
          if ( (v101 & 1) == 0 )
          {
            BYTE4(v112) &= ~1u;
            v43 = qword_1C7F2C0;
            LODWORD(v112) = v100;
            if ( !(_DWORD)v110 )
              goto LABEL_57;
LABEL_36:
            if ( (v107 & 1) != 0 || v106 != 1 || (v109 & 1) != 0 || v108 != 1 )
            {
              sub_1831650(v43, &v110, &v108);
              sub_1831650(v43, &v112, &v106);
              if ( (int)v112 < 0 )
              {
                sub_1831620(v43, &v110);
                sub_1831620(v43, &v112);
              }
              sub_6E0DD0((__int64)v43, (__int64)&v110);
            }
            else
            {
LABEL_57:
              sub_27B950((__int64)v43, (__int64)&v110, (int *)&v110);
            }
            v91 &= 0xFCu;
            v94 &= 0xFCu;
            v90 = 0;
            v92 = 0;
            v93 = 1;
            v95 = 0;
            sub_27B950((__int64)qword_1C7F2C0, (__int64)&v90, (int *)&v110);
            v53 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v110);
            sub_182CBA0(v53, &v112);
            v47 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v98);
            sub_182CBA0(v47, &v100);
            v48 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v96);
            sub_182CBA0(v48, v97);
            v49 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v106);
            sub_182CBA0(v49, &v108);
            v44 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v104);
            sub_182CBA0(v44, v105);
            v45 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v102);
            sub_182CBA0(v45, v103);
            if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v90, a1 + 456) )
              sub_27B950((__int64)qword_1C7F2C0, a1 + 456, &v90);
            v46 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v90);
            sub_182CBA0(v46, &v93);
            goto LABEL_5;
          }
          sub_182C690(v42, &v112, &v100);
          v43 = qword_1C7F2C0;
          if ( (_DWORD)v110 )
            goto LABEL_36;
          goto LABEL_57;
        }
      }
      else
      {
        v13 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v106);
        sub_182CBA0(v13, &v108);
      }
LABEL_5:
      v14 = qword_1C7F2C0;
      v12 += 20;
      sub_182CBA0(qword_1C7F2C0, &v84);
      sub_182CBA0(v14, &v87);
      v15 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v78);
      sub_182CBA0(v15, &v81);
      v16 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v72);
      sub_182CBA0(v16, &v75);
      v17 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v66);
      sub_182CBA0(v17, &v69);
      v18 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v60);
      sub_182CBA0(v18, &v63);
      v19 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v54);
      sub_182CBA0(v19, &v57);
      result = v52;
    }
    while ( v12 != (unsigned int *)v52 );
  }
  return result;
}

