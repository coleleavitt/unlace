__int64 __fastcall sub_933A80(__int64 a1)
{
  int v1; // edx
  char v2; // cl
  __int64 v3; // rax
  __int64 v4; // rdx
  char v5; // si
  __int64 v6; // rax
  char v7; // cl
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 result; // rax
  __int64 v11; // rcx
  unsigned int *v12; // r12
  void *v13; // r15
  void *v14; // r13
  void *v15; // r13
  void *v16; // r13
  void *v17; // r13
  void *v18; // r13
  void *v19; // r13
  __int64 v20; // r13
  void *v21; // r15
  __int64 v22; // r13
  int v23; // eax
  void *v24; // r13
  __int64 v25; // r13
  void *v26; // r15
  __int64 v27; // r13
  int v28; // eax
  void *v29; // r13
  void *v30; // r13
  int v31; // eax
  void *v32; // r13
  char v33; // r15
  void *v34; // r15
  void *v35; // r15
  void *v36; // r15
  void *v37; // r13
  void *v38; // r13
  void *v39; // r13
  void *v40; // [rsp+10h] [rbp-248h]
  void *v41; // [rsp+10h] [rbp-248h]
  void *v42; // [rsp+10h] [rbp-248h]
  void *v43; // [rsp+40h] [rbp-218h]
  void *v44; // [rsp+40h] [rbp-218h]
  __int64 v45; // [rsp+60h] [rbp-1F8h]
  void *v46; // [rsp+78h] [rbp-1E0h]
  int v47; // [rsp+80h] [rbp-1D8h] BYREF
  char v48; // [rsp+84h] [rbp-1D4h]
  __int64 v49; // [rsp+88h] [rbp-1D0h]
  int v50; // [rsp+90h] [rbp-1C8h] BYREF
  char v51; // [rsp+94h] [rbp-1C4h]
  __int64 v52; // [rsp+98h] [rbp-1C0h]
  int v53; // [rsp+A0h] [rbp-1B8h] BYREF
  char v54; // [rsp+A4h] [rbp-1B4h]
  __int64 v55; // [rsp+A8h] [rbp-1B0h]
  int v56; // [rsp+B0h] [rbp-1A8h] BYREF
  char v57; // [rsp+B4h] [rbp-1A4h]
  __int64 v58; // [rsp+B8h] [rbp-1A0h]
  int v59; // [rsp+C0h] [rbp-198h] BYREF
  char v60; // [rsp+C4h] [rbp-194h]
  __int64 v61; // [rsp+C8h] [rbp-190h]
  int v62; // [rsp+D0h] [rbp-188h] BYREF
  char v63; // [rsp+D4h] [rbp-184h]
  __int64 v64; // [rsp+D8h] [rbp-180h]
  int v65; // [rsp+E0h] [rbp-178h] BYREF
  char v66; // [rsp+E4h] [rbp-174h]
  __int64 v67; // [rsp+E8h] [rbp-170h]
  int v68; // [rsp+F0h] [rbp-168h] BYREF
  char v69; // [rsp+F4h] [rbp-164h]
  __int64 v70; // [rsp+F8h] [rbp-160h]
  unsigned int v71; // [rsp+100h] [rbp-158h] BYREF
  char v72; // [rsp+104h] [rbp-154h]
  __int64 v73; // [rsp+108h] [rbp-150h]
  int v74; // [rsp+110h] [rbp-148h] BYREF
  char v75; // [rsp+114h] [rbp-144h]
  __int64 v76; // [rsp+118h] [rbp-140h]
  int v77; // [rsp+120h] [rbp-138h] BYREF
  char v78; // [rsp+124h] [rbp-134h]
  __int64 v79; // [rsp+128h] [rbp-130h]
  int v80; // [rsp+130h] [rbp-128h] BYREF
  char v81; // [rsp+134h] [rbp-124h]
  __int64 v82; // [rsp+138h] [rbp-120h]
  int v83; // [rsp+140h] [rbp-118h] BYREF
  char v84; // [rsp+144h] [rbp-114h]
  __int64 v85; // [rsp+148h] [rbp-110h]
  int v86; // [rsp+150h] [rbp-108h] BYREF
  char v87; // [rsp+154h] [rbp-104h]
  __int64 v88; // [rsp+158h] [rbp-100h]
  _BYTE v89[16]; // [rsp+160h] [rbp-F8h] BYREF
  _BYTE v90[16]; // [rsp+170h] [rbp-E8h] BYREF
  int v91; // [rsp+180h] [rbp-D8h] BYREF
  char v92; // [rsp+184h] [rbp-D4h]
  int v93; // [rsp+190h] [rbp-C8h] BYREF
  char v94; // [rsp+194h] [rbp-C4h]
  _BYTE v95[16]; // [rsp+1A0h] [rbp-B8h] BYREF
  _BYTE v96[16]; // [rsp+1B0h] [rbp-A8h] BYREF
  _BYTE v97[16]; // [rsp+1C0h] [rbp-98h] BYREF
  _BYTE v98[16]; // [rsp+1D0h] [rbp-88h] BYREF
  int v99; // [rsp+1E0h] [rbp-78h] BYREF
  char v100; // [rsp+1E4h] [rbp-74h]
  int v101; // [rsp+1F0h] [rbp-68h] BYREF
  char v102; // [rsp+1F4h] [rbp-64h]
  __int64 v103; // [rsp+200h] [rbp-58h] BYREF
  __int64 v104; // [rsp+208h] [rbp-50h]
  __int64 v105; // [rsp+210h] [rbp-48h] BYREF
  __int64 v106; // [rsp+218h] [rbp-40h]

  v103 = 1;
  v104 = 0;
  v105 = 2;
  v106 = 0;
  sub_6E0DD0((__int64)qword_1C7F2C0, (__int64)&v103);
  v1 = v103;
  v2 = BYTE4(v103);
  LODWORD(v103) = *(_DWORD *)(a1 + 392);
  v3 = *(_QWORD *)(a1 + 400);
  *(_DWORD *)(a1 + 392) = v1;
  v4 = v104;
  v104 = v3;
  LOBYTE(v3) = *(_BYTE *)(a1 + 396);
  *(_QWORD *)(a1 + 400) = v4;
  LOBYTE(v4) = v2;
  v2 &= ~2u;
  v5 = v3 & 0xFD;
  BYTE4(v103) = v3 & 1 | v2 & 0xFE | v3 & 2;
  LODWORD(v3) = *(_DWORD *)(a1 + 408);
  *(_BYTE *)(a1 + 396) = v2 & 1 | v5 & 0xFE | v4 & 2;
  LODWORD(v4) = v105;
  LODWORD(v105) = v3;
  v6 = *(_QWORD *)(a1 + 416);
  v7 = BYTE4(v105);
  *(_DWORD *)(a1 + 408) = v4;
  v8 = v106;
  v106 = v6;
  LOBYTE(v6) = *(_BYTE *)(a1 + 412);
  *(_QWORD *)(a1 + 416) = v8;
  LOBYTE(v8) = v7;
  v7 &= ~2u;
  BYTE4(v105) = v6 & 1 | v7 & 0xFE | v6 & 2;
  *(_BYTE *)(a1 + 412) = v7 & 1 | v6 & 0xFC | v8 & 2;
  sub_25A130((char *)&v103);
  v9 = *(_QWORD *)(a1 + 240);
  if ( !v9 )
  {
    v45 = 0;
    v12 = (_DWORD *)&dword_30;
    goto LABEL_6;
  }
  result = 48LL * *(unsigned int *)(v9 - 4);
  v11 = v9 + result;
  v12 = (unsigned int *)(v9 + 48);
  v45 = v11;
  if ( result != 48 )
  {
    do
    {
LABEL_6:
      v20 = v12[1];
      v21 = qword_1C7F2C0;
      v47 = 0;
      v48 &= 0xFCu;
      v22 = *(_QWORD *)(a1 + 336) + 32 * v20;
      v51 &= 0xFCu;
      v49 = 0;
      v50 = 1;
      v52 = 0;
      if ( (*(_BYTE *)(v22 + 4) & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v47, v22);
      else
        v47 = *(_DWORD *)v22;
      if ( (*(_BYTE *)(v22 + 20) & 1) != 0 )
      {
        sub_182C690(v21, &v50, v22 + 16);
      }
      else
      {
        v23 = *(_DWORD *)(v22 + 16);
        v51 &= ~1u;
        v50 = v23;
      }
      v54 &= 0xFCu;
      v24 = qword_1C7F2C0;
      v57 &= 0xFCu;
      v53 = 0;
      v55 = 0;
      v56 = 1;
      v58 = 0;
      if ( (*(_BYTE *)(&qword_1C7F2A0 + 1) & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v53, &qword_1C7F2A0);
      else
        v53 = qword_1C7F2A0;
      if ( (qword_1C7F2B0 & 0x100000000LL) != 0 )
      {
        sub_182C690(v24, &v56, &qword_1C7F2B0);
      }
      else
      {
        v57 &= ~1u;
        v56 = qword_1C7F2B0;
      }
      v25 = *v12;
      v26 = qword_1C7F2C0;
      v59 = 0;
      v60 &= 0xFCu;
      v27 = *(_QWORD *)(a1 + 336) + 32 * v25;
      v63 &= 0xFCu;
      v61 = 0;
      v62 = 1;
      v64 = 0;
      if ( (*(_BYTE *)(v27 + 4) & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v59, v27);
      else
        v59 = *(_DWORD *)v27;
      if ( (*(_BYTE *)(v27 + 20) & 1) != 0 )
      {
        sub_182C690(v26, &v62, v27 + 16);
      }
      else
      {
        v28 = *(_DWORD *)(v27 + 16);
        v63 &= ~1u;
        v62 = v28;
      }
      v66 &= 0xFCu;
      v29 = qword_1C7F2C0;
      v69 &= 0xFCu;
      v65 = 0;
      v67 = 0;
      v68 = 1;
      v70 = 0;
      if ( (*(_BYTE *)(&qword_1C7F2A0 + 1) & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v65, &qword_1C7F2A0);
      else
        v65 = qword_1C7F2A0;
      if ( (qword_1C7F2B0 & 0x100000000LL) != 0 )
      {
        sub_182C690(v29, &v68, &qword_1C7F2B0);
      }
      else
      {
        v69 &= ~1u;
        v68 = qword_1C7F2B0;
      }
      v72 &= 0xFCu;
      v30 = qword_1C7F2C0;
      v75 &= 0xFCu;
      v71 = 0;
      v73 = 0;
      v74 = 1;
      v76 = 0;
      if ( (v12[3] & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v71, v12 + 2);
      else
        v71 = v12[2];
      if ( (v12[7] & 1) != 0 )
      {
        sub_182C690(v30, &v74, v12 + 6);
      }
      else
      {
        v31 = v12[6];
        v75 &= ~1u;
        v74 = v31;
      }
      v78 &= 0xFCu;
      v32 = qword_1C7F2C0;
      v81 &= 0xFCu;
      v77 = 0;
      v79 = 0;
      v80 = 1;
      v82 = 0;
      if ( (*(_BYTE *)(&qword_1C7F2A0 + 1) & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v77, &qword_1C7F2A0);
      else
        v77 = qword_1C7F2A0;
      if ( (qword_1C7F2B0 & 0x100000000LL) != 0 )
      {
        sub_182C690(v32, &v80, &qword_1C7F2B0);
      }
      else
      {
        v81 &= ~1u;
        v80 = qword_1C7F2B0;
      }
      sub_27B340((__int64)&v99, (__int64)&v59, (int *)&v71);
      if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v47, (__int64)&v99) )
      {
        sub_27B340((__int64)&v103, (__int64)&v65, &v77);
        v33 = sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v103, (__int64)&v53);
        v43 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v103);
        sub_182CBA0(v43, &v105);
        v44 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v99);
        sub_182CBA0(v44, &v101);
        if ( v33 )
        {
          sub_3EBB80((__int64)v95, (__int64)&v53, (__int64)&v65);
          sub_3EBB80((__int64)v97, (__int64)v95, (__int64)&v77);
          v103 = 2;
          v104 = 0;
          v105 = 1;
          v106 = 0;
          sub_182CBA0(qword_1C7F2C0, &v105);
          BYTE4(v105) &= ~1u;
          LODWORD(v105) = 1;
          sub_3EBE30((__int64)&v99, (__int64)&v103, (__int64)v97);
          v34 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v103);
          sub_182CBA0(v34, &v105);
          sub_27B340((__int64)v89, (__int64)&v59, (int *)&v71);
          sub_3EBB80((__int64)&v91, (__int64)v89, (__int64)&v47);
          v103 = 0;
          v35 = qword_1C7F2C0;
          v104 = 0;
          v105 = 1;
          v106 = 0;
          if ( (v92 & 1) != 0 )
            sub_182C690(qword_1C7F2C0, &v103, &v91);
          else
            LODWORD(v103) = v91;
          if ( (v94 & 1) == 0 )
          {
            BYTE4(v105) &= ~1u;
            v36 = qword_1C7F2C0;
            LODWORD(v105) = v93;
            if ( !(_DWORD)v103 )
              goto LABEL_57;
LABEL_36:
            if ( (v100 & 1) != 0 || v99 != 1 || (v102 & 1) != 0 || v101 != 1 )
            {
              sub_1831650(v36, &v103, &v101);
              sub_1831650(v36, &v105, &v99);
              if ( (int)v105 < 0 )
              {
                sub_1831620(v36, &v103);
                sub_1831620(v36, &v105);
              }
              sub_6E0DD0((__int64)v36, (__int64)&v103);
            }
            else
            {
LABEL_57:
              sub_27B950((__int64)v36, (__int64)&v103, (int *)&v103);
            }
            v83 = 0;
            v84 &= 0xFCu;
            v87 &= 0xFCu;
            v85 = 0;
            v86 = 1;
            v88 = 0;
            sub_27B950((__int64)qword_1C7F2C0, (__int64)&v83, (int *)&v103);
            v46 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v103);
            sub_182CBA0(v46, &v105);
            v40 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v91);
            sub_182CBA0(v40, &v93);
            v41 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v89);
            sub_182CBA0(v41, v90);
            v42 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v99);
            sub_182CBA0(v42, &v101);
            v37 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v97);
            sub_182CBA0(v37, v98);
            v38 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v95);
            sub_182CBA0(v38, v96);
            if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v83, a1 + 392) )
              sub_27B950((__int64)qword_1C7F2C0, a1 + 392, &v83);
            v39 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v83);
            sub_182CBA0(v39, &v86);
            goto LABEL_5;
          }
          sub_182C690(v35, &v105, &v93);
          v36 = qword_1C7F2C0;
          if ( (_DWORD)v103 )
            goto LABEL_36;
          goto LABEL_57;
        }
      }
      else
      {
        v13 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v99);
        sub_182CBA0(v13, &v101);
      }
LABEL_5:
      v14 = qword_1C7F2C0;
      v12 += 12;
      sub_182CBA0(qword_1C7F2C0, &v77);
      sub_182CBA0(v14, &v80);
      v15 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v71);
      sub_182CBA0(v15, &v74);
      v16 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v65);
      sub_182CBA0(v16, &v68);
      v17 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v59);
      sub_182CBA0(v17, &v62);
      v18 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v53);
      sub_182CBA0(v18, &v56);
      v19 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v47);
      sub_182CBA0(v19, &v50);
      result = v45;
    }
    while ( v12 != (unsigned int *)v45 );
  }
  return result;
}

