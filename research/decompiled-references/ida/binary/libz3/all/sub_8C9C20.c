void __fastcall sub_8C9C20(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  unsigned int *v6; // r15
  __int64 v7; // r12
  __int64 v8; // rbp
  void *v9; // r13
  __int64 v10; // rax
  int v11; // r13d
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  int v15; // ecx
  _DWORD *v16; // rdi
  unsigned int *v17; // rax
  void *v18; // rbp
  __int64 v19; // r14
  __int64 v20; // r15
  void *v21; // rdi
  __int64 v22; // rdx
  unsigned int v23; // eax
  __int64 v24; // r15
  signed int v25; // eax
  int v26; // eax
  char *v27; // rdx
  char v28; // al
  int v29; // r12d
  __int64 v30; // rbp
  __int64 v31; // r14
  unsigned int v32; // r13d
  void *v33; // r15
  int v34; // eax
  void *v35; // r15
  int v36; // eax
  __int64 v37; // rdx
  void *v38; // r15
  __int64 v39; // rax
  __int64 v40; // rsi
  _DWORD *v41; // rcx
  int *v42; // r15
  int v43; // r14d
  __int64 v44; // rax
  unsigned int *v45; // rax
  int v46; // r15d
  unsigned int *v47; // r12
  __int64 v48; // r12
  __int64 v49; // rsi
  __int64 v50; // rdx
  __int64 v51; // rsi
  char v52; // al
  __int64 v53; // rdx
  unsigned int v54; // eax
  __int64 v55; // rax
  __int64 v56; // r11
  __int64 v57; // r10
  __int64 v58; // r15
  unsigned int *v59; // r12
  int v60; // r14d
  __int64 v61; // rsi
  __int64 v62; // rdx
  __int64 v63; // rsi
  char v64; // al
  unsigned int v65; // eax
  __int64 v66; // rax
  int v67; // eax
  unsigned int *v68; // rax
  unsigned int *v69; // rdi
  __int64 v70; // rdx
  __int64 v71; // rax
  unsigned int *v72; // rdi
  size_t v73; // rdx
  _DWORD *v74; // rax
  int v75; // edx
  _DWORD *v76; // rdx
  unsigned int *v77; // rax
  unsigned int *v78; // r12
  unsigned int v79; // r12d
  size_t v80; // rsi
  unsigned int *v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  unsigned int v84; // eax
  __int64 v85; // rcx
  __int64 v86; // r10
  int v87; // r12d
  int v88; // edi
  __int64 v89; // r15
  unsigned int v90; // r14d
  unsigned int v91; // ebx
  __int64 v92; // r13
  __int64 v93; // r11
  __int64 v94; // rsi
  char v95; // dl
  __int64 v96; // rsi
  unsigned int v97; // ebp
  __int64 v98; // rdx
  void *v99; // rdi
  __int64 v100; // rsi
  __int64 v101; // r10
  unsigned __int8 v102; // bp
  bool v103; // dl
  __int64 v104; // r9
  unsigned int v105; // eax
  char **exception; // r12
  __int64 v107; // rdx
  unsigned int *v108; // [rsp+0h] [rbp-F8h]
  __int64 v109; // [rsp+0h] [rbp-F8h]
  __int64 v110; // [rsp+10h] [rbp-E8h]
  unsigned int v111; // [rsp+10h] [rbp-E8h]
  __int64 v112; // [rsp+20h] [rbp-D8h]
  int v113; // [rsp+20h] [rbp-D8h]
  unsigned int *v114; // [rsp+28h] [rbp-D0h]
  __int64 v115; // [rsp+28h] [rbp-D0h]
  unsigned int v116; // [rsp+34h] [rbp-C4h]
  __int64 v117; // [rsp+38h] [rbp-C0h]
  __int64 v118; // [rsp+38h] [rbp-C0h]
  unsigned int *v119; // [rsp+40h] [rbp-B8h]
  unsigned int *v120; // [rsp+48h] [rbp-B0h]
  unsigned int **v121; // [rsp+50h] [rbp-A8h]
  unsigned int v122; // [rsp+58h] [rbp-A0h]
  unsigned int v123; // [rsp+5Ch] [rbp-9Ch]
  unsigned int **v125; // [rsp+68h] [rbp-90h]
  unsigned int v126; // [rsp+7Ch] [rbp-7Ch] BYREF
  signed int v127; // [rsp+80h] [rbp-78h] BYREF
  char v128; // [rsp+84h] [rbp-74h]
  __int64 v129; // [rsp+88h] [rbp-70h]
  int v130; // [rsp+90h] [rbp-68h] BYREF
  char v131; // [rsp+94h] [rbp-64h]
  __int64 v132; // [rsp+98h] [rbp-60h]
  __int64 v133[2]; // [rsp+A0h] [rbp-58h] BYREF
  _QWORD v134[9]; // [rsp+B0h] [rbp-48h] BYREF

  v4 = a1;
  v5 = *(_QWORD *)(a1 + 248);
  v6 = (unsigned int *)(v5 + 56LL * a3);
  v7 = *v6;
  v119 = v6;
  v116 = v6[1];
  v123 = *v6;
  v8 = *(_QWORD *)(a1 + 280) + 32 * v7;
  v126 = *v6;
  LODWORD(v5) = *(_DWORD *)(v5 + 56LL * a2 + 40);
  ++*(_DWORD *)(a1 + 220);
  v122 = v5;
  v9 = qword_1C7F2C0;
  sub_182CEF0(qword_1C7F2C0, v8);
  sub_182CBA0(v9, v8 + 16);
  *(_BYTE *)(v8 + 20) &= ~1u;
  *(_DWORD *)(v8 + 16) = 1;
  v120 = v6 + 2;
  sub_27B950((__int64)qword_1C7F2C0, *(_QWORD *)(a1 + 280) + 32LL * v116, (int *)v6 + 2);
  v10 = *(_QWORD *)(a1 + 320);
  LODWORD(v133[0]) = v7;
  if ( v10 )
    v11 = *(_DWORD *)(v10 - 4);
  else
    v11 = 0;
  v125 = (unsigned int **)(a1 + 320);
  *(_DWORD *)(*(_QWORD *)(a1 + 328) + 4 * v7) = v11;
  sub_893BD0((unsigned int **)(a1 + 320), (unsigned int *)v133);
  sub_8C9AD0((__int64 **)(a1 + 312), v11);
  v121 = (unsigned int **)(a1 + 304);
  sub_893BD0((unsigned int **)(a1 + 304), &v126);
  while ( 1 )
  {
LABEL_4:
    v12 = *(_QWORD *)(v4 + 320);
    v13 = *(_QWORD *)(v4 + 328);
    v14 = *(unsigned int *)(v12 + 4);
    v15 = *(_DWORD *)(v12 - 4);
    v16 = (_DWORD *)(v13 + 4 * v14);
    if ( v15 == 2 )
    {
      *v16 = 0;
      --*(_DWORD *)(v12 - 4);
      goto LABEL_6;
    }
    v85 = *(unsigned int *)(v12 + 4LL * (unsigned int)(v15 - 1));
    *(_DWORD *)(v12 + 4) = v85;
    *(_DWORD *)(v13 + 4 * v85) = 1;
    *v16 = 0;
    v86 = *(unsigned int *)(v12 + 4);
    v87 = *(_DWORD *)(v12 - 4) - 1;
    *(_DWORD *)(v12 - 4) = v87;
    v88 = v86;
    if ( v87 > 2 )
    {
      v89 = v4;
      v113 = v86;
      v115 = v86;
      v90 = 1;
      v91 = 2;
      v109 = 32 * v86;
      v118 = v14;
      while ( 1 )
      {
        v96 = v91 + 1;
        v97 = v91;
        v98 = **(_QWORD **)(v89 + 312);
        v99 = qword_1C7F2C0;
        if ( v87 > (int)v96 )
          break;
LABEL_129:
        v92 = *(unsigned int *)(v12 + 4LL * v97);
        v93 = v98 + v109;
        v94 = v98 + 32 * v92;
        if ( (*(_BYTE *)(v94 + 20) & 1) != 0
          || *(_DWORD *)(v94 + 16) != 1
          || (*(_BYTE *)(v93 + 20) & 1) != 0
          || *(_DWORD *)(v93 + 16) != 1 )
        {
          v95 = sub_1848D40(v99, v94, v98 + v109);
          v12 = *(_QWORD *)(v89 + 320);
          if ( !v95 )
            goto LABEL_146;
        }
        else
        {
          if ( (*(_BYTE *)(v94 + 4) & 1) != 0 || (*(_BYTE *)(v93 + 4) & 1) != 0 )
          {
            v103 = (int)sub_182C7B0(v99, v94, v98 + v109) < 0;
            v12 = *(_QWORD *)(v89 + 320);
          }
          else
          {
            v103 = *(_DWORD *)v94 < *(_DWORD *)v93;
          }
          if ( !v103 )
          {
LABEL_146:
            v88 = v113;
            v86 = v115;
            v4 = v89;
            v14 = v118;
            v13 = *(_QWORD *)(v89 + 328);
            v104 = 4LL * v90;
            v97 = v90;
            goto LABEL_147;
          }
        }
        v13 = *(_QWORD *)(v89 + 328);
        *(_DWORD *)(v12 + 4LL * v90) = v92;
        v91 = 2 * v97;
        *(_DWORD *)(v13 + 4 * v92) = v90;
        if ( v87 <= (int)(2 * v97) )
        {
          v88 = v113;
          v104 = 4LL * v97;
          v4 = v89;
          v86 = v115;
          v14 = v118;
          goto LABEL_147;
        }
        v90 = v97;
      }
      v100 = v98 + 32LL * *(unsigned int *)(v12 + 4 * v96);
      v101 = v98 + 32LL * *(unsigned int *)(v12 + 4LL * v91);
      if ( (*(_BYTE *)(v100 + 20) & 1) != 0
        || *(_DWORD *)(v100 + 16) != 1
        || (*(_BYTE *)(v101 + 20) & 1) != 0
        || *(_DWORD *)(v101 + 16) != 1 )
      {
        v102 = sub_1848D40(qword_1C7F2C0, v100, v98 + 32LL * *(unsigned int *)(v12 + 4LL * v91));
      }
      else
      {
        if ( (*(_BYTE *)(v100 + 4) & 1) == 0 && (*(_BYTE *)(v101 + 4) & 1) == 0 )
        {
          v102 = *(_DWORD *)v100 < *(_DWORD *)v101;
          goto LABEL_139;
        }
        v102 = (int)sub_182C7B0(qword_1C7F2C0, v100, v98 + 32LL * *(unsigned int *)(v12 + 4LL * v91)) < 0;
      }
      v12 = *(_QWORD *)(v89 + 320);
      v98 = **(_QWORD **)(v89 + 312);
      v99 = qword_1C7F2C0;
LABEL_139:
      v97 = v91 + v102;
      goto LABEL_129;
    }
    v104 = 4;
    v97 = 1;
LABEL_147:
    *(_DWORD *)(v12 + v104) = v88;
    *(_DWORD *)(v13 + 4 * v86) = v97;
LABEL_6:
    *(_BYTE *)(*(_QWORD *)(v4 + 288) + v14) = 2;
    v17 = *(unsigned int **)(*(_QWORD *)(v4 + 256) + 8 * v14);
    if ( v17 )
    {
      v114 = &v17[*(v17 - 1)];
      if ( v17 != v114 )
        break;
    }
  }
  v108 = *(unsigned int **)(*(_QWORD *)(v4 + 256) + 8 * v14);
  v112 = 32 * v14;
  while ( 2 )
  {
    v29 = *v108;
    v30 = *(_QWORD *)(v4 + 248) + 56LL * *v108;
    if ( !*(_BYTE *)(v30 + 48) || v122 < *(_DWORD *)(v30 + 40) )
      goto LABEL_26;
    v31 = *(_QWORD *)(v4 + 280) + v112;
    v32 = *(_DWORD *)(v30 + 4);
    v133[0] = 0;
    v133[1] = 0;
    v33 = qword_1C7F2C0;
    v134[0] = 1;
    v134[1] = 0;
    if ( (*(_BYTE *)(v31 + 4) & 1) != 0 )
    {
      sub_182C690(qword_1C7F2C0, v133, v31);
      if ( (*(_BYTE *)(v31 + 20) & 1) != 0 )
        goto LABEL_62;
LABEL_31:
      v34 = *(_DWORD *)(v31 + 16);
      BYTE4(v134[0]) &= ~1u;
      LODWORD(v134[0]) = v34;
    }
    else
    {
      LODWORD(v133[0]) = *(_DWORD *)v31;
      if ( (*(_BYTE *)(v31 + 20) & 1) == 0 )
        goto LABEL_31;
LABEL_62:
      sub_182C690(v33, v134, v31 + 16);
    }
    v35 = qword_1C7F2C0;
    v36 = *(_DWORD *)(v30 + 8);
    if ( v36 )
    {
      v37 = v30 + 8;
      if ( LODWORD(v133[0]) )
      {
        if ( (v134[0] & 0x100000000LL) != 0
          || LODWORD(v134[0]) != 1
          || (*(_BYTE *)(v30 + 28) & 1) != 0
          || *(_DWORD *)(v30 + 24) != 1 )
        {
          sub_1851D20(qword_1C7F2C0, v133, v37, v133);
        }
        else
        {
          sub_1831A80(qword_1C7F2C0, v133, v37, v133);
          sub_182CBA0(v35, v134);
          BYTE4(v134[0]) &= ~1u;
          LODWORD(v134[0]) = 1;
        }
      }
      else
      {
        if ( (*(_BYTE *)(v30 + 12) & 1) != 0 )
        {
          sub_182C690(qword_1C7F2C0, v133, v37);
        }
        else
        {
          BYTE4(v133[0]) &= ~1u;
          LODWORD(v133[0]) = v36;
        }
        if ( (*(_BYTE *)(v30 + 28) & 1) != 0 )
        {
          sub_182C690(v35, v134, v30 + 24);
        }
        else
        {
          v67 = *(_DWORD *)(v30 + 24);
          BYTE4(v134[0]) &= ~1u;
          LODWORD(v134[0]) = v67;
        }
      }
    }
    else
    {
      if ( (v133[0] & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, v133, v133);
      else
        BYTE4(v133[0]) &= ~1u;
      if ( (v134[0] & 0x100000000LL) != 0 )
        sub_182C690(v35, v134, v134);
      else
        BYTE4(v134[0]) &= ~1u;
    }
    v128 &= 0xFCu;
    v131 &= 0xFCu;
    v127 = 0;
    v38 = qword_1C7F2C0;
    v129 = 0;
    v130 = 1;
    v132 = 0;
    if ( (v133[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(qword_1C7F2C0, &v127, v133);
      if ( (v134[0] & 0x100000000LL) != 0 )
      {
LABEL_39:
        sub_182C690(v38, &v130, v134);
        goto LABEL_11;
      }
    }
    else
    {
      v127 = v133[0];
      if ( (v134[0] & 0x100000000LL) != 0 )
        goto LABEL_39;
    }
    v131 &= ~1u;
    v130 = v134[0];
LABEL_11:
    v18 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v133);
    v19 = v32;
    sub_182CBA0(v18, v134);
    v110 = v32;
    v20 = 32LL * v32;
    v21 = qword_1C7F2C0;
    if ( *(_BYTE *)(*(_QWORD *)(v4 + 288) + v32) )
    {
      v22 = v20 + *(_QWORD *)(v4 + 280);
      if ( (v131 & 1) != 0 || v130 != 1 || (*(_BYTE *)(v22 + 20) & 1) != 0 || *(_DWORD *)(v22 + 16) != 1 )
      {
        LOBYTE(v23) = sub_1848D40(qword_1C7F2C0, &v127, v22);
        v21 = qword_1C7F2C0;
      }
      else if ( (v128 & 1) != 0 || (*(_BYTE *)(v22 + 4) & 1) != 0 )
      {
        v23 = (unsigned int)sub_182C7B0(qword_1C7F2C0, &v127, v22) >> 31;
        v21 = qword_1C7F2C0;
      }
      else
      {
        LOBYTE(v23) = v127 < *(_DWORD *)v22;
      }
      if ( !(_BYTE)v23 )
        goto LABEL_25;
    }
    v24 = *(_QWORD *)(v4 + 280) + v20;
    if ( (v128 & 1) != 0 )
    {
      sub_182C690(v21, v24, &v127);
    }
    else
    {
      v25 = v127;
      *(_BYTE *)(v24 + 4) &= ~1u;
      *(_DWORD *)v24 = v25;
    }
    if ( (v131 & 1) != 0 )
    {
      sub_182C690(v21, v24 + 16, &v130);
    }
    else
    {
      v26 = v130;
      *(_BYTE *)(v24 + 20) &= ~1u;
      *(_DWORD *)(v24 + 16) = v26;
    }
    *(_DWORD *)(*(_QWORD *)(v4 + 296) + 4LL * v32) = v29;
    if ( v116 != v32 )
      goto LABEL_21;
    if ( (v119[7] & 1) != 0 || v119[6] != 1 || (v131 & 1) != 0 || v130 != 1 )
    {
      if ( !(unsigned __int8)sub_1848D40(qword_1C7F2C0, v120, &v127) )
        goto LABEL_91;
      goto LABEL_21;
    }
    if ( (v119[3] & 1) != 0 || (v128 & 1) != 0 )
    {
      if ( (int)sub_182C7B0(qword_1C7F2C0, v120, &v127) >= 0 )
        goto LABEL_91;
LABEL_21:
      v27 = (char *)(v32 + *(_QWORD *)(v4 + 288));
      v28 = *v27;
      if ( *v27 == 1 )
      {
        v56 = *(_QWORD *)(v4 + 328);
        v57 = *(_QWORD *)(v4 + 320);
        v21 = qword_1C7F2C0;
        v58 = *(unsigned int *)(v56 + 4LL * v32);
        v59 = (unsigned int *)(v57 + 4 * v58);
        v60 = (int)v58 >> 1;
        v111 = *v59;
        v117 = *v59;
        if ( (int)v58 >> 1 )
        {
          while ( 1 )
          {
            v61 = **(_QWORD **)(v4 + 312);
            v62 = v61 + 32LL * *(unsigned int *)(v57 + 4LL * (unsigned int)v60);
            v63 = 32LL * v111 + v61;
            if ( (*(_BYTE *)(v63 + 20) & 1) != 0
              || *(_DWORD *)(v63 + 16) != 1
              || (*(_BYTE *)(v62 + 20) & 1) != 0
              || *(_DWORD *)(v62 + 16) != 1 )
            {
              v64 = sub_1848D40(v21, v63, v62);
              v57 = *(_QWORD *)(v4 + 320);
              v56 = *(_QWORD *)(v4 + 328);
              v21 = qword_1C7F2C0;
              if ( !v64 )
                goto LABEL_73;
            }
            else
            {
              if ( (*(_BYTE *)(v63 + 4) & 1) != 0 || (*(_BYTE *)(v62 + 4) & 1) != 0 )
              {
                v105 = sub_182C7B0(v21, v63, v62);
                v57 = *(_QWORD *)(v4 + 320);
                v65 = v105 >> 31;
                v56 = *(_QWORD *)(v4 + 328);
                v21 = qword_1C7F2C0;
              }
              else
              {
                LOBYTE(v65) = *(_DWORD *)v63 < *(_DWORD *)v62;
              }
              if ( !(_BYTE)v65 )
              {
LABEL_73:
                v59 = (unsigned int *)(v57 + 4LL * (unsigned int)v58);
                goto LABEL_74;
              }
            }
            v59 = (unsigned int *)(v57 + 4LL * (unsigned int)v60);
            v66 = *v59;
            *(_DWORD *)(v57 + 4LL * (unsigned int)v58) = v66;
            *(_DWORD *)(v56 + 4 * v66) = v58;
            LODWORD(v58) = v60;
            if ( !(v60 >> 1) )
              break;
            v60 >>= 1;
          }
          LODWORD(v58) = 1;
        }
LABEL_74:
        *v59 = v111;
        *(_DWORD *)(v56 + 4 * v117) = v58;
        goto LABEL_25;
      }
      if ( v28 != 2 )
      {
        if ( v28 )
        {
          v21 = qword_1C7F2C0;
          goto LABEL_25;
        }
        v39 = *(_QWORD *)(v4 + 304);
        if ( !v39 || (v40 = *(unsigned int *)(v39 - 4), (_DWORD)v40 == *(_DWORD *)(v39 - 8)) )
        {
          sub_313C10(v121);
          v39 = *(_QWORD *)(v4 + 304);
          v40 = *(unsigned int *)(v39 - 4);
          v27 = (char *)(v32 + *(_QWORD *)(v4 + 288));
        }
        *(_DWORD *)(v39 + 4 * v40) = v32;
        ++*(_DWORD *)(v39 - 4);
      }
      *v27 = 1;
      v41 = *(_DWORD **)(v4 + 320);
      v42 = (int *)(*(_QWORD *)(v4 + 328) + 4LL * v32);
      if ( v41 )
      {
        v43 = *(v41 - 1);
        *v42 = v43;
        v44 = (unsigned int)*(v41 - 1);
        if ( (_DWORD)v44 == *(v41 - 2) )
        {
          v79 = (unsigned int)(3 * v44 + 1) >> 1;
          v80 = 4 * v79 + 8;
          if ( 4 * (int)v44 + 8 >= (unsigned int)v80 || (unsigned int)v44 >= v79 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_12D192(v133, "Overflow encountered when expanding vector", v107);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v133);
            sub_233E40((__int64)v133);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v81 = (unsigned int *)sub_186B300(v41 - 2, v80);
          v41 = v81 + 2;
          *v81 = v79;
          v82 = v81[1];
          *(_QWORD *)(v4 + 320) = v41;
          v46 = v43 >> 1;
          v45 = &v41[v82];
          v47 = &v41[v43];
        }
        else
        {
          v45 = &v41[v44];
          v46 = v43 >> 1;
          v47 = &v41[v43];
        }
        *v45 = v32;
        ++*(v41 - 1);
        v110 = *v47;
        v32 = *v47;
        v21 = qword_1C7F2C0;
        if ( v46 )
        {
          while ( 1 )
          {
            v48 = (unsigned int)v46;
            v49 = **(_QWORD **)(v4 + 312);
            v50 = v49 + 32LL * (unsigned int)v41[v48];
            v51 = 32LL * (unsigned int)v110 + v49;
            if ( (*(_BYTE *)(v51 + 20) & 1) != 0
              || *(_DWORD *)(v51 + 16) != 1
              || (*(_BYTE *)(v50 + 20) & 1) != 0
              || *(_DWORD *)(v50 + 16) != 1 )
            {
              v52 = sub_1848D40(v21, v51, v50);
              v41 = *(_DWORD **)(v4 + 320);
              v21 = qword_1C7F2C0;
              if ( !v52 )
                goto LABEL_50;
            }
            else
            {
              if ( (*(_BYTE *)(v51 + 4) & 1) != 0 || (*(_BYTE *)(v50 + 4) & 1) != 0 )
              {
                v84 = sub_182C7B0(v21, v51, v50);
                v41 = *(_DWORD **)(v4 + 320);
                v54 = v84 >> 31;
                v21 = qword_1C7F2C0;
              }
              else
              {
                LOBYTE(v54) = *(_DWORD *)v51 < *(_DWORD *)v50;
              }
              if ( !(_BYTE)v54 )
              {
LABEL_50:
                v47 = &v41[v43];
                goto LABEL_51;
              }
            }
            v47 = &v41[v48];
            v55 = *v47;
            v41[v43] = v55;
            v53 = *(_QWORD *)(v4 + 328);
            *(_DWORD *)(v53 + 4 * v55) = v43;
            v43 = v46;
            if ( !(v46 >> 1) )
              break;
            v46 >>= 1;
          }
          v43 = 1;
LABEL_52:
          *v47 = v32;
          *(_DWORD *)(v53 + 4 * v110) = v43;
LABEL_25:
          sub_182CBA0(v21, &v127);
          sub_182CBA0(v21, &v130);
LABEL_26:
          if ( v114 == ++v108 )
            goto LABEL_4;
          continue;
        }
      }
      else
      {
        *v42 = 0;
        v83 = sub_186B270(0x10u);
        v47 = (unsigned int *)(v83 + 8);
        *(_DWORD *)(v83 + 8) = v32;
        v43 = 0;
        *(_QWORD *)(v4 + 320) = v83 + 8;
        *(_QWORD *)v83 = 2;
        ++*(_DWORD *)(v83 + 4);
        v21 = qword_1C7F2C0;
      }
LABEL_51:
      v53 = *(_QWORD *)(v4 + 328);
      goto LABEL_52;
    }
    break;
  }
  if ( (int)v119[2] < v127 )
    goto LABEL_21;
LABEL_91:
  v68 = *(unsigned int **)(v4 + 304);
  if ( v68 )
  {
    v69 = &v68[*(v68 - 1)];
    if ( v68 == v69 )
      goto LABEL_95;
    do
    {
      v70 = *v68++;
      *(_BYTE *)(*(_QWORD *)(v4 + 288) + v70) = 0;
    }
    while ( v68 != v69 );
    v69 = *(unsigned int **)(v4 + 304);
    if ( v69 )
LABEL_95:
      *(v69 - 1) = 0;
  }
  v71 = *(_QWORD *)(v4 + 320);
  if ( !v71 || *(_DWORD *)(v71 - 4) != 1 )
  {
    v72 = *(unsigned int **)(v4 + 328);
    if ( v72 )
      v73 = 4LL * *(v72 - 1);
    else
      v73 = 0;
    memset(v72, 0, v73);
    v74 = *(_DWORD **)(v4 + 320);
    if ( v74 && (v75 = *(v74 - 2), *(v74 - 1) = 0, v75) )
    {
      v76 = v74;
    }
    else
    {
      sub_313C10(v125);
      v74 = *(_DWORD **)(v4 + 320);
      v76 = &v74[*(v74 - 1)];
    }
    *v76 = -1;
    ++*(v74 - 1);
  }
  while ( 1 )
  {
    v77 = (unsigned int *)(*(_QWORD *)(v4 + 296) + 4 * v19);
    ++*(_DWORD *)(*(_QWORD *)(v4 + 392) + 4LL * *v77);
    v78 = (unsigned int *)(*(_QWORD *)(v4 + 248) + 56LL * *v77);
    LODWORD(v133[0]) = v78[11];
    sub_893780(*(_QWORD **)(a4 + 176), (unsigned int *)v133);
    if ( v123 == *v78 )
      break;
    v19 = *v78;
  }
  sub_25A130((char *)&v127);
}

