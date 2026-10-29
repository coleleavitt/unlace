__int64 __fastcall sub_B13080(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  char v8; // r12
  unsigned int v9; // r15d
  unsigned int v10; // eax
  int v11; // edx
  __int64 v12; // rdi
  unsigned int v13; // ebx
  bool v14; // zf
  __int64 v15; // rbx
  int v16; // edx
  char v17; // cl
  __int64 v18; // rax
  __int64 v19; // rdx
  char v20; // si
  __int64 v21; // rax
  char v22; // cl
  __int64 v23; // rdx
  int v24; // r8d
  int v25; // r9d
  char v26; // dl
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  _DWORD *v32; // rax
  unsigned int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rbx
  _QWORD *v36; // rsi
  void *v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // r8d
  int v41; // r9d
  __int64 v42; // rsi
  __int64 v43; // r15
  int v44; // r13d
  __int64 v45; // rax
  __int64 v46; // r8
  unsigned int v47; // r12d
  __int64 j; // rax
  __int64 v49; // rcx
  int v50; // edx
  __int64 v51; // rsi
  __int64 v52; // r15
  __int64 k; // r13
  int v54; // eax
  __int64 v55; // rdx
  void *v56; // r13
  int v57; // eax
  int v58; // eax
  __int64 v59; // rax
  char v60; // si
  char v61; // dl
  int v62; // edx
  __int64 v63; // rax
  __int64 v64; // rdx
  _DWORD *v65; // r13
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // r12
  unsigned int v69; // r13d
  unsigned int v70; // eax
  __int64 v71; // r15
  __int64 v72; // r15
  __int64 v73; // [rsp-8h] [rbp-148h]
  int v74; // [rsp+0h] [rbp-140h]
  int v75; // [rsp+8h] [rbp-138h]
  __int64 *v76; // [rsp+8h] [rbp-138h]
  int v77; // [rsp+10h] [rbp-130h]
  __int64 *v78; // [rsp+10h] [rbp-130h]
  int v79; // [rsp+18h] [rbp-128h]
  __int64 *v80; // [rsp+18h] [rbp-128h]
  int v81; // [rsp+20h] [rbp-120h]
  void *v82; // [rsp+20h] [rbp-120h]
  __int64 v83; // [rsp+20h] [rbp-120h]
  unsigned int v84; // [rsp+28h] [rbp-118h]
  char *v85; // [rsp+28h] [rbp-118h]
  char *v86; // [rsp+30h] [rbp-110h]
  void *v87; // [rsp+30h] [rbp-110h]
  __int64 v88; // [rsp+38h] [rbp-108h]
  __int64 v89; // [rsp+38h] [rbp-108h]
  char v90; // [rsp+38h] [rbp-108h]
  __int64 v91; // [rsp+40h] [rbp-100h]
  __int64 v92; // [rsp+48h] [rbp-F8h]
  unsigned int v93; // [rsp+48h] [rbp-F8h]
  unsigned int v94; // [rsp+50h] [rbp-F0h]
  void *v95; // [rsp+50h] [rbp-F0h]
  int v96; // [rsp+58h] [rbp-E8h]
  void *v97; // [rsp+58h] [rbp-E8h]
  _DWORD *i; // [rsp+58h] [rbp-E8h]
  void *v99; // [rsp+58h] [rbp-E8h]
  unsigned int v100; // [rsp+68h] [rbp-D8h] BYREF
  unsigned int v101; // [rsp+6Ch] [rbp-D4h] BYREF
  __int64 v102; // [rsp+70h] [rbp-D0h] BYREF
  __int64 v103; // [rsp+78h] [rbp-C8h] BYREF
  __int64 v104; // [rsp+80h] [rbp-C0h] BYREF
  __int64 v105; // [rsp+88h] [rbp-B8h] BYREF
  __int64 v106; // [rsp+90h] [rbp-B0h] BYREF
  __int64 v107; // [rsp+98h] [rbp-A8h] BYREF
  _QWORD v108[2]; // [rsp+A0h] [rbp-A0h] BYREF
  _QWORD v109[2]; // [rsp+B0h] [rbp-90h] BYREF
  int v110[8]; // [rsp+C0h] [rbp-80h] BYREF
  __int64 v111; // [rsp+E0h] [rbp-60h] BYREF
  __int64 v112; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v113; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v114; // [rsp+F8h] [rbp-48h]
  __int64 v115; // [rsp+100h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(v4 + 8832);
  if ( v5 )
  {
    v6 = *a2;
    if ( (unsigned int)v6 < *(_DWORD *)(v5 - 4) && *(_DWORD *)(v5 + 4 * v6) != 0x7FFFFFFF )
      return 1;
  }
  ++*(_DWORD *)(a1 + 784);
  if ( !*((_WORD *)a2 + 2) )
  {
    v32 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL);
    if ( v32 )
    {
      if ( *v32 == *(_DWORD *)(a1 + 720) && v32[1] == 5 )
      {
        v33 = sub_B67520(v4, a2);
        sub_8F1CE0(*(_QWORD *)(a1 + 16), v33, *(_DWORD *)(a1 + 8));
        return 1;
      }
    }
  }
  v8 = sub_B0FBF0(a1, a2);
  if ( v8 )
    return 1;
  v9 = a2[6];
  v10 = sub_B67520(*(_QWORD *)(a1 + 16), a2);
  v11 = *(_DWORD *)(a1 + 8);
  v12 = *(_QWORD *)(a1 + 16);
  v13 = v10;
  v84 = v10;
  v100 = v10;
  sub_8F1CE0(v12, v10, v11);
  v14 = *((_WORD *)a2 + 2) == 0;
  v96 = 2 * v13;
  v101 = 2 * v13;
  v92 = a1 + 712;
  if ( v14 && (unsigned __int8)sub_168DB30(a1 + 712, *((_QWORD *)a2 + 2)) )
  {
    v34 = *(_QWORD *)(a1 + 24);
    v108[0] = 0;
    v108[1] = 0;
    v104 = v34;
    v106 = v34;
    v109[0] = 1;
    v109[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v109);
    BYTE4(v109[0]) &= ~1u;
    LODWORD(v109[0]) = 1;
    if ( v9 )
    {
      v95 = nullptr;
      v35 = 0;
      LODWORD(v82) = v9;
      v80 = &v103;
      v78 = &v105;
      v76 = &v102;
      v85 = (char *)v108;
      v91 = 0;
      v89 = 0;
      do
      {
        v38 = *(_QWORD *)&a2[2 * (_QWORD)v95 + 8];
        v103 = v38;
        if ( v38 )
          ++*(_DWORD *)(v38 + 8);
        v105 = v89;
        sub_B08910(v78, v80);
        v90 = v105;
        v39 = sub_15EC2C0(*(_QWORD *)(a1 + 24), *(_QWORD *)&a2[2 * (_QWORD)v95 + 8]);
        v111 = v39;
        if ( v39 )
          ++*(_DWORD *)(v39 + 8);
        v107 = v91;
        sub_B08910(&v107, &v111);
        v91 = v107;
        sub_168DB50(
          (unsigned int)&v111,
          v92,
          *((_QWORD *)a2 + 2),
          (_DWORD)v95,
          v40,
          v41,
          v74,
          (_DWORD)v76,
          (_DWORD)v78,
          (_DWORD)v80,
          (_DWORD)v82,
          (_DWORD)v85,
          (_DWORD)v95,
          v90);
        if ( !v35 || (v42 = *(unsigned int *)(v35 - 4), (_DWORD)v42 == *(_DWORD *)(v35 - 8)) )
        {
          v102 = v35;
          sub_53D790(v76);
          v35 = v102;
          v42 = *(unsigned int *)(v102 - 4);
        }
        v36 = (_QWORD *)(v35 + 32 * v42);
        *v36 = 0;
        v37 = qword_1C7F2C0;
        v36[1] = 0;
        v36[2] = 1;
        v36[3] = 0;
        sub_27B950((__int64)v37, (__int64)v36, (int *)&v111);
        ++*(_DWORD *)(v35 - 4);
        sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v85, (__int64)&v111, (__int64)v85);
        sub_25A130((char *)&v111);
        v95 = (char *)v95 + 1;
      }
      while ( v82 != v95 );
    }
    else
    {
      v35 = 0;
      v91 = 0;
      v76 = &v102;
      v89 = 0;
      v85 = (char *)v108;
    }
    sub_168DDF0(v110, v92, *((_QWORD *)a2 + 2));
    v83 = *(_QWORD *)(a1 + 24);
    sub_3EBB80((__int64)&v111, (__int64)v85, (__int64)v110);
    v66 = sub_1690D20(v92, v9, v35, v91, &v111);
    v99 = (void *)v66;
    if ( v66 )
      ++*(_DWORD *)(v66 + 8);
    sub_25A130((char *)&v111);
    v87 = *(void **)(a1 + 24);
    v67 = sub_1690D20(v92, v9, v35, v89, v110);
    v68 = v67;
    if ( v67 )
      ++*(_DWORD *)(v67 + 8);
    sub_B6F780(*(_QWORD *)(a1 + 16));
    sub_B6F780(*(_QWORD *)(a1 + 16));
    v69 = sub_B645B0(*(_QWORD *)(a1 + 16), v99);
    v70 = sub_B645B0(*(_QWORD *)(a1 + 16), v68);
    v71 = *(_QWORD *)(a1 + 16);
    v93 = v70;
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v71 + 7488) + 48LL))(
      *(_QWORD *)(v71 + 7488),
      *(_QWORD *)(*(_QWORD *)(v71 + 8840) + 8LL * (v69 >> 1)));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v71 + 7488) + 64LL))(*(_QWORD *)(v71 + 7488));
    v72 = *(_QWORD *)(a1 + 16);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v72 + 7488) + 48LL))(
      *(_QWORD *)(v72 + 7488),
      *(_QWORD *)(*(_QWORD *)(v72 + 8840) + 8LL * (v93 >> 1)));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v72 + 7488) + 64LL))(*(_QWORD *)(v72 + 7488));
    sub_B6A470(*(_QWORD *)(a1 + 16), *(unsigned int *)(a1 + 8), v101 ^ 1, v69, 0, 0);
    sub_B6A470(*(_QWORD *)(a1 + 16), *(unsigned int *)(a1 + 8), v101 ^ 1, v93, 0, 0);
    sub_B6A4A0(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 8), v69 ^ 1, v93 ^ 1, v101, 0, 0);
    sub_B035B0(v68, (__int64)v87);
    sub_B035B0((__int64)v99, v83);
    sub_25A130((char *)v110);
    sub_25A130(v85);
    v102 = v35;
    sub_27FC20(v76);
    v107 = v91;
    sub_2334C0(&v106);
    v105 = v89;
    sub_2334C0(&v104);
    return 1;
  }
  v15 = sub_186B270(0xD8u);
  if ( !*((_WORD *)a2 + 2) )
    v8 = sub_168DB30(v92, *((_QWORD *)a2 + 2));
  *(_BYTE *)(v15 + 12) = v8;
  *(_QWORD *)v15 = a1 + 72;
  *(_DWORD *)(v15 + 8) = v96;
  *(_QWORD *)(v15 + 16) = 0;
  *(_QWORD *)(v15 + 24) = 0;
  *(_QWORD *)(v15 + 32) = 0;
  *(_QWORD *)(v15 + 40) = 1;
  *(_QWORD *)(v15 + 64) = 0;
  *(_QWORD *)(v15 + 72) = 0;
  *(_QWORD *)(v15 + 80) = 1;
  *(_QWORD *)(v15 + 88) = 0;
  *(_QWORD *)(v15 + 96) = a1 + 72;
  *(_QWORD *)(v15 + 104) = 0;
  *(_QWORD *)(v15 + 112) = 0;
  *(_QWORD *)(v15 + 128) = a1 + 72;
  *(_QWORD *)(v15 + 136) = 0;
  *(_QWORD *)(v15 + 144) = 0;
  *(_QWORD *)(v15 + 160) = a1 + 72;
  *(_QWORD *)(v15 + 168) = 0;
  *(_QWORD *)(v15 + 176) = 0;
  *(_QWORD *)(v15 + 184) = a1 + 72;
  *(_QWORD *)(v15 + 192) = 0;
  *(_QWORD *)(v15 + 200) = 0;
  *(_OWORD *)(v15 + 48) = 0;
  v88 = a1 + 72;
  sub_B04490(v15);
  v86 = (char *)&v111;
  sub_168DDF0(&v111, v92, *((_QWORD *)a2 + 2));
  v16 = v111;
  v17 = BYTE4(v111);
  LODWORD(v111) = *(_DWORD *)(v15 + 24);
  v18 = *(_QWORD *)(v15 + 32);
  *(_DWORD *)(v15 + 24) = v16;
  v19 = v112;
  v112 = v18;
  LOBYTE(v18) = *(_BYTE *)(v15 + 28);
  *(_QWORD *)(v15 + 32) = v19;
  LOBYTE(v19) = v17;
  v17 &= ~2u;
  v20 = v18 & 0xFD;
  BYTE4(v111) = v18 & 1 | v17 & 0xFE | v18 & 2;
  LODWORD(v18) = *(_DWORD *)(v15 + 40);
  *(_BYTE *)(v15 + 28) = v17 & 1 | v20 & 0xFE | v19 & 2;
  LODWORD(v19) = v113;
  LODWORD(v113) = v18;
  v21 = *(_QWORD *)(v15 + 48);
  v22 = BYTE4(v113);
  *(_DWORD *)(v15 + 40) = v19;
  v23 = v114;
  v114 = v21;
  LOBYTE(v21) = *(_BYTE *)(v15 + 44);
  *(_QWORD *)(v15 + 48) = v23;
  LOBYTE(v23) = v22;
  v22 &= ~2u;
  BYTE4(v113) = v21 & 1 | v22 & 0xFE | v21 & 2;
  *(_BYTE *)(v15 + 44) = v22 & 1 | v21 & 0xFC | v23 & 2;
  sub_25A130((char *)&v111);
  v97 = nullptr;
  if ( v9 )
  {
    do
    {
      v94 = sub_B04A40(a1, *(unsigned int **)&a2[2 * (_QWORD)v97 + 8]);
      sub_168DB50(
        (unsigned int)v110,
        v92,
        *((_QWORD *)a2 + 2),
        (_DWORD)v97,
        v24,
        v25,
        v74,
        v75,
        v77,
        v79,
        v81,
        v84,
        (_DWORD)v86,
        v88);
      v26 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + v94);
      if ( v26 != -1 )
      {
        if ( v26 == 1 )
        {
          sub_89ABF0((__int64)qword_1C7F2C0, v15 + 24, (__int64)v110, v15 + 24);
        }
        else
        {
          LODWORD(v111) = v94;
          BYTE4(v112) &= 0xFCu;
          BYTE4(v114) &= 0xFCu;
          LODWORD(v112) = 0;
          v113 = 0;
          LODWORD(v114) = 1;
          v115 = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)&v112, v110);
          v27 = *(_QWORD *)(v15 + 16);
          if ( !v27 || (v28 = *(unsigned int *)(v27 - 4), (_DWORD)v28 == *(_DWORD *)(v27 - 8)) )
          {
            sub_B15E00(v15 + 16);
            v27 = *(_QWORD *)(v15 + 16);
            v28 = *(unsigned int *)(v27 - 4);
          }
          v29 = v27 + 40 * v28;
          *(_DWORD *)v29 = v111;
          *(_DWORD *)(v29 + 8) = v112;
          *(_BYTE *)(v29 + 12) = BYTE4(v112) & 3 | *(_BYTE *)(v29 + 12) & 0xFC;
          v30 = v113;
          v113 = 0;
          *(_QWORD *)(v29 + 16) = v30;
          *(_DWORD *)(v29 + 24) = v114;
          *(_BYTE *)(v29 + 28) = BYTE4(v114) & 3 | *(_BYTE *)(v29 + 28) & 0xFC;
          v31 = v115;
          v115 = 0;
          *(_QWORD *)(v29 + 32) = v31;
          ++*(_DWORD *)(v27 - 4);
          sub_25A130((char *)&v112);
        }
      }
      sub_25A130((char *)v110);
      v97 = (char *)v97 + 1;
    }
    while ( v97 != (void *)v9 );
  }
  if ( *((_WORD *)a2 + 2)
    || !(unsigned __int8)sub_168DA50(v92, *((_QWORD *)a2 + 2))
    && (*((_WORD *)a2 + 2) || !(unsigned __int8)sub_168DAF0(v92, *((_QWORD *)a2 + 2))) )
  {
    v43 = v15 + 24;
  }
  else
  {
    BYTE4(v111) &= 0xFCu;
    v43 = v15 + 24;
    BYTE4(v113) &= 0xFCu;
    LODWORD(v111) = 0;
    v56 = qword_1C7F2C0;
    v112 = 0;
    LODWORD(v113) = 1;
    v114 = 0;
    if ( (*(_BYTE *)(v15 + 28) & 1) != 0 )
      sub_182C690(qword_1C7F2C0, v86, v15 + 24);
    else
      LODWORD(v111) = *(_DWORD *)(v15 + 24);
    if ( (*(_BYTE *)(v15 + 44) & 1) != 0 )
    {
      sub_182C690(v56, &v113, v15 + 40);
    }
    else
    {
      v57 = *(_DWORD *)(v15 + 40);
      BYTE4(v113) &= ~1u;
      LODWORD(v113) = v57;
    }
    sub_1831620(qword_1C7F2C0, v86);
    v58 = *(_DWORD *)(v15 + 24);
    *(_DWORD *)(v15 + 24) = v111;
    LODWORD(v111) = v58;
    v59 = *(_QWORD *)(v15 + 32);
    *(_QWORD *)(v15 + 32) = v112;
    v112 = v59;
    v60 = *(_BYTE *)(v15 + 28);
    LOBYTE(v59) = v60 & 2;
    v60 &= ~2u;
    v61 = v60 & 0xFE | BYTE4(v111) & 2 | BYTE4(v111) & 1;
    BYTE4(v111) = v60 & 1 | BYTE4(v111) & 0xFC | v59 & 0xFE;
    LODWORD(v59) = *(_DWORD *)(v15 + 40);
    *(_BYTE *)(v15 + 28) = v61;
    v62 = v113;
    LODWORD(v113) = v59;
    v63 = *(_QWORD *)(v15 + 48);
    *(_DWORD *)(v15 + 40) = v62;
    v64 = v114;
    v114 = v63;
    LOBYTE(v63) = *(_BYTE *)(v15 + 44);
    *(_QWORD *)(v15 + 48) = v64;
    LOBYTE(v64) = v63 & 0xFC | BYTE4(v113) & 2 | BYTE4(v113) & 1;
    BYTE4(v113) = v63 & 1 | BYTE4(v113) & 0xFC | v63 & 2;
    *(_BYTE *)(v15 + 44) = v64;
    sub_25A130(v86);
    v65 = *(_DWORD **)(v15 + 16);
    if ( v65 )
    {
      for ( i = &v65[10 * *(v65 - 1)]; i != v65; v65 += 10 )
      {
        *v65 ^= 1u;
        sub_2FC4A0((__int64)qword_1C7F2C0, v15 + 24, (__int64)(v65 + 2), v15 + 24);
      }
    }
  }
  sub_B12420((__int64 *)(v15 + 16), v43);
  v44 = sub_B067F0((__int64 *)(v15 + 16), v43, *(_BYTE *)(v15 + 12));
  sub_B12E70((__int64 *)(v15 + 16), v43, *(_BYTE *)(v15 + 12));
  sub_B12280(v15);
  if ( v44 == -1 )
  {
    v101 ^= 1u;
    goto LABEL_61;
  }
  if ( v44 == 1 )
  {
LABEL_61:
    v51 = *(unsigned int *)(a1 + 8);
    sub_B69FE0(*(_QWORD *)(a1 + 16), v51, 1, (unsigned int)&v101, 0, 0, 1);
LABEL_62:
    sub_B15470(v15, v51, v73);
    sub_186B220((void *)v15);
    return 1;
  }
  if ( (*(_BYTE *)(v15 + (-(*(_DWORD *)(v15 + 8) & 1) & 0x28) + 28) & 1) == 0
    && *(_DWORD *)(v15 + (-(*(_DWORD *)(v15 + 8) & 1) & 0x28) + 24) == 1
    && (*(_BYTE *)(v15 + (-(*(_DWORD *)(v15 + 8) & 1) & 0x28) + 44) & 1) == 0
    && *(_DWORD *)(v15 + (-(*(_DWORD *)(v15 + 8) & 1) & 0x28) + 40) == 1
    && !*(_BYTE *)(v15 + 12) )
  {
    v45 = *(_QWORD *)(a1 + 704);
    if ( v45 )
      *(_DWORD *)(v45 - 4) = 0;
    LODWORD(v111) = v101 ^ 1;
    sub_B0E290((unsigned int **)(a1 + 704), (unsigned int *)v86);
    v47 = 0;
    for ( j = *(_QWORD *)(v15 + 40LL * (*(_DWORD *)(v15 + 8) & 1) + 16);
          j;
          j = *(_QWORD *)(v15 + 40LL * (*(_DWORD *)(v15 + 8) & 1) + 16) )
    {
      if ( v47 >= *(_DWORD *)(j - 4) )
        break;
      LODWORD(v111) = *(_DWORD *)(j + 40LL * v47);
      sub_B0E290((unsigned int **)(a1 + 704), (unsigned int *)v86);
      sub_B6A470(
        *(_QWORD *)(a1 + 16),
        *(unsigned int *)(a1 + 8),
        v101,
        *(_DWORD *)(*(_QWORD *)(v15 + 40LL * (*(_DWORD *)(v15 + 8) & 1) + 16) + 40LL * v47++) ^ 1u,
        0,
        0);
    }
    v49 = *(_QWORD *)(a1 + 704);
    if ( v49 )
      v50 = *(_DWORD *)(v49 - 4);
    else
      v50 = 0;
    v51 = *(unsigned int *)(a1 + 8);
    v73 = v46;
    sub_B69FE0(*(_QWORD *)(a1 + 16), v51, v50, v49, 0, 0, 1);
    goto LABEL_62;
  }
  sub_182F200(*(_QWORD *)(v15 + 96), v15 + 104);
  v52 = *(_QWORD *)(v15 + 16);
  if ( v52 )
  {
    for ( k = v52 + 40LL * *(unsigned int *)(v52 - 4); k != v52; v52 += 40 )
    {
      if ( (unsigned __int8)sub_B156B0(v88, v15 + 104, v52 + 8) )
      {
        if ( (*(_BYTE *)(v52 + 12) & 1) != 0 )
        {
          sub_182EA00(*(_QWORD *)(v15 + 96), v15 + 104, v52 + 8);
        }
        else
        {
          v54 = *(_DWORD *)(v52 + 8);
          *(_BYTE *)(v15 + 108) &= ~1u;
          *(_DWORD *)(v15 + 104) = v54;
        }
      }
    }
  }
  sub_B05A00(a1, v15);
  v55 = *(_QWORD *)(a1 + 64);
  if ( !v55 || v84 >= *(_DWORD *)(v55 - 4) )
  {
    sub_B09720(a1, v84);
    v55 = *(_QWORD *)(a1 + 64);
  }
  *(_QWORD *)(v55 + 48LL * v84 + 16) = v15;
  sub_B0C950((unsigned int **)(a1 + 688), &v100);
  return 1;
}

