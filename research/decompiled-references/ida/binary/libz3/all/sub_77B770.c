__int64 __fastcall sub_77B770(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 *v10; // rcx
  int v11; // edi
  unsigned int v12; // edx
  __int64 *v13; // rsi
  __int64 v14; // rdx
  __int64 *v15; // r8
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r14
  void *v19; // r13
  unsigned int v20; // r13d
  __int64 v21; // r15
  __int64 v22; // r9
  __int64 *v23; // r8
  __int64 v24; // r10
  unsigned int v25; // r11d
  int v26; // esi
  __int64 v27; // rdx
  __int64 *v28; // rdi
  __int64 *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // r10
  __int64 v34; // rax
  __int64 v35; // r14
  unsigned __int64 v36; // r13
  __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 *v39; // r9
  int v40; // ecx
  __int64 v41; // r11
  __int64 *v42; // rdi
  __int64 *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rdx
  unsigned int v46; // ecx
  unsigned int v47; // r15d
  unsigned int *v48; // rax
  __int64 v49; // rdx
  void *v50; // rbx
  void *v51; // rbx
  __int64 v53; // rdx
  __int64 v54; // rax
  void *v55; // rdi
  char v56; // al
  __int64 v57; // rax
  _QWORD *v58; // rax
  unsigned int v59; // r15d
  unsigned int v60; // eax
  unsigned int *v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // r10
  _QWORD *v65; // rax
  char v66; // al
  unsigned int v67; // r14d
  __int64 v68; // rsi
  __int64 v69; // r10
  __int64 v70; // rdi
  __int64 v71; // rax
  std::ostream *v72; // rdi
  __int64 v73; // rdx
  _QWORD *v74; // r8
  int v75; // eax
  __int64 v76; // rdi
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 *v79; // r14
  unsigned __int64 v80; // rbx
  __int64 v81; // rsi
  __int64 v83; // r14
  char **exception; // rbp
  __int64 v85; // [rsp+8h] [rbp-130h]
  __int64 v86; // [rsp+8h] [rbp-130h]
  __int64 v87; // [rsp+8h] [rbp-130h]
  __int64 v88; // [rsp+8h] [rbp-130h]
  __int64 v90; // [rsp+20h] [rbp-118h]
  void *v91; // [rsp+38h] [rbp-100h]
  void *v92; // [rsp+38h] [rbp-100h]
  void *v93; // [rsp+38h] [rbp-100h]
  void *v94; // [rsp+38h] [rbp-100h]
  __int64 v95; // [rsp+38h] [rbp-100h]
  __int64 v96; // [rsp+38h] [rbp-100h]
  __int64 v97; // [rsp+38h] [rbp-100h]
  __int64 v98; // [rsp+38h] [rbp-100h]
  __int64 v99; // [rsp+38h] [rbp-100h]
  __int64 v100; // [rsp+38h] [rbp-100h]
  __int64 v101; // [rsp+38h] [rbp-100h]
  __int64 v102; // [rsp+48h] [rbp-F0h]
  __int64 v103; // [rsp+48h] [rbp-F0h]
  int v104; // [rsp+60h] [rbp-D8h] BYREF
  int v105[2]; // [rsp+68h] [rbp-D0h]
  __int64 v106; // [rsp+70h] [rbp-C8h]
  _QWORD v107[2]; // [rsp+80h] [rbp-B8h] BYREF
  _QWORD v108[2]; // [rsp+90h] [rbp-A8h] BYREF
  _QWORD v109[2]; // [rsp+A0h] [rbp-98h] BYREF
  _QWORD v110[2]; // [rsp+B0h] [rbp-88h] BYREF
  _QWORD v111[2]; // [rsp+C0h] [rbp-78h] BYREF
  int v112; // [rsp+D0h] [rbp-68h] BYREF
  char v113; // [rsp+D4h] [rbp-64h]
  __int64 v114; // [rsp+D8h] [rbp-60h]
  __int64 v115[2]; // [rsp+E0h] [rbp-58h] BYREF
  int v116; // [rsp+F0h] [rbp-48h] BYREF
  char v117; // [rsp+F4h] [rbp-44h]
  __int64 v118; // [rsp+F8h] [rbp-40h]

  sub_16744A0(&v104, a1[4]);
  v107[0] = 0;
  v107[1] = 0;
  v108[0] = 1;
  v108[1] = 0;
  v109[0] = 2;
  v109[1] = 0;
  v110[0] = 1;
  v110[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v110);
  v5 = a1[5];
  BYTE4(v110[0]) &= ~1u;
  LODWORD(v110[0]) = 1;
  if ( !v5 )
    goto LABEL_48;
  v6 = *(unsigned int *)(v5 - 4);
  if ( !(_DWORD)v6 )
    goto LABEL_48;
  v90 = 8 * v6;
  v7 = 0;
  while ( 2 )
  {
    v8 = *(_QWORD *)(v5 + v7);
    v9 = *(unsigned int *)(a2 + 32);
    v10 = *(__int64 **)(a2 + 24);
    v11 = *(_DWORD *)(v8 + 12);
    v12 = v9 - 1;
    v9 *= 24;
    v13 = (__int64 *)((char *)v10 + v9);
    v14 = 24LL * (v11 & v12);
    v15 = &v10[(unsigned __int64)v14 / 8];
    if ( v14 == v9 )
    {
LABEL_58:
      if ( v10 != v15 )
      {
        while ( 1 )
        {
          v54 = *v10;
          if ( (unsigned __int64)*v10 > 1 )
          {
            if ( *(_DWORD *)(v54 + 12) == v11 && v8 == v54 )
            {
              v16 = v10;
              goto LABEL_46;
            }
          }
          else if ( !v54 )
          {
            goto LABEL_11;
          }
          v10 += 3;
          if ( v15 == v10 )
            goto LABEL_11;
        }
      }
      goto LABEL_11;
    }
    v16 = &v10[(unsigned __int64)v14 / 8];
    while ( 1 )
    {
      v17 = *v16;
      if ( (unsigned __int64)*v16 > 1 )
        break;
      if ( !v17 )
        goto LABEL_11;
LABEL_8:
      v16 += 3;
      if ( v13 == v16 )
        goto LABEL_58;
    }
    if ( *(_DWORD *)(v17 + 12) != v11 || v8 != v17 )
      goto LABEL_8;
LABEL_46:
    v49 = v16[2];
    if ( v49 )
    {
      sub_135F9B0(a3, v8, v49);
      v7 += 8;
      if ( v90 != v7 )
        goto LABEL_26;
      break;
    }
LABEL_11:
    v18 = *(_QWORD *)(a1[7] + v7);
    v19 = qword_1C7F2C0;
    sub_182CEF0(qword_1C7F2C0, v107);
    sub_182CBA0(v19, v108);
    v20 = *(_DWORD *)(v18 + 24);
    BYTE4(v108[0]) &= ~1u;
    LODWORD(v108[0]) = 1;
    if ( !v20 )
    {
LABEL_24:
      v31 = sub_1674520(&v104, v107, v20);
      sub_135F9B0(a3, *(_QWORD *)(a1[5] + v7), v31);
      goto LABEL_25;
    }
    v21 = v18 + 8LL * (v20 - 1) + 32;
    v85 = v18 + 24;
LABEL_13:
    while ( 2 )
    {
      while ( 2 )
      {
        if ( (v108[0] & 0x100000000LL) != 0
          || LODWORD(v108[0]) != 1
          || (v110[0] & 0x100000000LL) != 0
          || LODWORD(v110[0]) != 1 )
        {
          sub_1848FF0(qword_1C7F2C0, v107, v109);
        }
        else
        {
          v91 = qword_1C7F2C0;
          sub_1831650(qword_1C7F2C0, v107, v109);
          sub_182CBA0(v91, v108);
          BYTE4(v108[0]) &= ~1u;
          LODWORD(v108[0]) = 1;
        }
        v22 = *(unsigned int *)(a2 + 32);
        v23 = *(__int64 **)(a2 + 24);
        v24 = *(_QWORD *)(*(_QWORD *)v21 + 16LL);
        v25 = v22 - 1;
        v26 = *(_DWORD *)(v24 + 12);
        v27 = 3LL * (v26 & (unsigned int)(v22 - 1));
        v28 = &v23[v27];
        if ( v27 == 3 * v22 )
        {
LABEL_49:
          if ( v23 == v28 )
            goto LABEL_23;
          v29 = *(__int64 **)(a2 + 24);
          while ( 1 )
          {
            v53 = *v29;
            if ( (unsigned __int64)*v29 > 1 )
            {
              if ( *(_DWORD *)(v53 + 12) == v26 && v24 == v53 )
                goto LABEL_27;
            }
            else if ( !v53 )
            {
              v21 -= 8;
              if ( v85 == v21 )
                goto LABEL_24;
              goto LABEL_13;
            }
            v29 += 3;
            if ( v28 == v29 )
              goto LABEL_23;
          }
        }
        v29 = &v23[v27];
        while ( 1 )
        {
          v30 = *v29;
          if ( (unsigned __int64)*v29 > 1 )
            break;
          if ( !v30 )
            goto LABEL_23;
LABEL_20:
          v29 += 3;
          if ( &v23[3 * v22] == v29 )
            goto LABEL_49;
        }
        if ( *(_DWORD *)(v30 + 12) != v26 || v24 != v30 )
          goto LABEL_20;
LABEL_27:
        v32 = v29[2];
        if ( !v32 )
          goto LABEL_23;
        v33 = a1[4];
        if ( *(_QWORD *)(v33 + 856) == v32 )
        {
          BYTE4(v111[0]) &= 0xFCu;
          v113 &= 0xFCu;
          LODWORD(v111[0]) = 0;
          v55 = qword_1C7F2C0;
          v111[1] = 0;
          v112 = 1;
          v114 = 0;
          if ( (v107[0] & 0x100000000LL) != 0 )
          {
            v94 = qword_1C7F2C0;
            sub_182C690(qword_1C7F2C0, v111, v107);
            v55 = v94;
            if ( (v108[0] & 0x100000000LL) == 0 )
              goto LABEL_71;
          }
          else
          {
            LODWORD(v111[0]) = v107[0];
            if ( (v108[0] & 0x100000000LL) == 0 )
            {
LABEL_71:
              v113 &= ~1u;
              v112 = v108[0];
              goto LABEL_72;
            }
          }
          sub_182C690(v55, &v112, v108);
LABEL_72:
          LODWORD(v115[0]) = 1;
          v115[1] = 0;
          v116 = 1;
          v118 = 0;
          BYTE4(v115[0]) &= 0xFCu;
          v56 = v117 & 0xFC;
          v117 &= 0xFCu;
          if ( LODWORD(v107[0]) )
          {
            if ( (v108[0] & 0x100000000LL) != 0 || LODWORD(v108[0]) != 1 )
            {
              sub_1851D20(qword_1C7F2C0, v107, v115, v107);
            }
            else
            {
              v93 = qword_1C7F2C0;
              sub_1831A80(qword_1C7F2C0, v107, v115, v107);
              sub_182CBA0(v93, v108);
              BYTE4(v108[0]) &= ~1u;
              LODWORD(v108[0]) = 1;
            }
          }
          else
          {
            BYTE4(v107[0]) &= ~1u;
            LODWORD(v107[0]) = 1;
            if ( (v56 & 1) != 0 )
            {
              sub_182C690(qword_1C7F2C0, v108, &v116);
            }
            else
            {
              BYTE4(v108[0]) &= ~1u;
              LODWORD(v108[0]) = 1;
            }
          }
          v21 -= 8;
          v92 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v111);
          sub_182CBA0(v92, &v112);
          if ( v85 == v21 )
            goto LABEL_24;
          continue;
        }
        break;
      }
      if ( *(_QWORD *)(v33 + 864) == v32 )
      {
LABEL_23:
        v21 -= 8;
        if ( v85 != v21 )
          continue;
        goto LABEL_24;
      }
      break;
    }
    v34 = *(unsigned int *)(v18 + 24);
    v111[0] = a1[4];
    v34 *= 8;
    v86 = v18 + 32 + v34;
    if ( !v34 )
    {
      v36 = 0;
      v47 = 0;
      goto LABEL_100;
    }
    v35 = v18 + 32;
    v36 = 0;
    while ( 2 )
    {
      v37 = 24 * v22;
      v38 = *(_QWORD *)(*(_QWORD *)v35 + 16LL);
      v39 = &v23[3 * v22];
      v40 = *(_DWORD *)(v38 + 12);
      v41 = v40 & v25;
      v42 = &v23[3 * v41];
      if ( 24 * v41 == v37 )
        goto LABEL_87;
      v43 = &v23[3 * v41];
      while ( 2 )
      {
        v44 = *v43;
        if ( (unsigned __int64)*v43 <= 1 )
        {
          if ( !v44 )
            goto LABEL_39;
LABEL_36:
          v43 += 3;
          if ( v39 == v43 )
          {
LABEL_87:
            while ( v42 != v23 )
            {
              v57 = *v23;
              if ( (unsigned __int64)*v23 > 1 )
              {
                if ( *(_DWORD *)(v57 + 12) == v40 && v38 == v57 )
                {
                  v43 = v23;
                  goto LABEL_93;
                }
              }
              else if ( !v57 )
              {
                goto LABEL_39;
              }
              v23 += 3;
            }
            goto LABEL_39;
          }
          continue;
        }
        break;
      }
      if ( *(_DWORD *)(v44 + 12) != v40 || v38 != v44 )
        goto LABEL_36;
LABEL_93:
      v45 = v43[2];
      if ( v45 )
      {
LABEL_94:
        ++*(_DWORD *)(v45 + 8);
        if ( !v36 )
          goto LABEL_95;
        goto LABEL_41;
      }
LABEL_39:
      v45 = *(_QWORD *)(a1[4] + 864LL);
      if ( v45 )
        goto LABEL_94;
      if ( !v36 )
      {
LABEL_95:
        v102 = v45;
        v95 = v33;
        v58 = (_QWORD *)sub_186B270(0x18u);
        v36 = (unsigned __int64)(v58 + 1);
        v33 = v95;
        v45 = v102;
        *v58 = 2;
        v47 = 1;
        v48 = (unsigned int *)(v58 + 1);
        goto LABEL_43;
      }
LABEL_41:
      v46 = *(_DWORD *)(v36 - 4);
      if ( v46 == *(_DWORD *)(v36 - 8) )
      {
        v59 = (3 * v46 + 1) >> 1;
        v60 = 8 * v59 + 8;
        if ( 8 * v46 + 8 >= v60 || v46 >= v59 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v115, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v115);
          sub_233E40((__int64)v115);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v103 = v45;
        v96 = v33;
        v61 = (unsigned int *)sub_186B300((void *)(v36 - 8), v60);
        *v61 = v59;
        v36 = (unsigned __int64)(v61 + 2);
        v33 = v96;
        v45 = v103;
        v62 = v61[1];
        v48 = &v61[2 * v62 + 2];
        v47 = v62 + 1;
      }
      else
      {
        v47 = v46 + 1;
        v48 = (unsigned int *)(v36 + 8LL * v46);
      }
LABEL_43:
      *(_QWORD *)v48 = v45;
      v35 += 8;
      *(_DWORD *)(v36 - 4) = v47;
      if ( v86 != v35 )
      {
        v22 = *(unsigned int *)(a2 + 32);
        v23 = *(__int64 **)(a2 + 24);
        v25 = v22 - 1;
        continue;
      }
      break;
    }
LABEL_100:
    v97 = v33;
    v63 = sub_15E1AF0(v105[0]);
    v64 = v97;
    v87 = v63;
    if ( *(_QWORD *)(*(_QWORD *)v105 + 912LL) )
    {
      if ( v47 )
      {
        v65 = (_QWORD *)v36;
        while ( *v65 == *(_QWORD *)(*(_QWORD *)v105 + 856LL) || *v65 == *(_QWORD *)(*(_QWORD *)v105 + 864LL) )
        {
          if ( ++v65 == (_QWORD *)(v36 + 8LL * v47) )
            goto LABEL_106;
        }
      }
      else
      {
LABEL_106:
        v66 = sub_15D4710(v106, v87);
        v64 = v97;
        if ( v66 )
        {
          v67 = v47 & 3;
          if ( (v47 & 3) != 0 )
          {
            std::__ostream_insert<char,std::char_traits<char>>();
            v69 = v97;
            v83 = 0;
            do
            {
              v101 = v69;
              std::ostream::operator<<();
              ++v83;
              v69 = v101;
            }
            while ( (unsigned int)v83 < v47 );
          }
          else
          {
            std::__ostream_insert<char,std::char_traits<char>>();
            v68 = *(_QWORD *)v105;
            v69 = v97;
            v70 = *(_QWORD *)(*(_QWORD *)v105 + 912LL);
            v71 = *(_QWORD *)(v70 + 16);
            v72 = (std::ostream *)(v70 + 16);
            v73 = *(_QWORD *)(v71 - 24);
            *(_DWORD *)((char *)v72 + v73 + 24) = *(_DWORD *)((_BYTE *)v72 + v73 + 24) & 0xFFFFFFB5 | 8;
LABEL_109:
            v74 = (_QWORD *)(v36 + 8LL * v67);
            v75 = 0;
            while ( v67 < v47 )
            {
              v75 *= 2;
              ++v67;
              if ( *v74 == *(_QWORD *)(v68 + 856) )
                v75 |= 1u;
              ++v74;
              if ( v67 == 4 )
              {
                v98 = v69;
                if ( *(_QWORD *)((char *)v72 + v73 + 16) )
                  std::__ostream_insert<char,std::char_traits<char>>();
                else
                  std::ostream::put(v72, v75);
                v68 = *(_QWORD *)v105;
                v69 = v98;
                v76 = *(_QWORD *)(*(_QWORD *)v105 + 912LL);
                v77 = *(_QWORD *)(v76 + 16);
                v72 = (std::ostream *)(v76 + 16);
                v73 = *(_QWORD *)(v77 - 24);
                goto LABEL_109;
              }
            }
            *(_DWORD *)((char *)v72 + v73 + 24) = *(_DWORD *)((_BYTE *)v72 + v73 + 24) & 0xFFFFFFB5 | 2;
          }
          v99 = v69;
          std::__ostream_insert<char,std::char_traits<char>>();
          v64 = v99;
        }
      }
    }
    v100 = v64;
    sub_135F9B0(a3, *(_QWORD *)(a1[5] + v7), v87);
    if ( v36 )
    {
      v78 = *(unsigned int *)(v36 - 4);
      v79 = (__int64 *)v36;
      if ( v36 < v36 + 8 * v78 )
      {
        v88 = v7;
        v80 = v36 + 8 * v78;
        do
        {
          while ( 1 )
          {
            v81 = *v79;
            if ( *v79 )
            {
              if ( (*(_DWORD *)(v81 + 8))-- == 1 )
                break;
            }
            if ( (unsigned __int64)++v79 >= v80 )
              goto LABEL_126;
          }
          ++v79;
          sub_15D7BC0(v100, v81);
        }
        while ( (unsigned __int64)v79 < v80 );
LABEL_126:
        v7 = v88;
      }
      sub_186B220((void *)(v36 - 8));
    }
LABEL_25:
    v7 += 8;
    if ( v90 != v7 )
    {
LABEL_26:
      v5 = a1[5];
      continue;
    }
    break;
  }
LABEL_48:
  v50 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v109);
  sub_182CBA0(v50, v110);
  v51 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v107);
  return sub_182CBA0(v51, v108);
}

