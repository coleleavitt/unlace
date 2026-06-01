__int64 __fastcall sub_C71580(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // r15
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // r8d
  int v17; // r9d
  bool v18; // zf
  unsigned __int8 v19; // r12
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // rax
  _DWORD *v24; // rax
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  int v28; // edi
  __int64 v29; // rax
  void *v30; // rbx
  void *v31; // rbx
  void *v32; // rbx
  void *v33; // rdi
  void *v34; // rdi
  int v35; // ecx
  int v36; // r8d
  int v37; // r9d
  int v38; // edi
  void *v39; // r13
  __int64 v40; // rax
  int v41; // edi
  __int64 v42; // r12
  __int64 v43; // rax
  __int64 v44; // rdx
  int v45; // edi
  __int64 v46; // r12
  __int64 v47; // rax
  _DWORD *v48; // rdx
  void *v49; // rdi
  int v50; // ecx
  int v51; // r8d
  int v52; // r9d
  int v53; // edi
  __int64 v54; // r12
  int v55; // ecx
  int v56; // r8d
  int v57; // r9d
  int v58; // edi
  __int64 v59; // rax
  _DWORD *v61; // rax
  int v62; // ecx
  int v63; // r8d
  int v64; // r9d
  int v65; // edi
  __int64 v66; // rbx
  void *v67; // rbx
  int v68; // ecx
  int v69; // r8d
  int v70; // r9d
  int v71; // edi
  __int64 v72; // r12
  int v73; // edi
  __int64 v74; // rbx
  __int64 v75; // rax
  __int64 v76; // r12
  int v77; // ecx
  int v78; // r8d
  int v79; // r9d
  int v80; // edi
  __int64 v81; // r13
  int v82; // ecx
  int v83; // r8d
  int v84; // r9d
  __int64 v85; // rbx
  __int64 v86; // rax
  int v87; // eax
  int v88; // edi
  __int64 v89; // rbx
  __int64 v90; // rax
  __int64 v91; // r12
  __int64 v92; // rax
  char **exception; // rbx
  const char *v94; // rax
  __int64 v95; // rdx
  int v96; // [rsp-8h] [rbp-1B8h]
  __int64 v97; // [rsp+0h] [rbp-1B0h]
  __int64 v98; // [rsp+8h] [rbp-1A8h]
  unsigned __int8 v99; // [rsp+2Dh] [rbp-183h]
  unsigned __int8 v100; // [rsp+2Eh] [rbp-182h]
  bool v101; // [rsp+2Eh] [rbp-182h]
  unsigned __int8 v102; // [rsp+2Fh] [rbp-181h]
  __int64 v103; // [rsp+30h] [rbp-180h]
  __int64 *v104; // [rsp+48h] [rbp-168h]
  void *v105; // [rsp+48h] [rbp-168h]
  __int64 v106; // [rsp+60h] [rbp-150h]
  int v107; // [rsp+60h] [rbp-150h]
  int v108; // [rsp+60h] [rbp-150h]
  _DWORD *v109; // [rsp+68h] [rbp-148h]
  int v110; // [rsp+68h] [rbp-148h]
  void *v111; // [rsp+68h] [rbp-148h]
  __int64 v112; // [rsp+70h] [rbp-140h]
  int v113[2]; // [rsp+70h] [rbp-140h]
  int v114[2]; // [rsp+70h] [rbp-140h]
  int v115; // [rsp+70h] [rbp-140h]
  void *v116; // [rsp+70h] [rbp-140h]
  void *v117; // [rsp+70h] [rbp-140h]
  int v118[2]; // [rsp+70h] [rbp-140h]
  int v119[2]; // [rsp+70h] [rbp-140h]
  __int64 v120; // [rsp+78h] [rbp-138h]
  int v121[2]; // [rsp+80h] [rbp-130h] BYREF
  __int64 v122; // [rsp+88h] [rbp-128h]
  __int64 v123; // [rsp+90h] [rbp-120h] BYREF
  __int64 v124; // [rsp+98h] [rbp-118h]
  _QWORD v125[2]; // [rsp+A0h] [rbp-110h] BYREF
  _QWORD v126[2]; // [rsp+B0h] [rbp-100h] BYREF
  _QWORD v127[2]; // [rsp+C0h] [rbp-F0h] BYREF
  _QWORD v128[2]; // [rsp+D0h] [rbp-E0h] BYREF
  _QWORD v129[2]; // [rsp+E0h] [rbp-D0h] BYREF
  _QWORD v130[2]; // [rsp+F0h] [rbp-C0h] BYREF
  int v131[8]; // [rsp+100h] [rbp-B0h] BYREF
  __int64 v132; // [rsp+120h] [rbp-90h] BYREF
  __int64 v133; // [rsp+128h] [rbp-88h]
  __int64 v134; // [rsp+130h] [rbp-80h] BYREF
  __int64 v135; // [rsp+138h] [rbp-78h]
  __int64 v136; // [rsp+140h] [rbp-70h] BYREF
  __int64 v137; // [rsp+148h] [rbp-68h]
  __int64 v138; // [rsp+150h] [rbp-60h] BYREF
  __int64 v139; // [rsp+158h] [rbp-58h]
  __int64 v140; // [rsp+160h] [rbp-50h] BYREF
  __int64 v141; // [rsp+168h] [rbp-48h]
  __int64 v142; // [rsp+170h] [rbp-40h] BYREF
  __int64 v143; // [rsp+178h] [rbp-38h]

  v3 = *a2 + 128;
  v97 = v3;
  v99 = sub_13608A0(v3);
  sub_1360B80(v3, 1);
  sub_16669D0(v121, a1[4]);
  v4 = a1[5];
  if ( !v4 )
    return sub_1360B80(v97, v99);
  v5 = *(_DWORD *)(v4 - 4);
  if ( !v5 )
    return sub_1360B80(v97, v99);
  v103 = 8LL * (unsigned int)(v5 - 1);
  while ( 2 )
  {
    v6 = a1[4];
    v7 = *(_QWORD *)(v4 + v103);
    v98 = v6;
    v125[0] = 0;
    v106 = v7;
    v8 = a1[6];
    v126[0] = 1;
    v127[0] = 0;
    v128[0] = 1;
    v129[0] = 0;
    v130[0] = 1;
    v9 = *(__int64 **)(v8 + v103);
    v125[1] = 0;
    v126[1] = 0;
    v127[1] = 0;
    v128[1] = 0;
    v129[1] = 0;
    v130[1] = 0;
    if ( !v9 || (v104 = &v9[*((unsigned int *)v9 - 1)], v9 == v104) )
    {
      v61 = *(_DWORD **)(*(_QWORD *)(v106 + 40) + 24LL);
      v120 = (__int64)v61;
      if ( !v61 )
      {
        v11 = v6;
        v49 = qword_1C7F2C0;
        goto LABEL_107;
      }
      if ( *v61 != 5 )
      {
        v11 = v6;
        v120 = 0;
        v49 = qword_1C7F2C0;
        goto LABEL_107;
      }
      v11 = v6;
      if ( v61[1] == 1 )
      {
        v120 = 0;
        goto LABEL_147;
      }
      v102 = 0;
      v120 = 0;
      v100 = 0;
LABEL_93:
      v49 = qword_1C7F2C0;
      if ( v100 )
      {
        if ( v102 )
          goto LABEL_95;
        goto LABEL_123;
      }
      if ( v102 )
      {
        v136 = 1;
        v137 = 0;
        v138 = 1;
        v139 = 0;
        sub_182CBA0(qword_1C7F2C0, &v138);
        BYTE4(v138) &= ~1u;
        LODWORD(v138) = 1;
        sub_27B340((__int64)&v140, (__int64)v125, (int *)&v136);
        v80 = v122;
        if ( !v122 )
        {
          sub_16669E0(v121);
          v80 = v122;
        }
        v81 = sub_166A700(v80, (unsigned int)&v140, 0, v77, v78, v79);
        sub_25A130((char *)&v140);
        sub_25A130((char *)&v136);
        sub_135F9B0(*a2, v106, v81);
        goto LABEL_39;
      }
LABEL_107:
      v140 = 0;
      v141 = 0;
      v142 = 1;
      v143 = 0;
      sub_182CBA0(v49, &v142);
      v65 = v122;
      BYTE4(v142) &= ~1u;
      LODWORD(v142) = 1;
      if ( !v122 )
      {
        sub_16669E0(v121);
        v65 = v122;
      }
      v66 = sub_166A700(v65, (unsigned int)&v140, 0, v62, v63, v64);
      sub_25A130((char *)&v140);
      sub_135F9B0(*a2, v106, v66);
      goto LABEL_39;
    }
    v100 = 0;
    v10 = v6;
    v11 = v6;
    v12 = 0;
    v109 = nullptr;
    v120 = 0;
    v102 = 0;
    while ( 1 )
    {
      v112 = *v9;
      v19 = sub_18290A0(v10);
      if ( !v19 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        v94 = (const char *)sub_1829130(a1[4]);
        sub_161886(&v140, v94, v95);
        *exception = (char *)off_1C63670;
        sub_2333C0(exception + 1, &v140);
        sub_233E40((__int64)&v140);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
      }
      v124 = v11;
      v123 = v120;
      v20 = sub_C70660((__int64)a1, v106, v112, (__int64 *)v121, *a2, (__int64)v129, &v123);
      v15 = v123;
      v11 = v124;
      v16 = v96;
      v120 = v123;
      if ( v20 == 1 )
        break;
      if ( v20 != 2 )
        goto LABEL_15;
      if ( v123 )
      {
        if ( v12 )
        {
          v13 = a1[4];
          sub_15E1B70(v121[0]);
          v14 = sub_15E1BF0(v13);
          if ( v14 )
            ++*(_DWORD *)(v14 + 8);
          v18 = (*(_DWORD *)(v12 + 8))-- == 1;
          if ( v18 )
          {
            *(_QWORD *)v113 = v14;
            sub_15D7BC0(v13, v12);
            v14 = *(_QWORD *)v113;
          }
          v12 = v14;
        }
        else
        {
          ++*(_DWORD *)(v123 + 8);
          v12 = v15;
        }
      }
      else
      {
        if ( !v100 )
          goto LABEL_59;
        if ( (v130[0] & 0x100000000LL) != 0
          || LODWORD(v130[0]) != 1
          || (LODWORD(v15) = (v128[0] & 0x100000000LL) == 0, (v128[0] & 0x100000000LL) != 0)
          || LODWORD(v128[0]) != 1 )
        {
          if ( !(unsigned __int8)sub_1848D40(qword_1C7F2C0, v129, v127) )
            goto LABEL_15;
LABEL_59:
          v34 = qword_1C7F2C0;
          if ( (v129[0] & 0x100000000LL) != 0 )
          {
            v117 = qword_1C7F2C0;
            sub_182C690(qword_1C7F2C0, v127, v129);
            v34 = v117;
          }
          else
          {
            BYTE4(v127[0]) &= ~1u;
            LODWORD(v127[0]) = v129[0];
          }
          if ( (v130[0] & 0x100000000LL) != 0 )
          {
            sub_182C690(v34, v128, v130);
          }
          else
          {
LABEL_62:
            BYTE4(v128[0]) &= ~1u;
            LODWORD(v128[0]) = v130[0];
          }
          v100 = v19;
          goto LABEL_15;
        }
        if ( (v129[0] & 0x100000000LL) != 0 || (v127[0] & 0x100000000LL) != 0 )
        {
          v101 = (v128[0] & 0x100000000LL) == 0;
          v87 = sub_182C7B0(qword_1C7F2C0, v129, v127);
          LODWORD(v15) = v101;
          if ( v87 < 0 )
            goto LABEL_59;
        }
        else if ( SLODWORD(v129[0]) < SLODWORD(v127[0]) )
        {
          BYTE4(v127[0]) &= ~1u;
          LODWORD(v127[0]) = v129[0];
          goto LABEL_62;
        }
        v100 = v15;
      }
LABEL_15:
      if ( v104 == ++v9 )
        goto LABEL_26;
LABEL_16:
      v10 = a1[4];
    }
    v21 = v123;
    if ( !v123 )
    {
      if ( v102 )
      {
        if ( (v126[0] & 0x100000000LL) != 0
          || LODWORD(v126[0]) != 1
          || (v130[0] & 0x100000000LL) != 0
          || LODWORD(v130[0]) != 1 )
        {
          if ( !(unsigned __int8)sub_1848D40(qword_1C7F2C0, v125, v129) )
          {
LABEL_54:
            v102 = v19;
            goto LABEL_15;
          }
        }
        else
        {
          if ( (v125[0] & 0x100000000LL) == 0 && (v129[0] & 0x100000000LL) == 0 )
          {
            if ( SLODWORD(v125[0]) >= SLODWORD(v129[0]) )
              goto LABEL_54;
            BYTE4(v125[0]) &= ~1u;
            LODWORD(v125[0]) = v129[0];
LABEL_53:
            BYTE4(v126[0]) &= ~1u;
            LODWORD(v126[0]) = v130[0];
            goto LABEL_54;
          }
          if ( (int)sub_182C7B0(qword_1C7F2C0, v125, v129) >= 0 )
            goto LABEL_54;
        }
      }
      v33 = qword_1C7F2C0;
      if ( (v129[0] & 0x100000000LL) != 0 )
      {
        v116 = qword_1C7F2C0;
        sub_182C690(qword_1C7F2C0, v125, v129);
        v33 = v116;
      }
      else
      {
        BYTE4(v125[0]) &= ~1u;
        LODWORD(v125[0]) = v129[0];
      }
      if ( (v130[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(v33, v126, v130);
        goto LABEL_54;
      }
      goto LABEL_53;
    }
    LODWORD(v15) = (_DWORD)v109;
    if ( !v109 )
    {
      ++*(_DWORD *)(v123 + 8);
      v109 = (_DWORD *)v21;
      goto LABEL_15;
    }
    v22 = a1[4];
    sub_15E1B70(v121[0]);
    v23 = sub_15E1BF0(v22);
    if ( v23 )
      ++*(_DWORD *)(v23 + 8);
    LODWORD(v15) = v109[2];
    v109[2] = v15 - 1;
    if ( (_DWORD)v15 == 1 )
    {
      *(_QWORD *)v114 = v23;
      sub_15D7BC0(v22, v109);
      v23 = *(_QWORD *)v114;
    }
    v109 = (_DWORD *)v23;
    if ( v104 != ++v9 )
      goto LABEL_16;
LABEL_26:
    v24 = *(_DWORD **)(*(_QWORD *)(v106 + 40) + 24LL);
    if ( !v24 || *v24 != 5 || v24[1] != 1 )
    {
      if ( (v102 & (v109 != nullptr)) != 0 )
      {
        v45 = v122;
        if ( !v122 )
        {
          sub_16669E0(v121);
          v45 = v122;
        }
        sub_166A700(v45, (unsigned int)v125, 0, v15, v16, v17);
        v46 = a1[4];
        sub_15E1B70(v121[0]);
        v47 = sub_15E1BF0(v46);
        v48 = (_DWORD *)v47;
        if ( v47 )
          ++*(_DWORD *)(v47 + 8);
        v115 = v109[2];
        v109[2] = v115 - 1;
        if ( v115 == 1 )
        {
          *(_QWORD *)v119 = v47;
          sub_15D7BC0(v46, v109);
          v48 = *(_DWORD **)v119;
        }
        v102 &= v109 != nullptr;
        v109 = v48;
      }
      if ( (v100 & (v12 != 0)) == 0 )
      {
        if ( v109 )
        {
          if ( v12 )
          {
LABEL_32:
            v140 = 2;
            v141 = 0;
            v142 = 1;
            v143 = 0;
            sub_182CBA0(qword_1C7F2C0, &v142);
            v28 = v122;
            BYTE4(v142) &= ~1u;
            LODWORD(v142) = 1;
            if ( !v122 )
            {
              sub_16669E0(v121);
              v28 = v122;
            }
            sub_166A700(v28, (unsigned int)&v140, 0, v25, v26, v27);
            v105 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v140);
            sub_182CBA0(v105, &v142);
            sub_15E1B70(v121[0]);
            v29 = sub_15E1B70(v121[0]);
            sub_135F9B0(*a2, v106, v29);
LABEL_35:
            v107 = v109[2];
            v109[2] = v107 - 1;
            if ( v107 != 1 )
            {
LABEL_36:
              if ( v12 )
                goto LABEL_37;
              goto LABEL_39;
            }
LABEL_74:
            sub_15D7BC0(v98, v109);
            goto LABEL_36;
          }
LABEL_70:
          v140 = 1;
          v141 = 0;
          v142 = 1;
          v143 = 0;
          sub_182CBA0(qword_1C7F2C0, &v142);
          v38 = v122;
          BYTE4(v142) &= ~1u;
          LODWORD(v142) = 1;
          if ( !v122 )
          {
            sub_16669E0(v121);
            v38 = v122;
          }
          sub_166A700(v38, (unsigned int)&v140, 0, v35, v36, v37);
          v39 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v140);
          sub_182CBA0(v39, &v142);
          v40 = sub_15E1B70(v121[0]);
          sub_135F9B0(*a2, v106, v40);
          v108 = v109[2];
          v109[2] = v108 - 1;
          if ( v108 != 1 )
            goto LABEL_39;
          v12 = 0;
          goto LABEL_74;
        }
        if ( !v12 )
          goto LABEL_93;
LABEL_100:
        v140 = 1;
        v141 = 0;
        v142 = 1;
        v143 = 0;
        sub_182CBA0(qword_1C7F2C0, &v142);
        v58 = v122;
        BYTE4(v142) &= ~1u;
        LODWORD(v142) = 1;
        if ( !v122 )
        {
          sub_16669E0(v121);
          v58 = v122;
        }
        sub_166A700(v58, (unsigned int)&v140, 0, v55, v56, v57);
        v111 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v140);
        sub_182CBA0(v111, &v142);
        v59 = sub_15E1B70(v121[0]);
        sub_135F9B0(*a2, v106, v59);
LABEL_37:
        v18 = (*(_DWORD *)(v12 + 8))-- == 1;
        if ( v18 )
          sub_15D7BC0(v98, v12);
        goto LABEL_39;
      }
      v41 = v122;
      if ( !v122 )
      {
        sub_16669E0(v121);
        v41 = v122;
      }
      sub_166A700(v41, (unsigned int)v127, 0, v15, v16, v17);
      v42 = a1[4];
      sub_15E1B70(v121[0]);
      v43 = sub_15E1BF0(v42);
      v44 = v43;
      if ( !v43 )
      {
        v18 = (*(_DWORD *)(v12 + 8))-- == 1;
        if ( !v18 )
        {
          if ( v109 )
            goto LABEL_70;
          v49 = qword_1C7F2C0;
          if ( v102 )
          {
LABEL_95:
            v134 = 1;
            v132 = 2;
            v133 = 0;
            v135 = 0;
            sub_182CBA0(v49, &v134);
            BYTE4(v134) &= ~1u;
            LODWORD(v134) = 1;
            sub_27B340((__int64)v131, (__int64)v127, (int *)v125);
            v140 = 0;
            v141 = 0;
            v142 = 1;
            v143 = 0;
            sub_27B950((__int64)qword_1C7F2C0, (__int64)&v140, v131);
            sub_3ED4D0((__int64)qword_1C7F2C0, (int *)&v140, (__int64)&v132, (__int64)&v140);
            BYTE4(v136) &= 0xFCu;
            BYTE4(v138) &= 0xFCu;
            LODWORD(v136) = 0;
            v137 = 0;
            LODWORD(v138) = 1;
            v139 = 0;
            sub_27B950((__int64)qword_1C7F2C0, (__int64)&v136, (int *)&v140);
            sub_25A130((char *)&v140);
            v53 = v122;
            if ( !v122 )
            {
              sub_16669E0(v121);
              v53 = v122;
            }
            v54 = sub_166A700(v53, (unsigned int)&v136, 0, v50, v51, v52);
            sub_25A130((char *)&v136);
            sub_25A130((char *)v131);
            sub_25A130((char *)&v132);
            sub_135F9B0(*a2, v106, v54);
            goto LABEL_39;
          }
LABEL_123:
          v134 = 1;
          v132 = 1;
          v133 = 0;
          v135 = 0;
          sub_182CBA0(v49, &v134);
          BYTE4(v134) &= ~1u;
          LODWORD(v134) = 1;
          v140 = 0;
          v141 = 0;
          v142 = 1;
          v143 = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)&v140, (int *)v127);
          v67 = qword_1C7F2C0;
          if ( (v142 & 0x100000000LL) != 0 || (_DWORD)v142 != 1 || (v134 & 0x100000000LL) != 0 || (_DWORD)v134 != 1 )
          {
            sub_1852000(qword_1C7F2C0, &v140, &v132);
          }
          else
          {
            sub_1832A70(qword_1C7F2C0, &v140, &v132);
            sub_182CBA0(v67, &v142);
            BYTE4(v142) &= ~1u;
            LODWORD(v142) = 1;
          }
          BYTE4(v136) &= 0xFCu;
          BYTE4(v138) &= 0xFCu;
          LODWORD(v136) = 0;
          v137 = 0;
          LODWORD(v138) = 1;
          v139 = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)&v136, (int *)&v140);
          sub_25A130((char *)&v140);
          v71 = v122;
          if ( !v122 )
          {
            sub_16669E0(v121);
            v71 = v122;
          }
          v72 = sub_166A700(v71, (unsigned int)&v136, 0, v68, v69, v70);
          sub_25A130((char *)&v136);
          sub_25A130((char *)&v132);
          sub_135F9B0(*a2, v106, v72);
          goto LABEL_39;
        }
        sub_15D7BC0(v42, v12);
        if ( v109 )
          goto LABEL_70;
        v100 &= v12 != 0;
        goto LABEL_93;
      }
      ++*(_DWORD *)(v43 + 8);
      v18 = (*(_DWORD *)(v12 + 8))-- == 1;
      if ( v18 )
      {
        *(_QWORD *)v118 = v43;
        sub_15D7BC0(v42, v12);
        v44 = *(_QWORD *)v118;
        if ( v109 )
          goto LABEL_80;
      }
      else if ( v109 )
      {
LABEL_80:
        v12 = v44;
        goto LABEL_32;
      }
      v12 = v44;
      goto LABEL_100;
    }
    if ( v109 )
    {
      if ( v102 )
      {
        v73 = v122;
        if ( !v122 )
        {
          sub_16669E0(v121);
          v73 = v122;
        }
        sub_166A700(v73, (unsigned int)v125, 1, v15, v16, v17);
        v74 = a1[4];
        sub_15E1B70(v121[0]);
        v75 = sub_15E1BF0(v74);
        v76 = v75;
        if ( v75 )
          ++*(_DWORD *)(v75 + 8);
        sub_C6E330(v75, v74);
        sub_135F9B0(*a2, v106, v76);
      }
      else
      {
        sub_135F9B0(*a2, v106, v109);
      }
      goto LABEL_35;
    }
    if ( v12 )
    {
      if ( v100 )
      {
        v88 = v122;
        if ( !v122 )
        {
          sub_16669E0(v121);
          v88 = v122;
        }
        sub_166A700(v88, (unsigned int)v127, 1, v15, v16, v17);
        v89 = a1[4];
        sub_15E1B70(v121[0]);
        v90 = sub_15E1BF0(v89);
        v91 = v90;
        if ( v90 )
          ++*(_DWORD *)(v90 + 8);
        sub_C6E330(v90, v89);
        sub_135F9B0(*a2, v106, v91);
      }
      else
      {
        sub_135F9B0(*a2, v106, v12);
      }
      goto LABEL_37;
    }
    if ( v102 )
    {
      v92 = sub_27B900((__int64)v121, (int)v125, 1u, v15, v16, v17);
      sub_135F9B0(*a2, v106, v92);
      goto LABEL_39;
    }
    if ( v100 )
    {
      v86 = sub_27B900((__int64)v121, (int)v127, 1u, v15, v16, v17);
      sub_135F9B0(*a2, v106, v86);
      goto LABEL_39;
    }
LABEL_147:
    v140 = 0;
    v141 = 0;
    v142 = 1;
    v143 = 0;
    sub_182CBA0(qword_1C7F2C0, &v142);
    BYTE4(v142) &= ~1u;
    LODWORD(v142) = 1;
    v85 = sub_27B900((__int64)v121, (int)&v140, 1u, v82, v83, v84);
    sub_25A130((char *)&v140);
    sub_135F9B0(*a2, v106, v85);
LABEL_39:
    if ( v120 )
    {
      v110 = *(_DWORD *)(v120 + 8);
      *(_DWORD *)(v120 + 8) = v110 - 1;
      if ( v110 == 1 )
        sub_15D7BC0(v11, v120);
    }
    v30 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v129);
    sub_182CBA0(v30, v130);
    v31 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v127);
    sub_182CBA0(v31, v128);
    v32 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v125);
    sub_182CBA0(v32, v126);
    v103 -= 8;
    if ( v103 != -8 )
    {
      v4 = a1[5];
      continue;
    }
    return sub_1360B80(v97, v99);
  }
}

