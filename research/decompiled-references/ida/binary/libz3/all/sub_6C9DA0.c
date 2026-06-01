__int64 __fastcall sub_6C9DA0(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 **a4,
        char a5,
        char a6,
        char a7,
        char a8,
        int *a9,
        void *a10,
        __int64 *a11)
{
  __int64 v14; // rsi
  __int64 v15; // rdi
  unsigned int v16; // eax
  unsigned int v17; // r15d
  _DWORD *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // r12
  void *v21; // r13
  int v22; // eax
  __int64 v23; // r12
  __int64 v24; // rdx
  __int64 v25; // r13
  __int64 v26; // rax
  _DWORD *v27; // r12
  int v28; // eax
  void *v29; // rbx
  _QWORD **v30; // rdx
  void *v31; // r15
  void *v32; // r15
  int v33; // edx
  __int64 v34; // rdx
  char v35; // cl
  __int64 v36; // rdx
  char v37; // cl
  void *v38; // rbx
  __int64 v39; // r13
  __int64 v40; // r9
  __int64 v41; // r11
  __int64 v42; // r15
  void (__fastcall *v43)(__int64, __int64, __int64, __int64, _QWORD); // r10
  _DWORD *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rbx
  bool v47; // zf
  void *v48; // rbx
  _DWORD *v49; // rbx
  __int64 v50; // rax
  __int64 v51; // r12
  void *v52; // r13
  int v53; // eax
  __int64 *v54; // r12
  __int64 v55; // rdx
  __int64 v56; // r13
  __int64 v57; // rax
  _DWORD *v58; // r12
  int v59; // eax
  void *v60; // rbx
  _QWORD **v61; // rdx
  void *v62; // r15
  void *v63; // r15
  int v64; // edx
  __int64 v65; // rdx
  char v66; // cl
  __int64 v67; // rdx
  char v68; // cl
  void *v69; // rbx
  __int64 v70; // r13
  __int64 v71; // r9
  __int64 v72; // r11
  __int64 v73; // r15
  void (__fastcall *v74)(__int64, __int64, __int64, __int64, _QWORD); // r10
  _DWORD *v75; // rax
  __int64 v76; // rax
  __int64 v77; // rbx
  void *v78; // rbx
  _DWORD *v80; // rax
  int v81; // eax
  int v82; // eax
  char v83; // [rsp+0h] [rbp-120h]
  __int64 v84; // [rsp+0h] [rbp-120h]
  char v85; // [rsp+8h] [rbp-118h]
  __int64 v86; // [rsp+8h] [rbp-118h]
  __int64 v87; // [rsp+10h] [rbp-110h]
  __int64 v88; // [rsp+10h] [rbp-110h]
  void (__fastcall *v89)(__int64, __int64, __int64, __int64, _QWORD); // [rsp+18h] [rbp-108h]
  void (__fastcall *v90)(__int64, __int64, __int64, __int64, _QWORD); // [rsp+18h] [rbp-108h]
  __int64 v91; // [rsp+20h] [rbp-100h]
  __int64 v92; // [rsp+20h] [rbp-100h]
  char v94; // [rsp+3Fh] [rbp-E1h]
  __int64 v96; // [rsp+48h] [rbp-D8h]
  __int64 v97; // [rsp+50h] [rbp-D0h]
  __int64 v98; // [rsp+50h] [rbp-D0h]
  __int64 v99; // [rsp+60h] [rbp-C0h]
  __int64 v100; // [rsp+60h] [rbp-C0h]
  void *v101; // [rsp+60h] [rbp-C0h]
  void *v102; // [rsp+60h] [rbp-C0h]
  __int64 v104; // [rsp+70h] [rbp-B0h]
  __int64 v105; // [rsp+70h] [rbp-B0h]
  __int64 v106; // [rsp+80h] [rbp-A0h] BYREF
  __int64 v107; // [rsp+88h] [rbp-98h]
  __int64 v108; // [rsp+90h] [rbp-90h] BYREF
  __int64 v109; // [rsp+98h] [rbp-88h]
  __int64 v110; // [rsp+A0h] [rbp-80h] BYREF
  __int64 v111; // [rsp+A8h] [rbp-78h]
  int v112; // [rsp+B0h] [rbp-70h] BYREF
  char v113; // [rsp+B4h] [rbp-6Ch]
  __int64 v114; // [rsp+B8h] [rbp-68h]
  int v115; // [rsp+C0h] [rbp-60h] BYREF
  char v116; // [rsp+C4h] [rbp-5Ch]
  __int64 v117; // [rsp+C8h] [rbp-58h]
  __int64 v118; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v119; // [rsp+D8h] [rbp-48h]
  __int64 v120; // [rsp+E0h] [rbp-40h] BYREF
  __int64 v121; // [rsp+E8h] [rbp-38h]

  v96 = *(_QWORD *)(a1 + 8);
  v14 = v96;
  v107 = v96;
  v85 = a6;
  v83 = a7;
  v106 = 0;
  v94 = a8 ^ 1;
  if ( !a5 )
  {
    if ( v94 )
    {
      v15 = a2[9];
      if ( !v15 )
        goto LABEL_101;
    }
    else
    {
      v15 = a2[11];
      if ( !v15 )
        goto LABEL_101;
    }
    v17 = *(_DWORD *)(v15 - 4);
    if ( a6 )
    {
      if ( *(_DWORD *)(v15 - 4) )
      {
LABEL_55:
        v105 = 0;
        v86 = 8LL * v17;
        while ( 1 )
        {
          if ( v94 )
          {
            v98 = *(_QWORD *)(a2[21] + v105);
            v49 = *(_DWORD **)(a2[9] + v105);
            if ( v49 )
              ++v49[2];
            v50 = a2[16];
          }
          else
          {
            v98 = *(_QWORD *)(a2[23] + v105);
            v49 = *(_DWORD **)(a2[11] + v105);
            if ( v49 )
              ++v49[2];
            v50 = a2[17];
          }
          v110 = 1;
          v108 = 0;
          v51 = v50 + 4 * v105;
          v109 = 0;
          v111 = 0;
          v52 = qword_1C7F2C0;
          if ( (*(_BYTE *)(v51 + 4) & 1) != 0 )
            sub_182C690(qword_1C7F2C0, &v108, v51);
          else
            LODWORD(v108) = *(_DWORD *)v51;
          if ( (*(_BYTE *)(v51 + 20) & 1) != 0 )
          {
            sub_182C690(v52, &v110, v51 + 16);
          }
          else
          {
            v53 = *(_DWORD *)(v51 + 16);
            BYTE4(v110) &= ~1u;
            LODWORD(v110) = v53;
          }
          v54 = *a4;
          v55 = (__int64)a4[1];
          v56 = **a4;
          if ( v55 )
          {
            sub_6C19A0((__int64)*a4, (__int64)&v108, v55);
            v57 = sub_15E1B70(v54[2]);
            v58 = (_DWORD *)v57;
            if ( v57 )
              ++*(_DWORD *)(v57 + 8);
            if ( v49 )
            {
              v59 = v49[2] - 1;
              v49[2] = v59;
              if ( !v59 )
                goto LABEL_118;
            }
          }
          else
          {
            if ( v49 )
            {
              v82 = v49[2];
              v58 = v49;
              v49[2] = v82;
              if ( v82 )
                goto LABEL_68;
LABEL_118:
              sub_15D7BC0(v56, v49);
              goto LABEL_68;
            }
            v58 = nullptr;
          }
LABEL_68:
          v118 = 0;
          v119 = 0;
          v120 = 1;
          v60 = qword_1C7F2C0;
          v121 = 0;
          if ( (v108 & 0x100000000LL) != 0 )
            sub_182C690(qword_1C7F2C0, &v118, &v108);
          else
            LODWORD(v118) = v108;
          if ( (v110 & 0x100000000LL) != 0 )
          {
            sub_182C690(v60, &v120, &v110);
          }
          else
          {
            BYTE4(v120) &= ~1u;
            LODWORD(v120) = v110;
          }
          v61 = a4 + 3;
          if ( (v120 & 0x100000000LL) != 0
            || (_DWORD)v120 != 1
            || (*((_BYTE *)a4 + 44) & 1) != 0
            || *((_DWORD *)a4 + 10) != 1 )
          {
            sub_1848FF0(qword_1C7F2C0, &v118, v61);
          }
          else
          {
            v102 = qword_1C7F2C0;
            sub_1831650(qword_1C7F2C0, &v118, v61);
            sub_182CBA0(v102, &v120);
            BYTE4(v120) &= ~1u;
            LODWORD(v120) = 1;
          }
          v113 &= 0xFCu;
          v116 &= 0xFCu;
          v112 = 0;
          v62 = qword_1C7F2C0;
          v114 = 0;
          v115 = 1;
          v117 = 0;
          if ( (v118 & 0x100000000LL) != 0 )
          {
            sub_182C690(qword_1C7F2C0, &v112, &v118);
            if ( (v120 & 0x100000000LL) == 0 )
            {
LABEL_77:
              v116 &= ~1u;
              v115 = v120;
              goto LABEL_78;
            }
          }
          else
          {
            v112 = v118;
            if ( (v120 & 0x100000000LL) == 0 )
              goto LABEL_77;
          }
          sub_182C690(v62, &v115, &v120);
LABEL_78:
          v63 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v118);
          sub_182CBA0(v63, &v120);
          v64 = v112;
          v112 = v108;
          LODWORD(v108) = v64;
          v65 = v114;
          v114 = v109;
          v109 = v65;
          v66 = v113 & 1;
          LOBYTE(v65) = BYTE4(v108) & 0xFC | v113 & 2;
          v113 = BYTE4(v108) & 1 | v113 & 0xFC | BYTE4(v108) & 2;
          BYTE4(v108) = v66 | v65;
          LODWORD(v65) = v115;
          v115 = v110;
          LODWORD(v110) = v65;
          v67 = v117;
          v117 = v111;
          v111 = v67;
          v68 = v116 & 1;
          LOBYTE(v67) = BYTE4(v110) & 0xFC | v116 & 2;
          v116 = BYTE4(v110) & 1 | v116 & 0xFC | BYTE4(v110) & 2;
          BYTE4(v110) = v68 | v67;
          v69 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v112);
          sub_182CBA0(v69, &v115);
          sub_6C8BE0(a1 + 32, a3, v83, a9, a10, (int *)&v108, v58, &v106);
          v70 = *a11;
          v100 = a11[1];
          if ( *a11 )
            ++*(_DWORD *)(v70 + 8);
          sub_14EC390(a1 + 344, v98, v106, a11);
          v71 = *(_QWORD *)(a1 + 24);
          v72 = v106;
          v73 = *(_QWORD *)(a1 + 8);
          v74 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v71 + 96LL);
          if ( !*(_WORD *)(v98 + 4) )
          {
            v75 = *(_DWORD **)(*(_QWORD *)(v98 + 16) + 24LL);
            if ( v75 )
            {
              if ( !*v75 && v75[1] == 8 && *(_DWORD *)(v98 + 24) == 1 )
              {
                v77 = *(_QWORD *)(v98 + 32);
                if ( !v77 )
                  goto LABEL_85;
LABEL_84:
                ++*(_DWORD *)(v77 + 8);
                goto LABEL_85;
              }
            }
          }
          v88 = v106;
          v90 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v71 + 96LL);
          v92 = *(_QWORD *)(a1 + 24);
          v76 = sub_15E1A70(*(_QWORD *)(a1 + 8));
          v71 = v92;
          v77 = v76;
          v74 = v90;
          v72 = v88;
          if ( v76 )
            goto LABEL_84;
LABEL_85:
          v74(v71, 1, v77, v72, 0);
          if ( v77 )
          {
            v47 = (*(_DWORD *)(v77 + 8))-- == 1;
            if ( v47 )
              sub_15D7BC0(v73, v77);
          }
          if ( v70 )
          {
            v47 = (*(_DWORD *)(v70 + 8))-- == 1;
            if ( v47 )
              sub_15D7BC0(v100, v70);
          }
          v78 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v108);
          sub_182CBA0(v78, &v110);
          if ( v58 )
          {
            v47 = v58[2]-- == 1;
            if ( v47 )
              sub_15D7BC0(v96, v58);
          }
          v105 += 8;
          if ( v86 == v105 )
            break;
          v96 = *(_QWORD *)(a1 + 8);
        }
      }
LABEL_103:
      v15 = v106;
      v14 = v107;
      return sub_6BFE30(v15, v14);
    }
    goto LABEL_107;
  }
  if ( a8 != 1 )
  {
    v15 = a2[13];
    if ( !v15 )
      goto LABEL_101;
    v16 = *(_DWORD *)(v15 - 4);
    v17 = v16;
    if ( a6 )
    {
LABEL_5:
      if ( v16 )
      {
LABEL_6:
        v104 = 0;
        v84 = 8LL * v17;
        while ( 1 )
        {
          if ( v94 )
          {
            v97 = *(_QWORD *)(a2[25] + v104);
            v18 = *(_DWORD **)(a2[13] + v104);
            if ( v18 )
              ++v18[2];
            v19 = a2[18];
          }
          else
          {
            v97 = *(_QWORD *)(a2[27] + v104);
            v18 = *(_DWORD **)(a2[15] + v104);
            if ( v18 )
              ++v18[2];
            v19 = a2[19];
          }
          v110 = 1;
          v108 = 0;
          v20 = v19 + 4 * v104;
          v109 = 0;
          v111 = 0;
          v21 = qword_1C7F2C0;
          if ( (*(_BYTE *)(v20 + 4) & 1) != 0 )
          {
            sub_182C690(qword_1C7F2C0, &v108, v20);
            if ( (*(_BYTE *)(v20 + 20) & 1) == 0 )
            {
LABEL_12:
              v22 = *(_DWORD *)(v20 + 16);
              BYTE4(v110) &= ~1u;
              LODWORD(v110) = v22;
              goto LABEL_13;
            }
          }
          else
          {
            LODWORD(v108) = *(_DWORD *)v20;
            if ( (*(_BYTE *)(v20 + 20) & 1) == 0 )
              goto LABEL_12;
          }
          sub_182C690(v21, &v110, v20 + 16);
LABEL_13:
          v23 = (__int64)*a4;
          v24 = (__int64)a4[1];
          v25 = **a4;
          if ( v24 )
          {
            sub_6C19A0((__int64)*a4, (__int64)&v108, v24);
            v26 = sub_15E1B70(*(_QWORD *)(v23 + 16));
            v27 = (_DWORD *)v26;
            if ( v26 )
              ++*(_DWORD *)(v26 + 8);
            if ( v18 )
            {
              v28 = v18[2] - 1;
              v18[2] = v28;
              if ( !v28 )
                goto LABEL_115;
            }
          }
          else
          {
            if ( v18 )
            {
              v81 = v18[2];
              v27 = v18;
              v18[2] = v81;
              if ( v81 )
                goto LABEL_18;
LABEL_115:
              sub_15D7BC0(v25, v18);
              goto LABEL_18;
            }
            v27 = nullptr;
          }
LABEL_18:
          v118 = 0;
          v119 = 0;
          v120 = 1;
          v29 = qword_1C7F2C0;
          v121 = 0;
          if ( (v108 & 0x100000000LL) != 0 )
            sub_182C690(qword_1C7F2C0, &v118, &v108);
          else
            LODWORD(v118) = v108;
          if ( (v110 & 0x100000000LL) != 0 )
          {
            sub_182C690(v29, &v120, &v110);
          }
          else
          {
            BYTE4(v120) &= ~1u;
            LODWORD(v120) = v110;
          }
          v30 = a4 + 3;
          if ( (v120 & 0x100000000LL) != 0
            || (_DWORD)v120 != 1
            || (*((_BYTE *)a4 + 44) & 1) != 0
            || *((_DWORD *)a4 + 10) != 1 )
          {
            sub_1848FF0(qword_1C7F2C0, &v118, v30);
          }
          else
          {
            v101 = qword_1C7F2C0;
            sub_1831650(qword_1C7F2C0, &v118, v30);
            sub_182CBA0(v101, &v120);
            BYTE4(v120) &= ~1u;
            LODWORD(v120) = 1;
          }
          v113 &= 0xFCu;
          v116 &= 0xFCu;
          v112 = 0;
          v31 = qword_1C7F2C0;
          v114 = 0;
          v115 = 1;
          v117 = 0;
          if ( (v118 & 0x100000000LL) != 0 )
            sub_182C690(qword_1C7F2C0, &v112, &v118);
          else
            v112 = v118;
          if ( (v120 & 0x100000000LL) != 0 )
          {
            sub_182C690(v31, &v115, &v120);
          }
          else
          {
            v116 &= ~1u;
            v115 = v120;
          }
          v32 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v118);
          sub_182CBA0(v32, &v120);
          v33 = v112;
          v112 = v108;
          LODWORD(v108) = v33;
          v34 = v114;
          v114 = v109;
          v109 = v34;
          v35 = v113 & 1;
          LOBYTE(v34) = BYTE4(v108) & 0xFC | v113 & 2;
          v113 = BYTE4(v108) & 1 | v113 & 0xFC | BYTE4(v108) & 2;
          BYTE4(v108) = v35 | v34;
          LODWORD(v34) = v115;
          v115 = v110;
          LODWORD(v110) = v34;
          v36 = v117;
          v117 = v111;
          v111 = v36;
          v37 = v116 & 1;
          LOBYTE(v36) = BYTE4(v110) & 0xFC | v116 & 2;
          v116 = BYTE4(v110) & 1 | v116 & 0xFC | BYTE4(v110) & 2;
          BYTE4(v110) = v37 | v36;
          v38 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v112);
          sub_182CBA0(v38, &v115);
          sub_6C8BE0(a1 + 32, a3, v85, a9, a10, (int *)&v108, v27, &v106);
          v39 = *a11;
          v99 = a11[1];
          if ( *a11 )
            ++*(_DWORD *)(v39 + 8);
          sub_14EC390(a1 + 344, v97, v106, a11);
          v40 = *(_QWORD *)(a1 + 24);
          v41 = v106;
          v42 = *(_QWORD *)(a1 + 8);
          v43 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v40 + 96LL);
          if ( !*(_WORD *)(v97 + 4) )
          {
            v44 = *(_DWORD **)(*(_QWORD *)(v97 + 16) + 24LL);
            if ( v44 )
            {
              if ( !*v44 && v44[1] == 8 && *(_DWORD *)(v97 + 24) == 1 )
              {
                v46 = *(_QWORD *)(v97 + 32);
                if ( !v46 )
                  goto LABEL_36;
LABEL_35:
                ++*(_DWORD *)(v46 + 8);
                goto LABEL_36;
              }
            }
          }
          v87 = v106;
          v89 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v40 + 96LL);
          v91 = *(_QWORD *)(a1 + 24);
          v45 = sub_15E1A70(*(_QWORD *)(a1 + 8));
          v40 = v91;
          v46 = v45;
          v43 = v89;
          v41 = v87;
          if ( v45 )
            goto LABEL_35;
LABEL_36:
          v43(v40, 1, v46, v41, 0);
          if ( v46 )
          {
            v47 = (*(_DWORD *)(v46 + 8))-- == 1;
            if ( v47 )
              sub_15D7BC0(v42, v46);
          }
          if ( v39 )
          {
            v47 = (*(_DWORD *)(v39 + 8))-- == 1;
            if ( v47 )
              sub_15D7BC0(v99, v39);
          }
          v48 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v108);
          sub_182CBA0(v48, &v110);
          if ( v27 )
          {
            v47 = v27[2]-- == 1;
            if ( v47 )
              sub_15D7BC0(v96, v27);
          }
          v104 += 8;
          if ( v104 == v84 )
            goto LABEL_103;
          v96 = *(_QWORD *)(a1 + 8);
        }
      }
      goto LABEL_103;
    }
LABEL_107:
    v80 = *(_DWORD **)(sub_15D1F10(a3) + 24);
    if ( !v80 || *v80 != 5 || (v85 = 1, v80[1]) )
      v85 = a5 | a7;
    if ( v17 )
    {
      if ( a5 )
      {
        v96 = *(_QWORD *)(a1 + 8);
        goto LABEL_6;
      }
      v83 = v85;
      v96 = *(_QWORD *)(a1 + 8);
      goto LABEL_55;
    }
    goto LABEL_103;
  }
  v15 = a2[15];
  if ( v15 )
  {
    v16 = *(_DWORD *)(v15 - 4);
    v17 = v16;
    if ( a6 )
      goto LABEL_5;
    goto LABEL_107;
  }
LABEL_101:
  if ( !a6 )
  {
    sub_15D1F10(a3);
    goto LABEL_103;
  }
  return sub_6BFE30(v15, v14);
}

