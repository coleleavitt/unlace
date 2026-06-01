void __fastcall sub_1A1AE40(
        unsigned int *a1,
        int *a2,
        unsigned __int64 a3,
        __int64 *a4,
        __int64 a5,
        char a6,
        __m128 a7,
        __m128 a8,
        _DWORD *a9,
        _QWORD *a10,
        int *a11)
{
  __int64 v14; // r15
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 *v19; // r8
  __int64 v20; // rcx
  int *v21; // rax
  __int64 v22; // rsi
  _WORD *v23; // rax
  _WORD *v24; // r9
  __int64 v25; // rdx
  char v26; // al
  __int64 v27; // rax
  _DWORD *v28; // rdx
  unsigned __int8 v29; // cl
  __int64 v30; // rax
  int v31; // eax
  char v32; // al
  __int64 v33; // rbx
  unsigned int v34; // eax
  char v35; // cl
  bool v36; // zf
  unsigned int v37; // eax
  void *v38; // rdx
  char v39; // al
  __int64 v40; // rcx
  __int64 v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // r15
  char v44; // al
  __int64 v45; // rax
  _DWORD *v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  unsigned int v50; // eax
  __int64 v51; // r15
  __int64 v52; // rsi
  unsigned int v53; // eax
  unsigned int v54; // eax
  unsigned int v55; // r15d
  char v56; // r15
  __int64 v57; // rdi
  bool v58; // al
  unsigned int v59; // eax
  unsigned int v60; // eax
  void *v61; // rdx
  unsigned int v62; // eax
  unsigned __int32 v63; // ebp
  unsigned int v64; // r15d
  void *v65; // rax
  __int64 *v66; // r10
  char v67; // r9
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rdi
  __int64 v73; // rdx
  void *v74; // rdx
  char v75; // r13
  char v76; // al
  __int64 *v77; // r13
  unsigned int v78; // eax
  unsigned __int64 v79; // rax
  bool v80; // cc
  __int64 v81; // rax
  __int64 v82; // [rsp-8h] [rbp-170h]
  _QWORD *v84; // [rsp+8h] [rbp-160h]
  __int64 v85; // [rsp+8h] [rbp-160h]
  char v86; // [rsp+8h] [rbp-160h]
  unsigned int v87; // [rsp+8h] [rbp-160h]
  char v88; // [rsp+8h] [rbp-160h]
  __int64 v89; // [rsp+10h] [rbp-158h]
  void *v90; // [rsp+10h] [rbp-158h]
  _WORD *v91; // [rsp+10h] [rbp-158h]
  __int64 *v94; // [rsp+28h] [rbp-140h]
  __int64 v95; // [rsp+30h] [rbp-138h]
  unsigned int v96; // [rsp+30h] [rbp-138h]
  void *v97; // [rsp+30h] [rbp-138h]
  unsigned int v98; // [rsp+30h] [rbp-138h]
  void *v99; // [rsp+30h] [rbp-138h]
  __int64 v100; // [rsp+38h] [rbp-130h]
  __int64 *v101; // [rsp+40h] [rbp-128h]
  void *v102; // [rsp+50h] [rbp-118h]
  __int64 v103; // [rsp+58h] [rbp-110h]
  void *v104; // [rsp+60h] [rbp-108h] BYREF
  unsigned int v105; // [rsp+68h] [rbp-100h]
  char v106; // [rsp+6Ch] [rbp-FCh]
  void *v107; // [rsp+70h] [rbp-F8h] BYREF
  unsigned int v108; // [rsp+78h] [rbp-F0h]
  void *v109; // [rsp+80h] [rbp-E8h] BYREF
  unsigned int v110; // [rsp+88h] [rbp-E0h]
  void *v111; // [rsp+90h] [rbp-D8h] BYREF
  unsigned int v112; // [rsp+98h] [rbp-D0h]
  char v113; // [rsp+9Ch] [rbp-CCh]
  void *v114; // [rsp+A0h] [rbp-C8h] BYREF
  unsigned int v115; // [rsp+A8h] [rbp-C0h]
  int v116; // [rsp+C0h] [rbp-A8h]

  v14 = sub_A72040(*(_QWORD **)(*(_QWORD *)a1 + 248LL), *a4);
  if ( !*((_BYTE *)a1 + 9) )
  {
    v84 = *(_QWORD **)a1;
    v15 = sub_BFB220(a3);
    if ( (unsigned __int8)sub_1A0B010(*(_QWORD *)(v14 + 32), v15, v84, v16, v17, v18, a7, a8) )
    {
      *((_BYTE *)a1 + 8) = 1;
      return;
    }
  }
  v19 = *(__int64 **)(a3 + 16);
  v20 = (__int64)(*(_QWORD *)(a3 + 24) - (_QWORD)v19) >> 3;
  v21 = a2;
  do
  {
    v22 = *((_QWORD *)v21 + 2);
    v21 = *((int **)v21 + 1);
  }
  while ( v21 );
  v89 = *(_QWORD *)(*(_QWORD *)a1 + 248LL);
  v85 = v22;
  if ( (unsigned int)v20 == 1 )
  {
    v95 = (__int64)(*(_QWORD *)(a3 + 24) - (_QWORD)v19) >> 3;
    v94 = *(__int64 **)(a3 + 16);
    v23 = (_WORD *)sub_BFB9F0(*v19);
    v19 = v94;
    LODWORD(v20) = v95;
    v24 = v23;
    if ( v23 )
    {
      if ( (*v23 & 0x1FF) == 0x42 )
      {
        v25 = v89;
        v22 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL);
        v26 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
        if ( (v26 & 0xFB) == 2 || (unsigned __int8)(v26 - 3) <= 2u )
        {
          if ( (unsigned __int8)(*(_BYTE *)(v22 + 16) - 2) > 4u )
          {
            v91 = v24;
            v81 = sub_F63050(*(_QWORD *)(v85 & 0xFFFFFFFFFFFFFFF0LL), v22, v25, v95);
            v24 = v91;
            v22 = v81;
          }
          if ( !(unsigned int)sub_1A0A380(**((_QWORD **)v24 + 5), v22) )
          {
            v27 = *(_QWORD *)(a3 + 16);
            v28 = **(_DWORD ***)(*(_QWORD *)v27 + 40LL);
            *(_QWORD *)v27 = v28;
            if ( v28 )
            {
              v29 = ((*(_DWORD *)a3 >> 14) | (*v28 >> 14)) & 0x1F;
              *(_BYTE *)(a3 + 1) = (v29 << 6) | *(_BYTE *)(a3 + 1) & 0x3F;
              *(_BYTE *)(a3 + 2) = *(_BYTE *)(a3 + 2) & 0xF8 | (v29 >> 2);
            }
          }
          v19 = *(__int64 **)(a3 + 16);
          v20 = (__int64)(*(_QWORD *)(a3 + 24) - (_QWORD)v19) >> 3;
        }
      }
    }
  }
  v30 = (unsigned int)*a9;
  if ( (unsigned int)v30 >= (unsigned int)v20 || (v22 = v14, (unsigned int)sub_1A0A380(v19[v30], v14)) )
  {
    v31 = *(unsigned __int8 *)(v14 + 16);
    if ( (_BYTE)v31 == 6 )
    {
      if ( (unsigned int)((__int64)(*(_QWORD *)(a3 + 24) - *(_QWORD *)(a3 + 16)) >> 3) )
      {
        v32 = *((_BYTE *)a1 + 9);
        if ( v32 )
        {
LABEL_23:
          *((_BYTE *)a1 + 8) = v32;
          ++*a9;
          ++*a11;
          return;
        }
        v33 = *(_QWORD *)a1;
      }
      else
      {
        v33 = *(_QWORD *)a1;
        v32 = 0;
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 232LL) + 1LL) & 8) == 0 )
          goto LABEL_23;
        v32 = *((_BYTE *)a1 + 9);
        if ( v32 )
          goto LABEL_23;
      }
      v34 = sub_EEB7E0(*(_QWORD *)(v14 + 40), v22, *(double *)a7.m128_u64);
      sub_168B9F0((__int64)&v114, (__int64 *)(v33 + 8), v34, 0x1538u, 0);
      v111 = (void *)sub_EEC8C0(*(_QWORD *)(v14 + 40), v33 + 8, *(double *)a7.m128_u64);
      sub_1587DB0((__int64)&v114, (__int64 *)&v111);
      sub_15F7200(&v114);
      v32 = 1;
      goto LABEL_23;
    }
    v35 = *(_BYTE *)(a5 + 12);
    v105 = *(_DWORD *)(a5 + 8);
    if ( v105 > 0x40 )
    {
      v88 = v35;
      sub_2205470(&v104, 0, 0);
      v31 = *(unsigned __int8 *)(v14 + 16);
      v35 = v88;
    }
    else
    {
      v104 = nullptr;
    }
    v106 = v35;
    v86 = 0;
    if ( (unsigned int)(v31 - 2) <= 1 )
    {
      sub_A5DAD0((__int64)&v114, v14);
      if ( v105 > 0x40 && v104 )
        operator delete[](v104);
      v36 = *(_BYTE *)(a5 + 12) == 0;
      v104 = v114;
      v105 = v115;
      if ( v36 )
        sub_2206DE0(&v114, a5, v115);
      else
        sub_2206D90(&v114, a5, v115);
      v37 = v115;
      v38 = v114;
      if ( *(_DWORD *)(a5 + 8) > 0x40u && *(_QWORD *)a5 )
      {
        v90 = v114;
        v87 = v115;
        operator delete[](*(void **)a5);
        v38 = v90;
        v37 = v87;
      }
      *(_DWORD *)(a5 + 8) = v37;
      v39 = v106;
      *(_QWORD *)a5 = v38;
      *(_BYTE *)(a5 + 12) = v39;
      v86 = 1;
    }
    v40 = *(_QWORD *)(a3 + 16);
    v41 = *(_QWORD *)(v14 + 32);
    v42 = (unsigned int)*a9;
    v100 = v41;
    if ( (unsigned int)v42 < (unsigned int)((*(_QWORD *)(a3 + 24) - v40) >> 3) )
    {
      v41 &= 0xFFFFFFFFFFFFFFF0LL;
      v101 = (__int64 *)v41;
      while ( 1 )
      {
        v43 = *(_QWORD *)(v40 + 8 * v42);
        if ( (*(_WORD *)v43 & 0x1FF) != 0x44 )
          break;
        if ( !a6 )
          goto LABEL_104;
        v41 = (__int64)a2;
        if ( !(unsigned __int8)sub_1A299A0(
                                 (_DWORD)a1,
                                 (_DWORD)a2,
                                 a3,
                                 *(_QWORD *)(v40 + 8 * v42),
                                 0,
                                 (_DWORD)a4,
                                 0,
                                 a5,
                                 (__int64)a9,
                                 (_DWORD)a10,
                                 (__int64)a11,
                                 1,
                                 0) )
        {
          v59 = *(_DWORD *)(a5 + 8);
          if ( v59 > v105 )
          {
            v56 = v106;
            v41 = (__int64)&v104;
            if ( v106 )
              sub_2206CD0(&v114, &v104, v59);
            else
              sub_2206B70(&v114, &v104, v59);
            v60 = v115;
            v61 = v114;
            if ( v105 > 0x40 && v104 )
            {
              v102 = v114;
              v98 = v115;
              operator delete[](v104);
              v61 = v102;
              v60 = v98;
            }
            v104 = v61;
            v105 = v60;
            v106 = v56;
          }
          else
          {
            if ( v59 < v105 )
            {
              v41 = a5;
              if ( *(_BYTE *)(a5 + 12) )
                sub_2206CD0(&v114, a5, v105);
              else
                sub_2206B70(&v114, a5, v105);
              v64 = v115;
              v65 = v114;
              if ( *(_DWORD *)(a5 + 8) > 0x40u && *(_QWORD *)a5 )
              {
                v99 = v114;
                operator delete[](*(void **)a5);
                v65 = v99;
              }
              *(_QWORD *)a5 = v65;
              *(_DWORD *)(a5 + 8) = v64;
            }
            v56 = v106;
          }
          *(_BYTE *)(a5 + 12) = v56;
          if ( v86 )
            goto LABEL_42;
          v41 = (__int64)&v104;
          v57 = a5;
          if ( !v56 )
          {
LABEL_83:
            v58 = (int)sub_2205E20(v57, &v104) > 0;
LABEL_69:
            if ( v58 )
            {
              if ( v105 <= 0x40 && *(_DWORD *)(a5 + 8) <= 0x40u )
              {
                v74 = *(void **)a5;
                v105 = *(_DWORD *)(a5 + 8);
                v104 = v74;
              }
              else
              {
                v41 = a5;
                sub_22056A0(&v104, a5);
                v56 = *(_BYTE *)(a5 + 12);
              }
              v106 = v56;
            }
            goto LABEL_42;
          }
LABEL_68:
          v58 = (int)sub_2205DB0(v57, &v104) > 0;
          goto LABEL_69;
        }
        *((_BYTE *)a1 + 8) = 1;
LABEL_42:
        v40 = *(_QWORD *)(a3 + 16);
        v42 = (unsigned int)*a9;
        if ( (unsigned int)v42 >= (unsigned int)((*(_QWORD *)(a3 + 24) - v40) >> 3) )
          goto LABEL_96;
      }
      if ( v86 )
      {
        if ( *(_DWORD *)(a5 + 8) <= 0x40u )
        {
          v44 = *(_QWORD *)a5 == (_QWORD)v104;
        }
        else
        {
          v41 = (__int64)&v104;
          v44 = sub_2205D70(a5, &v104);
        }
        if ( v44 )
          goto LABEL_96;
      }
      sub_1A0B470((__int64)&v114, *(_QWORD **)(*(_QWORD *)a1 + 248LL), *a11, (__int64)a2);
      if ( *(_BYTE *)(a5 + 12) )
      {
        v45 = *(_QWORD *)a5;
        if ( *(_DWORD *)(a5 + 8) > 0x40u )
          v45 = *(_QWORD *)v45;
      }
      else
      {
        LODWORD(v45) = *(_DWORD *)(a5 + 8);
        v46 = *(_DWORD **)a5;
        if ( (unsigned int)v45 > 0x40 )
        {
          LODWORD(v45) = *v46;
        }
        else if ( (_DWORD)v45 )
        {
          v45 = (__int64)((_QWORD)v46 << (64 - (unsigned __int8)v45)) >> (64 - (unsigned __int8)v45);
        }
      }
      v116 = v45;
      v96 = a1[12];
      v41 = (__int64)&v114;
      sub_1A27C60((_DWORD)a1, (unsigned int)&v114, a3, v100, (_DWORD)a9, (_DWORD)a10, (__int64)a11, 0);
      sub_2205900(a5);
      if ( !*((_QWORD *)a1 + 5) && (*(_WORD *)v43 & 0x1FF) != 0x42
        || !sub_F61140(*v101, (__int64)&v114, v82, v47, v48, v49) )
      {
LABEL_66:
        if ( !v86 )
        {
          v56 = *(_BYTE *)(a5 + 12);
          v41 = (__int64)&v104;
          v57 = a5;
          if ( !v56 )
            goto LABEL_83;
          goto LABEL_68;
        }
        goto LABEL_42;
      }
      v50 = *(_DWORD *)(a5 + 8);
      if ( *((_QWORD *)a1 + 5) )
      {
        v51 = a1[12];
        v108 = *(_DWORD *)(a5 + 8);
        if ( v50 > 0x40 )
          sub_2205510(&v107);
        else
          v107 = *(void **)a5;
        v52 = v51;
      }
      else
      {
        v73 = *(unsigned int *)(v43 + 52);
        v108 = *(_DWORD *)(a5 + 8);
        if ( v50 > 0x40 )
        {
          v103 = v73;
          sub_2205510(&v107);
          v73 = v103;
        }
        else
        {
          v107 = *(void **)a5;
        }
        v52 = v73;
      }
      sub_2205A20(&v107, v52);
      v53 = v108;
      v108 = 0;
      v110 = v53;
      v109 = v107;
      sub_2205B00(&v109, v96);
      v54 = v110;
      v41 = 1;
      v110 = 0;
      v112 = v54;
      v111 = v109;
      sub_2205B00(&v111, 1);
      v55 = v112;
      v112 = 0;
      if ( *(_DWORD *)(a5 + 8) > 0x40u && *(_QWORD *)a5 )
      {
        v97 = v111;
        operator delete[](*(void **)a5);
        *(_DWORD *)(a5 + 8) = v55;
        *(_QWORD *)a5 = v97;
        if ( v112 > 0x40 && v111 )
        {
          operator delete[](v111);
          if ( v110 <= 0x40 )
          {
LABEL_63:
            if ( v108 > 0x40 && v107 )
              operator delete[](v107);
            goto LABEL_66;
          }
LABEL_76:
          if ( v109 )
            operator delete[](v109);
          goto LABEL_63;
        }
      }
      else
      {
        *(_QWORD *)a5 = v111;
        *(_DWORD *)(a5 + 8) = v55;
      }
      if ( v110 <= 0x40 )
        goto LABEL_63;
      goto LABEL_76;
    }
LABEL_96:
    if ( *((_BYTE *)a1 + 8) )
      goto LABEL_104;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a4 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 5
      || *((_BYTE *)a1 + 9) )
    {
LABEL_98:
      if ( v86
        && ((v41 = (__int64)&v104, !*(_BYTE *)(a5 + 12))
          ? (v62 = (unsigned int)sub_2205E20(a5, &v104) >> 31)
          : (v62 = (unsigned int)sub_2205DB0(a5, &v104) >> 31),
            (_BYTE)v62)
        || *a2 == 8 && sub_1A0A650((__int64)a2, v41, v42, v40) )
      {
        v63 = sub_BFB220(a3);
        sub_1A0B470((__int64)&v114, *(_QWORD **)(*(_QWORD *)a1 + 248LL), 0, (__int64)a2);
        if ( !*((_QWORD *)a1 + 2) )
          sub_1A19410(a1, v63, (__int64)&v114, a7, a8);
      }
LABEL_104:
      if ( v105 > 0x40 && v104 )
        operator delete[](v104);
      return;
    }
    v75 = v106;
    v112 = v105;
    if ( v105 > 0x40 )
    {
      v41 = 0;
      sub_2205470(&v111, 0, 0);
      v113 = v75;
      if ( v105 > 0x40 )
      {
        v41 = (__int64)&v111;
        v76 = sub_2205D70(&v104, &v111);
        goto LABEL_143;
      }
    }
    else
    {
      v111 = nullptr;
      v113 = v106;
    }
    v76 = v104 == v111;
LABEL_143:
    if ( v76 && (*a2 != 8 || !sub_1A0A650((__int64)a2, v41, v42, v40)) )
    {
      v77 = (__int64 *)(*(_QWORD *)a1 + 8LL);
      v78 = sub_BFB1C0(a3);
      sub_168B9F0((__int64)&v114, v77, v78, 0x1650u, 0);
      sub_15F7200(&v114);
    }
    v79 = sub_A70F70(*(_QWORD *)(*(_QWORD *)a1 + 248LL), v100, (__int64)&v104, nullptr, 0, 0);
    v41 = (__int64)a4;
    v80 = v112 <= 0x40;
    *a4 = v79;
    if ( !v80 && v111 )
      operator delete[](v111);
    if ( *((_BYTE *)a1 + 8) )
      goto LABEL_104;
    goto LABEL_98;
  }
  if ( !*((_BYTE *)a1 + 9) )
  {
    v66 = *(__int64 **)a1;
    v67 = 0;
    if ( (**(_BYTE **)(*(_QWORD *)a1 + 232LL) & 8) != 0 )
      v67 = sub_1A0AF90(a2);
    sub_1A14210(
      *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL * (unsigned int)*a9),
      (__int64)a4,
      v14,
      v66,
      (__int64 *)a2,
      v67,
      *(double *)a7.m128_u64);
  }
  v68 = (unsigned int)*a9;
  if ( a10 )
  {
    sub_1A11640(
      a1,
      (__int64)a10,
      (unsigned int *)a11,
      *(_DWORD **)(*(_QWORD *)(a3 + 16) + 8 * v68),
      *(double *)a7.m128_u64);
    sub_C0B170(a10, *(_QWORD **)(*(_QWORD *)a1 + 248LL), *a11, v69, v70, v71);
    LODWORD(v68) = *a9;
  }
  v72 = *((_QWORD *)a1 + 4);
  *a9 = v68 + 1;
  if ( v72 )
    sub_A6A4A0(v72, *a4);
}
