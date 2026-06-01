__int64 __fastcall sub_BE06D0(
        unsigned __int64 a1,
        unsigned __int64 *a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 *v9; // r12
  _QWORD *v10; // rbp
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 result; // rax
  unsigned __int64 v15; // rdi
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r12
  int v22; // eax
  __int64 v23; // rbp
  int v24; // r12d
  int v25; // eax
  __int16 v26; // ax
  __int64 v27; // rax
  int v28; // edx
  unsigned __int16 v29; // ax
  __int64 v30; // rax
  __int64 v31; // r11
  __int64 v32; // rax
  int v33; // eax
  int v34; // eax
  __int64 v35; // rdi
  unsigned __int8 v36; // cl
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  unsigned __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // r15
  __int64 v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rax
  int v47; // eax
  __int16 v48; // dx
  _QWORD *v49; // rcx
  _QWORD *v50; // rbx
  int v51; // ebp
  int v52; // eax
  int v53; // eax
  __int64 v54; // rax
  int v55; // eax
  __int64 v56; // rdi
  __int64 *v57; // rax
  __int64 v58; // r8
  __int64 v59; // rdx
  __int64 *v60; // rcx
  __int64 *v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  int v64; // eax
  __int64 v65; // rax
  unsigned __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 *v72; // rax
  __int64 v73; // r9
  __int64 v74; // rdx
  unsigned __int64 v75; // rcx
  __int64 *v76; // rax
  unsigned __int64 *v77; // rax
  __int64 *v78; // rdx
  unsigned __int64 v79; // rcx
  unsigned __int64 v80; // rax
  char v81; // al
  __int64 v82; // r11
  __int64 v83; // rdi
  unsigned __int8 v84; // al
  __int64 *v85; // rax
  __int64 *v86; // rax
  __int64 v87; // r11
  __int64 v88; // rax
  __int64 *v89; // rax
  __int64 v90; // rcx
  __int64 *v91; // rax
  __int64 v92; // rcx
  __int64 **v93; // rax
  __int64 v94; // [rsp+0h] [rbp-60h]
  __int64 v95; // [rsp+0h] [rbp-60h]
  __int64 v96; // [rsp+0h] [rbp-60h]
  unsigned int v97; // [rsp+0h] [rbp-60h]
  __int64 v98; // [rsp+0h] [rbp-60h]
  unsigned __int64 *v99; // [rsp+0h] [rbp-60h]
  int v100; // [rsp+8h] [rbp-58h]
  __int64 v101; // [rsp+8h] [rbp-58h]
  __int64 v102; // [rsp+10h] [rbp-50h]
  void *v103; // [rsp+18h] [rbp-48h] BYREF
  unsigned int v104; // [rsp+20h] [rbp-40h]

  if ( (*(_DWORD *)a1 & 0x10000) != 0 )
    return 0;
  v9 = a2;
  v10 = (_QWORD *)a4;
  v12 = *(_WORD *)a1 & 0x1FF;
  v13 = (unsigned int)(v12 + 509);
  LOWORD(v13) = (v12 + 509) & 0x1FF;
  switch ( v13 )
  {
    case 0LL:
    case 13LL:
    case 21LL:
    case 92LL:
    case 103LL:
    case 107LL:
    case 116LL:
    case 117LL:
      return 0;
    case 1LL:
      v36 = *(_BYTE *)(a1 + 2) >> 3;
      if ( v36 > 0xDu )
        goto LABEL_48;
      v37 = 1LL << v36;
      if ( ((1LL << v36) & 0x200F) != 0 )
        return 0;
      if ( (v37 & 0x1000) != 0 )
      {
LABEL_9:
        v15 = *(_QWORD *)(a1 + 16);
        return sub_BE06D0(v15, a2, a3, v10);
      }
      if ( (v37 & 0xC00) != 0
        && (((unsigned __int8)byte_8[*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) & 0xFFFFFFFFFFFFFFF0LL]
           | *(_BYTE *)(*(_QWORD *)(a1 + 16) + 8LL))
          & 4) != 0 )
      {
        return 0;
      }
LABEL_48:
      *a2 = a1;
      v34 = *(_DWORD *)(a1 + 4);
      goto LABEL_49;
    case 7LL:
      v27 = *(_QWORD *)(a1 + 16);
      v28 = *(_DWORD *)(v27 + 4);
      if ( !v28 )
        goto LABEL_27;
      v15 = *(_QWORD *)(v27 + 8LL * (unsigned int)(v28 - 1) + 16);
      v29 = *(_WORD *)v15 & 0x1FF;
      if ( v29 <= 2u )
      {
        if ( v29 == 2 )
        {
          v15 = *(_QWORD *)(v15 + 16);
          if ( ((*(_WORD *)v15 + 509) & 0x1FFu) <= 0x7E )
            return sub_BE06D0(v15, a2, a3, v10);
        }
      }
      else if ( v29 <= 0x81u )
      {
        return sub_BE06D0(v15, a2, a3, v10);
      }
LABEL_27:
      v30 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v30 + 16) != 13 || ((*(_WORD *)(v30 + 18) >> 3) & 0x1FF) != 0x1B3 )
      {
        *a2 = a1;
        v17 = *(_DWORD *)(a1 + 24);
        goto LABEL_13;
      }
      return 0;
    case 14LL:
      v12 = *(_QWORD *)(a1 + 16);
      v64 = *(_WORD *)v12 & 0x1FF;
      a4 = (unsigned int)(v64 + 484);
      if ( (((_WORD)v64 + 484) & 0x1FB) == 0 )
        goto LABEL_12;
      if ( (((_WORD)v64 + 394) & 0x1FFu) <= 1 )
      {
        if ( ((*(_WORD *)(v12 + 2) >> 3) & 0x3Fu) - 21 <= 0xA )
          return 0;
      }
      else if ( (_WORD)v64 == 4 && *(_BYTE *)(v12 + 2) <= 0x1Fu )
      {
        return 0;
      }
      v65 = *(unsigned __int16 *)(a1 + 6);
      if ( (_WORD)v65 )
      {
        v15 = *(_QWORD *)(a1 + 8 * v65 + 16);
        if ( v15 )
          return sub_BE06D0(v15, a2, a3, v10);
      }
      return 0;
    case 17LL:
    case 113LL:
      goto LABEL_7;
    case 23LL:
    case 57LL:
      goto LABEL_9;
    case 25LL:
    case 29LL:
      goto LABEL_12;
    case 30LL:
      if ( (*(_BYTE *)(*(_QWORD *)(a6 + 2320) + 107LL) & 4) != 0 && (*(_BYTE *)(a1 + 26) & 0xFD) == 1 )
      {
        v54 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v54 + 16) != 13 || ((*(_WORD *)(v54 + 18) >> 3) & 0x1FF) != 0x1B3 )
        {
          if ( (*(_BYTE *)(a1 + 27) & 1) != 0 )
          {
            v55 = sub_B84340(*(_QWORD *)(a1 + 16), (__int64)a2, v12, a4, a5, a6);
          }
          else
          {
            v88 = sub_C76ED0(a1);
            v55 = sub_FBB1C0(v88);
          }
          if ( v55 == 3 )
            goto LABEL_12;
        }
      }
      if ( (*(_BYTE *)(a1 + 27) & 1) == 0 )
        return 0;
      v56 = *(_QWORD *)(a1 + 16);
      if ( !v56 || (*(_BYTE *)(v56 + 29) & 1) == 0 )
        return 0;
      v57 = sub_B68690(v56, (__int64)a2, v12, a4, a5, a6);
      v59 = *v57;
      v60 = (__int64 *)(*v57 + 8LL * *((unsigned int *)v57 + 2));
      if ( *v57 >= (unsigned __int64)v60 )
      {
        if ( (__int64 *)v59 == v60 )
          return 0;
        if ( *(_WORD *)(*v60 + 36) != 398 )
        {
          v93 = (__int64 **)(v60 + 1);
          do
          {
            if ( (__int64 **)v59 == v93 )
              return 0;
            v60 = *v93++;
          }
          while ( *((_WORD *)v60 + 18) != 398 );
        }
        goto LABEL_176;
      }
      v61 = (__int64 *)*v57;
      while ( 1 )
      {
        v59 = *v61;
        if ( *(_WORD *)(*v61 + 36) == 398 )
          break;
        if ( v60 == ++v61 )
          return 0;
      }
      if ( v60 != v61 )
      {
LABEL_176:
        *a2 = a1;
        *a3 = sub_BDCD00(a1, (__int64)a2, v59, (__int64)v60, v58);
        return 1;
      }
      return 0;
    case 43LL:
      *a2 = a1;
      v53 = *(_DWORD *)(a1 + 40);
      *a3 = v53;
      *(_DWORD *)a4 = v53;
      *(_DWORD *)(a4 + 4) = v53;
      *(_QWORD *)a5 = sub_EC8B80(*(_QWORD *)(a1 + 16));
      return 1;
    case 45LL:
      v35 = *(_QWORD *)(a1 + 16);
      if ( (v35 & 4) != 0 )
        v15 = *(_QWORD *)((v35 & 0xFFFFFFFFFFFFFFF8LL) + 40);
      else
        v15 = v35 & 0xFFFFFFFFFFFFFFF8LL;
      return sub_BE06D0(v15, a2, a3, v10);
    case 54LL:
      v15 = *(_QWORD *)(a1 + 8LL * (((*(_BYTE *)(a1 + 19) & 0x40) != 0) + ((*(_DWORD *)(a1 + 16) >> 15) & 0x7FFFu)) + 32);
      return sub_BE06D0(v15, a2, a3, v10);
    case 69LL:
    case 70LL:
      v15 = *(_QWORD *)(a1 + 56);
      return sub_BE06D0(v15, a2, a3, v10);
    case 74LL:
      if ( (*(_BYTE *)(a1 + 2) & 8) != 0 )
LABEL_7:
        v15 = *(_QWORD *)(a1 + 24);
      else
        v15 = *(_QWORD *)(a1 + 32);
      return sub_BE06D0(v15, a2, a3, v10);
    case 76LL:
      v15 = *(_QWORD *)(a1 + 16);
      if ( ((*(_WORD *)(a1 + 2) >> 3) & 0x7F) != 4 )
        return sub_BE06D0(v15, a2, a3, v10);
      v62 = *(_QWORD *)(v15 + 8);
      if ( (v62 & 4) == 0 && (byte_8[v62 & 0xFFFFFFFFFFFFFFF0LL] & 4) == 0 )
        return sub_BE06D0(v15, a2, a3, v10);
      return 0;
    case 83LL:
    case 84LL:
      v31 = *(_QWORD *)(a1 + 16);
      v102 = v31;
      if ( v31 )
      {
        while ( 1 )
        {
          v100 = v12;
          v95 = v31;
          v32 = sub_BD3180(v31);
          v87 = v95;
          LODWORD(v12) = v100;
          if ( v32 == v95 )
            break;
          v31 = v32;
        }
      }
      else
      {
        v87 = 0;
      }
      v33 = (*(_WORD *)(a1 + 2) >> 3) & 0x7F;
      if ( v33 != 24 )
      {
        if ( v33 == 20 )
          return sub_BE06D0(v102, a2, a3, v10);
        if ( v33 )
        {
          *a2 = a1;
          if ( (_WORD)v12 == 86 )
            v34 = sub_C70DC0(a1);
          else
            v34 = *(_DWORD *)(a1 + 32);
LABEL_49:
          *a3 = v34;
          *v10 = sub_EC8B80(*(_QWORD *)(a1 + 16));
          return 1;
        }
        return 0;
      }
      v81 = *(_BYTE *)(*(_QWORD *)(a6 + 2320) + 1LL);
      if ( (v81 & 8) == 0 )
        return 0;
      if ( (v81 & 0x10) != 0 )
        return 0;
      v98 = v87;
      if ( !sub_BD75F0(v87) )
        return 0;
      v82 = v98;
      if ( (*(_WORD *)v98 & 0x1FF) != 0x47 )
        goto LABEL_134;
      v83 = *(_QWORD *)(v98 + 16);
      if ( (*(_BYTE *)(v83 + 28) & 0x7Fu) - 40 > 6 )
        goto LABEL_134;
      v84 = sub_B5DE30(v83);
      if ( v84 )
      {
        if ( v84 <= 3u )
          return 0;
        if ( v84 <= 6u )
        {
          v82 = v98;
LABEL_134:
          if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v82 + 8)
                                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                                  + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
                               - 2) > 4u )
            return sub_BE06D0(v82, a2, a3, v10);
          return 0;
        }
      }
      goto LABEL_181;
    case 86LL:
    case 87LL:
    case 89LL:
      goto LABEL_15;
    case 88LL:
      v66 = (*(_BYTE *)(a1 + 3) >> 1) & 0x3F;
      if ( (unsigned __int8)v66 <= 0x21u )
      {
        v67 = 0x3C0030000LL;
        if ( _bittest64(&v67, v66) )
        {
          if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_BD7980(
                                                                                        a1,
                                                                                        a6,
                                                                                        0x3C0030000LL,
                                                                                        a4)
                                                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                                                        + 8LL)
                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                + 16LL)
             - 43 > 1 )
          {
            v70 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_BD7980(a1, a6, v68, v69) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v70 + 16) != 13 || ((*(_WORD *)(v70 + 18) >> 3) & 0x1FF) != 0x1B3 )
            {
              *a2 = a1;
              *a3 = *(_DWORD *)(a1 + 20);
              *v10 = sub_C70820(a1);
              return 1;
            }
          }
        }
      }
LABEL_15:
      v94 = sub_BD7F30(*(_QWORD *)(a1 + 32));
      if ( !v94 )
        return 0;
      sub_BD93E0(a1, a6);
      if ( v20 )
        goto LABEL_17;
      if ( (*(_BYTE *)(v94 + 29) & 1) == 0 )
        return 0;
      v72 = sub_B68690(v94, a6, 0, v18, v94, v19);
      v74 = *v72;
      v75 = *v72 + 8LL * *((unsigned int *)v72 + 2);
      if ( *v72 >= v75 )
      {
        if ( v74 != v75 )
        {
          while ( *(_WORD *)(*(_QWORD *)v75 + 36LL) != 338 )
          {
            v75 += 8LL;
            if ( v74 == v75 )
              goto LABEL_119;
          }
          goto LABEL_17;
        }
      }
      else
      {
        v76 = (__int64 *)*v72;
        while ( 1 )
        {
          v74 = *v76;
          if ( *(_WORD *)(*v76 + 36) == 338 )
            break;
          if ( (__int64 *)v75 == ++v76 )
            goto LABEL_119;
        }
        if ( (__int64 *)v75 != v76 )
          goto LABEL_17;
      }
LABEL_119:
      if ( (*(_BYTE *)(v94 + 29) & 1) == 0 )
        return 0;
      v77 = sub_B68690(v94, a6, v74, v75, v94, v73);
      v78 = (__int64 *)*v77;
      v79 = *v77 + 8LL * *((unsigned int *)v77 + 2);
      if ( *v77 >= v79 )
      {
        if ( v78 == (__int64 *)v79 )
          return 0;
        if ( *(_WORD *)(*(_QWORD *)v79 + 36LL) != 181 )
        {
          v91 = (__int64 *)(v79 + 8);
          do
          {
            if ( v78 == v91 )
              return 0;
            v92 = *v91++;
          }
          while ( *(_WORD *)(v92 + 36) != 181 );
        }
      }
      else
      {
        v80 = *v77;
        while ( *(_WORD *)(*(_QWORD *)v80 + 36LL) != 181 )
        {
          v80 += 8LL;
          if ( v79 == v80 )
            return 0;
        }
        if ( v79 == v80 )
          return 0;
      }
LABEL_17:
      *a2 = a1;
      v21 = *(_QWORD *)(a1 + 32);
      *a3 = sub_EC7AA0(v21);
      *v10 = sub_EC8B80(v21);
      v22 = *(_DWORD *)(a1 + 16);
      if ( !v22 )
        return 1;
      v23 = 8 * (((*(_BYTE *)(a1 + 2) & 8) != 0) + 1LL);
      v24 = sub_EC8400(*(_QWORD *)(v23 + a1 + 8LL * (unsigned int)(v22 - 1) + 32));
      v25 = sub_EC7AA0(*(_QWORD *)(a1 + v23 + 32));
      *(_DWORD *)(a5 + 4) = v24;
      *(_DWORD *)a5 = v25;
      return 1;
    case 108LL:
      v63 = sub_C70F80(a1);
      return sub_BE06D0(v63, a2, a3, v10);
    case 109LL:
      v63 = sub_C70F40(a1);
      return sub_BE06D0(v63, a2, a3, v10);
    case 110LL:
    case 111LL:
      v38 = sub_F3F530(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL));
      v43 = v38;
      if ( !v38 )
        goto LABEL_55;
      v44 = sub_BE0610(v38, (__int64)a2, v39, v40, v41, v42);
      a2 = (unsigned __int64 *)v44;
      if ( (*(_BYTE *)(v43 + 29) & 1) == 0 )
        goto LABEL_53;
      v99 = (unsigned __int64 *)v44;
      v85 = sub_B68690(v43, v44, v39, v40, v41, v42);
      a2 = v99;
      v39 = *v85;
      v40 = *v85 + 8LL * *((unsigned int *)v85 + 2);
      if ( *v85 >= v40 )
      {
        if ( v39 != v40 )
        {
          if ( *(_WORD *)(*(_QWORD *)v40 + 36LL) == 397 )
            goto LABEL_144;
          v89 = (__int64 *)(v40 + 8);
          while ( 1 )
          {
            v40 = (unsigned __int64)v89;
            if ( v89 == (__int64 *)v39 )
              break;
            v90 = *v89++;
            if ( *(_WORD *)(v90 + 36) == 397 )
              goto LABEL_144;
          }
        }
      }
      else
      {
        v86 = (__int64 *)*v85;
        while ( 1 )
        {
          v39 = *v86;
          if ( *(_WORD *)(*v86 + 36) == 397 )
            break;
          if ( (__int64 *)v40 == ++v86 )
            goto LABEL_53;
        }
        if ( (__int64 *)v40 != v86 )
        {
LABEL_144:
          *v9 = a1;
          v17 = sub_EC7AA0(a1);
LABEL_13:
          *a3 = v17;
          *v10 = sub_EC8B80(a1);
          return 1;
        }
      }
LABEL_53:
      if ( a2 && !(unsigned int)sub_AF7870((__int64)a2) )
        goto LABEL_144;
LABEL_55:
      v45 = *(_QWORD *)(a1 + 16);
      if ( !v45 )
        return 0;
      v46 = sub_BE0610(v45, (__int64)a2, v39, v40, v41, v42);
      if ( !v46 || (unsigned int)sub_AF7870(v46) )
        return 0;
      *v9 = a1;
      *a3 = sub_EC7AA0(a1);
      *v10 = sub_EC8B80(a1);
      v47 = *(_DWORD *)(a1 + 32);
      if ( !v47 )
        return 1;
      v48 = *(_WORD *)a1;
      v49 = (_QWORD *)(a1 + 48);
      v50 = (_QWORD *)(a1 + 40);
      if ( (v48 & 0x1FF) == 0x72 )
        v50 = v49;
      v51 = sub_EC8400(v50[v47 - 1]);
      v52 = sub_EC7AA0(*v50);
      *(_DWORD *)(a5 + 4) = v51;
      *(_DWORD *)a5 = v52;
      return 1;
    case 115LL:
      v26 = (*(_WORD *)(a1 + 2) >> 3) & 0x3F;
      if ( ((*(_WORD *)(a1 + 2) >> 3) & 0x3Fu) < 0x13 )
        goto LABEL_22;
      if ( (unsigned __int8)v26 <= 0x14u )
      {
        if ( !(unsigned __int8)sub_BE06D0(*(_QWORD *)(a1 + 16), a2, a3, a4)
          || !(unsigned __int8)sub_BE06D0(*(_QWORD *)(a1 + 24), a2, a3, v10) )
        {
          return 0;
        }
        v26 = (*(_WORD *)(a1 + 2) >> 3) & 0x3F;
      }
      else if ( (_BYTE)v26 == 32 )
      {
        v71 = *(_QWORD *)(a1 + 24);
        v101 = v71;
        if ( v71 )
        {
          do
          {
            v96 = v71;
            v71 = sub_BD3180(v71);
          }
          while ( v71 != v96 );
          if ( (*(_WORD *)v96 & 0x1FF) == 0x34 )
          {
            sub_BD2C50((__int64)&v103, *(_QWORD *)(v96 + 16), *(_DWORD *)(v96 + 24));
            v97 = v104;
            if ( v104 > 0x40 )
            {
              if ( v97 - (unsigned int)sub_21E2A40(&v103) <= 0x40 && !*(_QWORD *)v103 )
              {
                operator delete[](v103);
                return 0;
              }
              if ( v103 )
              {
                operator delete[](v103);
                return sub_BE06D0(*(_QWORD *)(a1 + 24), a2, a3, v10);
              }
            }
            else
            {
              result = 0;
              if ( !v103 )
                return result;
            }
            v101 = *(_QWORD *)(a1 + 24);
          }
          return sub_BE06D0(v101, a2, a3, v10);
        }
LABEL_181:
        BUG();
      }
LABEL_22:
      if ( (unsigned int)(unsigned __int8)v26 - 21 > 0xA )
      {
LABEL_23:
        *a2 = a1;
        *a3 = *(_DWORD *)(a1 + 4);
        *v10 = sub_EC8B80(*(_QWORD *)(a1 + 16));
        *(_QWORD *)a5 = sub_EC8B80(*(_QWORD *)(a1 + 24));
        return 1;
      }
      return 0;
    case 120LL:
      goto LABEL_23;
    case 125LL:
      if ( !(unsigned __int8)sub_BE06D0(*(_QWORD *)(a1 + 32), a2, a3, a4) )
        return 0;
      v15 = *(_QWORD *)(a1 + 40);
      return sub_BE06D0(v15, a2, a3, v10);
    case 126LL:
      v15 = *(_QWORD *)(a1 + 48);
      return sub_BE06D0(v15, a2, a3, v10);
    default:
      v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v16 + 16) == 13 && ((*(_WORD *)(v16 + 18) >> 3) & 0x1FF) == 0x1B3 )
        return 0;
LABEL_12:
      *a2 = a1;
      v17 = sub_BDCD00(a1, (__int64)a2, v12, a4, a5);
      goto LABEL_13;
  }
}

