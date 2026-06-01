__int64 __fastcall sub_A1A3A0(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned int a4,
        __int64 ***a5,
        int a6,
        double a7,
        __int64 a8)
{
  int v8; // ecx
  __int64 v12; // rdi
  __int64 v13; // rax
  unsigned int *v14; // r15
  unsigned int *v15; // r13
  __int64 ***v16; // r12
  __int64 ***v17; // rbx
  __int64 *v18; // r8
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // rsi
  __int64 v22; // rdi
  bool v23; // zf
  int v24; // ebx
  __int64 v25; // r12
  __int64 v26; // r13
  int v27; // edx
  __int64 v28; // rdx
  char v29; // cl
  __int64 v30; // rdx
  __int64 ***v32; // r12
  unsigned int v33; // ebx
  __int64 v34; // rax
  char v35; // r15
  __int64 *v36; // r8
  __int64 v37; // rax
  __int64 v38; // r15
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 **v41; // rdi
  __int64 v42; // r15
  __int64 v43; // rax
  __int64 **v44; // r8
  _DWORD *v45; // r9
  int *v46; // r9
  int v47; // r10d
  __int64 v48; // rdi
  int v49; // eax
  __int64 v50; // rbx
  int v51; // ecx
  int v52; // r8d
  int v53; // r9d
  __int64 v54; // rdi
  int v55; // eax
  unsigned __int8 v56; // dl
  __int64 v57; // rax
  __int64 v58; // rax
  int v59; // ecx
  int v60; // r8d
  int v61; // r9d
  __int64 v62; // rdi
  unsigned __int8 v63; // dl
  int v64; // eax
  __int64 v65; // rax
  __int64 v66; // rbx
  int v67; // eax
  __int64 ***v68; // rsi
  __int64 ***v69; // rdi
  __int64 v70; // rdx
  __int64 v71; // r14
  __int64 v72; // rdi
  _QWORD *v73; // r10
  __int64 v74; // r14
  int v75; // [rsp-8h] [rbp-1B8h]
  void *v77; // [rsp+0h] [rbp-1B0h]
  int v78; // [rsp+8h] [rbp-1A8h]
  int v80; // [rsp+10h] [rbp-1A0h]
  __int64 ***v82; // [rsp+18h] [rbp-198h]
  void *v83; // [rsp+20h] [rbp-190h]
  void *v84; // [rsp+20h] [rbp-190h]
  void *v85; // [rsp+20h] [rbp-190h]
  int *v86; // [rsp+20h] [rbp-190h]
  __int64 v87; // [rsp+30h] [rbp-180h]
  __int64 v88; // [rsp+40h] [rbp-170h]
  __int64 *v89; // [rsp+50h] [rbp-160h] BYREF
  __int64 *v90; // [rsp+58h] [rbp-158h] BYREF
  __int64 v91; // [rsp+60h] [rbp-150h] BYREF
  __int64 v92; // [rsp+68h] [rbp-148h] BYREF
  int v93[2]; // [rsp+70h] [rbp-140h] BYREF
  __int64 v94; // [rsp+78h] [rbp-138h]
  __int64 v95[2]; // [rsp+80h] [rbp-130h] BYREF
  int v96[4]; // [rsp+90h] [rbp-120h] BYREF
  __int64 v97; // [rsp+A0h] [rbp-110h] BYREF
  __int64 v98; // [rsp+A8h] [rbp-108h]
  __int64 v99; // [rsp+B0h] [rbp-100h]
  __int64 v100; // [rsp+B8h] [rbp-F8h]
  __int64 **v101; // [rsp+C0h] [rbp-F0h] BYREF
  __int64 v102; // [rsp+C8h] [rbp-E8h]
  int v103; // [rsp+D0h] [rbp-E0h] BYREF
  char v104; // [rsp+D4h] [rbp-DCh]
  __int64 v105; // [rsp+D8h] [rbp-D8h]
  char v106[32]; // [rsp+E0h] [rbp-D0h] BYREF
  _QWORD v107[6]; // [rsp+100h] [rbp-B0h] BYREF
  char v108[128]; // [rsp+130h] [rbp-80h] BYREF

  v8 = *(_DWORD *)(a1 + 1440);
  v88 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v93 = 0;
  v94 = v88;
  if ( v8 == 0x7FFFFFFF || !a2 )
    return sub_98B270(0, v88);
  v12 = a2;
  v13 = 0;
  while ( v8 != a3[v13] >> 1 )
  {
    if ( v12 == ++v13 )
      return sub_98B270(0, v88);
  }
  v80 = v13;
  HIBYTE(v78) = a6 == 0 || a2 == (_DWORD)v13;
  if ( HIBYTE(v78) )
    return sub_98B270(0, v88);
  v14 = a3;
  v15 = a3;
  do
    sub_894B80(*(_QWORD *)(a1 + 16), *v15++, (__int64 *)v93);
  while ( &a3[v12] != v15 );
  if ( a4 )
  {
    v16 = a5;
    v17 = &a5[2 * a4];
    do
    {
      while ( 1 )
      {
        v18 = *v16[1];
        v89 = **v16;
        v90 = v18;
        v19 = sub_15E1B70(v88);
        v20 = v19;
        if ( v19 )
          ++*(_DWORD *)(v19 + 8);
        v21 = *(_QWORD *)v93;
        if ( *(_QWORD *)v93 )
        {
          v22 = v94;
          v23 = (*(_DWORD *)(*(_QWORD *)v93 + 8LL))-- == 1;
          if ( v23 )
            break;
        }
        v16 += 2;
        *(_QWORD *)v93 = v19;
        if ( v17 == v16 )
          goto LABEL_17;
      }
      sub_15D7BC0(v22, v21);
      v16 += 2;
      *(_QWORD *)v93 = v20;
    }
    while ( v17 != v16 );
  }
LABEL_17:
  sub_B1F240(v107, v88);
  v24 = 0;
  v97 = 0;
  v98 = 0;
  v99 = 1;
  v25 = a8 + 16;
  v100 = 0;
  while ( 1 )
  {
    if ( v80 == v24 )
    {
      if ( *(_BYTE *)(v25 + 8) != 4 )
        sub_DBF6E(0);
      sub_3EC020((__int64)&v101, *(_QWORD *)v25);
      v27 = (int)v101;
      LODWORD(v101) = v97;
      LODWORD(v97) = v27;
      v28 = v102;
      v102 = v98;
      v98 = v28;
      v29 = BYTE4(v101) & 1;
      v84 = qword_1C7F2C0;
      LOBYTE(v28) = BYTE4(v97) & 0xFC | BYTE4(v101) & 2;
      BYTE4(v101) = BYTE4(v97) & 1 | BYTE4(v101) & 0xFC | BYTE4(v97) & 2;
      BYTE4(v97) = v29 | v28;
      LODWORD(v28) = v103;
      v103 = v99;
      LODWORD(v99) = v28;
      v30 = v105;
      v105 = v100;
      v100 = v30;
      LOBYTE(v30) = v104 & 1 | BYTE4(v99) & 0xFC | v104 & 2;
      v104 = BYTE4(v99) & 1 | v104 & 0xFC | BYTE4(v99) & 2;
      BYTE4(v99) = v30;
      sub_182CBA0(qword_1C7F2C0, &v101);
      sub_182CBA0(v84, &v103);
    }
    else
    {
      sub_894B80(*(_QWORD *)(a1 + 16), *v14, (__int64 *)v93);
      v26 = *(_QWORD *)v93;
      if ( *(_BYTE *)(v25 + 8) != 4 )
        sub_DBF6E(0);
      sub_3EC020((__int64)&v101, *(_QWORD *)v25);
      LOBYTE(v82) = sub_B211C0(v107, &v101, v26);
      v83 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v101);
      sub_182CBA0(v83, &v103);
      if ( !(_BYTE)v82 )
        goto LABEL_26;
    }
    v25 += 16;
    ++v14;
    if ( a2 == v24 + 1 )
      break;
    ++v24;
  }
  if ( !a4 )
  {
LABEL_37:
    sub_B221E0((unsigned int)&v101, (unsigned int)v107, (_DWORD)a5);
    v41 = *(__int64 ***)v93;
    *(_QWORD *)v93 = v101;
    v101 = v41;
    sub_98B270((__int64)v41, v102);
    if ( *(_QWORD *)(v88 + 912) )
    {
      v101 = nullptr;
      sub_966750(a1, v93[0], -1, 0, 0, -1, &v101, v75, (int)v77, v78, v80, v82);
      if ( v101 )
        sub_186B220(v101 - 1);
      std::operator<<<std::char_traits<char>>();
    }
    v42 = *(_QWORD *)(a1 + 648);
    if ( v42 )
    {
      v43 = *(unsigned int *)(a1 + 1440);
      if ( (unsigned int)v43 >= *(_DWORD *)(v42 - 4) )
        v42 = 0;
      else
        v42 = *(_QWORD *)(v42 + 8 * v43);
    }
    v44 = *(__int64 ***)v93;
    v95[1] = 0;
    v92 = 0;
    v23 = *(_WORD *)(*(_QWORD *)v93 + 4LL) == 0;
    v95[0] = v88;
    if ( !v23 )
      goto LABEL_58;
    v45 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)v93 + 16LL) + 24LL);
    if ( v45 )
    {
      if ( *v45 == 5 )
      {
        v49 = v45[1];
        if ( v49 == 2 )
        {
          if ( *(_DWORD *)(*(_QWORD *)v93 + 24LL) == 2 )
          {
LABEL_53:
            v89 = v44[4];
            v90 = v44[5];
LABEL_59:
            v50 = **(_QWORD **)(*(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)(v42 + 8));
            v91 = v50;
            sub_9AF730((__int64)qword_1C7F2C0, (__int64)&v97, (__int64)v108, (__int64)&v97);
            if ( (v97 & 0x100000000LL) == 0 && (_DWORD)v97 == 1 )
            {
              if ( (v99 & 0x100000000LL) == 0 )
              {
                v55 = v99;
                v54 = a1 + 344;
                if ( (_DWORD)v99 == 1 )
                {
                  if ( v50 )
                    ++*(_DWORD *)(v50 + 8);
LABEL_66:
                  sub_98B270(0, v88);
                  sub_15E1B70(*(_QWORD *)(a1 + 344));
                  v58 = sub_15E1B70(*(_QWORD *)(a1 + 344));
                  v87 = v58;
                  if ( v58 )
                    ++*(_DWORD *)(v58 + 8);
                  sub_98B270(v50, v88);
                  if ( (v97 & 0x100000000LL) == 0 && (_DWORD)v97 == 1 )
                  {
                    if ( (v99 & 0x100000000LL) != 0 )
                    {
                      v62 = a1 + 344;
                      v63 = 0;
                      goto LABEL_73;
                    }
                    v64 = v99;
                    v62 = a1 + 344;
                    if ( (_DWORD)v99 == 1 )
                    {
                      v66 = v87;
LABEL_76:
                      v101 = nullptr;
                      sub_14B7810((int)v96, v88, (int)&v101, v59, v60, v61, v77);
                      sub_18572D0(&v101);
                      sub_14B9BF0(v96, v66, v93);
                      if ( (unsigned __int8)sub_1666AE0(a1 + 344, *(_QWORD *)v93, &v97, &v101) )
                      {
                        v67 = *(_DWORD *)(a1 + 1448);
                        if ( v67 < 0 || !v67 && sub_9B1D90(a1 + 1480, (__int64)&v97) )
                        {
                          sub_894960((__int64)&v101, (__int64)&v97);
                          v86 = (int *)(a1 + 1448);
                          sub_992B50(a1 + 1448);
                          v68 = &v101;
                          sub_98B520(a1 + 1480, (int *)&v101);
                          sub_25A130(v106);
                          v69 = &v101;
                          sub_25A130((char *)&v101);
                          if ( HIBYTE(v78) )
                          {
                            v70 = a1 + 64;
                            v69 = (__int64 ***)qword_1C7F2C0;
                            if ( (*(_BYTE *)(*(_QWORD *)(a1 + 592) + 4LL * *(unsigned int *)(v42 + 8) + 3) & 0x40) == 0 )
                              v70 = a1 + 96;
                            v68 = (__int64 ***)(a1 + 1480);
                            sub_89ABF0((__int64)qword_1C7F2C0, a1 + 1480, v70, a1 + 1480);
                          }
                          if ( (unsigned int)sub_180B130(v69) )
                          {
                            if ( (unsigned __int8)sub_186A530(a7) )
                            {
                              sub_186A4C0(a7);
                              v71 = sub_180B150(v69, v68);
                              std::__ostream_insert<char,std::char_traits<char>>();
                              v72 = sub_71A630(v71, v86);
                              std::operator<<<std::char_traits<char>>();
                              sub_186A500(v72, "\n");
                            }
                            else
                            {
                              v74 = sub_180B150(v69, v68);
                              std::__ostream_insert<char,std::char_traits<char>>();
                              sub_71A630(v74, v86);
                              std::operator<<<std::char_traits<char>>();
                            }
                          }
                        }
                      }
                      sub_14B63F0(v96);
                      sub_27FC20(&v92);
                      sub_2334C0(v95);
                      sub_25A130((char *)&v97);
                      sub_47A7A0(v107);
                      sub_98B270(v66, v88);
                      return sub_98B270(*(__int64 *)v93, v94);
                    }
                  }
                  else
                  {
                    v62 = a1 + 344;
                    v63 = 0;
                    if ( (v99 & 0x100000000LL) != 0 )
                    {
LABEL_73:
                      sub_27B900(v62, (int)&v97, v63, v59, v60, v61);
                      v65 = sub_15E1B70(*(_QWORD *)(a1 + 344));
                      v66 = v65;
                      if ( v65 )
                        ++*(_DWORD *)(v65 + 8);
                      sub_98B270(v87, v88);
                      goto LABEL_76;
                    }
                    v64 = v99;
                  }
                  v63 = v64 == 1;
                  goto LABEL_73;
                }
                goto LABEL_63;
              }
              v54 = a1 + 344;
            }
            else
            {
              v54 = a1 + 344;
              if ( (v99 & 0x100000000LL) == 0 )
              {
                v55 = v99;
LABEL_63:
                v56 = v55 == 1;
                goto LABEL_64;
              }
            }
            v56 = 0;
LABEL_64:
            sub_27B900(v54, (int)&v97, v56, v51, v52, v53);
            v57 = sub_15E1B70(*(_QWORD *)(a1 + 344));
            v50 = v57;
            if ( v57 )
              ++*(_DWORD *)(v57 + 8);
            goto LABEL_66;
          }
        }
        else if ( v49 == 3 && *(_DWORD *)(*(_QWORD *)v93 + 24LL) == 2 )
        {
          v90 = *(__int64 **)(*(_QWORD *)v93 + 32LL);
          v89 = *(__int64 **)(*(_QWORD *)v93 + 40LL);
          goto LABEL_59;
        }
        if ( !(unsigned __int8)sub_98ABC0(*(__int64 *)v93, &v91) )
        {
LABEL_58:
          sub_1872CE0("");
          sub_1873130(114, 1259);
        }
      }
      else if ( !(unsigned __int8)sub_98ABC0(*(__int64 *)v93, &v91) )
      {
LABEL_50:
        if ( !v47 && v46[1] == 2 && *((_DWORD *)v44 + 6) == 2 )
          goto LABEL_53;
        goto LABEL_58;
      }
      v48 = v91;
      if ( *(_WORD *)(v91 + 4) )
      {
LABEL_49:
        v47 = *v46;
        goto LABEL_50;
      }
    }
    else
    {
      if ( !(unsigned __int8)sub_98ABC0(*(__int64 *)v93, &v91) )
        goto LABEL_58;
      v48 = v91;
      if ( *(_WORD *)(v91 + 4) )
        goto LABEL_58;
    }
    if ( (unsigned __int8)sub_98AC00(v48, &v90, &v89) || (unsigned __int8)sub_98AC50(v48, v73, &v90) )
    {
      HIBYTE(v78) = 1;
      goto LABEL_59;
    }
    if ( !v46 )
      goto LABEL_58;
    goto LABEL_49;
  }
  v32 = a5;
  v33 = v24 + 2;
  v82 = &a5[2 * a4];
  while ( 1 )
  {
    v36 = *v32[1];
    v89 = **v32;
    v90 = v36;
    v37 = sub_15E1B70(v88);
    v38 = v37;
    if ( v37 )
      ++*(_DWORD *)(v37 + 8);
    v39 = *(_QWORD *)v93;
    if ( *(_QWORD *)v93 )
    {
      v40 = v94;
      v23 = (*(_DWORD *)(*(_QWORD *)v93 + 8LL))-- == 1;
      if ( v23 )
        sub_15D7BC0(v40, v39);
    }
    *(_QWORD *)v93 = v38;
    v34 = a8 + 16LL * v33;
    if ( *(_BYTE *)(v34 + 8) != 4 )
      sub_DBF6E(0);
    sub_3EC020((__int64)&v101, *(_QWORD *)v34);
    v35 = sub_B211C0(v107, &v101, v38);
    v85 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v101);
    sub_182CBA0(v85, &v103);
    if ( !v35 )
      break;
    v32 += 2;
    ++v33;
    if ( v32 == v82 )
      goto LABEL_37;
  }
LABEL_26:
  sub_25A130((char *)&v97);
  sub_47A7A0(v107);
  return sub_98B270(*(__int64 *)v93, v94);
}

