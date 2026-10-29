__int64 __fastcall sub_16C47E0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r13
  __int64 *v4; // rbx
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  __int64 *v9; // r13
  unsigned __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 *v14; // r14
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r15
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *v31; // rax
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r14
  char v35; // al
  __int64 v36; // rcx
  __int64 v37; // rdx
  unsigned __int64 v38; // r13
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned __int64 v43; // rbp
  __int64 v44; // rsi
  unsigned __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  char v48; // al
  __int64 v49; // rdx
  int v50; // r14d
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rax
  _QWORD *v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  _QWORD *v62; // rax
  __int64 v63; // rbp
  unsigned __int64 v64; // rbx
  unsigned __int64 v65; // rax
  int v66; // r14d
  __int64 *v67; // rax
  __int64 *v68; // rax
  __int64 *v69; // rax
  __int64 *v70; // rax
  unsigned __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r9
  char *v75; // rcx
  unsigned __int64 v76; // r13
  __int64 v77; // rsi
  unsigned __int64 *v78; // rdx
  char *v79; // rax
  char *v80; // rdi
  char *v81; // rax
  unsigned __int64 v82; // rax
  unsigned __int64 v83; // rax
  unsigned __int8 v84; // dl
  __int64 v85; // r14
  __int64 v86; // rax
  char *v87; // r15
  __int64 *v88; // rax
  __int64 v89; // r13
  unsigned __int64 v90; // rsi
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  char v94; // al
  __int64 v95; // rdx
  __int64 v96; // rsi
  char *v97; // rcx
  _QWORD *v98; // rax
  unsigned __int64 v99; // rax
  unsigned __int64 *v100; // rax
  __int64 *v101; // rdx
  unsigned __int64 v102; // rsi
  unsigned __int64 v103; // rax
  __int64 *v104; // rax
  __int64 *v105; // rax
  __int64 *v106; // rax
  __int64 *v107; // rax
  __int64 v108; // rsi
  __int64 *v109; // rax
  __int64 v110; // rsi
  _QWORD *v111; // rax
  __int64 v112; // rcx
  __int64 *v113; // rax
  __int64 v114; // rcx
  __int64 *v115; // rax
  __int64 v116; // rcx
  unsigned __int8 v117; // [rsp+0h] [rbp-A8h]
  __int64 *v118; // [rsp+0h] [rbp-A8h]
  int v119; // [rsp+Ch] [rbp-9Ch]
  void *ptr; // [rsp+10h] [rbp-98h] BYREF
  __int64 v121; // [rsp+18h] [rbp-90h]
  int v122; // [rsp+20h] [rbp-88h]
  unsigned __int8 v123; // [rsp+24h] [rbp-84h]
  _BYTE v124[128]; // [rsp+28h] [rbp-80h] BYREF

  if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    goto LABEL_3;
  v117 = a3;
  v3 = a3 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (a3 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    goto LABEL_3;
  ptr = (void *)(*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
               | ((unsigned __int8)*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)a2) & 7);
  v7 = sub_6D5440(&ptr);
  v8 = *(_QWORD *)(v3 + 8);
  v9 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
  ptr = (void *)(v8 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v8 | v117) & 7);
  v10 = sub_6D5440(&ptr);
  v13 = *(_QWORD *)&byte_8[v7 & 0xFFFFFFFFFFFFFFF0LL];
  v14 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
  LOBYTE(v7) = v13 | v7;
  v15 = v13 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v15 | v7 & 7) == (*(_QWORD *)&byte_8[v10 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                        | ((unsigned __int8)*(_QWORD *)&byte_8[v10 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v10) & 7) )
  {
    LODWORD(v4) = 1;
    return (unsigned int)v4;
  }
  v16 = *v14;
  v17 = *(unsigned __int8 *)(*v9 + 16);
  if ( *(_BYTE *)(*v14 + 16) != (_BYTE)v17 )
    goto LABEL_3;
  if ( v17 == 47 )
  {
    v57 = sub_F60F10(*v14, a2, v16, v15, v11, v12);
    v62 = sub_F60F10(*v9, a2, v58, v59, v60, v61);
    v63 = (__int64)v62;
    if ( ((*((_BYTE *)v62 + 74) & 1) != 0 || (v62[16] & 0xFFFFFFFFFFFFFFF8LL) != 0)
      && ((*((_BYTE *)v57 + 74) & 1) != 0 || (v57[16] & 0xFFFFFFFFFFFFFFF8LL) != 0) )
    {
      v64 = sub_6F3660((__int64)v57);
      v65 = sub_6F3660(v63);
      v4 = (__int64 *)(*(_QWORD *)&byte_8[v64 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                     | ((unsigned __int8)*(_QWORD *)&byte_8[v64 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v64) & 7);
      LOBYTE(v4) = (*(_QWORD *)&byte_8[v65 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                  | ((unsigned __int8)*(_QWORD *)&byte_8[v65 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v65) & 7) == (_QWORD)v4;
      return (unsigned int)v4;
    }
    goto LABEL_3;
  }
  if ( v17 != 48 )
    goto LABEL_3;
  if ( !sub_F67B70(*v9, a2, v16, v15, v11, v12) )
    goto LABEL_3;
  LODWORD(v4) = sub_F67B70(*v14, a2, v18, v19, v20, v21);
  if ( !(_BYTE)v4 )
    goto LABEL_3;
  v26 = (__int64)sub_F60F10(*v14, a2, v22, v23, v24, v25);
  v31 = sub_F60F10(*v9, a2, v27, v28, v29, v30);
  v37 = *(unsigned __int8 *)(v26 + 73);
  v34 = (__int64)v31;
  v35 = *((_BYTE *)v31 + 73) >> 5;
  LOBYTE(v36) = v35 == 2;
  LOBYTE(v37) = (unsigned __int8)v37 >> 5 == 2;
  if ( (v35 == 2) != (_BYTE)v37 )
    goto LABEL_3;
  if ( v35 != 2 )
  {
    if ( (*(_BYTE *)(v34 + 28) & 0x7Fu) - 59 <= 2 )
      v34 = sub_B96CF0(v34, a2, v37, v36, v32, v33);
    if ( (*(_BYTE *)(v26 + 28) & 0x7Fu) - 59 <= 2 )
      v26 = sub_B96CF0(v26, a2, v37, v36, v32, v33);
    v38 = sub_B7E900(v26, a2, v37, v36, v32, v33);
    v43 = sub_B7E900(v34, a2, v39, v40, v41, v42);
    if ( !v43 )
    {
      LOBYTE(v4) = v38 == 0;
      return (unsigned int)v4;
    }
    if ( !v38 )
      goto LABEL_3;
    while ( 2 )
    {
      v44 = *(_QWORD *)(v43 + 48);
      LODWORD(v4) = sub_16C47E0(a1, v44, *(_QWORD *)(v38 + 48));
      if ( (_BYTE)v4 )
      {
        v48 = *(_BYTE *)(v43 + 68) & 1;
        v49 = *(_BYTE *)(v38 + 68) & 1;
        if ( v48 == (_BYTE)v49 )
        {
          if ( !v48 || (v66 = sub_B78170(v43), v66 == (unsigned int)sub_B78170(v38)) )
          {
            if ( (*(_BYTE *)(v43 + 29) & 1) != 0 )
            {
              v67 = sub_B8C3D0(v43, v44, v49, v45, v46, v47);
              v49 = *v67;
              v45 = *v67 + 8LL * *((unsigned int *)v67 + 2);
              if ( *v67 >= v45 )
              {
                if ( v49 != v45 )
                {
                  if ( *(_WORD *)(*(_QWORD *)v45 + 36LL) == 288 )
                    break;
                  v113 = (__int64 *)(v45 + 8);
                  while ( 1 )
                  {
                    v45 = (unsigned __int64)v113;
                    if ( (__int64 *)v49 == v113 )
                      break;
                    v114 = *v113++;
                    if ( *(_WORD *)(v114 + 36) == 288 )
                      goto LABEL_3;
                  }
                }
              }
              else
              {
                v68 = (__int64 *)*v67;
                while ( 1 )
                {
                  v49 = *v68;
                  if ( *(_WORD *)(*v68 + 36) == 288 )
                    break;
                  if ( (__int64 *)v45 == ++v68 )
                    goto LABEL_23;
                }
                if ( (__int64 *)v45 != v68 )
                  break;
              }
            }
LABEL_23:
            if ( (*(_BYTE *)(v38 + 29) & 1) == 0 )
              goto LABEL_24;
            v69 = sub_B8C3D0(v38, v44, v49, v45, v46, v47);
            v49 = *v69;
            v45 = *v69 + 8LL * *((unsigned int *)v69 + 2);
            if ( *v69 < v45 )
            {
              v70 = (__int64 *)*v69;
              while ( 1 )
              {
                v49 = *v70;
                if ( *(_WORD *)(*v70 + 36) == 288 )
                  break;
                if ( (__int64 *)v45 == ++v70 )
                  goto LABEL_24;
              }
              if ( (__int64 *)v45 != v70 )
                break;
              goto LABEL_24;
            }
            if ( v49 == v45 )
            {
LABEL_24:
              v50 = sub_B8C970(v43, v44, v49, v45, v46, v47);
              if ( v50 == (unsigned int)sub_B8C970(v38, v44, v51, v52, v53, v54) )
              {
                do
                {
                  v55 = *(_QWORD *)(v43 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                  v43 = v55;
                }
                while ( v55 && (*(_BYTE *)(v55 + 28) & 0x7Fu) - 49 > 2 );
                do
                {
                  v56 = *(_QWORD *)(v38 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                  v38 = v56;
                  if ( !v56 )
                  {
                    if ( !v43 )
                      return (unsigned int)v4;
                    goto LABEL_3;
                  }
                }
                while ( (*(_BYTE *)(v56 + 28) & 0x7Fu) - 49 > 2 );
                if ( v43 )
                  continue;
              }
              break;
            }
            if ( *(_WORD *)(*(_QWORD *)v45 + 36LL) != 288 )
            {
              v115 = (__int64 *)(v45 + 8);
              while ( 1 )
              {
                v45 = (unsigned __int64)v115;
                if ( (__int64 *)v49 == v115 )
                  goto LABEL_24;
                v116 = *v115++;
                if ( *(_WORD *)(v116 + 36) == 288 )
                  goto LABEL_3;
              }
            }
          }
        }
      }
      break;
    }
LABEL_3:
    LODWORD(v4) = 0;
    return (unsigned int)v4;
  }
  v71 = sub_B7E900(v26, a2, v37, v36, v32, v33);
  v75 = v124;
  v123 = 1;
  v76 = v71;
  ptr = v124;
  v121 = 8;
  v122 = 0;
  if ( v71 )
  {
    LOBYTE(a2) = (_BYTE)v4;
LABEL_57:
    if ( !(_BYTE)a2 )
      goto LABEL_126;
    v77 = 8LL * HIDWORD(v121);
    v78 = (unsigned __int64 *)&v75[v77];
    if ( &v75[v77] != v75 )
    {
      v79 = v75;
      if ( *(_QWORD *)v75 == v76 )
        goto LABEL_65;
      while ( 1 )
      {
        v79 += 8;
        if ( v78 == (unsigned __int64 *)v79 )
          break;
        if ( *(_QWORD *)v79 == v76 )
          goto LABEL_65;
      }
    }
    if ( HIDWORD(v121) < (unsigned int)v121 )
    {
      ++HIDWORD(v121);
      *v78 = v76;
      v75 = (char *)ptr;
      v79 = (char *)ptr + v77;
    }
    else
    {
LABEL_126:
      v79 = (char *)sub_2236760(&ptr, v76);
      a2 = v123;
      v75 = (char *)ptr;
      if ( !v123 )
      {
        v72 = (unsigned int)v121;
        v80 = (char *)ptr + 8 * (unsigned int)v121;
LABEL_66:
        if ( v80 != v79 && *(_QWORD *)v79 >= 0xFFFFFFFFFFFFFFFELL )
        {
          v81 = v79 + 8;
          do
          {
            v72 = (__int64)v81;
            if ( v80 == v81 )
              break;
            v81 += 8;
          }
          while ( *(_QWORD *)v72 >= 0xFFFFFFFFFFFFFFFELL );
        }
        while ( 1 )
        {
          v82 = *(_QWORD *)(v76 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v76 = v82;
          if ( !v82 )
            goto LABEL_74;
          if ( (*(_BYTE *)(v82 + 28) & 0x7Fu) - 49 <= 2 )
            goto LABEL_57;
        }
      }
    }
LABEL_65:
    v72 = HIDWORD(v121);
    a2 = (unsigned int)v4;
    v80 = &v75[8 * HIDWORD(v121)];
    goto LABEL_66;
  }
LABEL_74:
  v83 = sub_B7E900(v34, a2, v72, (__int64)v75, v73, v74);
  v84 = v123;
  v85 = v83;
  if ( !v83 )
    goto LABEL_99;
LABEL_75:
  if ( v84 )
  {
    v86 = HIDWORD(v121);
    v87 = (char *)ptr + 8 * HIDWORD(v121);
    if ( ptr == v87 )
      goto LABEL_124;
  }
  else
  {
    v86 = (unsigned int)v121;
    v87 = (char *)ptr + 8 * (unsigned int)v121;
    if ( ptr == v87 )
      goto LABEL_124;
  }
  if ( (unsigned __int64)(*(_QWORD *)ptr + 2LL) <= 1 )
  {
    v88 = (__int64 *)((char *)ptr + 8);
    while ( 1 )
    {
      v4 = v88;
      if ( v88 == (__int64 *)v87 )
        break;
      ++v88;
      if ( (unsigned __int64)*v4 < 0xFFFFFFFFFFFFFFFELL )
        goto LABEL_82;
    }
    v4 = (__int64 *)v87;
LABEL_82:
    if ( v84 )
      v86 = HIDWORD(v121);
    else
      v86 = (unsigned int)v121;
    goto LABEL_84;
  }
LABEL_124:
  v4 = (__int64 *)ptr;
LABEL_84:
  v118 = (__int64 *)((char *)ptr + 8 * v86);
  if ( v118 == v4 )
  {
LABEL_114:
    LODWORD(v4) = 0;
    goto LABEL_100;
  }
  while ( 1 )
  {
    v89 = *v4;
    v90 = *(_QWORD *)(v85 + 48);
    if ( !(unsigned __int8)sub_16C47E0(a1, v90, *(_QWORD *)(*v4 + 48)) )
      goto LABEL_107;
    v94 = *(_BYTE *)(v85 + 68) & 1;
    v95 = *(_BYTE *)(v89 + 68) & 1;
    if ( v94 != (_BYTE)v95 )
      goto LABEL_107;
    if ( v94 )
    {
      v119 = sub_B78170(v85);
      if ( v119 != (unsigned int)sub_B78170(v89) )
        goto LABEL_107;
    }
    if ( (*(_BYTE *)(v85 + 29) & 1) != 0 )
    {
      v105 = sub_B8C3D0(v85, v90, v95, v91, v92, v93);
      v95 = *v105;
      v90 = *v105 + 8LL * *((unsigned int *)v105 + 2);
      if ( *v105 >= v90 )
      {
        if ( v95 != v90 )
        {
          if ( *(_WORD *)(*(_QWORD *)v90 + 36LL) == 288 )
            goto LABEL_107;
          v107 = (__int64 *)(v90 + 8);
          while ( 1 )
          {
            v90 = (unsigned __int64)v107;
            if ( (__int64 *)v95 == v107 )
              break;
            v108 = *v107++;
            if ( *(_WORD *)(v108 + 36) == 288 )
              goto LABEL_107;
          }
        }
      }
      else
      {
        v106 = (__int64 *)*v105;
        while ( 1 )
        {
          v95 = *v106;
          if ( *(_WORD *)(*v106 + 36) == 288 )
            break;
          if ( (__int64 *)v90 == ++v106 )
            goto LABEL_89;
        }
        if ( (__int64 *)v90 != v106 )
          goto LABEL_107;
      }
    }
LABEL_89:
    if ( (*(_BYTE *)(v89 + 29) & 1) == 0 )
      goto LABEL_90;
    v100 = sub_B8C3D0(v89, v90, v95, v91, v92, v93);
    v101 = (__int64 *)*v100;
    v102 = *v100 + 8LL * *((unsigned int *)v100 + 2);
    if ( *v100 >= v102 )
      break;
    v103 = *v100;
    while ( *(_WORD *)(*(_QWORD *)v103 + 36LL) != 288 )
    {
      v103 += 8LL;
      if ( v102 == v103 )
        goto LABEL_90;
    }
    if ( v102 == v103 )
      goto LABEL_90;
LABEL_107:
    if ( v4 + 1 != (__int64 *)v87 )
    {
      if ( (unsigned __int64)v4[1] < 0xFFFFFFFFFFFFFFFELL )
      {
        ++v4;
        goto LABEL_113;
      }
      v104 = v4 + 2;
      while ( 1 )
      {
        v4 = v104;
        if ( v104 == (__int64 *)v87 )
          break;
        ++v104;
        if ( (unsigned __int64)*v4 < 0xFFFFFFFFFFFFFFFELL )
          goto LABEL_113;
      }
    }
    v4 = (__int64 *)v87;
LABEL_113:
    if ( v4 == v118 )
      goto LABEL_114;
  }
  if ( v101 == (__int64 *)v102 )
    goto LABEL_90;
  if ( *(_WORD *)(*(_QWORD *)v102 + 36LL) == 288 )
    goto LABEL_107;
  v109 = (__int64 *)(v102 + 8);
  while ( v101 != v109 )
  {
    v110 = *v109++;
    if ( *(_WORD *)(v110 + 36) == 288 )
      goto LABEL_107;
  }
LABEL_90:
  v84 = v123;
  v96 = *v4;
  if ( v123 )
  {
    v97 = (char *)ptr + 8 * HIDWORD(v121);
    if ( ptr == v97 )
      goto LABEL_98;
    v98 = ptr;
    while ( v96 != *v98 )
    {
      if ( v97 == (char *)++v98 )
        goto LABEL_98;
    }
    v112 = *((_QWORD *)ptr + (unsigned int)--HIDWORD(v121));
    *v98 = v112;
    goto LABEL_98;
  }
  v111 = (_QWORD *)sub_2236570(&ptr, v96);
  if ( v111 )
  {
    *v111 = -2;
    ++v122;
  }
  v84 = v123;
LABEL_98:
  while ( 1 )
  {
    v99 = *(_QWORD *)(v85 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    v85 = v99;
    if ( !v99 )
      break;
    if ( (*(_BYTE *)(v99 + 28) & 0x7Fu) - 49 <= 2 )
      goto LABEL_75;
  }
LABEL_99:
  LOBYTE(v4) = HIDWORD(v121) == v122;
LABEL_100:
  if ( !v123 )
    free(ptr);
  return (unsigned int)v4;
}
