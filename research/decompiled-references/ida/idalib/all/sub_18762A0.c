unsigned __int64 __fastcall sub_18762A0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        char a4,
        int a5,
        void **a6,
        __m128 a7,
        unsigned int a8)
{
  __int64 (__fastcall **v11)(); // rax
  unsigned int v12; // r15d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // r14d
  char v18; // al
  int *v19; // rax
  __int64 v20; // r9
  __int64 *v21; // rsi
  __int64 v22; // r8
  unsigned int v23; // ecx
  __int64 v24; // rcx
  __int64 *v25; // rsi
  __int64 v26; // rdx
  _DWORD *v27; // rax
  __int64 *v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdi
  unsigned __int64 *v35; // rax
  unsigned __int64 v36; // rax
  __int64 *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rcx
  unsigned __int64 *v40; // rax
  unsigned __int64 v41; // rax
  __int64 *v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rdi
  unsigned __int64 *v45; // rax
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rcx
  bool v49; // bl
  char v50; // r13
  __int64 v51; // r14
  unsigned __int64 result; // rax
  char v53; // dl
  __int64 v54; // rdx
  char v55; // r8
  char *v56; // rax
  char *v57; // rsi
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rdi
  unsigned __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  unsigned int v73; // edx
  unsigned int v74; // ecx
  unsigned __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // rax
  _QWORD *v82; // rax
  __int64 i; // rax
  __int64 *v84; // rbp
  __int64 *v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rax
  _QWORD *v91; // rax
  __int64 v92; // r12
  __int64 *v93; // rbp
  __int64 v94; // r13
  int v95; // eax
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  signed __int64 v107; // [rsp+8h] [rbp-130h]
  __int64 v108; // [rsp+8h] [rbp-130h]
  __int64 v109; // [rsp+8h] [rbp-130h]
  __int64 v110; // [rsp+8h] [rbp-130h]
  __int64 v111; // [rsp+8h] [rbp-130h]
  __int64 *v112; // [rsp+10h] [rbp-128h]
  unsigned __int8 v113; // [rsp+10h] [rbp-128h]
  __int64 v114; // [rsp+18h] [rbp-120h]
  __int64 v115; // [rsp+18h] [rbp-120h]
  __int64 v116; // [rsp+18h] [rbp-120h]
  __int64 v117; // [rsp+18h] [rbp-120h]
  __int64 v118; // [rsp+20h] [rbp-118h]
  __int64 v119[2]; // [rsp+28h] [rbp-110h] BYREF
  __int64 v120; // [rsp+38h] [rbp-100h] BYREF
  unsigned int *v121; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v122; // [rsp+48h] [rbp-F0h] BYREF
  void *v123; // [rsp+50h] [rbp-E8h] BYREF
  signed __int64 v124; // [rsp+58h] [rbp-E0h]
  __int64 v125; // [rsp+60h] [rbp-D8h] BYREF
  __int64 (__fastcall **v126)(); // [rsp+70h] [rbp-C8h] BYREF
  void **v127; // [rsp+78h] [rbp-C0h]
  __int64 *v128; // [rsp+80h] [rbp-B8h]
  unsigned __int8 *v129[11]; // [rsp+90h] [rbp-A8h] BYREF
  char v130; // [rsp+E8h] [rbp-50h]
  unsigned int v131; // [rsp+F0h] [rbp-48h]
  char v132; // [rsp+F4h] [rbp-44h]

  v11 = (__int64 (__fastcall **)())*a6;
  v107 = (signed __int64)(a6 + 1);
  v12 = a8;
  v127 = a6 + 1;
  v119[0] = a3;
  v120 = (__int64)v11;
  v126 = v11;
  v17 = sub_F6CCB0((__int64 *)&v126, a7);
  v18 = *(_BYTE *)(*(_QWORD *)(v120 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  if ( (v18 & 0x10) != 0 )
    return 0;
  if ( a8 && (v18 & 1) == 0 )
  {
    v12 = 0;
    sub_168B9F0((__int64)&v126, a1 + 1, a8, 0x12ACu, 0);
    v123 = *a6;
    v124 = v107;
    v122 = sub_183A8D0((__int64 *)&v123, a7);
    sub_1587DB0((__int64)&v126, &v122);
    sub_15F7200(&v126);
  }
  v19 = (int *)sub_169D2C0((__int64)a1, v120, v13, v14, v15, v16);
  if ( !v19 || (v19[2] & 0x7Fu) - 59 > 2 )
  {
    v121 = nullptr;
    goto LABEL_44;
  }
  v121 = (unsigned int *)(v19 - 16);
  if ( v19 == &dword_40 )
  {
LABEL_44:
    if ( (*(_BYTE *)(*(_QWORD *)(v120 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
    {
      if ( (unsigned __int8)sub_B8E180(a2 + 64) )
        goto LABEL_36;
      goto LABEL_46;
    }
    v21 = a1 + 1;
    LOBYTE(v22) = 0;
    v23 = 3318;
    goto LABEL_60;
  }
  v21 = a1 + 1;
  v22 = 0;
  v23 = 5366;
  if ( *((_BYTE *)v19 + 9) >> 5 == 2 )
  {
LABEL_60:
    sub_168B9F0((__int64)&v126, v21, v17, v23, v22);
    sub_15884C0((__int64)&v126, v119);
    sub_15F7200(&v126);
    return 0;
  }
  v24 = *(_QWORD *)&byte_8[v120 & 0xFFFFFFFFFFFFFFF0LL];
  v25 = (__int64 *)((v24 >> 3) & 1);
  v26 = v24 & 7 | v120 & 7 | (v120 >> 3) & 1;
  if ( v26 )
  {
    v54 = 0;
    if ( !v25 )
      goto LABEL_48;
  }
  else if ( !v25 )
  {
    goto LABEL_9;
  }
  v54 = *(__int64 *)((char *)&qword_18 + (v24 & 0xFFFFFFFFFFFFFFF0LL));
LABEL_48:
  v126 = (__int64 (__fastcall **)())(v54 | ((unsigned __int8)v24 | (unsigned __int8)v120) & 7);
  sub_F71960(&v123, (unsigned __int64 *)&v126, a1[31] + 17464);
  v112 = a1 + 1;
  sub_168B9F0((__int64)&v126, a1 + 1, v17, 0x1C90u, 0);
  if ( v130 )
  {
    sub_AEC220(v129, v123, v124);
    goto LABEL_100;
  }
  v55 = v132;
  if ( v132 )
  {
    v86 = sub_168B9E0(&v126);
    v90 = (__int64)v128;
    if ( v128 )
    {
      v117 = v86;
      v90 = (*(__int64 (__fastcall **)(__int64 *))(*v128 + 32))(v128);
      v86 = v117;
    }
    v122 = v90;
    v91 = sub_1587BC0(v86, &v122, v86, v87, v88, v89);
    sub_AEC220((unsigned __int8 **)(*v91 + 32LL * v131 + 8), v123, v124);
LABEL_100:
    v56 = (char *)v123;
    v55 = v130;
    v57 = (char *)v123 + v124;
    if ( v123 == (char *)v123 + v124 )
    {
      v59 = 1;
LABEL_55:
      if ( v55 )
      {
        sub_AE9DF0(v129, v59, 2u);
      }
      else if ( v132 )
      {
        v114 = v59;
        v76 = sub_168B9E0(&v126);
        v79 = v114;
        v80 = v76;
        v81 = (__int64)v128;
        if ( v128 )
        {
          v118 = v114;
          v115 = v80;
          v81 = (*(__int64 (__fastcall **)(__int64 *))(*v128 + 32))(v128);
          v79 = v118;
          v80 = v115;
        }
        v116 = v79;
        v122 = v81;
        v82 = sub_1587BC0(v80, &v122, v80, v79, v77, v78);
        sub_AE9DF0((unsigned __int8 **)(*v82 + 32LL * v131 + 8), v116, 2u);
      }
      goto LABEL_57;
    }
LABEL_51:
    v58 = 0;
    do
    {
      v59 = v58 + 1;
      if ( *v56 == 32 )
      {
        v60 = v58 + 2;
        ++v58;
        v59 = v60;
      }
      ++v56;
    }
    while ( v57 != v56 );
    goto LABEL_55;
  }
  v56 = (char *)v123;
  v57 = (char *)v123 + v124;
  if ( (char *)v123 + v124 != v123 )
    goto LABEL_51;
LABEL_57:
  sub_1605D30((__int64)&v126, &v120);
  sub_15F7200(&v126);
  sub_168B9F0((__int64)&v126, v112, v17, 0x16AFu, 0);
  v25 = &v120;
  sub_1605D30((__int64)&v126, &v120);
  sub_15F7200(&v126);
  if ( v123 != &v125 )
    operator delete(v123);
LABEL_9:
  v27 = *(_DWORD **)(a1[31] + 17448);
  if ( v27[85] == 10 || v27[62] == 38 && v27[64] == 3 && (unsigned int)(v27[65] - 24) <= 1 )
  {
    v109 = sub_17A23E0(a2, (__int64)v25, v26, v24, v22, v20);
    if ( v109 )
    {
      if ( (v121[7] & 0x7F) - 60 <= 1 )
      {
        v123 = v121;
        v61 = sub_BBF290((__int64)v121);
        if ( !sub_17A23E0(*(_QWORD *)(v61 + 48), (__int64)v25, v62, v63, v64, v65) )
        {
          v113 = *((_BYTE *)v123 + 180) & 7;
          if ( sub_17A23E0((__int64)v123, (__int64)v25, v66, v67, v68, v69) || (v70 = v113, v113 != 3) && v113 > 1u )
          {
            if ( !sub_17A23E0((__int64)v123, (__int64)v25, v70, v71, v72, v109) )
            {
              sub_168B9F0((__int64)&v126, a1 + 1, v17, 0x199Eu, 0);
              LOBYTE(v122) = (*((_BYTE *)v123 + 180) & 7) == 2;
              sub_1588420((__int64)&v126, (unsigned __int8 *)&v122);
              sub_15F7200(&v126);
              sub_168B9F0((__int64)&v126, a1 + 1, *(_DWORD *)(v109 + 24), 0x16A6u, 0);
              sub_15F7200(&v126);
              if ( (*((_BYTE *)v123 + 180) & 7) == 2 )
              {
                v73 = *((_DWORD *)v123 + 6);
                v74 = 6385;
              }
              else
              {
                v73 = *((_DWORD *)v123 + 44);
                v74 = 6387;
              }
              sub_168B9F0((__int64)&v126, a1 + 1, v73, v74, 0);
              sub_1852C50((__int64)&v126, (__int64 *)&v123);
              sub_15F7200(&v126);
            }
          }
          else
          {
            v97 = sub_B395B0(v109, a1[31]);
            *(_BYTE *)(v97 + 38) |= 1u;
            v111 = v97;
            sub_B8CC60((__int64)v123, v97, v98, v99, v100, v101);
            if ( *(_WORD *)(v111 + 36) == 197 )
              *(_BYTE *)(v111 + 39) = 1;
            if ( v113 )
              sub_1861810((__int64)a1, (__int64)v123, v113, v102, v103, v104);
          }
        }
      }
    }
  }
  v28 = (__int64 *)v17;
  LODWORD(v127) = 3960;
  v126 = off_2BC64B0;
  v128 = v119;
  if ( (unsigned __int8)sub_1E63C20(a1, v17, v120, 1, &v126) )
  {
    sub_B88650(a2, 1);
    return 0;
  }
  v32 = (unsigned __int64)v121;
  v33 = *((_QWORD *)v121 + 16);
  if ( !v33 )
  {
    v28 = *((__int64 **)v121 + 13);
    v110 = (__int64)v121;
    sub_7052B0(v28 + 12, (__int64)v28, (__int64)v121, v29, v30, v31);
    v32 = v110;
    v33 = *(_QWORD *)(v110 + 128);
    if ( !v33 )
    {
      v121 = nullptr;
      BUG();
    }
  }
  v34 = *(_QWORD *)(v33 + 88);
  v121 = (unsigned int *)v34;
  if ( (*(_BYTE *)(v34 + 29) & 1) == 0 )
    goto LABEL_20;
  v35 = sub_B8C3D0(v34, (__int64)v28, v32, v29, v30, v31);
  v32 = *v35;
  v36 = *v35 + 8LL * *((unsigned int *)v35 + 2);
  if ( v32 < v36 )
  {
    v75 = v32;
    while ( 1 )
    {
      v28 = *(__int64 **)v75;
      if ( *(_WORD *)(*(_QWORD *)v75 + 36LL) == 178 )
        break;
      v75 += 8LL;
      if ( v36 == v75 )
        goto LABEL_20;
    }
    if ( v36 != v75 )
      goto LABEL_93;
LABEL_20:
    v39 = 0;
    if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
      goto LABEL_28;
    goto LABEL_21;
  }
  if ( v32 == v36 )
    goto LABEL_20;
  if ( *(_WORD *)(*(_QWORD *)v36 + 36LL) != 178 )
  {
    v37 = (__int64 *)(v36 + 8);
    while ( (__int64 *)v32 != v37 )
    {
      v38 = *v37++;
      if ( *(_WORD *)(v38 + 36) == 178 )
        goto LABEL_93;
    }
    goto LABEL_20;
  }
LABEL_93:
  v39 = *(_QWORD *)v32;
  if ( *(_WORD *)(*(_QWORD *)v32 + 36LL) != 178 )
  {
    v85 = (__int64 *)(v32 + 8);
    do
      v39 = *v85++;
    while ( *(_WORD *)(v39 + 36) != 178 );
  }
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_91;
LABEL_21:
  v108 = v39;
  v40 = sub_B8C3D0(a2, (__int64)v28, v32, v39, v30, v31);
  v39 = v108;
  v32 = *v40;
  v41 = *v40 + 8LL * *((unsigned int *)v40 + 2);
  if ( v32 < v41 )
  {
    v28 = (__int64 *)v32;
    while ( *(_WORD *)(*v28 + 36) != 178 )
    {
      if ( (__int64 *)v41 == ++v28 )
        goto LABEL_27;
    }
    if ( (__int64 *)v41 == v28 )
    {
LABEL_27:
      if ( !v108 )
        goto LABEL_28;
LABEL_91:
      v84 = a1 + 1;
      sub_168B9F0((__int64)&v126, v84, *(_DWORD *)(a2 + 24), 0x104Du, 0);
      sub_15F7200(&v126);
      sub_168B9F0((__int64)&v126, v84, v121[6], 0x16AFu, 0);
      sub_185AB80((__int64)&v126, (__int64 *)&v121);
      sub_15F7200(&v126);
      return 0;
    }
  }
  else
  {
    if ( v32 == v41 )
      goto LABEL_27;
    if ( *(_WORD *)(*(_QWORD *)v41 + 36LL) != 178 )
    {
      v42 = (__int64 *)(v41 + 8);
      do
      {
        v28 = v42;
        if ( (__int64 *)v32 == v42 )
          goto LABEL_27;
        v43 = *v42++;
      }
      while ( *(_WORD *)(v43 + 36) != 178 );
    }
  }
  for ( i = *(_QWORD *)v32; *(_WORD *)(*(_QWORD *)v32 + 36LL) != 178; i = *(_QWORD *)v32 )
    v32 += 8LL;
  if ( !v108 )
    goto LABEL_91;
  v32 = *(unsigned int *)(v108 + 40);
  v28 = (__int64 *)*(unsigned int *)(i + 40);
  if ( (__int64 *)v32 != v28 )
    goto LABEL_91;
  if ( *(_DWORD *)(v108 + 40) )
  {
    v28 = *(__int64 **)(i + 48);
    if ( memcmp(*(const void **)(v108 + 48), v28, v32) )
      goto LABEL_91;
  }
LABEL_28:
  v44 = (__int64)v121;
  if ( *((char *)v121 + 74) < 0 )
  {
    sub_168B9F0((__int64)&v126, a1 + 1, v17, 0xCF2u, 0);
    v123 = *((void **)v121 + 5);
    sub_15894B0((__int64)&v126, (__int64 *)&v123);
    sub_15F7200(&v126);
    return 0;
  }
  if ( (*((_BYTE *)v121 + 29) & 1) != 0 )
  {
    v45 = sub_B8C3D0((__int64)v121, (__int64)v28, v32, v39, v30, v31);
    v46 = *v45;
    v47 = *v45 + 8LL * *((unsigned int *)v45 + 2);
    if ( v46 >= v47 )
    {
      if ( v46 == v47 )
      {
LABEL_34:
        v44 = (__int64)v121;
        goto LABEL_35;
      }
      while ( *(_WORD *)(*(_QWORD *)v47 + 36LL) != 214 )
      {
        v47 += 8LL;
        if ( v46 == v47 )
          goto LABEL_34;
      }
    }
    else
    {
      v48 = v46;
      while ( *(_WORD *)(*(_QWORD *)v48 + 36LL) != 214 )
      {
        v48 += 8LL;
        if ( v47 == v48 )
          goto LABEL_34;
      }
      if ( v47 == v48 )
        goto LABEL_34;
    }
    while ( 1 )
    {
      v92 = *(_QWORD *)v46;
      if ( *(_WORD *)(*(_QWORD *)v46 + 36LL) == 214 )
        break;
      v46 += 8LL;
    }
    v93 = a1 + 1;
    sub_168B9F0((__int64)&v126, v93, v17, 0xD6Bu, 0);
    v123 = *((void **)v121 + 5);
    v94 = sub_15894B0((__int64)&v126, (__int64 *)&v123);
    if ( (*(_BYTE *)(v92 + 34) & 0xF0) == 0xF0 )
      v95 = sub_FA77D0(v92);
    else
      v95 = *(_BYTE *)(v92 + 34) >> 4;
    LOBYTE(v122) = v95 == 1;
    sub_1588420(v94, (unsigned __int8 *)&v122);
    sub_15F7200(&v126);
    sub_168B9F0((__int64)&v126, v93, v121[6], 0x172Eu, 0);
    v122 = *((_QWORD *)v121 + 5);
    v96 = sub_15894B0((__int64)&v126, &v122);
    v123 = *(void **)(v92 + 24);
    sub_1587DB0(v96, (__int64 *)&v123);
    sub_15F7200(&v126);
    return 0;
  }
LABEL_35:
  if ( *(char *)(v44 + 28) >= 0 )
    goto LABEL_36;
LABEL_46:
  sub_B88650(a2, 1);
LABEL_36:
  v49 = *(_BYTE *)(a2 + 73) >> 5 == 3;
  if ( (*(_BYTE *)(a1[29] + 89) & 1) != 0 && a5 == 3 && *(_BYTE *)(a2 + 73) >> 5 == 3 )
    v50 = 0;
  else
    v50 = a5 & 3;
  v51 = v119[0];
  result = sub_18406C0((__int64 *)(a1[31] + 2352), 24, 3u);
  v53 = *(_BYTE *)(result + 12);
  *(_QWORD *)result = v51;
  *(_DWORD *)(result + 8) = v12;
  *(_QWORD *)(result + 16) = a6;
  *(_BYTE *)(result + 12) = (4 * v50) | (2 * v49) & 0xE3 | a4 & 1 | v53 & 0xE0;
  return result;
}
