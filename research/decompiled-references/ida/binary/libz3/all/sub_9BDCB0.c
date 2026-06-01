__int64 __fastcall sub_9BDCB0(_QWORD *a1, char a2, unsigned int a3, int *a4, __int64 a5, __int64 a6)
{
  unsigned int v9; // r13d
  int v11; // eax
  __int64 v12; // r14
  int *v13; // rax
  int v14; // eax
  int v15; // edx
  int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rcx
  char v19; // si
  __int64 v20; // rdx
  char v21; // al
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rax
  int *v25; // rax
  __int64 v26; // rax
  int v27; // edx
  __int64 v28; // rdx
  char v29; // cl
  __int64 v30; // rdx
  int v31; // edx
  char v32; // cl
  __int64 v33; // rax
  __int64 v34; // rdx
  char v35; // si
  __int64 v36; // rax
  char v37; // cl
  __int64 v38; // rdx
  char v39; // si
  __int64 v40; // rax
  __int64 v41; // rdx
  char v42; // si
  char v43; // cl
  __int64 v44; // rax
  __int64 v45; // rdx
  int v46; // edx
  char v47; // cl
  __int64 v48; // rax
  __int64 v49; // rdx
  char v50; // si
  __int64 v51; // rax
  char v52; // cl
  __int64 v53; // rdx
  char v54; // si
  __int64 v55; // rax
  __int64 v56; // rdx
  char v57; // si
  char v58; // cl
  __int64 v59; // rax
  __int64 v60; // rdx
  int v61; // edx
  char v62; // cl
  __int64 v63; // rax
  __int64 v64; // rdx
  char v65; // si
  __int64 v66; // rax
  char v67; // cl
  __int64 v68; // rdx
  char v69; // si
  __int64 v70; // rax
  __int64 v71; // rdx
  char v72; // si
  char v73; // cl
  __int64 v74; // rax
  __int64 v75; // rdx
  void *v76; // [rsp+8h] [rbp-160h]
  _BYTE *v78; // [rsp+20h] [rbp-148h]
  int v79; // [rsp+30h] [rbp-138h] BYREF
  char v80; // [rsp+34h] [rbp-134h]
  __int64 v81; // [rsp+38h] [rbp-130h]
  int v82; // [rsp+40h] [rbp-128h]
  char v83; // [rsp+44h] [rbp-124h]
  __int64 v84; // [rsp+48h] [rbp-120h]
  int v85; // [rsp+50h] [rbp-118h] BYREF
  char v86; // [rsp+54h] [rbp-114h]
  __int64 v87; // [rsp+58h] [rbp-110h]
  int v88; // [rsp+60h] [rbp-108h]
  char v89; // [rsp+64h] [rbp-104h]
  __int64 v90; // [rsp+68h] [rbp-100h]
  __int64 v91; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v92; // [rsp+78h] [rbp-F0h]
  __int64 v93; // [rsp+80h] [rbp-E8h] BYREF
  __int64 v94; // [rsp+88h] [rbp-E0h]
  char v95[32]; // [rsp+90h] [rbp-D8h] BYREF
  char v96[32]; // [rsp+B0h] [rbp-B8h] BYREF
  char v97[32]; // [rsp+D0h] [rbp-98h] BYREF
  int v98; // [rsp+F0h] [rbp-78h] BYREF
  char v99; // [rsp+F4h] [rbp-74h]
  __int64 v100; // [rsp+F8h] [rbp-70h]
  int v101; // [rsp+100h] [rbp-68h]
  char v102; // [rsp+104h] [rbp-64h]
  __int64 v103; // [rsp+108h] [rbp-60h]
  int v104; // [rsp+110h] [rbp-58h] BYREF
  char v105; // [rsp+114h] [rbp-54h]
  __int64 v106; // [rsp+118h] [rbp-50h]
  int v107; // [rsp+120h] [rbp-48h]
  char v108; // [rsp+124h] [rbp-44h]
  __int64 v109; // [rsp+128h] [rbp-40h]

  v9 = sub_9BDB80((__int64)a1, a5, a6);
  if ( (_BYTE)v9 )
  {
    sub_91F480((__int64)&v79, (__int64)&qword_1C7F180);
    v11 = *a4;
    if ( a2 )
    {
      if ( v11 <= 0 )
      {
LABEL_5:
        v12 = a3;
        if ( !*(_QWORD *)(a1[86] + 8LL * a3) )
          goto LABEL_15;
        v13 = sub_9AA900((__int64)a1, a3);
        sub_992E80((__int64)&v91, *(_QWORD *)(a1[86] + 8LL * a3) + 16LL, (__int64)v13);
        sub_9AFE60((__int64)v96, (__int64)&v91, (__int64)a4);
        sub_91F480((__int64)&v98, (__int64)v96);
        v14 = v98;
        if ( v98 >= 0 )
        {
          v15 = v104;
          if ( v98 || v104 >= 0 )
            goto LABEL_8;
        }
        goto LABEL_14;
      }
    }
    else if ( v11 >= 0 )
    {
      goto LABEL_5;
    }
    v12 = a3;
    v24 = *(_QWORD *)(a1[85] + 8LL * a3);
    if ( !v24 )
    {
LABEL_15:
      v91 = 1;
      v92 = 0;
      v93 = 1;
      v94 = 0;
      sub_182CBA0(qword_1C7F2C0, &v93);
      BYTE4(v93) &= ~1u;
      v78 = (_BYTE *)(4 * v12);
      v26 = a1[82];
      LODWORD(v93) = 1;
      if ( (*(_BYTE *)(v26 + 4 * v12 + 3) & 0x40) == 0 )
        goto LABEL_16;
      sub_992B90((__int64)&v98, (__int64)a4);
      v27 = v98;
      v98 = v91;
      LODWORD(v91) = v27;
      v28 = v100;
      v100 = v92;
      v92 = v28;
      v29 = v99 & 1;
      LOBYTE(v28) = BYTE4(v91) & 0xFC | v99 & 2;
      v99 = BYTE4(v91) & 1 | v99 & 0xFC | BYTE4(v91) & 2;
      BYTE4(v91) = v29 | v28;
      LODWORD(v28) = v101;
      v101 = v93;
      LODWORD(v93) = v28;
      v30 = v103;
      v103 = v94;
      v94 = v30;
      LOBYTE(v30) = v102 & 1 | BYTE4(v93) & 0xFC | v102 & 2;
      v102 = BYTE4(v93) & 1 | v102 & 0xFC | BYTE4(v93) & 2;
      BYTE4(v93) = v30;
      sub_25A130((char *)&v98);
      if ( (v78[a1[82] + 3] & 0x40) == 0 )
        goto LABEL_16;
      if ( (v91 & 0x100000000LL) == 0 && (_DWORD)v91 == 1 && (v93 & 0x100000000LL) == 0 && (_DWORD)v93 == 1 )
        goto LABEL_57;
      if ( *(int *)a5 >= 0 && (*(_DWORD *)a5 || *(int *)(a5 + 32) >= 0) )
      {
        sub_992D20((__int64)v96, a5, (__int64)&v91);
        sub_894960((__int64)&v98, (__int64)v96);
        v31 = v98;
        v32 = v99;
        v98 = *(_DWORD *)a5;
        v33 = *(_QWORD *)(a5 + 8);
        *(_DWORD *)a5 = v31;
        v34 = v100;
        v100 = v33;
        LOBYTE(v33) = *(_BYTE *)(a5 + 4);
        *(_QWORD *)(a5 + 8) = v34;
        LOBYTE(v34) = v32;
        v32 &= ~2u;
        v35 = v33 & 0xFD;
        v99 = v33 & 1 | v32 & 0xFE | v33 & 2;
        LODWORD(v33) = *(_DWORD *)(a5 + 16);
        *(_BYTE *)(a5 + 4) = v32 & 1 | v35 & 0xFE | v34 & 2;
        LODWORD(v34) = v101;
        v101 = v33;
        v36 = *(_QWORD *)(a5 + 24);
        v37 = v102;
        *(_DWORD *)(a5 + 16) = v34;
        v38 = v103;
        v103 = v36;
        LOBYTE(v36) = *(_BYTE *)(a5 + 20);
        *(_QWORD *)(a5 + 24) = v38;
        LOBYTE(v38) = v37;
        v37 &= ~2u;
        v39 = v36 & 0xFD;
        v102 = v36 & 1 | v37 & 0xFE | v36 & 2;
        LODWORD(v36) = *(_DWORD *)(a5 + 32);
        *(_BYTE *)(a5 + 20) = v37 & 1 | v39 & 0xFE | v38 & 2;
        LODWORD(v38) = v104;
        v104 = v36;
        v40 = *(_QWORD *)(a5 + 40);
        *(_DWORD *)(a5 + 32) = v38;
        v41 = v106;
        v106 = v40;
        *(_QWORD *)(a5 + 40) = v41;
        v42 = *(_BYTE *)(a5 + 36);
        LOBYTE(v40) = v42 & 2;
        v42 &= ~2u;
        LOBYTE(v41) = v105 & 1 | v42 & 0xFE | v105 & 2;
        v43 = v108;
        v105 = v42 & 1 | v105 & 0xFC | v40 & 0xFE;
        LODWORD(v40) = *(_DWORD *)(a5 + 48);
        *(_BYTE *)(a5 + 36) = v41;
        LODWORD(v41) = v107;
        v107 = v40;
        v44 = *(_QWORD *)(a5 + 56);
        *(_DWORD *)(a5 + 48) = v41;
        v45 = v109;
        v109 = v44;
        LOBYTE(v44) = *(_BYTE *)(a5 + 52);
        *(_QWORD *)(a5 + 56) = v45;
        LOBYTE(v45) = v43;
        v43 &= ~2u;
        v108 = v44 & 1 | v43 & 0xFE | v44 & 2;
        *(_BYTE *)(a5 + 52) = v43 & 1 | v44 & 0xFC | v45 & 2;
        sub_25A130((char *)&v104);
        sub_25A130((char *)&v98);
        sub_25A130(v96);
      }
      else
      {
        sub_894960((__int64)&v98, (__int64)&v91);
        v61 = v98;
        v62 = v99;
        v98 = *(_DWORD *)a5;
        v63 = *(_QWORD *)(a5 + 8);
        *(_DWORD *)a5 = v61;
        v64 = v100;
        v100 = v63;
        LOBYTE(v63) = *(_BYTE *)(a5 + 4);
        *(_QWORD *)(a5 + 8) = v64;
        LOBYTE(v64) = v62;
        v62 &= ~2u;
        v65 = v63 & 0xFD;
        v99 = v63 & 1 | v62 & 0xFE | v63 & 2;
        LODWORD(v63) = *(_DWORD *)(a5 + 16);
        *(_BYTE *)(a5 + 4) = v62 & 1 | v65 & 0xFE | v64 & 2;
        LODWORD(v64) = v101;
        v101 = v63;
        v66 = *(_QWORD *)(a5 + 24);
        v67 = v102;
        *(_DWORD *)(a5 + 16) = v64;
        v68 = v103;
        v103 = v66;
        LOBYTE(v66) = *(_BYTE *)(a5 + 20);
        *(_QWORD *)(a5 + 24) = v68;
        LOBYTE(v68) = v67;
        v67 &= ~2u;
        v69 = v66 & 0xFD;
        v102 = v66 & 1 | v67 & 0xFE | v66 & 2;
        LODWORD(v66) = *(_DWORD *)(a5 + 32);
        *(_BYTE *)(a5 + 20) = v67 & 1 | v69 & 0xFE | v68 & 2;
        LODWORD(v68) = v104;
        v104 = v66;
        v70 = *(_QWORD *)(a5 + 40);
        *(_DWORD *)(a5 + 32) = v68;
        v71 = v106;
        v106 = v70;
        *(_QWORD *)(a5 + 40) = v71;
        v72 = *(_BYTE *)(a5 + 36);
        LOBYTE(v70) = v72 & 2;
        v72 &= ~2u;
        LOBYTE(v71) = v105 & 1 | v72 & 0xFE | v105 & 2;
        v73 = v108;
        v105 = v72 & 1 | v105 & 0xFC | v70 & 0xFE;
        LODWORD(v70) = *(_DWORD *)(a5 + 48);
        *(_BYTE *)(a5 + 36) = v71;
        LODWORD(v71) = v107;
        v107 = v70;
        v74 = *(_QWORD *)(a5 + 56);
        *(_DWORD *)(a5 + 48) = v71;
        v75 = v109;
        v109 = v74;
        LOBYTE(v74) = *(_BYTE *)(a5 + 52);
        *(_QWORD *)(a5 + 56) = v75;
        LOBYTE(v75) = v73;
        v73 &= ~2u;
        v108 = v74 & 1 | v73 & 0xFE | v74 & 2;
        *(_BYTE *)(a5 + 52) = v73 & 1 | v74 & 0xFC | v75 & 2;
        sub_25A130((char *)&v104);
        sub_25A130((char *)&v98);
      }
      sub_9B0620((int)a1, a5, a6);
      if ( (v78[a1[82] + 3] & 0x40) != 0 )
      {
LABEL_57:
        if ( (*(_BYTE *)(a6 + 20) & 1) != 0 || *(_DWORD *)(a6 + 16) != 1 || *(_DWORD *)(a6 + 32) )
        {
          sub_9A9130((__int64)v96, a6);
          sub_894960((__int64)&v98, (__int64)v96);
          v46 = v98;
          v47 = v99;
          v98 = *(_DWORD *)a6;
          v48 = *(_QWORD *)(a6 + 8);
          *(_DWORD *)a6 = v46;
          v49 = v100;
          v100 = v48;
          LOBYTE(v48) = *(_BYTE *)(a6 + 4);
          *(_QWORD *)(a6 + 8) = v49;
          LOBYTE(v49) = v47;
          v47 &= ~2u;
          v50 = v48 & 0xFD;
          v99 = v48 & 1 | v47 & 0xFE | v48 & 2;
          LODWORD(v48) = *(_DWORD *)(a6 + 16);
          *(_BYTE *)(a6 + 4) = v47 & 1 | v50 & 0xFE | v49 & 2;
          LODWORD(v49) = v101;
          v101 = v48;
          v51 = *(_QWORD *)(a6 + 24);
          v52 = v102;
          *(_DWORD *)(a6 + 16) = v49;
          v53 = v103;
          v103 = v51;
          LOBYTE(v51) = *(_BYTE *)(a6 + 20);
          *(_QWORD *)(a6 + 24) = v53;
          LOBYTE(v53) = v52;
          v52 &= ~2u;
          v54 = v51 & 0xFD;
          v102 = v51 & 1 | v52 & 0xFE | v51 & 2;
          LODWORD(v51) = *(_DWORD *)(a6 + 32);
          *(_BYTE *)(a6 + 20) = v52 & 1 | v54 & 0xFE | v53 & 2;
          LODWORD(v53) = v104;
          v104 = v51;
          v55 = *(_QWORD *)(a6 + 40);
          *(_DWORD *)(a6 + 32) = v53;
          v56 = v106;
          v106 = v55;
          *(_QWORD *)(a6 + 40) = v56;
          v57 = *(_BYTE *)(a6 + 36);
          LOBYTE(v55) = v57 & 2;
          v57 &= ~2u;
          LOBYTE(v56) = v105 & 1 | v57 & 0xFE | v105 & 2;
          v58 = v108;
          v105 = v57 & 1 | v105 & 0xFC | v55 & 0xFE;
          LODWORD(v55) = *(_DWORD *)(a6 + 48);
          *(_BYTE *)(a6 + 36) = v56;
          LODWORD(v56) = v107;
          v107 = v55;
          v59 = *(_QWORD *)(a6 + 56);
          *(_DWORD *)(a6 + 48) = v56;
          v60 = v109;
          v109 = v59;
          LOBYTE(v59) = *(_BYTE *)(a6 + 52);
          *(_QWORD *)(a6 + 56) = v60;
          LOBYTE(v60) = v58;
          v58 &= ~2u;
          v108 = v59 & 1 | v58 & 0xFE | v59 & 2;
          *(_BYTE *)(a6 + 52) = v58 & 1 | v59 & 0xFC | v60 & 2;
          sub_25A130((char *)&v104);
          sub_25A130((char *)&v98);
          sub_25A130(v96);
          sub_9B0620((int)a1, a5, a6);
          if ( (v80 & 1) != 0 )
            goto LABEL_18;
        }
        else if ( (v80 & 1) != 0 )
        {
LABEL_41:
          sub_9A9130((__int64)&v98, (__int64)&v79);
          sub_27B950((__int64)qword_1C7F2C0, (__int64)&v79, &v98);
          sub_992B50((__int64)&v85);
          sub_25A130((char *)&v98);
          sub_9B0620((int)a1, a5, (__int64)&v79);
LABEL_19:
          if ( (*(_BYTE *)(a6 + 4) & 1) == 0
            && *(_DWORD *)a6 == -1
            && (*(_BYTE *)(a6 + 20) & 1) == 0
            && *(_DWORD *)(a6 + 16) == 1
            && !*(_DWORD *)(a6 + 32)
            || sub_927C80((__int64)&v79, a6) )
          {
            sub_98B520(a6, &v79);
            goto LABEL_23;
          }
LABEL_22:
          v9 = 0;
LABEL_23:
          sub_25A130((char *)&v91);
          sub_25A130((char *)&v85);
          sub_25A130((char *)&v79);
          return v9;
        }
      }
      else
      {
LABEL_16:
        if ( (v80 & 1) != 0 )
          goto LABEL_19;
      }
      if ( v79 == -1 && (v83 & 1) == 0 && v82 == 1 && !v85 )
        goto LABEL_22;
LABEL_18:
      if ( (v78[a1[82] + 3] & 0x40) == 0 )
        goto LABEL_19;
      goto LABEL_41;
    }
    v76 = (void *)(v24 + 16);
    v25 = sub_9AA900((__int64)a1, a3);
    sub_992E80((__int64)&v91, (__int64)v25, (__int64)v76);
    sub_9AFE60((__int64)v96, (__int64)&v91, (__int64)a4);
    sub_91F480((__int64)&v98, (__int64)v96);
    v14 = v98;
    if ( v98 >= 0 )
    {
      v15 = v104;
      if ( v98 || v104 >= 0 )
      {
LABEL_8:
        v16 = v79;
        v79 = v14;
        v98 = v16;
        v17 = v100;
        v100 = v81;
        v81 = v17;
        LOBYTE(v17) = v80 & 0xFC | v99 & 2 | v99 & 1;
        v99 = v80 & 1 | v99 & 0xFC | v80 & 2;
        v80 = v17;
        LODWORD(v17) = v101;
        v101 = v82;
        v82 = v17;
        v18 = v103;
        v103 = v84;
        v84 = v18;
        LOBYTE(v18) = v102 & 1;
        v19 = v83 & 0xFC | v102 & 2;
        v102 = v83 & 1 | v102 & 0xFC | v83 & 2;
        v83 = v19 | v18;
        v104 = v85;
        v85 = v15;
        v20 = v106;
        v106 = v87;
        v87 = v20;
        v21 = v86 & 1 | v105 & 0xFC | v86 & 2;
        v86 = v105 & 1 | v86 & 0xFC | v105 & 2;
        v105 = v21;
        v22 = v88;
        v88 = v107;
        v107 = v22;
        v23 = v109;
        v109 = v90;
        v90 = v23;
        LOBYTE(v23) = v108 & 1 | v89 & 0xFC | v108 & 2;
        v108 = v89 & 1 | v108 & 0xFC | v89 & 2;
        v89 = v23;
        sub_25A130((char *)&v104);
        sub_25A130((char *)&v98);
        sub_25A130(v97);
        sub_25A130(v96);
        sub_25A130(v95);
        sub_25A130((char *)&v91);
        goto LABEL_15;
      }
    }
LABEL_14:
    sub_1831620(qword_1C7F2C0, &v98);
    sub_1831620(qword_1C7F2C0, &v104);
    v14 = v98;
    v15 = v104;
    goto LABEL_8;
  }
  return v9;
}

