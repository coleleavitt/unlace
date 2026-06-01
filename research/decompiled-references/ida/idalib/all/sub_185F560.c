char __fastcall sub_185F560(__int64 *a1, char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __m128 a7)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  __int64 v15; // rbp
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdi
  __int64 v26; // rbp
  unsigned __int64 v27; // rax
  unsigned __int64 *v28; // rax
  unsigned __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned int v33; // r14d
  __int64 v34; // r15
  unsigned __int64 v35; // rax
  __int64 v36; // rsi
  unsigned __int64 v37; // rsi
  unsigned __int64 v38; // r15
  __int64 v39; // rax
  unsigned __int8 v40; // dl
  __int64 v41; // rsi
  __int64 v42; // r15
  __int64 v43; // rax
  unsigned __int8 v44; // dl
  __int64 v45; // rsi
  __int64 v46; // r15
  __int64 v47; // rax
  unsigned __int8 v48; // dl
  __int64 v49; // rsi
  __int64 v50; // rdx
  int v51; // eax
  char v52; // dl
  unsigned __int64 v53; // r15
  char result; // al
  unsigned __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  unsigned __int64 v58; // r13
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  unsigned __int64 v63; // rdx
  unsigned __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  int v68; // eax
  char v69; // al
  unsigned __int64 v70; // rax
  unsigned int v71; // r14d
  unsigned int v72; // eax
  unsigned __int8 v73; // al
  __int64 v74; // rdi
  unsigned int v75; // eax
  __int64 v76; // r9
  unsigned int v77; // r14d
  unsigned int v78; // eax
  unsigned __int8 v79; // al
  __int64 v80; // rdi
  unsigned int v81; // eax
  __int64 v82; // r9
  _QWORD *v83; // rax
  __int64 v84; // rax
  unsigned int v85; // r14d
  unsigned int v86; // eax
  unsigned __int8 v87; // al
  __int64 v88; // rdi
  unsigned int v89; // eax
  __int64 v90; // r9
  __int64 v91; // rax
  __int64 v92; // rax
  __int128 v93; // [rsp-20h] [rbp-198h]
  __int128 v94; // [rsp-20h] [rbp-198h]
  _QWORD *v95; // [rsp+8h] [rbp-170h]
  char v96; // [rsp+8h] [rbp-170h]
  char v97; // [rsp+8h] [rbp-170h]
  char v98; // [rsp+8h] [rbp-170h]
  __int64 v100; // [rsp+18h] [rbp-160h]
  unsigned __int64 v101; // [rsp+20h] [rbp-158h]
  char v103; // [rsp+38h] [rbp-140h]
  char v104; // [rsp+38h] [rbp-140h]
  char v105; // [rsp+38h] [rbp-140h]
  __int64 v106; // [rsp+38h] [rbp-140h]
  __int64 v107; // [rsp+38h] [rbp-140h]
  __int64 v108; // [rsp+38h] [rbp-140h]
  __int64 v109; // [rsp+38h] [rbp-140h]
  __int64 v110; // [rsp+38h] [rbp-140h]
  __int64 v111; // [rsp+38h] [rbp-140h]
  void *v112; // [rsp+60h] [rbp-118h] BYREF
  int v113; // [rsp+68h] [rbp-110h]
  void *v114; // [rsp+70h] [rbp-108h] BYREF
  int v115; // [rsp+78h] [rbp-100h]
  unsigned __int64 *v116; // [rsp+80h] [rbp-F8h] BYREF
  unsigned __int64 *v117; // [rsp+88h] [rbp-F0h]
  void *v118; // [rsp+90h] [rbp-E8h] BYREF
  _QWORD *v119; // [rsp+98h] [rbp-E0h]
  __int64 v120; // [rsp+A0h] [rbp-D8h]
  unsigned __int64 v121; // [rsp+B0h] [rbp-C8h] BYREF
  _QWORD *v122; // [rsp+B8h] [rbp-C0h]
  __int64 v123; // [rsp+C0h] [rbp-B8h]

  sub_7052B0((__int64 *)(*(_QWORD *)(a3 + 104) + 96LL), *(_QWORD *)(a3 + 104), a3, a4, a5, a6);
  v14 = *(_QWORD *)(a3 + 128);
  if ( (*(_BYTE *)(v14 + 24) & 1) != 0 )
    v15 = sub_B96980(v14);
  else
    v15 = *(_QWORD *)(v14 + 24);
  sub_7052B0((__int64 *)(*(_QWORD *)(a3 + 104) + 96LL), *(_QWORD *)(a3 + 104), v10, v11, v12, v13);
  v16 = *(_QWORD *)(a3 + 104);
  v100 = v15 + 24LL * *(unsigned int *)(*(_QWORD *)(a3 + 128) + 16LL);
  sub_7052B0((__int64 *)(v16 + 96), v16, v17, v18, v19, v20);
  v25 = *(_QWORD *)(a3 + 128);
  if ( (*(_BYTE *)(v25 + 24) & 1) != 0 )
    v26 = sub_B96980(v25);
  else
    v26 = *(_QWORD *)(v25 + 24);
  if ( v100 != v26 )
  {
    v101 = a4 & 0xFFFFFFFFFFFFFFF8LL;
    do
    {
      v27 = *(_QWORD *)(**(_QWORD **)(v26 + 16) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v27 + 8) & 0xF) != 0 )
        v27 = sub_F64F00(**(_QWORD **)(v26 + 16), v16, v21, v22, v23);
      v95 = sub_F63270(*(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF0LL), v16, v21, v22, v23, v24);
      v28 = *(unsigned __int64 **)(v26 + 16);
      v29 = *v28;
      v122 = v28 + 1;
      v121 = v29;
      v33 = sub_F6CCB0((__int64 *)&v121, a7);
      v34 = *(_QWORD *)(*a1 + 248);
      v35 = **(_QWORD **)(v26 + 16) & 0xFFFFFFFFFFFFFFF0LL;
      v36 = *(_QWORD *)v35;
      if ( (*(_BYTE *)(*(_QWORD *)v35 + 8LL) & 0xF) != 0 )
      {
        v37 = sub_F64F00(**(_QWORD **)(v26 + 16), v36, v30, v31, v32) & 0xFFFFFFFFFFFFFFF0LL;
        if ( v101 )
        {
LABEL_31:
          v38 = sub_A70C40(v34, v37, a4);
          goto LABEL_12;
        }
      }
      else
      {
        v37 = v36 & 0xFFFFFFFFFFFFFFF0LL;
        if ( v101 )
          goto LABEL_31;
      }
      v38 = a4 | v37;
LABEL_12:
      v16 = v38;
      v39 = sub_A72040(*(_QWORD **)(*a1 + 248), v38);
      if ( v39 && (v22 = (unsigned int)*(unsigned __int8 *)(v39 + 16) - 2, (unsigned int)v22 <= 1) )
      {
        v40 = *(_BYTE *)(v39 + 19);
        v41 = *(_QWORD *)(v39 + 40);
        if ( (v40 & 2) != 0 )
        {
          v113 = *(_DWORD *)(v41 + 8);
          if ( (unsigned int)v113 > 0x40 )
          {
            v106 = v39;
            sub_2205510(&v112);
            v39 = v106;
          }
          else
          {
            v112 = *(void **)v41;
          }
        }
        else
        {
          v113 = 8 * ((v40 >> 2) & 0x1F);
          if ( v113 > 64 )
          {
            v107 = v39;
            sub_2205470(&v112, v41, 0);
            v39 = v107;
          }
          else
          {
            v112 = (void *)v41;
          }
        }
        v42 = *(_QWORD *)(v39 + 32);
        v16 = v42;
        v43 = sub_A72040(*(_QWORD **)(*a1 + 248), v42);
        if ( v43 && (unsigned int)*(unsigned __int8 *)(v43 + 16) - 2 <= 1 )
        {
          v44 = *(_BYTE *)(v43 + 19);
          v45 = *(_QWORD *)(v43 + 40);
          if ( (v44 & 2) != 0 )
          {
            v115 = *(_DWORD *)(v45 + 8);
            if ( (unsigned int)v115 > 0x40 )
            {
              v108 = v43;
              sub_2205510(&v114);
              v43 = v108;
            }
            else
            {
              v114 = *(void **)v45;
            }
          }
          else
          {
            v115 = 8 * ((v44 >> 2) & 0x1F);
            if ( v115 > 64 )
            {
              v109 = v43;
              sub_2205470(&v114, v45, 0);
              v43 = v109;
            }
            else
            {
              v114 = (void *)v45;
            }
          }
          v46 = *(_QWORD *)(v43 + 32);
          v16 = v46;
          v47 = sub_A72040(*(_QWORD **)(*a1 + 248), v46);
          if ( v47 && (unsigned int)*(unsigned __int8 *)(v47 + 16) - 2 <= 1 )
          {
            v48 = *(_BYTE *)(v47 + 19);
            v49 = *(_QWORD *)(v47 + 40);
            if ( (v48 & 2) != 0 )
            {
              LODWORD(v119) = *(_DWORD *)(v49 + 8);
              if ( (unsigned int)v119 > 0x40 )
              {
                v110 = v47;
                sub_2205510(&v118);
                v47 = v110;
              }
              else
              {
                v50 = *(_QWORD *)v49;
                v118 = *(void **)v49;
              }
            }
            else
            {
              v50 = 8 * ((v48 >> 2) & 0x1Fu);
              LODWORD(v119) = v50;
              if ( (int)v50 > 64 )
              {
                v111 = v47;
                sub_2205470(&v118, v49, 0);
                v47 = v111;
              }
              else
              {
                v118 = (void *)v49;
              }
            }
            v16 = *(_QWORD *)(v47 + 32);
            LODWORD(v121) = 2;
            v122 = v95;
            LODWORD(v123) = v33;
            *((_QWORD *)&v93 + 1) = v95;
            *(_QWORD *)&v93 = v121;
            v51 = sub_185F3C0((__int64)a1, v16, v50, v22, v23, v24, v93, v123);
            v52 = BYTE1(v51);
            v53 = (unsigned __int64)v51 >> 16;
            if ( (unsigned int)v119 > 0x40 && v118 )
            {
              v103 = BYTE1(v51);
              v96 = v51;
              operator delete[](v118);
              v52 = v103;
              LOBYTE(v51) = v96;
            }
          }
          else
          {
            LODWORD(v120) = v33;
            LODWORD(v118) = 2;
            v119 = v95;
            if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v46 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                  + 16LL)
               - 43 > 1 )
            {
              v85 = *(_DWORD *)(a1[2] + 24);
              LOWORD(v121) = v121 & 0xFE00 | 0x1A;
              if ( unk_2CD7484 )
                sub_EE9B50(26);
              v122 = (_QWORD *)v46;
              v123 = 0;
              v86 = v121 & 0xFFF001FF;
              BYTE1(v86) = ((unsigned __int16)(v121 & 0x1FF) >> 8) | 2;
              v121 = __PAIR64__(v85, v86);
              v87 = sub_B62360((__int64)&v121);
              v88 = a1[2];
              v116 = &v121;
              v117 = &v121;
              BYTE1(v121) = (v87 << 6) | BYTE1(v121) & 0x3F;
              BYTE2(v121) = BYTE2(v121) & 0xF8 | (v87 >> 2) & 7;
              v89 = sub_B77890(v88);
              v16 = v89;
              v51 = sub_185E0A0(a1, v89, (__int64)&v116, 2, 0, v90, (__int64)v118, (__int64)v119, v120);
              v52 = BYTE1(v51);
              v53 = (unsigned __int64)v51 >> 16;
            }
            else
            {
              if ( *((_DWORD *)a1 + 44) == 1 )
              {
                sub_168B9F0((__int64)&v121, (__int64 *)(*a1 + 8), v33, 0x1708u, 0);
                v92 = sub_1795A40((__int64)&v121, a1 + 2);
                v16 = (__int64)(a1 + 1);
                sub_185AB80(v92, a1 + 1);
                sub_15F7200(&v121);
              }
              LOBYTE(v51) = 1;
              v52 = 1;
              LOBYTE(v53) = 2;
            }
          }
          if ( (unsigned int)v115 > 0x40 && v114 )
          {
            v105 = v51;
            v98 = v52;
            operator delete[](v114);
            v52 = v98;
            LOBYTE(v51) = v105;
          }
        }
        else
        {
          LODWORD(v120) = v33;
          LODWORD(v118) = 2;
          v119 = v95;
          if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v42 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                + 16LL)
             - 43 > 1 )
          {
            v77 = *(_DWORD *)(a1[2] + 24);
            LOWORD(v121) = v121 & 0xFE00 | 0x1A;
            if ( unk_2CD7484 )
              sub_EE9B50(26);
            v122 = (_QWORD *)v42;
            v123 = 0;
            v78 = v121 & 0xFFF001FF;
            BYTE1(v78) = ((unsigned __int16)(v121 & 0x1FF) >> 8) | 2;
            v121 = __PAIR64__(v77, v78);
            v79 = sub_B62360((__int64)&v121);
            v80 = a1[2];
            v116 = &v121;
            v117 = &v121;
            BYTE1(v121) = (v79 << 6) | BYTE1(v121) & 0x3F;
            BYTE2(v121) = BYTE2(v121) & 0xF8 | (v79 >> 2) & 7;
            v81 = sub_B77890(v80);
            v16 = v81;
            v51 = sub_185E0A0(a1, v81, (__int64)&v116, 2, 0, v82, (__int64)v118, (__int64)v119, v120);
            v52 = BYTE1(v51);
            v53 = (unsigned __int64)v51 >> 16;
          }
          else
          {
            if ( *((_DWORD *)a1 + 44) == 1 )
            {
              sub_168B9F0((__int64)&v121, (__int64 *)(*a1 + 8), v33, 0x1708u, 0);
              v91 = sub_1795A40((__int64)&v121, a1 + 2);
              v16 = (__int64)(a1 + 1);
              sub_185AB80(v91, a1 + 1);
              sub_15F7200(&v121);
            }
            LOBYTE(v51) = 1;
            v52 = 1;
            LOBYTE(v53) = 2;
          }
        }
        if ( (unsigned int)v113 > 0x40 && v112 )
        {
          v104 = v51;
          v97 = v52;
          operator delete[](v112);
          v52 = v97;
          LOBYTE(v51) = v104;
        }
      }
      else
      {
        LODWORD(v120) = v33;
        LODWORD(v118) = 2;
        v119 = v95;
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v38 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 43 > 1 )
        {
          v71 = *(_DWORD *)(a1[2] + 24);
          LOWORD(v121) = v121 & 0xFE00 | 0x1A;
          if ( unk_2CD7484 )
            sub_EE9B50(26);
          v122 = (_QWORD *)v38;
          v123 = 0;
          v72 = v121 & 0xFFF001FF;
          BYTE1(v72) = ((unsigned __int16)(v121 & 0x1FF) >> 8) | 2;
          v121 = __PAIR64__(v71, v72);
          v73 = sub_B62360((__int64)&v121);
          v74 = a1[2];
          v116 = &v121;
          v117 = &v121;
          BYTE1(v121) = (v73 << 6) | BYTE1(v121) & 0x3F;
          BYTE2(v121) = BYTE2(v121) & 0xF8 | (v73 >> 2) & 7;
          v75 = sub_B77890(v74);
          v16 = v75;
          v51 = sub_185E0A0(a1, v75, (__int64)&v116, 2, 0, v76, (__int64)v118, (__int64)v119, v120);
          v52 = BYTE1(v51);
          v53 = (unsigned __int64)v51 >> 16;
        }
        else
        {
          if ( *((_DWORD *)a1 + 44) == 1 )
          {
            sub_168B9F0((__int64)&v121, (__int64 *)(*a1 + 8), v33, 0x1708u, 0);
            v84 = sub_1795A40((__int64)&v121, a1 + 2);
            v16 = (__int64)(a1 + 1);
            sub_185AB80(v84, a1 + 1);
            sub_15F7200(&v121);
          }
          LOBYTE(v51) = 1;
          v52 = 1;
          LOBYTE(v53) = 2;
        }
      }
      a2[1] &= v52;
      v21 = (unsigned __int8)a2[2];
      result = *a2 | v51;
      *a2 = result;
      if ( (unsigned __int8)v21 <= (unsigned __int8)v53 )
        LOBYTE(v53) = v21;
      a2[2] = v53;
      if ( result )
        return result;
      v26 += 24;
    }
    while ( v26 != v100 );
  }
  v58 = sub_B7E900(a3, v16, v21, v22, v23, v24);
  if ( v58 )
  {
LABEL_41:
    if ( (*(_BYTE *)(v58 + 68) & 1) != 0 && !*(_QWORD *)(v58 + 40) )
      goto LABEL_51;
    if ( (unsigned __int8)sub_B78060(v58, v16, v55, v56, v57) )
    {
      v83 = sub_F63270(*(_QWORD *)(*(_QWORD *)(v58 + 48) & 0xFFFFFFFFFFFFFFF0LL), v16, v59, v60, v61, v62);
      v16 = (__int64)a2;
      if ( !(unsigned __int8)sub_185F560(a1, a2, v83, a4) )
        goto LABEL_51;
      return 1;
    }
    v63 = a4;
    if ( (*(_BYTE *)(v58 + 68) & 2) != 0 )
      v63 = a4 & 0xFFFFFFFFFFFFFFFELL;
    v64 = sub_A70F20(*(_QWORD *)(*a1 + 248), *(_QWORD *)(v58 + 48), v63);
    v122 = (_QWORD *)v58;
    LODWORD(v121) = 1;
    v16 = v64;
    LODWORD(v123) = *(_DWORD *)(v58 + 24);
    *((_QWORD *)&v94 + 1) = v58;
    *(_QWORD *)&v94 = v121;
    v68 = sub_185F3C0((__int64)a1, v64, (unsigned int)v123, v65, v66, v67, v94, v123);
    a2[1] &= BYTE1(v68);
    v56 = (unsigned __int8)a2[2];
    v55 = (unsigned __int64)v68 >> 16;
    LOWORD(v118) = v68;
    v69 = *a2 | v68;
    BYTE2(v118) = v55;
    if ( (unsigned __int8)v56 < (unsigned __int8)v55 )
      v55 = (unsigned int)v56;
    *a2 = v69;
    a2[2] = v55;
    if ( v69 )
      return 1;
LABEL_51:
    while ( 1 )
    {
      v70 = *(_QWORD *)(v58 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v58 = v70;
      if ( !v70 )
        break;
      if ( (*(_BYTE *)(v70 + 28) & 0x7Fu) - 49 <= 2 )
        goto LABEL_41;
    }
  }
  return 0;
}
