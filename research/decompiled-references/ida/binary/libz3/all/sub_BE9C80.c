__int64 __fastcall sub_BE9C80(_QWORD *a1, __int64 a2, __int64 a3)
{
  char **exception; // r13
  char **v4; // r13
  char **v5; // r13
  __int64 v6; // r12
  _QWORD *v7; // rax
  _QWORD *v8; // r13
  _DWORD *v9; // rbx
  __int64 *v10; // rbp
  __int64 *v11; // rdi
  __int64 *v12; // rcx
  int v13; // esi
  __int64 *v14; // r8
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  int v18; // r15d
  unsigned int v19; // eax
  __int64 v20; // r13
  __int64 v21; // rsi
  int v22; // eax
  _QWORD *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  _DWORD *v26; // rdx
  _QWORD *v27; // rdx
  unsigned int v28; // eax
  unsigned int v29; // r8d
  size_t v30; // rsi
  unsigned int *v31; // rax
  __int64 v32; // rsi
  __int64 result; // rax
  _QWORD *v35; // rax
  __int64 v36; // r8
  __int64 v37; // r14
  unsigned int v38; // r10d
  int v39; // eax
  int v40; // r9d
  __int64 *v41; // rcx
  unsigned int v42; // edi
  __int64 v43; // rdx
  __int64 *v44; // r11
  __int64 *v45; // rdx
  __int64 *v46; // r10
  __int64 v47; // rsi
  __int64 v48; // rsi
  unsigned int v49; // r10d
  int v50; // esi
  __int64 v51; // rax
  __int64 *v52; // r8
  __int64 *v53; // rax
  __int64 *v54; // rdi
  __int64 v55; // rdx
  __int64 v56; // rdx
  unsigned int v57; // eax
  __int64 v58; // rdx
  unsigned int v59; // eax
  __int64 v60; // r15
  _QWORD *v61; // rax
  unsigned int v62; // r10d
  __int64 *v63; // rcx
  _QWORD *v64; // r8
  _QWORD *v65; // rax
  __int64 *v66; // r15
  __int64 *i; // rax
  __int64 v68; // rdx
  _QWORD *v69; // rsi
  _QWORD *v70; // rdx
  __int64 v71; // rsi
  _QWORD *v72; // rax
  unsigned int v73; // r10d
  _QWORD *v74; // r15
  __int64 *v75; // rax
  __int64 *v76; // r13
  __int64 v77; // rdx
  _QWORD *v78; // rsi
  _QWORD *v79; // rdx
  __int64 v80; // rsi
  unsigned int v81; // edx
  size_t v82; // rsi
  unsigned int *v83; // rax
  __int64 *v84; // rdi
  unsigned int v85; // edx
  unsigned int v86; // ecx
  unsigned int *v87; // rax
  __int64 v88; // [rsp+8h] [rbp-C0h]
  __int64 v89; // [rsp+8h] [rbp-C0h]
  size_t v90; // [rsp+8h] [rbp-C0h]
  unsigned int v91; // [rsp+8h] [rbp-C0h]
  int v93; // [rsp+18h] [rbp-B0h]
  __int64 *v94; // [rsp+18h] [rbp-B0h]
  unsigned int v96; // [rsp+28h] [rbp-A0h]
  unsigned int v97; // [rsp+28h] [rbp-A0h]
  _QWORD *v98; // [rsp+28h] [rbp-A0h]
  __int64 v99; // [rsp+28h] [rbp-A0h]
  int v100; // [rsp+28h] [rbp-A0h]
  __int64 *v101; // [rsp+28h] [rbp-A0h]
  __int64 v102; // [rsp+30h] [rbp-98h]
  __int64 *v103; // [rsp+40h] [rbp-88h]
  __int64 *v104; // [rsp+40h] [rbp-88h]
  __int64 v105; // [rsp+40h] [rbp-88h]
  int v106; // [rsp+40h] [rbp-88h]
  __int64 v107; // [rsp+48h] [rbp-80h]
  unsigned int v108; // [rsp+48h] [rbp-80h]
  __int64 v109; // [rsp+48h] [rbp-80h]
  unsigned int v110; // [rsp+50h] [rbp-78h]
  int v111; // [rsp+58h] [rbp-70h]
  __int64 v112[11]; // [rsp+70h] [rbp-58h] BYREF

  v102 = a1[2];
  sub_1568C00(v112, *a1 + 1224LL, a2);
  v6 = v112[0];
  if ( v112[0] && !*(_DWORD *)(v112[0] + 8) )
    sub_15D7BC0(v112[1], v112[0]);
  v7 = (_QWORD *)sub_186B270(0x18u);
  v7[1] = v6;
  v8 = v7;
  v9 = v7 + 1;
  *v7 = 0x100000002LL;
  v10 = (__int64 *)sub_186B270(0x40u);
  v11 = nullptr;
  *(_OWORD *)v10 = 0;
  v12 = v10 + 8;
  *((_OWORD *)v10 + 1) = 0;
  *((_OWORD *)v10 + 2) = 0;
  *((_OWORD *)v10 + 3) = 0;
  v13 = *(_DWORD *)(v6 + 12);
  v14 = &v10[v13 & 7];
  v15 = v14;
  while ( 1 )
  {
    while ( 1 )
    {
      v16 = *v15;
      if ( (unsigned __int64)*v15 <= 1 )
        break;
      if ( *(_DWORD *)(v16 + 12) == v13 && v6 == v16 )
      {
LABEL_48:
        *v15 = v6;
        v111 = 0;
        v18 = 0;
        goto LABEL_23;
      }
      if ( v12 == ++v15 )
        goto LABEL_11;
    }
    if ( !v16 )
      break;
    v11 = v15++;
    if ( v12 == v15 )
    {
LABEL_11:
      if ( v10 != v14 )
      {
        v15 = v10;
        do
        {
          while ( 1 )
          {
            v17 = *v15;
            if ( (unsigned __int64)*v15 <= 1 )
              break;
            if ( *(_DWORD *)(v17 + 12) == v13 && v6 == v17 )
              goto LABEL_48;
            if ( v14 == ++v15 )
              goto LABEL_19;
          }
          if ( !v17 )
            goto LABEL_20;
          v11 = v15++;
        }
        while ( v14 != v15 );
      }
LABEL_19:
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
  }
LABEL_20:
  v18 = -1;
  if ( !v11 )
  {
    v11 = v15;
    v18 = 0;
  }
  *v11 = v6;
  v111 = 1;
LABEL_23:
  v19 = *((_DWORD *)v8 + 1);
  v20 = 8;
  while ( v19 )
  {
    v24 = v19 - 1;
    v25 = *(_QWORD *)&v9[2 * v24];
    *(v9 - 1) = v24;
    --v19;
    if ( *(_WORD *)(v25 + 4) )
      goto LABEL_32;
    v26 = *(_DWORD **)(*(_QWORD *)(v25 + 16) + 24LL);
    if ( !v26 )
      goto LABEL_32;
    if ( *v26 )
    {
      if ( *v26 == *(_DWORD *)(*a1 + 1768LL) )
        goto LABEL_43;
LABEL_32:
      ++*(_DWORD *)(v25 + 8);
      v27 = *(_QWORD **)(a3 + 8);
      if ( v27 )
      {
        v28 = *((_DWORD *)v27 - 1);
        if ( v28 == *((_DWORD *)v27 - 2) )
        {
          v29 = (3 * v28 + 1) >> 1;
          v30 = 8 * v29 + 8;
          if ( 8 * v28 + 8 >= (unsigned int)v30 || v28 >= v29 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v112, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v112);
            sub_233E40((__int64)v112);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v96 = (3 * v28 + 1) >> 1;
          v88 = v25;
          v31 = (unsigned int *)sub_186B300(v27 - 1, v30);
          v32 = v31[1];
          v27 = v31 + 2;
          v25 = v88;
          *v31 = v96;
          LODWORD(v31) = v32;
          v23 = &v27[v32];
          *(_QWORD *)(a3 + 8) = v27;
          v22 = (_DWORD)v31 + 1;
        }
        else
        {
          v21 = v28;
          v22 = v28 + 1;
          v23 = &v27[v21];
        }
      }
      else
      {
        v89 = v25;
        v35 = (_QWORD *)sub_186B270(0x18u);
        v27 = v35 + 1;
        *v35 = 2;
        v25 = v89;
        v23 = v35 + 1;
        *(_QWORD *)(a3 + 8) = v35 + 1;
        v22 = 1;
      }
      *v23 = v25;
      *((_DWORD *)v27 - 1) = v22;
LABEL_26:
      v19 = *(v9 - 1);
    }
    else
    {
      if ( v26[1] == 4 )
      {
        v36 = *(_QWORD *)(v25 + 40);
        v37 = *(_QWORD *)(v25 + 48);
        goto LABEL_50;
      }
      if ( *(_DWORD *)(*a1 + 1768LL) )
        goto LABEL_32;
LABEL_43:
      if ( v26[1] == 29 )
      {
        if ( *(_DWORD *)(v25 + 24) != 2 )
          goto LABEL_32;
        v36 = *(_QWORD *)(v25 + 32);
        v37 = *(_QWORD *)(v25 + 40);
LABEL_50:
        v38 = 2 * v20;
        v39 = v18 + v111;
        if ( 3 * (int)v20 < (unsigned int)(4 * (v18 + v111)) )
        {
          v107 = v36;
          v99 = v38;
          v90 = 8LL * v38;
          v72 = (_QWORD *)sub_186B270(v90);
          v73 = 2 * v20;
          v74 = v72;
          v36 = v107;
          if ( 2 * (_DWORD)v20 )
          {
            memset(v72, 0, 8 * v99);
            v73 = 2 * v20;
            v75 = &v10[v20];
            v36 = v107;
            v40 = 2 * v20 - 1;
            v41 = &v74[v90 / 8];
LABEL_115:
            v76 = v10;
            do
            {
              while ( (unsigned __int64)*v76 <= 1 )
              {
                if ( ++v76 == v75 )
                  goto LABEL_123;
              }
              v77 = 8LL * (*(_DWORD *)(*v76 + 12) & (unsigned int)v40);
              v78 = &v74[(unsigned __int64)v77 / 8];
              if ( v90 == v77 )
              {
LABEL_126:
                if ( v74 == v78 )
                {
LABEL_132:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v79 = v74;
                while ( *v79 )
                {
                  if ( v78 == ++v79 )
                    goto LABEL_132;
                }
              }
              else
              {
                v79 = &v74[(unsigned __int64)v77 / 8];
                while ( *v79 )
                {
                  if ( ++v79 == v41 )
                    goto LABEL_126;
                }
              }
              v80 = *v76++;
              *v79 = v80;
            }
            while ( v76 != v75 );
          }
          else
          {
            v75 = &v10[v20];
            v41 = v74;
            v40 = -1;
            if ( v10 != v75 )
              goto LABEL_115;
          }
LABEL_123:
          if ( v10 )
          {
            v108 = v73;
            v105 = v36;
            v100 = v40;
            v94 = v41;
            sub_186B220(v10);
            v73 = v108;
            v36 = v105;
            v40 = v100;
            v41 = v94;
          }
          v10 = v74;
          v39 = v111;
          v20 = v73;
          v18 = 0;
          goto LABEL_52;
        }
        v40 = v20 - 1;
        v90 = 8LL * (unsigned int)v20;
        v41 = &v10[v90 / 8];
LABEL_52:
        v42 = *(_DWORD *)(v36 + 12);
        v43 = 8LL * (v40 & v42);
        v44 = &v10[(unsigned __int64)v43 / 8];
        if ( v43 == v90 )
        {
          v46 = nullptr;
LABEL_60:
          if ( v44 != v10 )
          {
            v45 = v10;
            do
            {
              while ( 1 )
              {
                v48 = *v45;
                if ( (unsigned __int64)*v45 <= 1 )
                  break;
                if ( *(_DWORD *)(v48 + 12) == v42 && v48 == v36 )
                  goto LABEL_69;
                if ( v44 == ++v45 )
                  goto LABEL_68;
              }
              if ( !v48 )
                goto LABEL_90;
              v46 = v45++;
            }
            while ( v44 != v45 );
          }
LABEL_68:
          sub_1872CE0("");
          sub_1873130(114, 461);
        }
        v45 = &v10[(unsigned __int64)v43 / 8];
        v46 = nullptr;
        while ( 1 )
        {
          while ( 1 )
          {
            v47 = *v45;
            if ( (unsigned __int64)*v45 <= 1 )
              break;
            if ( *(_DWORD *)(v47 + 12) == v42 && v47 == v36 )
            {
LABEL_69:
              v49 = 2 * v20;
              if ( 3 * (int)v20 >= (unsigned int)(4 * v39) )
                goto LABEL_70;
              goto LABEL_94;
            }
            if ( ++v45 == v41 )
              goto LABEL_60;
          }
          if ( !v47 )
            break;
          v46 = v45++;
          if ( v45 == v41 )
            goto LABEL_60;
        }
LABEL_90:
        if ( v46 )
          --v18;
        else
          v46 = v45;
        *v46 = v36;
        v59 = *(v9 - 1);
        ++v111;
        if ( v59 == *(v9 - 2) )
        {
          v81 = (3 * v59 + 1) >> 1;
          v82 = 8 * v81 + 8;
          if ( 8 * v59 + 8 >= (unsigned int)v82 || v59 >= v81 )
          {
            v5 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v112, "Overflow encountered when expanding vector");
            *v5 = (char *)off_1C63128;
            sub_2333C0(v5 + 1, v112);
            sub_233E40((__int64)v112);
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v110 = (3 * v59 + 1) >> 1;
          v109 = v36;
          v106 = v40;
          v101 = v41;
          v83 = (unsigned int *)sub_186B300(v9 - 2, v82);
          v9 = v83 + 2;
          v41 = v101;
          v40 = v106;
          v36 = v109;
          *v83 = v110;
          v59 = v83[1];
        }
        v49 = 2 * v20;
        *(_QWORD *)&v9[2 * v59] = v36;
        *(v9 - 1) = v59 + 1;
        if ( 3 * (int)v20 >= (unsigned int)(4 * (v18 + v111)) )
          goto LABEL_70;
LABEL_94:
        v20 = v49;
        v103 = v41;
        v60 = v49;
        v97 = v49;
        v90 = 8LL * v49;
        v61 = (_QWORD *)sub_186B270(v90);
        v62 = v97;
        v63 = v103;
        v64 = v61;
        if ( v97 )
        {
          v65 = memset(v61, 0, 8 * v60);
          v63 = v103;
          v62 = v97;
          v64 = v65;
        }
        v40 = v62 - 1;
        v66 = v10;
        for ( i = &v64[v90 / 8]; v63 != v66; *v70 = v71 )
        {
          while ( (unsigned __int64)*v66 <= 1 )
          {
            if ( v63 == ++v66 )
              goto LABEL_105;
          }
          v68 = 8LL * (*(_DWORD *)(*v66 + 12) & (unsigned int)v40);
          v69 = &v64[(unsigned __int64)v68 / 8];
          if ( v90 == v68 )
          {
LABEL_108:
            if ( v64 == v69 )
            {
LABEL_131:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v70 = v64;
            while ( *v70 )
            {
              if ( v69 == ++v70 )
                goto LABEL_131;
            }
          }
          else
          {
            v70 = &v64[(unsigned __int64)v68 / 8];
            while ( *v70 )
            {
              if ( i == ++v70 )
                goto LABEL_108;
            }
          }
          v71 = *v66++;
        }
LABEL_105:
        if ( v10 )
        {
          v104 = &v64[v90 / 8];
          v98 = v64;
          v93 = v62 - 1;
          sub_186B220(v10);
          i = v104;
          v64 = v98;
          v40 = v93;
        }
        v41 = i;
        v10 = v64;
        v18 = 0;
LABEL_70:
        v50 = *(_DWORD *)(v37 + 12);
        v51 = 8LL * (v50 & (unsigned int)v40);
        v52 = &v10[(unsigned __int64)v51 / 8];
        if ( v90 == v51 )
        {
          v54 = nullptr;
LABEL_78:
          if ( v52 != v10 )
          {
            v53 = v10;
            do
            {
              while ( 1 )
              {
                v56 = *v53;
                if ( (unsigned __int64)*v53 <= 1 )
                  break;
                if ( *(_DWORD *)(v56 + 12) == v50 && v56 == v37 )
                  goto LABEL_26;
                if ( v52 == ++v53 )
                  goto LABEL_86;
              }
              if ( !v56 )
                goto LABEL_87;
              v54 = v53++;
            }
            while ( v52 != v53 );
          }
LABEL_86:
          sub_1872CE0("");
          sub_1873130(114, 461);
        }
        v53 = &v10[(unsigned __int64)v51 / 8];
        v54 = nullptr;
        while ( 1 )
        {
          while ( 1 )
          {
            v55 = *v53;
            if ( (unsigned __int64)*v53 <= 1 )
              break;
            if ( *(_DWORD *)(v55 + 12) == v50 && v55 == v37 )
              goto LABEL_26;
            if ( v41 == ++v53 )
              goto LABEL_78;
          }
          if ( !v55 )
            break;
          v54 = v53++;
          if ( v41 == v53 )
            goto LABEL_78;
        }
LABEL_87:
        if ( v54 )
        {
          *v54 = v37;
          v57 = *(v9 - 1);
          --v18;
          ++v111;
          if ( v57 != *(v9 - 2) )
            goto LABEL_89;
        }
        else
        {
          v84 = v53;
          v57 = *(v9 - 1);
          *v84 = v37;
          ++v111;
          if ( v57 != *(v9 - 2) )
            goto LABEL_89;
        }
        v85 = (3 * v57 + 1) >> 1;
        v86 = 8 * v85 + 8;
        if ( 8 * v57 + 8 >= v86 || v57 >= v85 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v112, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v112);
          sub_233E40((__int64)v112);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v91 = (3 * v57 + 1) >> 1;
        v87 = (unsigned int *)sub_186B300(v9 - 2, v86);
        v9 = v87 + 2;
        *v87 = v91;
        v57 = v87[1];
LABEL_89:
        v58 = v57;
        v19 = v57 + 1;
        *(_QWORD *)&v9[2 * v58] = v37;
        *(v9 - 1) = v19;
      }
      else if ( v26[1] != 35 )
      {
        goto LABEL_32;
      }
    }
  }
  if ( v10 )
    sub_186B220(v10);
  result = sub_186B220(v9 - 2);
  if ( (*(_DWORD *)(v6 + 8))-- == 1 )
    return sub_15D7BC0(v102, v6);
  return result;
}

