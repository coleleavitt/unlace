void __fastcall sub_E6AA70(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v14; // r15
  unsigned __int8 v15; // al
  __int64 v16; // rdi
  __int64 v17; // r12
  _BYTE *v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdi
  const char *v24; // rsi
  __int64 v25; // r13
  void *v26; // rdx
  char v27; // al
  __int64 v28; // rsi
  char v29; // r12
  unsigned __int8 *v30; // rdi
  _DWORD *v31; // r15
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rbp
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned __int64 v41; // r12
  size_t v42; // r13
  const char *v43; // rax
  char *v44; // rbp
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  unsigned int v48; // r15d
  __int64 v49; // rbx
  unsigned int v50; // eax
  unsigned __int8 *v51; // rax
  __int64 v52; // r14
  __int64 v53; // r12
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // r15
  __int64 v59; // rax
  unsigned __int64 v60; // rax
  __int64 v61; // rdi
  unsigned __int64 v62; // rax
  __int64 v63; // rdi
  __int64 v64; // rax
  size_t v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // r12
  size_t v71; // r14
  _QWORD *v72; // rdi
  unsigned __int64 v73; // rax
  __int64 v74; // r9
  __int64 v75; // r12
  __int64 v76; // r14
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  size_t v80; // rax
  __int64 v81; // r9
  __int64 v82; // r12
  __int64 v83; // rdi
  _BYTE *v84; // rax
  __int64 v85; // rdi
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  size_t v89; // rax
  __int64 v90; // r9
  size_t v91; // rax
  __int64 v92; // r12
  size_t v93; // r14
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rdi
  __int64 v97; // r8
  __int64 v98; // r9
  unsigned __int64 v99; // rdi
  unsigned __int64 v100; // rax
  __int64 v101; // r9
  size_t v102; // rax
  __int64 v103; // r9
  unsigned __int64 v104; // rax
  size_t v105; // [rsp+0h] [rbp-E0h]
  void *v106; // [rsp+8h] [rbp-D8h] BYREF
  unsigned int v107; // [rsp+10h] [rbp-D0h]
  char v108; // [rsp+14h] [rbp-CCh]
  __int64 v109; // [rsp+58h] [rbp-88h] BYREF
  __int64 v110; // [rsp+60h] [rbp-80h]
  char v111; // [rsp+68h] [rbp-78h]
  __int64 v112; // [rsp+B0h] [rbp-30h]
  __int64 v113; // [rsp+B8h] [rbp-28h]
  __int64 v114; // [rsp+C0h] [rbp-20h]
  __int64 v115; // [rsp+C8h] [rbp-18h]

  v10 = *(_DWORD *)a3 & 0x7FFFFFFF;
  v115 = v9;
  v114 = v8;
  v113 = v7;
  v112 = v6;
  switch ( v10 )
  {
    case 1LL:
      sub_E608A0(a1, *(_QWORD *)(a3 + 8), nullptr, 2);
      break;
    case 2LL:
      v14 = *(_QWORD *)(a3 + 16);
      v15 = *(_BYTE *)(v14 + 28) & 0x7F;
      if ( (unsigned int)v15 - 49 <= 2 || v15 == 32 )
      {
        v65 = j__strlen("$");
        v70 = *(_QWORD *)(a3 + 8);
        v71 = v65;
        v72 = (_QWORD *)(*(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(v14 + 16) & 4) != 0 )
          v72 = (_QWORD *)*v72;
        if ( v72 )
          v72 -= 8;
        v73 = sub_BA1250((__int64)v72, a2, v66, v67, v68, v69);
        sub_E61870(a1, v73, v14, a4, v70, v74, "$", v71);
      }
      else if ( (unsigned int)v15 - 34 > 5 )
      {
        v82 = *(_QWORD *)(a3 + 8);
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v82 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) == 48 )
        {
          sub_971800(a1[1], "$");
          v109 = *(_QWORD *)(v14 + 48);
          v104 = sub_6B4E70(&v109);
          sub_E69770(a1, v104, v14 + 64, 0, 0);
        }
        else if ( (unsigned int)v15 - 40 > 6 )
        {
          v102 = j__strlen("$1?");
          sub_E659E0(a1, v14, 0, "$1?", v102, v103);
        }
        else
        {
          v83 = a1[1];
          v84 = *(_BYTE **)(v83 + 32);
          if ( (unsigned __int64)v84 >= *(_QWORD *)(v83 + 24) )
          {
            sub_2257CD0(v83, 36);
          }
          else
          {
            *(_QWORD *)(v83 + 32) = v84 + 1;
            *v84 = 36;
          }
          v85 = a1[1];
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8) + 2320LL) + 152LL) > 0xB71AFFFu
            && a4
            && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a4 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 16
            && (v82 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          {
            sub_971800(v85, "M");
            sub_E608A0(a1, v82, nullptr, 0);
            v85 = a1[1];
          }
          sub_971800(v85, "1?");
          sub_E5E850(a1, v14, 0, v86, v87, v88);
          sub_E65550(a1, v14);
        }
      }
      else if ( (unsigned int)v15 - 35 > 3 || sub_B73CB0(*(_QWORD **)(a3 + 16)) )
      {
        v16 = a1[1];
        v17 = *(_QWORD *)(a3 + 8);
        v18 = *(_BYTE **)(v16 + 32);
        if ( (unsigned __int64)v18 >= *(_QWORD *)(v16 + 24) )
        {
          sub_2257CD0(v16, 36);
        }
        else
        {
          *(_QWORD *)(v16 + 32) = v18 + 1;
          *v18 = 36;
        }
        v19 = a1[1];
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8) + 2320LL) + 152LL) > 0xB71AFFFu
          && a4
          && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a4 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 16
          && (v17 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        {
          sub_971800(v19, "M");
          sub_E608A0(a1, v17, nullptr, 0);
          v19 = a1[1];
        }
        sub_971800(v19, "1?");
        sub_E56C40((__int64)&v109, v14, 0);
        sub_E5E850(a1, v109, v110, v20, v21, v22);
        sub_E56C40((__int64)&v109, v14, 0);
        sub_E60470((__int64)a1, v109, v110, 1);
      }
      else
      {
        v91 = j__strlen("$");
        v92 = *(_QWORD *)(a3 + 8);
        v93 = v91;
        v96 = *(_QWORD *)(sub_B68470(v14 + 72) + 16);
        if ( (v96 & 4) != 0 )
          v99 = *(_QWORD *)(v96 & 0xFFFFFFFFFFFFFFF8LL);
        else
          v99 = v96 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v99 )
          v99 -= 64LL;
        v100 = sub_BA1250(v99, a2, v94, v95, v97, v98);
        sub_E66830(a1, v100, (_QWORD *)v14, a4, v92, v101, "$", v93);
      }
      break;
    case 3LL:
      v52 = *(_QWORD *)(a3 + 8);
      v53 = *(_QWORD *)(v52 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v53 + 16) != 33 )
      {
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v53 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 33 )
          goto LABEL_47;
        v53 = sub_F3F310(v53, a2, a3, a4);
        if ( !v53 )
          goto LABEL_47;
      }
      v58 = sub_F3DED0(v53, a2, a3, a4, a5);
      v59 = v53;
      if ( *(_BYTE *)(v53 + 16) == 33
        || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v53 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 33
        && (v59 = sub_F3F310(v53, a2, v54, v55)) != 0 )
      {
        v60 = *(_QWORD *)(v59 + 32) & 0xFFFFFFFFFFFFFFF0LL;
        v61 = *(_QWORD *)v60;
        if ( (*(_BYTE *)(*(_QWORD *)v60 + 16LL) == 26
           || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v61 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
           && sub_F3F310(v61, a2, v54, v55))
          && (*(_BYTE *)(a2 + 28) & 0x7F) != 0x47 )
        {
          v89 = j__strlen("$");
          sub_E66830(a1, v58, nullptr, 0, 0, v90, "$", v89);
          return;
        }
      }
      v62 = *(_QWORD *)(v53 + 32) & 0xFFFFFFFFFFFFFFF0LL;
      v63 = *(_QWORD *)v62;
      if ( *(_BYTE *)(*(_QWORD *)v62 + 16LL) == 26
        || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v63 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
        && sub_F3F310(v63, a2, v54, v55) )
      {
        goto LABEL_47;
      }
      if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x47 )
      {
        v80 = j__strlen("$");
        sub_E61870(a1, v58, 0, 0, 0, v81, "$", v80);
        return;
      }
      if ( (unsigned __int8)sub_E537A0(v58, a2, v54, v55, v56, v57) )
      {
LABEL_47:
        LODWORD(v110) = 64;
        v109 = 0;
        BYTE4(v110) = 1;
      }
      else
      {
        LODWORD(v110) = 64;
        v109 = -1;
        BYTE4(v110) = 0;
      }
      sub_E61AE0(a1, (__int64)&v109, a4, v52);
      if ( (unsigned int)v110 > 0x40 )
      {
        v30 = (unsigned __int8 *)v109;
        if ( v109 )
          goto LABEL_24;
      }
      break;
    case 4LL:
      v25 = *(_QWORD *)(a3 + 16);
      v26 = *(void **)(a3 + 8);
      v27 = *(_BYTE *)(a3 + 7) >> 7;
      v28 = *(_DWORD *)(a3 + 4) & 0x7FFFFFFF;
      v29 = v27;
      if ( (unsigned int)v28 > 0x40 )
      {
        sub_21E18C0(&v109, v28, v26, ((unsigned __int64)(unsigned int)v28 + 63) >> 6);
        v108 = v29;
        v107 = v110;
        v106 = (void *)v109;
      }
      else
      {
        v107 = v28;
        v106 = v26;
        v108 = v27;
      }
      sub_E61AE0(a1, (__int64)&v106, a4, v25);
      if ( v107 > 0x40 )
      {
        v30 = (unsigned __int8 *)v106;
        if ( v106 )
LABEL_24:
          operator delete[](v30);
      }
      break;
    case 5LL:
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) == 42
        && (v31 = *(_DWORD **)(a3 + 8), *v31 == 7)
        && sub_A2D350(*(_QWORD *)(a3 + 8))
        && (v109 = sub_A2D320((__int64)v31), v110 = v32, sub_A2B9C0(&v109))
        && (v109 = sub_A2D320((__int64)v31),
            v110 = v33,
            (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_A2B5D0(&v109) & 0xFFFFFFFFFFFFFFF0LL)
                                                               + 8LL)
                                                   & 0xFFFFFFFFFFFFFFF0LL)
                                       + 16LL)
                            - 2) <= 4u)
        && (sub_A2D360((__int64)v31), v34 == 1)
        && !*(_QWORD *)sub_A2D360((__int64)v31)
        && (v35 = sub_A2D320((__int64)v31)) != 0
        && (v35 & 3) == 0
        && (v35 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        sub_EF9550(&v109, v35 & 0xFFFFFFFFFFFFFFFCLL, *(_QWORD *)(a3 + 16), 0);
        sub_E6AA70(a1, a2, &v109, a4);
      }
      else
      {
        sub_971800(a1[1], "$");
        if ( sub_F34140(*(_QWORD *)(*(_QWORD *)(a4 + 48) & 0xFFFFFFFFFFFFFFF0LL)) )
        {
          sub_971800(a1[1], "M");
          v64 = sub_EF98D0(a3);
          sub_E608A0(a1, v64, nullptr, 0);
        }
        sub_E69770(a1, *(_QWORD *)(a3 + 16), *(_QWORD *)(a3 + 8), 1, 0);
      }
      break;
    case 6LL:
      sub_EFED50(&v109, *(_QWORD *)(a3 + 8));
      v38 = *(_QWORD *)(sub_EFEE90(&v109, 0) + 48);
      if ( (*(_BYTE *)(v38 + 28) & 0x7Fu) - 58 > 4 )
      {
        sub_971800(a1[1], "$$Y");
        sub_E5E850(a1, v38, 0, v77, v78, v79);
      }
      else
      {
        sub_E5EEC0(a1, v38, v36, v37, v39, v40);
      }
      break;
    case 8LL:
      v41 = *(_QWORD *)(a3 + 8);
      sub_C1ADC0((__int64)&v109, v41, *(_QWORD *)(*a1 + 8), nullptr, a5, a6);
      if ( v111 )
      {
        sub_E61AE0(a1, (__int64)&v109, a4, *(_QWORD *)(v41 + 8));
        sub_96A770((__int64)&v109);
      }
      else
      {
        v42 = 0;
        sub_96A770((__int64)&v109);
        v43 = (const char *)sub_EC59F0(v41);
        v44 = (char *)v43;
        if ( v43 )
          v42 = j__strlen(v43);
        v105 = j__strlen("expression type: ");
        v48 = sub_BDCD00(v41, v41, v45, v46, v47);
        v49 = *(_QWORD *)(*a1 + 16);
        v50 = sub_E161F0(*(_QWORD *)(v49 + 32), 4, "cannot mangle this %0 %1 yet", 28);
        sub_FA3370(&v109, v49, v48, v50);
        sub_AC84E0((unsigned __int8 **)&v109, "expression type: ", v105);
        sub_AC84E0((unsigned __int8 **)&v109, v44, v42);
        sub_FA33B0(&v106, &v109);
        sub_AC6300((__int64)&v109);
        v51 = (unsigned __int8 *)sub_EC8B80(v41);
        LOBYTE(v110) = 1;
        v109 = (__int64)v51;
        sub_AC88D0((__int64 *)&v106, &v109);
        sub_AC6300((__int64)&v106);
      }
      break;
    case 9LL:
      if ( *(_DWORD *)(a3 + 4) )
      {
        v75 = *(_QWORD *)(a3 + 8);
        v76 = v75 + 24LL * *(unsigned int *)(a3 + 4);
        do
        {
          sub_E6AA70(a1, a2, v75, a4);
          v75 += 24;
        }
        while ( v76 != v75 );
      }
      else
      {
        v23 = a1[1];
        if ( ((*(_BYTE *)(a4 + 28) + 61) & 0x7Fu) > 1 )
        {
          sub_971800(v23, "$S");
        }
        else
        {
          v24 = "$$V";
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8) + 2320LL) + 152LL) <= 0xB532B7Fu )
            v24 = "$$$V";
          sub_971800(v23, v24);
        }
      }
      break;
    default:
      return;
  }
}

