__int16 __fastcall sub_1BE4A20(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  char v6; // r14
  char v7; // r13
  __int64 v11; // rax
  char v12; // si
  unsigned __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 *v19; // rdx
  __int64 *v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // r15
  char v23; // al
  char v24; // al
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  char v36; // r15
  __int64 v37; // rax
  __int64 v38; // r14
  __int64 v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  int v46; // r12d
  __int64 v47; // rcx
  __int64 v48; // rbp
  unsigned __int64 v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rdi
  __int64 v59; // r12
  _QWORD *v60; // r14
  int v61; // r13d
  unsigned __int64 v62; // rax
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  int v69; // edx
  unsigned __int64 v70; // rax
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  int v77; // edx
  unsigned __int64 v78; // rax
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  int v85; // edx
  unsigned __int64 v86; // rax
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  int v93; // edx
  unsigned __int64 v94; // rax
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  int v101; // edx
  unsigned __int64 v102; // rax
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  unsigned __int64 v109; // rax
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // rsi
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // r9
  _QWORD *v121; // rax
  __int64 v122; // rdx
  __int64 v123; // rcx
  _QWORD *v124; // r14
  _QWORD *v125; // r15
  unsigned __int64 v126; // r13
  __int64 v127; // rdx
  __int64 v128; // rcx
  _QWORD *v129; // r13
  unsigned __int64 v130; // rdi
  __int64 v132; // [rsp+0h] [rbp-68h]
  __int64 v133; // [rsp+8h] [rbp-60h]
  unsigned __int64 v134; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v135; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v136[8]; // [rsp+28h] [rbp-40h] BYREF

  v6 = a4;
  v7 = a5;
  v11 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL];
  v12 = v11 | a2;
  v11 &= 0xFFFFFFFFFFFFFFF8LL;
  v134 = v11 | v12 & 7;
  v13 = v11 & 0xFFFFFFFFFFFFFFF0LL;
  v14 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
  v15 = (unsigned int)*(unsigned __int8 *)(v14 + 16) - 43;
  if ( (unsigned int)v15 <= 1 || (v14 = sub_1BC7530(v14, v13, v15, a4)) != 0 )
    v134 = sub_9B4870(v14, v13, v15, a4, a5);
  v17 = v134;
  v18 = *(_QWORD *)(v134 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u )
    v18 = *(_QWORD *)(sub_A72210(*(_QWORD **)(*(_QWORD *)(a1 + 632) + 248LL), v134) & 0xFFFFFFFFFFFFFFF0LL);
  v19 = (__int64 *)(v18 & 0xFFFFFFFFFFFFFFF0LL);
  v134 = (unsigned __int64)v19;
  v20 = v19;
  v21 = *(_QWORD *)(*v19 + 8) & 0xFFFFFFFFFFFFFFF0LL;
  v22 = *(_QWORD *)v21;
  if ( *(_BYTE *)(*(_QWORD *)v21 + 16LL) == 48 )
  {
    v23 = *(_BYTE *)(a1 + 624);
  }
  else
  {
    v22 = 0;
    v23 = 1;
  }
  *(_BYTE *)(a1 + 624) = v23;
  v24 = *(_BYTE *)(a1 + 625);
  if ( !v24 )
  {
    v24 = sub_F610C0(*v19, v17, (__int64)v19, (__int64)v19, a5, v16);
    v20 = (__int64 *)(v134 & 0xFFFFFFFFFFFFFFF0LL);
  }
  *(_BYTE *)(a1 + 625) = v24;
  v25 = *v20;
  if ( *(_BYTE *)(*v20 + 16) == 34 || (v25 = sub_1BC7620(*v20, v17, (__int64)v19, (__int64)v20)) != 0 )
  {
    v26 = *(_QWORD *)(*(_QWORD *)(v25 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    v27 = (unsigned int)*(unsigned __int8 *)(v26 + 16) - 35;
    if ( (unsigned int)v27 > 1 )
    {
      v26 = sub_F63050(v26, v17, v27, v20);
      v28 = *(unsigned __int8 *)(v26 + 19);
      LOBYTE(v28) = (unsigned __int8)v28 >> 2;
      if ( (_BYTE)v28 )
        goto LABEL_12;
    }
    else
    {
      v28 = *(unsigned __int8 *)(v26 + 19);
      LOBYTE(v28) = (unsigned __int8)v28 >> 2;
      if ( (_BYTE)v28 )
        goto LABEL_12;
    }
    v39 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v39 + 16) == 13 && ((*(_WORD *)(v39 + 18) >> 3) & 0x1FF) == 0x1E9 )
    {
LABEL_24:
      LOWORD(v33) = sub_1BE4270(a1, &v134, v28, (__int64)v20, a5, v16);
      return v33;
    }
  }
LABEL_12:
  v29 = *(_QWORD *)(v134 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v29 + 16) == 34 || (v29 = sub_1BC7620(v29, v17, v28, (__int64)v20)) != 0 )
  {
    v30 = sub_A5E7C0(v29, v17, v28, (__int64)v20, a5);
    v28 = *(unsigned __int8 *)(v30 + 19);
    LOBYTE(v28) = (unsigned __int8)v28 >> 2;
    if ( !(_BYTE)v28 )
    {
      v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v30 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v31 + 16) == 13 && ((*(_WORD *)(v31 + 18) >> 3) & 0x1FF) == 0x1EA )
        goto LABEL_24;
    }
  }
  v32 = *(_QWORD *)(v134 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v32 + 16) == 42
    || sub_1BC7590(v32, v17, v28, (__int64)v20)
    || (v40 = *(_QWORD *)(v134 & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v40 + 16) == 34)
    || sub_1BC7620(v40, v17, v28, (__int64)v20) )
  {
    v135 = v134;
    LOWORD(v33) = sub_1BE4270(a1, &v135, v28, (__int64)v20, a5, v16);
    v36 = v33;
    if ( (_BYTE)v33 )
    {
      v37 = *(_QWORD *)(v135 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v37 + 16) == 42
        || (v37 = sub_1BC7590(*(_QWORD *)(v135 & 0xFFFFFFFFFFFFFFF0LL), (__int64)&v135, v34, v35)) != 0 )
      {
        v38 = *(_QWORD *)(v37 + 32);
        v36 = 0;
      }
      else
      {
        v45 = *(_QWORD *)(v135 & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v45 + 16) != 34 )
          v45 = sub_F63050(*(_QWORD *)(v135 & 0xFFFFFFFFFFFFFFF0LL), &v135, v43, v44);
        v38 = *(_QWORD *)(v45 + 32);
      }
      LOWORD(v33) = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v38 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                   & 0xFFFFFFFFFFFFFFF0LL)
                                       + 16LL)
                  - 2;
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v38 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                      + 16LL)
                           - 2) > 4u )
      {
        v33 = *a6 & 2LL;
        v46 = ((unsigned __int8)v38 | (unsigned __int8)*(_DWORD *)&byte_8[v38 & 0xFFFFFFFFFFFFFFF0LL]) & 7;
        v47 = *a6 & 4LL;
        v133 = v33;
        v48 = (unsigned int)(v46 + 1);
        v132 = v47;
        if ( v46 != 7 )
        {
          do
          {
            LOWORD(v33) = v48 | v46;
            if ( (_DWORD)v48 == ((unsigned int)v48 | v46) && ((v48 & 4) == 0 || v132) )
            {
              if ( (v48 & 2) == 0
                || v133
                && ((LOWORD(v33) = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v38 & 0xFFFFFFFFFFFFFFF0LL)
                                                                              + 8LL)
                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                      + 16LL),
                     (unsigned __int8)(v33 - 42) <= 2u)
                 || (_BYTE)v33 == 34) )
              {
                v49 = sub_A70F20(*(_QWORD *)(a1 + 640), v38, v48);
                v50 = *(_QWORD *)(a1 + 640);
                v136[0] = 0;
                if ( v36 )
                  v136[0] = sub_A74EC0(v50, v49);
                else
                  v136[0] = sub_A70010(v50, v49);
                LOWORD(v33) = sub_1BE4270(a1, v136, v51, v52, v53, v54);
              }
            }
            ++v48;
          }
          while ( (_DWORD)v48 != 8 );
        }
      }
    }
  }
  else
  {
    v41 = v134;
    v42 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v134 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    LOWORD(v33) = *(unsigned __int8 *)(v42 + 16);
    switch ( (_BYTE)v33 )
    {
      case 0x21:
        v135 = v134;
        LOWORD(v33) = sub_1BE4270(a1 + 104, &v135, v134, v42, a5, v16);
        if ( (_BYTE)v33 )
        {
          v58 = *(_QWORD *)(v135 & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v58 + 16) != 33 )
            v58 = sub_1BC75F0(v58, (__int64)&v135, v56, v57);
          v59 = *(_QWORD *)(v58 + 32);
          LOWORD(v33) = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v59 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                       & 0xFFFFFFFFFFFFFFF0LL)
                                           + 16LL)
                      - 2;
          if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v59 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
                               - 2) > 4u )
          {
            v60 = sub_F61C10(v58);
            v61 = ((unsigned __int8)v59 | (unsigned __int8)*(_DWORD *)&byte_8[v59 & 0xFFFFFFFFFFFFFFF0LL]) & 7;
            LODWORD(v33) = v61 + 1;
            if ( v61 != 7 )
            {
              if ( (_DWORD)v33 == ((unsigned int)v33 | v61) )
              {
                v62 = sub_A70F20(*(_QWORD *)(a1 + 640), v59, (unsigned int)v33);
                v136[0] = sub_ABBA20(*(_QWORD **)(a1 + 640), v62, 0, (__int64)v60, v63, v64);
                LOWORD(v33) = sub_1BE4270(a1 + 104, v136, v65, v66, v67, v68);
              }
              v69 = v61 + 2;
              if ( v61 != 6 )
              {
                LODWORD(v33) = v69 | v61;
                if ( (v69 | v61) == v69 )
                {
                  v70 = sub_A70F20(*(_QWORD *)(a1 + 640), v59, (unsigned int)v33);
                  v136[0] = sub_ABBA20(*(_QWORD **)(a1 + 640), v70, 0, (__int64)v60, v71, v72);
                  LOWORD(v33) = sub_1BE4270(a1 + 104, v136, v73, v74, v75, v76);
                }
                v77 = v61 + 3;
                if ( v61 != 5 )
                {
                  LODWORD(v33) = v77 | v61;
                  if ( (v77 | v61) == v77 )
                  {
                    v78 = sub_A70F20(*(_QWORD *)(a1 + 640), v59, (unsigned int)v33);
                    v136[0] = sub_ABBA20(*(_QWORD **)(a1 + 640), v78, 0, (__int64)v60, v79, v80);
                    LOWORD(v33) = sub_1BE4270(a1 + 104, v136, v81, v82, v83, v84);
                  }
                  v85 = v61 + 4;
                  if ( v61 != 4 )
                  {
                    LODWORD(v33) = v85 | v61;
                    if ( (v85 | v61) == v85 )
                    {
                      v86 = sub_A70F20(*(_QWORD *)(a1 + 640), v59, (unsigned int)v33);
                      v136[0] = sub_ABBA20(*(_QWORD **)(a1 + 640), v86, 0, (__int64)v60, v87, v88);
                      LOWORD(v33) = sub_1BE4270(a1 + 104, v136, v89, v90, v91, v92);
                    }
                    v93 = v61 + 5;
                    if ( v61 != 3 )
                    {
                      LODWORD(v33) = v93 | v61;
                      if ( (v93 | v61) == v93 )
                      {
                        v94 = sub_A70F20(*(_QWORD *)(a1 + 640), v59, (unsigned int)v33);
                        v136[0] = sub_ABBA20(*(_QWORD **)(a1 + 640), v94, 0, (__int64)v60, v95, v96);
                        LOWORD(v33) = sub_1BE4270(a1 + 104, v136, v97, v98, v99, v100);
                      }
                      v101 = v61 + 6;
                      if ( v61 != 2 )
                      {
                        LODWORD(v33) = v61 | v101;
                        if ( (v61 | v101) == v101 )
                        {
                          v102 = sub_A70F20(*(_QWORD *)(a1 + 640), v59, (unsigned int)v33);
                          v136[0] = sub_ABBA20(*(_QWORD **)(a1 + 640), v102, 0, (__int64)v60, v103, v104);
                          LOWORD(v33) = sub_1BE4270(a1 + 104, v136, v105, v106, v107, v108);
                        }
                        if ( v61 != 1 )
                        {
                          v109 = sub_A70F20(*(_QWORD *)(a1 + 640), v59, 7);
                          v136[0] = sub_ABBA20(*(_QWORD **)(a1 + 640), v109, 0, (__int64)v60, v110, v111);
                          LOWORD(v33) = sub_1BE4270(a1 + 104, v136, v112, v113, v114, v115);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        break;
      case 0x2F:
        *(_BYTE *)(a1 + 625) = 1;
        LOWORD(v33) = sub_1BE4270(a1 + 208, &v134, v41, v42, a5, v16);
        break;
      case 0xA:
        *(_BYTE *)(a1 + 625) = 1;
        LOWORD(v33) = sub_1BE4270(a1 + 520, &v134, v41, v42, a5, v16);
        break;
      default:
        if ( (unsigned int)(unsigned __int8)v33 - 57 > 1 )
        {
          v55 = (unsigned int)(unsigned __int8)v33 - 31;
          if ( (unsigned int)v55 > 1 )
          {
            if ( (_BYTE)v33 == 13 && (LOWORD(v33) = (*(_WORD *)(v42 + 18) >> 3) & 0x1FF, (_WORD)v33 == 488) )
            {
              *(_BYTE *)(a1 + 626) = 1;
            }
            else if ( v22 )
            {
              if ( v6 )
              {
                v116 = a3;
                LOWORD(v33) = sub_1E63330(*(_QWORD *)(a1 + 632), a3, v134, 1, 0);
                if ( !(_BYTE)v33 )
                {
                  v121 = sub_F60F10(v22, a3, v117, v118, v119, v120);
                  v33 = sub_B9F870((__int64)v121);
                  v124 = (_QWORD *)v122;
                  if ( v122 != v33 )
                  {
                    if ( v7 )
                    {
                      v129 = (_QWORD *)v33;
                      do
                      {
                        v130 = *v129 & 0xFFFFFFFFFFFFFFF8LL;
                        if ( (*(_BYTE *)(v130 + 28) & 0x7Fu) - 53 <= 1 )
                          v130 = *(_QWORD *)(v130 + 64);
                        LOWORD(v33) = *(_BYTE *)(v130 + 28) & 0x7F;
                        if ( (_BYTE)v33 != 71 )
                        {
                          v116 = sub_AED600(v130, v116, v122, v123);
                          LOWORD(v33) = sub_1BE4A20(a1, v116, a3, 0, 0, a6);
                        }
                        ++v129;
                      }
                      while ( v124 != v129 );
                    }
                    else
                    {
                      v125 = (_QWORD *)v33;
                      do
                      {
                        v126 = *v125 & 0xFFFFFFFFFFFFFFF8LL;
                        if ( (*(_BYTE *)(v126 + 28) & 0x7Fu) - 53 <= 1 )
                          v126 = *(_QWORD *)(v126 + 64);
                        LOWORD(v33) = *(_BYTE *)(v126 + 28) & 0x7F;
                        if ( (_BYTE)v33 != 71 )
                        {
                          v33 = (*(_QWORD *)((*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v126 + 32LL))(v126)
                                           + 168)
                               & 3LL)
                              - 1;
                          if ( v33 )
                          {
                            v116 = sub_AED600(v126, v116, v127, v128);
                            LOWORD(v33) = sub_1BE4A20(a1, v116, a3, 0, 0, a6);
                          }
                        }
                        ++v125;
                      }
                      while ( v124 != v125 );
                    }
                  }
                }
              }
            }
          }
          else
          {
            *(_BYTE *)(a1 + 625) = 1;
            LOWORD(v33) = sub_1BE4270(a1 + 416, &v134, v55, v42, a5, v16);
          }
        }
        else
        {
          *(_BYTE *)(a1 + 625) = 1;
          LOWORD(v33) = sub_1BE4270(a1 + 312, &v134, (unsigned __int8)v33, v42, a5, v16);
        }
        break;
    }
  }
  return v33;
}
