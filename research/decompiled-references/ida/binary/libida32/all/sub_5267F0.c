__int64 __fastcall sub_5267F0(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        void *a5,
        unsigned int a6,
        unsigned __int8 a7,
        _QWORD *a8)
{
  int v8; // r10d
  __int64 v10; // rbx
  _QWORD *v11; // r13
  __int16 v12; // ax
  unsigned int v13; // r15d
  char v14; // dl
  unsigned int v15; // eax
  unsigned __int8 v16; // r14
  __int64 v17; // r15
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rax
  const char *v23; // rsi
  unsigned __int8 v24; // si
  __int64 v26; // r15
  __int64 v27; // r12
  __int64 v28; // r8
  unsigned __int64 v29; // r14
  __int64 v30; // rsi
  unsigned __int8 v31; // al
  unsigned int v32; // eax
  char v33; // dl
  char v34; // r10
  char v35; // r11
  __int64 v36; // r8
  unsigned __int64 v37; // rdx
  __int64 v38; // r9
  __int64 v39; // rsi
  __int64 v40; // rsi
  unsigned __int64 v41; // rax
  char v42; // r9
  char v43; // r14
  __int64 v44; // r8
  __int64 v45; // r10
  unsigned __int64 v46; // rdx
  __int64 v47; // rsi
  unsigned int v48; // r13d
  __int64 v49; // rdi
  unsigned __int64 v50; // rsi
  char *v51; // rdi
  __int64 v52; // r15
  __int64 v53; // rbx
  char *v54; // rax
  void *v55; // rdi
  void *v56; // rdi
  char v57; // r14
  __int64 v58; // r12
  __int64 v59; // r8
  unsigned __int64 v60; // r15
  __int64 v61; // rsi
  __int64 v62; // rax
  char *v63; // rdi
  void **p_ptr; // rax
  __int64 v65; // r12
  __int64 v66; // r14
  char *v67; // rbx
  void *v68; // rdi
  void *v69; // rdi
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // r14
  unsigned __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // rsi
  __int64 v77; // rax
  __int64 v78; // r14
  unsigned __int64 v79; // rdx
  __int64 v80; // r8
  __int64 v81; // rsi
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // [rsp-10h] [rbp-B0h]
  int v85; // [rsp-8h] [rbp-A8h]
  int v86; // [rsp+0h] [rbp-A0h]
  int v87; // [rsp+8h] [rbp-98h]
  __int64 v88; // [rsp+8h] [rbp-98h]
  int v89; // [rsp+10h] [rbp-90h]
  char v90; // [rsp+10h] [rbp-90h]
  __int64 v91; // [rsp+10h] [rbp-90h]
  int v92; // [rsp+18h] [rbp-88h]
  __int64 v93; // [rsp+18h] [rbp-88h]
  __int64 v94; // [rsp+18h] [rbp-88h]
  __int64 v95; // [rsp+18h] [rbp-88h]
  int v96; // [rsp+20h] [rbp-80h]
  char v97; // [rsp+20h] [rbp-80h]
  char v98; // [rsp+20h] [rbp-80h]
  char v99; // [rsp+20h] [rbp-80h]
  __int64 v100; // [rsp+20h] [rbp-80h]
  int v101; // [rsp+28h] [rbp-78h]
  int v102; // [rsp+28h] [rbp-78h]
  __int64 *v103; // [rsp+28h] [rbp-78h]
  __int64 v104; // [rsp+28h] [rbp-78h]
  unsigned __int64 v105; // [rsp+28h] [rbp-78h]
  unsigned __int64 v106; // [rsp+28h] [rbp-78h]
  unsigned __int64 v107; // [rsp+28h] [rbp-78h]
  unsigned __int64 v108; // [rsp+28h] [rbp-78h]
  __int64 v109; // [rsp+30h] [rbp-70h]
  char v110; // [rsp+34h] [rbp-6Ch]
  int v111[2]; // [rsp+38h] [rbp-68h]
  int v112[2]; // [rsp+38h] [rbp-68h]
  int v113[2]; // [rsp+38h] [rbp-68h]
  int v114[2]; // [rsp+40h] [rbp-60h]
  int v115[2]; // [rsp+40h] [rbp-60h]
  int v116[2]; // [rsp+40h] [rbp-60h]
  int v117[2]; // [rsp+40h] [rbp-60h]
  int v118[2]; // [rsp+40h] [rbp-60h]
  __int64 *v119; // [rsp+48h] [rbp-58h]
  int v120[2]; // [rsp+48h] [rbp-58h]
  void *ptr; // [rsp+50h] [rbp-50h] BYREF
  __int128 v122; // [rsp+58h] [rbp-48h]
  unsigned __int64 v123; // [rsp+68h] [rbp-38h]

  v8 = a2;
  v10 = a1;
  v119 = a3;
  *(_QWORD *)v114 = a4;
  *(_QWORD *)v111 = a5;
  v123 = __readfsqword(0x28u);
  v11 = a8;
  if ( a8 )
  {
    if ( !a8[1] )
      v11 = nullptr;
  }
  else
  {
    v11 = *(_QWORD **)(a1 + 40);
  }
  if ( (a6 & 0xC0) != 0 )
  {
    if ( !under_debugger )
      interr(986);
LABEL_136:
    BUG();
  }
  v13 = ~(a6 >> 9);
  v12 = *(_WORD *)(a1 + 68) & 0x70;
  LOBYTE(v13) = (*(_QWORD *)(a1 + 32) != 0) & v13;
  if ( !(_BYTE)v13 )
  {
    if ( v12 != 112 )
    {
      v14 = *(_BYTE *)(a1 + 70);
      v15 = a6;
      v16 = a7 & 0xC0;
      BYTE1(v15) = BYTE1(a6) & 0xF8;
      HIDWORD(v109) = v15;
      switch ( v14 & 0xF )
      {
        case 0xA:
          v42 = *(_BYTE *)(a1 + 28);
          v43 = v14 | v16;
          if ( v42 || *(_QWORD *)(a1 + 8) > 0xFFu )
          {
            v43 |= 0x30u;
          }
          else if ( (~v43 & 0x30) == 0 )
          {
            v43 &= 0xCFu;
          }
          v44 = v119[1];
          if ( v44 )
          {
            v46 = v44 + 1;
            v45 = v119[1];
            --v44;
          }
          else
          {
            v45 = 1;
            v46 = 2;
          }
          v47 = *v119;
          if ( v119[2] < v46 )
          {
            v98 = *(_BYTE *)(a1 + 28);
            v91 = v44;
            v94 = v45;
            v106 = v46;
            v77 = qvector_reserve(v119, v47, v46, 1);
            v44 = v91;
            v45 = v94;
            v47 = v77;
            v42 = v98;
            v46 = v106;
            *v119 = v77;
          }
          v119[1] = v46;
          *(_BYTE *)(v47 + v44) = v43;
          *(_BYTE *)(*v119 + v45) = 0;
          if ( v42 )
          {
            v73 = v119[1];
            if ( v73 )
            {
              v74 = v73 + 1;
              v75 = v119[1];
              --v73;
            }
            else
            {
              v75 = 1;
              v74 = 2;
            }
            v76 = *v119;
            if ( v119[2] < v74 )
            {
              v95 = v75;
              v99 = v42;
              v107 = v74;
              v82 = qvector_reserve(v119, v76, v74, 1);
              v75 = v95;
              v42 = v99;
              v76 = v82;
              v74 = v107;
              *v119 = v82;
            }
            v119[1] = v74;
            *(_BYTE *)(v76 + v73) = v42;
            *(_BYTE *)(*v119 + v75) = 0;
          }
          else if ( *(_QWORD *)(a1 + 8) > 0xFFu )
          {
            v78 = v119[1];
            if ( v78 )
            {
              v79 = v78 + 1;
              v80 = v119[1];
              --v78;
            }
            else
            {
              v80 = 1;
              v79 = 2;
            }
            v81 = *v119;
            if ( v119[2] < v79 )
            {
              v100 = v80;
              v108 = v79;
              v83 = qvector_reserve(v119, v81, v79, 1);
              v80 = v100;
              v79 = v108;
              v81 = v83;
              *v119 = v83;
            }
            v119[1] = v79;
            *(_BYTE *)(v81 + v78) = -1;
            a2 = 2;
            *(_BYTE *)(*v119 + v80) = 0;
            if ( (get_tinfo_property(*(_QWORD *)(a1 + 8), 2) & 0xF) != 0xC )
              goto LABEL_41;
            a2 = *(_QWORD *)v114;
            if ( !(unsigned __int8)serialize_tinfo(v119, *(_QWORD *)v114, *(_QWORD *)v111, a1 + 8, HIDWORD(v109)) )
              goto LABEL_41;
          }
          a2 = *(unsigned __int8 *)(a1 + 71);
          if ( (unsigned __int8)sub_51D400(v119, a2, *(unsigned __int8 *)(a1 + 29), v11, 0) )
          {
            a2 = *(_QWORD *)v114;
            v48 = serialize_tinfo(v119, *(_QWORD *)v114, *(_QWORD *)v111, a1, HIDWORD(v109));
            if ( (_BYTE)v48 )
            {
              if ( *(char *)(a1 + 29) >= 0 )
              {
LABEL_65:
                v13 = v48;
                goto LABEL_41;
              }
              a2 = *(_QWORD *)v114;
              if ( (unsigned __int8)serialize_tinfo(v119, *(_QWORD *)v114, *(_QWORD *)v111, a1 + 16, HIDWORD(v109)) )
              {
                a2 = *(unsigned int *)(a1 + 24);
                sub_6926A0(v119, a2);
                goto LABEL_65;
              }
            }
          }
          goto LABEL_41;
        case 0xB:
          v33 = v16 | v14;
          if ( *(_DWORD *)(a1 + 8) || *(_DWORD *)(a1 + 12) > 0x7FFEu )
          {
            v34 = 0;
            v35 = v33 & 0xEF;
          }
          else
          {
            v34 = 16;
            v35 = v33 | 0x10;
          }
          v36 = v119[1];
          if ( v36 )
          {
            v37 = v36 + 1;
            v38 = v119[1];
            --v36;
          }
          else
          {
            v38 = 1;
            v37 = 2;
          }
          v39 = *v119;
          if ( v119[2] < v37 )
          {
            v88 = v36;
            v90 = v35;
            v93 = v38;
            v97 = v34;
            v105 = v37;
            v71 = qvector_reserve(v119, v39, v37, 1);
            v36 = v88;
            v34 = v97;
            v39 = v71;
            v35 = v90;
            v38 = v93;
            v37 = v105;
            *v119 = v71;
          }
          v119[1] = v37;
          *(_BYTE *)(v39 + v36) = v35;
          *(_BYTE *)(*v119 + v38) = 0;
          v40 = *(unsigned int *)(a1 + 12);
          if ( v34 )
            sub_692580(v119, v40);
          else
            sub_54EE80(v119, v40, *(unsigned int *)(a1 + 8));
          a2 = *(unsigned __int8 *)(a1 + 71);
          if ( (unsigned __int8)sub_51D400(v119, a2, 0, v11, 0) )
          {
            v41 = *(_QWORD *)a1;
            a2 = *(_QWORD *)v114;
            LOBYTE(v41) = *(_QWORD *)a1 & 0x3F;
            ptr = (void *)(v16 | v41);
            v13 = serialize_tinfo(v119, *(_QWORD *)v114, *(_QWORD *)v111, &ptr, HIDWORD(v109));
          }
          goto LABEL_41;
        case 0xC:
          a2 = a4;
          v13 = sub_689E50(v119, a4, a5, *(_QWORD *)a1, v11, v16);
          goto LABEL_41;
        case 0xD:
          v31 = v14 & 0x30;
          if ( (v14 & 0x30) == 0x20 )
          {
            a2 = (__int64)v119;
            v13 = sub_51D630(*(_QWORD *)a1, v119, a4, (__int64)a5, v14 | v16, *(_BYTE *)(a1 + 71), v11);
          }
          else
          {
            if ( v31 <= 0x20u )
            {
              v32 = sub_557100(
                      (int)v119,
                      a4,
                      (int)a5,
                      *(_QWORD *)a1,
                      *(_QWORD *)(a1 + 8),
                      (int)v11,
                      HIDWORD(v109) | (unsigned int)v16,
                      v85,
                      v86,
                      v87,
                      v89,
                      v92,
                      v96,
                      v101,
                      v109,
                      a5,
                      a4);
              a2 = v84;
              v13 = v32;
              goto LABEL_41;
            }
            if ( v31 == 48 )
            {
              if ( !under_debugger )
                interr(889);
              goto LABEL_136;
            }
          }
LABEL_41:
          if ( (a6 & 0x100) != 0 )
          {
            sub_686900(*(_QWORD *)v114, a2);
            sub_686900(*(_QWORD *)v111, a2);
          }
          return v13;
        case 0xE:
          a2 = (__int64)v119;
          v13 = sub_54C660(a1, v119, v16);
          goto LABEL_41;
        default:
          v57 = v14 | v16;
          v58 = v119[1];
          if ( v58 )
          {
            v60 = v58 + 1;
            v59 = v119[1];
            --v58;
          }
          else
          {
            v59 = 1;
            v60 = 2;
          }
          v61 = *v119;
          if ( v119[2] < v60 )
          {
            *(_QWORD *)v118 = v59;
            v72 = qvector_reserve(v119, v61, v60, 1);
            v59 = *(_QWORD *)v118;
            v61 = v72;
            *v119 = v72;
          }
          v119[1] = v60;
          *(_BYTE *)(v61 + v58) = v57;
          *(_BYTE *)(*v119 + v59) = 0;
          v24 = *(_BYTE *)(a1 + 71);
          return sub_51D400(v119, v24, 0, v11, 0);
      }
    }
LABEL_29:
    v26 = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 <= 0xFFu )
    {
      v27 = a3[1];
      if ( v27 )
      {
        v29 = v27 + 1;
        v28 = a3[1];
        --v27;
      }
      else
      {
        v28 = 1;
        v29 = 2;
      }
      v30 = *a3;
      if ( a3[2] < v29 )
      {
        *(_QWORD *)v117 = v28;
        v70 = qvector_reserve(a3, v30, v29, 1);
        v28 = *(_QWORD *)v117;
        v30 = v70;
        *v119 = v70;
      }
      v119[1] = v29;
      *(_BYTE *)(v30 + v27) = v26;
      *(_BYTE *)(*v119 + v28) = 0;
      if ( (~(unsigned __int8)*(_WORD *)(a1 + 68) & 0x70) == 0 )
      {
        v24 = *(_BYTE *)(a1 + 71);
        return sub_51D400(v119, v24, 0, v11, 0);
      }
      return 1;
    }
    v49 = *(_QWORD *)(a2 + 1632);
    v50 = *(_QWORD *)v10;
    v102 = v8;
    ptr = nullptr;
    v122 = 0;
    v110 = 0;
    v17 = sub_51B750(v49, v50);
    if ( !*(_QWORD *)(v17 + 32) )
    {
      p_ptr = *(void ***)(v10 + 40);
      if ( !p_ptr )
        p_ptr = &ptr;
      v110 = sub_5267F0(v17, v102, (_DWORD)v119, v114[0], v111[0], a6 & 0xFFFFFDFF, a7, (_DWORD)p_ptr);
      if ( !v110 )
      {
        v63 = (char *)ptr;
        if ( !ptr )
          return 0;
        v65 = v122;
        v66 = 0;
        if ( (_QWORD)v122 )
        {
          do
          {
            v67 = &v63[48 * v66];
            v68 = *((void **)v67 + 3);
            if ( v68 )
            {
              *((_QWORD *)v67 + 4) = 0;
              qfree(v68);
            }
            v69 = *(void **)v67;
            if ( *(_QWORD *)v67 )
            {
              *((_QWORD *)v67 + 1) = 0;
              qfree(v69);
            }
            v63 = (char *)ptr;
            ++v66;
          }
          while ( v65 != v66 );
        }
        goto LABEL_88;
      }
    }
    v51 = (char *)ptr;
    if ( ptr )
    {
      if ( (_QWORD)v122 )
      {
        *(_QWORD *)v115 = v17;
        v52 = v122;
        *(_QWORD *)v112 = v10;
        v53 = 0;
        v103 = v119;
        do
        {
          v54 = &v51[48 * v53];
          v55 = *((void **)v54 + 3);
          *(_QWORD *)v120 = v54;
          if ( v55 )
          {
            *((_QWORD *)v54 + 4) = 0;
            qfree(v55);
          }
          v56 = **(void ***)v120;
          if ( **(_QWORD **)v120 )
          {
            *(_QWORD *)(*(_QWORD *)v120 + 8LL) = 0;
            qfree(v56);
          }
          ++v53;
          v51 = (char *)ptr;
        }
        while ( v52 != v53 );
        v17 = *(_QWORD *)v115;
        v10 = *(_QWORD *)v112;
        v119 = v103;
      }
      *(_QWORD *)&v122 = 0;
      qfree(v51);
    }
    if ( !v17 || !*(_QWORD *)(v17 + 32) )
      goto LABEL_22;
LABEL_10:
    v18 = v119[1];
    if ( v18 )
    {
      v20 = v18 + 1;
      v19 = v119[1];
      --v18;
    }
    else
    {
      v19 = 1;
      v20 = 2;
    }
    v21 = *v119;
    if ( v119[2] < v20 )
    {
      v104 = v19;
      *(_QWORD *)v113 = v18;
      *(_QWORD *)v116 = v20;
      v62 = qvector_reserve(v119, v21, v20, 1);
      v19 = v104;
      v18 = *(_QWORD *)v113;
      v21 = v62;
      v20 = *(_QWORD *)v116;
      *v119 = v62;
    }
    v119[1] = v20;
    *(_BYTE *)(v21 + v18) = a7;
    *(_BYTE *)(*v119 + v19) = 0;
    if ( (a7 & 0x3F) != 0x3D && !(unsigned __int8)sub_692E60(v119, 0, 0) )
      return 0;
    ptr = nullptr;
    v122 = 0;
    if ( (a6 & 0x400) == 0 || !(unsigned __int8)sub_51C800(v17, (__int64)&ptr) )
    {
      v22 = *(_QWORD *)(v17 + 32);
      if ( (*(_BYTE *)(v17 + 68) & 8) == 0 )
      {
        v23 = *(const char **)(v22 + 8);
        goto LABEL_19;
      }
      if ( create_numbered_type_name(&ptr, *(unsigned int *)(v22 + 8)) == -1 )
        goto LABEL_87;
    }
    v23 = haystack;
    if ( (_QWORD)v122 )
      v23 = (const char *)ptr;
LABEL_19:
    if ( (unsigned __int8)sub_6891C0(v119, v23) )
    {
      if ( ptr )
      {
        *(_QWORD *)&v122 = 0;
        qfree(ptr);
      }
LABEL_22:
      if ( (~(unsigned __int8)*(_WORD *)(v10 + 68) & 0x70) == 0 )
      {
        v24 = *(_BYTE *)(v10 + 71);
        if ( !v110 || v24 )
          return sub_51D400(v119, v24, 0, v11, 0);
      }
      return 1;
    }
LABEL_87:
    v63 = (char *)ptr;
    if ( !ptr )
      return 0;
LABEL_88:
    *(_QWORD *)&v122 = 0;
    qfree(v63);
    return 0;
  }
  if ( v12 == 112 )
    goto LABEL_29;
  v110 = 0;
  v17 = a1;
  if ( a1 )
    goto LABEL_10;
  return 1;
}

