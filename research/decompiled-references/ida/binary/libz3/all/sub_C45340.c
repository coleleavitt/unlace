__int64 __fastcall sub_C45340(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 *a7,
        __int64 a8)
{
  bool v11; // zf
  __int64 v12; // rsi
  _DWORD *v13; // rax
  char v14; // al
  __int64 v15; // rsi
  char v16; // al
  int *v17; // rax
  int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned int v21; // r12d
  void *v23; // rbx
  void *v24; // rbx
  _DWORD *v26; // rax
  void *v27; // r14
  _DWORD *v28; // rax
  int v29; // eax
  void *v30; // rdi
  void *v31; // r13
  void *v32; // r13
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // r13
  __int64 v38; // rdi
  _DWORD *v39; // rax
  int v40; // edx
  void *v41; // rbx
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rbx
  void *v45; // r14
  int v46; // eax
  int v47; // edx
  __int64 v48; // r12
  __int64 v49; // rax
  void *v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // rax
  void *v53; // rbx
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rcx
  int v57; // eax
  void *v58; // rbx
  void *v59; // r14
  int v60; // eax
  unsigned __int8 v61; // al
  void *v62; // rbx
  char v63; // al
  __int64 v64; // rax
  void *v65; // r14
  int v66; // eax
  void *v67; // rbx
  char v68; // al
  char **exception; // r15
  const char *v70; // rax
  __int64 v71; // [rsp+0h] [rbp-F0h]
  __int64 v72; // [rsp+0h] [rbp-F0h]
  __int64 v73; // [rsp+8h] [rbp-E8h]
  __int64 v74; // [rsp+8h] [rbp-E8h]
  __int64 v75; // [rsp+8h] [rbp-E8h]
  _DWORD *v79; // [rsp+20h] [rbp-D0h]
  unsigned __int8 v80; // [rsp+28h] [rbp-C8h]
  int v81; // [rsp+28h] [rbp-C8h]
  char v82; // [rsp+28h] [rbp-C8h]
  int v83; // [rsp+28h] [rbp-C8h]
  char v84; // [rsp+37h] [rbp-B9h] BYREF
  __int64 v85; // [rsp+38h] [rbp-B8h] BYREF
  _QWORD v86[2]; // [rsp+40h] [rbp-B0h] BYREF
  _QWORD v87[2]; // [rsp+50h] [rbp-A0h] BYREF
  _QWORD v88[2]; // [rsp+60h] [rbp-90h] BYREF
  _QWORD v89[2]; // [rsp+70h] [rbp-80h] BYREF
  _QWORD v90[2]; // [rsp+80h] [rbp-70h] BYREF
  int v91; // [rsp+90h] [rbp-60h] BYREF
  char v92; // [rsp+94h] [rbp-5Ch]
  __int64 v93; // [rsp+98h] [rbp-58h]
  __int64 v94; // [rsp+A0h] [rbp-50h] BYREF
  __int64 v95; // [rsp+A8h] [rbp-48h]
  __int64 v96; // [rsp+B0h] [rbp-40h] BYREF
  __int64 v97; // [rsp+B8h] [rbp-38h]

  v80 = sub_18290A0(*(_QWORD *)(a1 + 16));
  if ( !v80 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    v70 = (const char *)sub_1829130(*(_QWORD *)(a1 + 16));
    sub_C418A0(&v94, v70);
    *exception = (char *)off_1C63670;
    sub_2333C0(exception + 1, &v94);
    sub_233E40((__int64)&v94);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
  }
  v11 = *(_WORD *)(a3 + 4) == 0;
  v86[0] = 0;
  v86[1] = 0;
  v87[0] = 1;
  v87[1] = 0;
  v88[0] = 0;
  v88[1] = 0;
  v89[0] = 1;
  v89[1] = 0;
  if ( !v11 )
    goto LABEL_28;
  if ( *(_DWORD *)(a1 + 776) >= a2 )
    goto LABEL_30;
  v12 = a3;
  v13 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
  if ( !v13 || *v13 != 5 )
    goto LABEL_6;
  if ( v13[1] == 8 && *(_DWORD *)(a3 + 24) == 1 )
  {
    v74 = *(_QWORD *)(a3 + 32);
    if ( (unsigned __int8)sub_C44510(a1, v74, (__int64)v86) )
    {
      sub_1831620(qword_1C7F2C0, v86);
      goto LABEL_8;
    }
    v12 = v74;
    if ( *(_WORD *)(v74 + 4) )
      goto LABEL_6;
    v13 = *(_DWORD **)(*(_QWORD *)(v74 + 16) + 24LL);
    if ( !v13 || *v13 != 5 )
      goto LABEL_6;
  }
  if ( v13[1] == 18 && *(_DWORD *)(v12 + 24) == 1 )
    v14 = sub_C44510(a1, *(_QWORD *)(v12 + 32), (__int64)v86);
  else
LABEL_6:
    v14 = sub_1666AE0(a1 + 24, v12, v86, &v84);
  if ( !v14 )
    goto LABEL_28;
LABEL_8:
  if ( *(_WORD *)(a3 + 4) )
  {
    v15 = a3;
LABEL_10:
    v16 = sub_1666AE0(a1 + 24, v15, v86, &v85);
    goto LABEL_11;
  }
LABEL_30:
  v15 = a3;
  v26 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
  if ( !v26 || *v26 != 5 )
    goto LABEL_10;
  if ( v26[1] == 8 && *(_DWORD *)(a3 + 24) == 1 )
  {
    v73 = *(_QWORD *)(a3 + 32);
    if ( (unsigned __int8)sub_C44510(a1, v73, (__int64)v86) )
    {
      sub_1831620(qword_1C7F2C0, v86);
LABEL_36:
      v27 = qword_1C7F2C0;
      v28 = *(_DWORD **)(*(_QWORD *)(a1 + 16) + 856LL);
      v94 = 0;
      v95 = 0;
      v79 = v28;
      v96 = 1;
      v97 = 0;
      if ( (*(_BYTE *)(a4 + 4) & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v94, a4);
      else
        LODWORD(v94) = *(_DWORD *)a4;
      if ( (*(_BYTE *)(a4 + 20) & 1) != 0 )
      {
        sub_182C690(v27, &v96, a4 + 16);
      }
      else
      {
        v29 = *(_DWORD *)(a4 + 16);
        BYTE4(v96) &= ~1u;
        LODWORD(v96) = v29;
      }
      v30 = qword_1C7F2C0;
      if ( (v96 & 0x100000000LL) != 0 || (_DWORD)v96 != 1 || (v87[0] & 0x100000000LL) != 0 || LODWORD(v87[0]) != 1 )
      {
        sub_1848FF0(qword_1C7F2C0, &v94, v86);
      }
      else
      {
        sub_1831650(qword_1C7F2C0, &v94, v86);
        sub_182CBA0(v30, &v96);
        BYTE4(v96) &= ~1u;
        LODWORD(v96) = 1;
      }
      BYTE4(v90[0]) &= 0xFCu;
      v31 = qword_1C7F2C0;
      v92 &= 0xFCu;
      LODWORD(v90[0]) = 0;
      v90[1] = 0;
      v91 = 1;
      v93 = 0;
      if ( (v94 & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, v90, &v94);
      else
        LODWORD(v90[0]) = v94;
      if ( (v96 & 0x100000000LL) != 0 )
      {
        sub_182C690(v31, &v91, &v96);
      }
      else
      {
        v92 &= ~1u;
        v91 = v96;
      }
      v32 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v94);
      sub_182CBA0(v32, &v96);
      v72 = *(_QWORD *)(a1 + 16);
      v33 = v72;
      if ( v79 != *(_DWORD **)(v72 + 856) )
      {
        v94 = (__int64)v79;
        if ( v79 )
          ++v79[2];
        sub_C41DD0(a5 + 1, &v94);
        v33 = *(_QWORD *)(a1 + 16);
      }
      v34 = a5[1];
      if ( v34 )
        v35 = *(unsigned int *)(v34 - 4);
      else
        v35 = 0;
      v36 = sub_15EC1C0(v33, v35);
      v37 = v36;
      if ( v36 )
        ++*(_DWORD *)(v36 + 8);
      v38 = *(_QWORD *)(a1 + 16);
      v39 = *(_DWORD **)(v38 + 856);
      if ( v79 != v39 )
      {
        sub_39BF70(a5);
        v38 = *(_QWORD *)(a1 + 16);
        v39 = *(_DWORD **)(v38 + 856);
      }
      v40 = v90[0];
      if ( v39 == (_DWORD *)v37 )
      {
        v58 = qword_1C7F2C0;
        if ( LODWORD(v90[0]) )
        {
          if ( *(_DWORD *)a8 )
          {
            if ( (*(_BYTE *)(a8 + 20) & 1) == 0 && *(_DWORD *)(a8 + 16) == 1 && (v92 & 1) == 0 && v91 == 1 )
              goto LABEL_182;
            goto LABEL_113;
          }
          if ( (v90[0] & 0x100000000LL) == 0 )
          {
            *(_BYTE *)(a8 + 4) &= ~1u;
            *(_DWORD *)a8 = v40;
            goto LABEL_169;
          }
LABEL_183:
          sub_182C690(qword_1C7F2C0, a8, v90);
LABEL_169:
          if ( (v92 & 1) != 0 )
          {
            sub_182C690(v58, a8 + 16, &v91);
          }
          else
          {
            *(_DWORD *)(a8 + 16) = v91;
            *(_BYTE *)(a8 + 20) &= ~1u;
          }
          goto LABEL_60;
        }
        v68 = *(_BYTE *)(a8 + 4);
        if ( (v68 & 1) != 0 )
          sub_182C690(qword_1C7F2C0, a8, a8);
        else
          *(_BYTE *)(a8 + 4) = v68 & 0xFE;
        if ( (*(_BYTE *)(a8 + 20) & 1) == 0 )
        {
LABEL_144:
          *(_BYTE *)(a8 + 20) &= ~1u;
          goto LABEL_60;
        }
      }
      else
      {
        if ( SLODWORD(v90[0]) >= 0 )
        {
          if ( LODWORD(v90[0]) )
          {
            v85 = v37;
            if ( v37 )
              ++*(_DWORD *)(v37 + 8);
            sub_C41DD0((_QWORD *)(a6 + 8), &v85);
            v42 = *a7;
            if ( !*a7 || (v43 = *(unsigned int *)(v42 - 4), (_DWORD)v43 == *(_DWORD *)(v42 - 8)) )
            {
              sub_53D790(a7);
              v42 = *a7;
              v43 = *(unsigned int *)(*a7 - 4);
            }
            v44 = 32 * v43 + v42;
            *(_QWORD *)v44 = 0;
            v45 = qword_1C7F2C0;
            *(_QWORD *)(v44 + 8) = 0;
            *(_QWORD *)(v44 + 16) = 1;
            *(_QWORD *)(v44 + 24) = 0;
            if ( (v90[0] & 0x100000000LL) != 0 )
              sub_182C690(v45, v44, v90);
            else
              *(_DWORD *)v44 = v90[0];
            if ( (v92 & 1) != 0 )
            {
              sub_182C690(v45, v44 + 16, &v91);
            }
            else
            {
              v46 = v91;
              *(_BYTE *)(v44 + 20) &= ~1u;
              *(_DWORD *)(v44 + 16) = v46;
            }
            ++*(_DWORD *)(*a7 - 4);
          }
          goto LABEL_60;
        }
        v49 = sub_15E1A70(v38);
        v94 = v49;
        if ( v49 )
          ++*(_DWORD *)(v49 + 8);
        sub_C41DD0((_QWORD *)(a6 + 8), &v94);
        BYTE4(v94) &= 0xFCu;
        v50 = qword_1C7F2C0;
        BYTE4(v96) &= 0xFCu;
        LODWORD(v94) = 0;
        v95 = 0;
        LODWORD(v96) = 1;
        v97 = 0;
        if ( (v90[0] & 0x100000000LL) != 0 )
          sub_182C690(qword_1C7F2C0, &v94, v90);
        else
          LODWORD(v94) = v90[0];
        if ( (v92 & 1) != 0 )
        {
          sub_182C690(v50, &v96, &v91);
        }
        else
        {
          BYTE4(v96) &= ~1u;
          LODWORD(v96) = v91;
        }
        sub_1831620(qword_1C7F2C0, &v94);
        v51 = *a7;
        if ( !*a7 || (v52 = *(unsigned int *)(v51 - 4), (_DWORD)v52 == *(_DWORD *)(v51 - 8)) )
        {
          sub_53D790(a7);
          v51 = *a7;
          v52 = *(unsigned int *)(*a7 - 4);
        }
        v53 = qword_1C7F2C0;
        v54 = v51 + 32 * v52;
        *(_DWORD *)v54 = v94;
        *(_BYTE *)(v54 + 4) = BYTE4(v94) & 3 | *(_BYTE *)(v54 + 4) & 0xFC;
        v55 = v95;
        v95 = 0;
        *(_QWORD *)(v54 + 8) = v55;
        *(_DWORD *)(v54 + 16) = v96;
        *(_BYTE *)(v54 + 20) = BYTE4(v96) & 3 | *(_BYTE *)(v54 + 20) & 0xFC;
        v56 = v97;
        v97 = 0;
        *(_QWORD *)(v54 + 24) = v56;
        ++*(_DWORD *)(v51 - 4);
        sub_182CBA0(v53, &v94);
        sub_182CBA0(v53, &v96);
        v57 = v90[0];
        v58 = qword_1C7F2C0;
        if ( LODWORD(v90[0]) )
        {
          if ( *(_DWORD *)a8 )
          {
            if ( (*(_BYTE *)(a8 + 20) & 1) == 0 && *(_DWORD *)(a8 + 16) == 1 && (v92 & 1) == 0 && v91 == 1 )
            {
LABEL_182:
              sub_1831A80(qword_1C7F2C0, a8, v90, a8);
              sub_182CBA0(v58, a8 + 16);
              *(_BYTE *)(a8 + 20) &= ~1u;
              *(_DWORD *)(a8 + 16) = 1;
LABEL_60:
              if ( v37 )
              {
                v11 = (*(_DWORD *)(v37 + 8))-- == 1;
                if ( v11 )
                  sub_15D7BC0(v72, v37);
              }
              v41 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v90);
              sub_182CBA0(v41, &v91);
              goto LABEL_29;
            }
LABEL_113:
            sub_1851D20(qword_1C7F2C0, a8, v90, a8);
            goto LABEL_60;
          }
          if ( (v90[0] & 0x100000000LL) == 0 )
          {
            *(_BYTE *)(a8 + 4) &= ~1u;
            *(_DWORD *)a8 = v57;
            goto LABEL_169;
          }
          goto LABEL_183;
        }
        v63 = *(_BYTE *)(a8 + 4);
        if ( (v63 & 1) != 0 )
          sub_182C690(qword_1C7F2C0, a8, a8);
        else
          *(_BYTE *)(a8 + 4) = v63 & 0xFE;
        if ( (*(_BYTE *)(a8 + 20) & 1) == 0 )
          goto LABEL_144;
      }
      sub_182C690(v58, a8 + 16, a8 + 16);
      goto LABEL_60;
    }
    v15 = v73;
    if ( *(_WORD *)(v73 + 4) )
      goto LABEL_10;
    v26 = *(_DWORD **)(*(_QWORD *)(v73 + 16) + 24LL);
    if ( !v26 || *v26 != 5 )
      goto LABEL_10;
  }
  if ( v26[1] != 18 || *(_DWORD *)(v15 + 24) != 1 )
    goto LABEL_10;
  v16 = sub_C44510(a1, *(_QWORD *)(v15 + 32), (__int64)v86);
LABEL_11:
  if ( v16 )
    goto LABEL_36;
  if ( *(_WORD *)(a3 + 4) )
    goto LABEL_28;
  v17 = *(int **)(*(_QWORD *)(a3 + 16) + 24LL);
  if ( !v17 )
    goto LABEL_28;
  if ( *v17 != 5 )
  {
LABEL_15:
    if ( *v17 != 5 )
    {
      v18 = *v17;
LABEL_17:
      if ( !v18 && v17[1] == 4 )
      {
        v19 = *(_QWORD *)(a3 + 40);
        v71 = *(_QWORD *)(a3 + 48);
        v90[0] = *(_QWORD *)(a3 + 32);
        if ( v90[0] )
          ++*(_DWORD *)(v90[0] + 8LL);
        v81 = v19;
        sub_C41DD0(a5 + 1, v90);
        v82 = sub_C45340(a1, a2 + 1, v81, a4, (_DWORD)a5, a6, (__int64)a7, a8);
        sub_39BF70(a5);
        v20 = sub_15E1A70(*(_QWORD *)(a1 + 16));
        v94 = v20;
        if ( v20 )
          ++*(_DWORD *)(v20 + 8);
        sub_C41DD0(a5 + 1, &v94);
        v80 = v82 & sub_C45340(a1, a2 + 1, v71, a4, (_DWORD)a5, a6, (__int64)a7, a8);
        sub_39BF70(a5);
        goto LABEL_29;
      }
LABEL_28:
      v80 = 0;
      goto LABEL_29;
    }
    goto LABEL_89;
  }
  v47 = v17[1];
  if ( v47 == 6 )
  {
    v21 = 0;
    while ( v21 < *(_DWORD *)(a3 + 24) )
    {
      if ( !(unsigned __int8)sub_C45340(a1, a2, *(_QWORD *)(a3 + 8LL * v21++ + 32), a4, (_DWORD)a5, a6, (__int64)a7, a8) )
        goto LABEL_28;
    }
  }
  else
  {
    if ( v47 != 7 )
    {
      if ( v47 == 8 )
      {
        if ( *(_DWORD *)(a3 + 24) == 1 )
        {
          v64 = *(_QWORD *)(a3 + 32);
          LODWORD(v94) = 0;
          BYTE4(v94) &= 0xFCu;
          BYTE4(v96) &= 0xFCu;
          v65 = qword_1C7F2C0;
          v83 = v64;
          v95 = 0;
          LODWORD(v96) = 1;
          v97 = 0;
          if ( (*(_BYTE *)(a4 + 4) & 1) != 0 )
            sub_182C690(qword_1C7F2C0, &v94, a4);
          else
            LODWORD(v94) = *(_DWORD *)a4;
          if ( (*(_BYTE *)(a4 + 20) & 1) != 0 )
          {
            sub_182C690(v65, &v96, a4 + 16);
          }
          else
          {
            v66 = *(_DWORD *)(a4 + 16);
            BYTE4(v96) &= ~1u;
            LODWORD(v96) = v66;
          }
          sub_1831620(qword_1C7F2C0, &v94);
          v80 = sub_C45340(a1, a2, v83, (unsigned int)&v94, (_DWORD)a5, a6, (__int64)a7, a8);
          v67 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v94);
          sub_182CBA0(v67, &v96);
          goto LABEL_29;
        }
      }
      else if ( v47 == 9 && *(_DWORD *)(a3 + 24) == 2 )
      {
        v48 = *(_QWORD *)(a3 + 40);
        if ( (unsigned __int8)sub_C44510(a1, *(_QWORD *)(a3 + 32), (__int64)v86) )
          goto LABEL_133;
        if ( *(_WORD *)(a3 + 4) )
          goto LABEL_28;
        v17 = *(int **)(*(_QWORD *)(a3 + 16) + 24LL);
        if ( !v17 )
          goto LABEL_28;
        goto LABEL_15;
      }
LABEL_89:
      if ( v17[1] != 9 || *(_DWORD *)(a3 + 24) != 2 )
        goto LABEL_90;
      v48 = *(_QWORD *)(a3 + 32);
      if ( !(unsigned __int8)sub_C44510(a1, *(_QWORD *)(a3 + 40), (__int64)v86) )
      {
        if ( *(_WORD *)(a3 + 4) )
          goto LABEL_28;
        v17 = *(int **)(*(_QWORD *)(a3 + 16) + 24LL);
        if ( !v17 )
          goto LABEL_28;
        v18 = *v17;
        if ( *v17 != 5 )
          goto LABEL_17;
LABEL_90:
        if ( v17[1] == 18 && *(_DWORD *)(a3 + 24) == 1 )
        {
          v80 = sub_C45340(a1, a2, *(_QWORD *)(a3 + 32), a4, (_DWORD)a5, a6, (__int64)a7, a8);
          goto LABEL_29;
        }
        goto LABEL_28;
      }
LABEL_133:
      sub_3EBE30((__int64)&v94, (__int64)v86, a4);
      v80 = sub_C45340(a1, a2, v48, (unsigned int)&v94, (_DWORD)a5, a6, (__int64)a7, a8);
      sub_25A130((char *)&v94);
      goto LABEL_29;
    }
    if ( *(_DWORD *)(a3 + 24) != 2 )
      goto LABEL_89;
    v75 = *(_QWORD *)(a3 + 40);
    v80 = sub_C45340(a1, a2, *(_QWORD *)(a3 + 32), a4, (_DWORD)a5, a6, (__int64)a7, a8);
    if ( v80 )
    {
      BYTE4(v94) &= 0xFCu;
      v59 = qword_1C7F2C0;
      BYTE4(v96) &= 0xFCu;
      LODWORD(v94) = 0;
      v95 = 0;
      LODWORD(v96) = 1;
      v97 = 0;
      if ( (*(_BYTE *)(a4 + 4) & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v94, a4);
      else
        LODWORD(v94) = *(_DWORD *)a4;
      if ( (*(_BYTE *)(a4 + 20) & 1) != 0 )
      {
        sub_182C690(v59, &v96, a4 + 16);
      }
      else
      {
        v60 = *(_DWORD *)(a4 + 16);
        BYTE4(v96) &= ~1u;
        LODWORD(v96) = v60;
      }
      sub_1831620(qword_1C7F2C0, &v94);
      v61 = sub_C45340(a1, a2, v75, (unsigned int)&v94, (_DWORD)a5, a6, (__int64)a7, a8);
      v62 = qword_1C7F2C0;
      v80 = v61;
      sub_182CBA0(qword_1C7F2C0, &v94);
      sub_182CBA0(v62, &v96);
    }
  }
LABEL_29:
  v23 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v88);
  sub_182CBA0(v23, v89);
  v24 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v86);
  sub_182CBA0(v24, v87);
  return v80;
}

