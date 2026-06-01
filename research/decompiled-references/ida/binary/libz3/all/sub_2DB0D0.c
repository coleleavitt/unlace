__int64 __fastcall sub_2DB0D0(_QWORD *a1, std::istream *a2, _QWORD *a3)
{
  char **exception; // r12
  char **v4; // r12
  __int64 (__fastcall *v6)(); // rax
  __int64 v7; // rsi
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 *v11; // rbx
  __int64 result; // rax
  int v13; // edx
  const char *v14; // rbp
  __int64 *v15; // rbx
  int i; // eax
  int v17; // edx
  const char *v18; // rbp
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // r12
  __int64 v24; // r15
  __int64 *v25; // r13
  __int64 v26; // rbp
  int v27; // eax
  int v28; // edx
  const char *v29; // rbp
  __int64 *v30; // rbp
  int j; // eax
  int v32; // edx
  char *v33; // r13
  __int64 v34; // r13
  __int64 v35; // r14
  __int64 v36; // rax
  bool v37; // zf
  std::istream *v38; // rdi
  int v39; // ebp
  __int64 v40; // rbx
  __int64 v41; // r13
  __int64 v42; // rax
  __int64 *v43; // rbx
  int v44; // eax
  int v45; // edx
  int v46; // ecx
  int v47; // r8d
  int v48; // r9d
  __int64 v49; // rbp
  __int64 v50; // r12
  __int64 v51; // r13
  __int64 v52; // rax
  __int64 v53; // r15
  __int64 *v54; // r12
  int v55; // eax
  _QWORD *v56; // rbx
  unsigned int v57; // eax
  _QWORD *v58; // rdx
  unsigned int v59; // r12d
  __int64 v60; // rax
  unsigned int *v61; // rax
  int v62; // edx
  int v63; // ecx
  int v64; // r8d
  int v65; // r9d
  __int64 v66; // r12
  __int64 v67; // r13
  __int64 v68; // rax
  __int64 v69; // r15
  __int64 *v70; // r12
  int v71; // eax
  unsigned int **v72; // rbx
  unsigned int v73; // r12d
  unsigned int *v74; // rax
  __int64 v75; // rdx
  unsigned int *v76; // rdx
  unsigned int v77; // r13d
  unsigned int v78; // ecx
  unsigned int *v79; // rax
  unsigned int v80; // r13d
  unsigned int v81; // ecx
  unsigned int *v82; // rdx
  __int64 v83; // r13
  __int64 v84; // r14
  __int64 v85; // rax
  int v86; // eax
  __int64 v87; // r13
  __int64 v88; // r14
  __int64 v89; // rax
  int v90; // eax
  _QWORD *v91; // rax
  _QWORD *v92; // rax
  __int64 v93; // [rsp+0h] [rbp-E8h]
  void *v94; // [rsp+0h] [rbp-E8h]
  int *v95; // [rsp+8h] [rbp-E0h]
  __int64 v96; // [rsp+10h] [rbp-D8h]
  int v97; // [rsp+18h] [rbp-D0h]
  std::istream *v98; // [rsp+20h] [rbp-C8h] BYREF
  int v99; // [rsp+28h] [rbp-C0h]
  int v100; // [rsp+2Ch] [rbp-BCh]
  _QWORD v101[2]; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v102[2]; // [rsp+40h] [rbp-A8h] BYREF
  int v103[2]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v104; // [rsp+58h] [rbp-90h]
  __int64 v105; // [rsp+60h] [rbp-88h] BYREF
  __int64 v106; // [rsp+68h] [rbp-80h]
  int v107[2]; // [rsp+80h] [rbp-68h] BYREF
  int v108[2]; // [rsp+88h] [rbp-60h]
  __int64 *v109; // [rsp+90h] [rbp-58h]
  _QWORD *v110; // [rsp+98h] [rbp-50h]
  int v111[18]; // [rsp+A0h] [rbp-48h] BYREF

  v98 = a2;
  v100 = 0;
  *(_QWORD *)v107 = a1;
  v99 = std::istream::get(a2);
  v6 = *(__int64 (__fastcall **)())(*a1 + 72LL);
  if ( v6 == sub_2DD1A0 )
    v7 = a1[1];
  else
    v7 = ((__int64 (__fastcall *)(_QWORD *))v6)(a1);
  *(_QWORD *)v108 = v7;
  v109 = (__int64 *)&v98;
  v110 = a3;
  sub_16669D0(v111, v7);
  v95 = v103;
  while ( 1 )
  {
LABEL_4:
    v11 = v109;
    result = *((unsigned int *)v109 + 2);
    if ( (int)result <= 8 )
    {
      if ( (_DWORD)result == -1 )
        return result;
      goto LABEL_6;
    }
    do
    {
      if ( (int)result <= 13 )
      {
        if ( (_DWORD)result == 10 )
          ++*((_DWORD *)v11 + 3);
      }
      else if ( (_DWORD)result != 32 )
      {
        break;
      }
      LODWORD(result) = std::istream::get((std::istream *)*v11);
      *((_DWORD *)v11 + 2) = result;
    }
    while ( (int)result > 8 );
    v11 = v109;
    result = *((unsigned int *)v109 + 2);
    if ( (_DWORD)result == -1 )
      return result;
    if ( (_DWORD)result == 42 )
    {
      while ( 1 )
      {
        v38 = (std::istream *)*v11;
        if ( (_DWORD)result == 10 )
          break;
        LODWORD(result) = std::istream::get(v38);
        *((_DWORD *)v11 + 2) = result;
        if ( (_DWORD)result == -1 )
          goto LABEL_4;
      }
      ++*((_DWORD *)v11 + 3);
      *((_DWORD *)v11 + 2) = std::istream::get(v38);
    }
    else
    {
      while ( (int)result > 8 )
      {
        if ( (int)result > 13 )
        {
          if ( (_DWORD)result != 32 )
            break;
        }
        else if ( (_DWORD)result == 10 )
        {
          ++*((_DWORD *)v11 + 3);
        }
        LODWORD(result) = std::istream::get((std::istream *)*v11);
        *((_DWORD *)v11 + 2) = result;
      }
LABEL_6:
      v13 = 109;
      v14 = "min:";
      while ( (_DWORD)result && v13 == (_DWORD)result )
      {
        ++v14;
        LODWORD(result) = std::istream::get((std::istream *)*v11);
        v13 = *v14;
        *((_DWORD *)v11 + 2) = result;
        if ( !(_BYTE)v13 )
        {
          sub_2DF4E0(
            (unsigned int)v101,
            (unsigned int)v107,
            v13,
            v8,
            v9,
            v10,
            v93,
            (__int64)v95,
            v96,
            v97,
            (__int64)v98);
          v49 = v101[0];
          v93 = v101[1];
          while ( 1 )
          {
            v54 = v109;
            v55 = *((_DWORD *)v109 + 2);
            if ( v55 > 8 )
              break;
LABEL_91:
            if ( *((_DWORD *)v54 + 2) == -1 )
              goto LABEL_110;
            sub_2DF4E0(
              (unsigned int)&v105,
              (unsigned int)v107,
              v45,
              v46,
              v47,
              v48,
              v93,
              (__int64)v95,
              v96,
              v97,
              (__int64)v98);
            v50 = v105;
            v51 = v106;
            v52 = sub_15E1B70(v111[0]);
            v53 = v52;
            if ( v52 )
              ++*(_DWORD *)(v52 + 8);
            if ( v49 )
            {
              v37 = (*(_DWORD *)(v49 + 8))-- == 1;
              if ( v37 )
                sub_15D7BC0(v93, v49);
            }
            if ( v50 )
            {
              v37 = (*(_DWORD *)(v50 + 8))-- == 1;
              if ( v37 )
                sub_15D7BC0(v51, v50);
            }
            v49 = v53;
          }
          while ( 1 )
          {
            if ( v55 <= 13 )
            {
              if ( v55 == 10 )
                ++*((_DWORD *)v54 + 3);
            }
            else if ( v55 != 32 )
            {
              if ( v55 != 59 )
              {
LABEL_105:
                v54 = v109;
                goto LABEL_91;
              }
              *((_DWORD *)v54 + 2) = std::istream::get((std::istream *)*v54);
LABEL_110:
              v56 = v110;
              v57 = sub_2F7D10(*(_QWORD *)v107, v49, 0);
              v58 = (_QWORD *)*v56;
              v59 = v57;
              if ( *v56 )
              {
                v60 = *((unsigned int *)v58 - 1);
                if ( (_DWORD)v60 == *((_DWORD *)v58 - 2) )
                {
                  v77 = (unsigned int)(3 * v60 + 1) >> 1;
                  v78 = 4 * v77 + 8;
                  if ( 4 * (int)v60 + 8 >= v78 || (unsigned int)v60 >= v77 )
                  {
                    exception = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(&v105, "Overflow encountered when expanding vector");
                    *exception = (char *)off_1C63128;
                    sub_2333C0(exception + 1, &v105);
                    sub_233E40((__int64)&v105);
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v79 = (unsigned int *)sub_186B300(v58 - 1, v78);
                  v58 = v79 + 2;
                  *v56 = v79 + 2;
                  *v79 = v77;
                  v61 = &v79[v79[1] + 2];
                }
                else
                {
                  v61 = (unsigned int *)v58 + v60;
                }
              }
              else
              {
                v91 = (_QWORD *)sub_186B270(0x10u);
                *v91 = 2;
                v58 = v91 + 1;
                *v56 = v91 + 1;
                v61 = (unsigned int *)(v91 + 1);
              }
              *v61 = v59;
              ++*((_DWORD *)v58 - 1);
              if ( v49 )
              {
                v37 = (*(_DWORD *)(v49 + 8))-- == 1;
                if ( v37 )
LABEL_115:
                  sub_15D7BC0(v93, v49);
              }
              goto LABEL_4;
            }
            v55 = std::istream::get((std::istream *)*v54);
            *((_DWORD *)v54 + 2) = v55;
            if ( v55 <= 8 )
              goto LABEL_105;
          }
        }
      }
      v15 = v109;
      for ( i = *((_DWORD *)v109 + 2); i > 8; *((_DWORD *)v15 + 2) = i )
      {
        if ( i <= 13 )
        {
          if ( i == 10 )
            ++*((_DWORD *)v15 + 3);
        }
        else if ( i != 32 )
        {
          break;
        }
        i = std::istream::get((std::istream *)*v15);
      }
      v17 = 109;
      v18 = "max:";
      while ( i && v17 == i )
      {
        ++v18;
        i = std::istream::get((std::istream *)*v15);
        v17 = *v18;
        *((_DWORD *)v15 + 2) = i;
        if ( !(_BYTE)v17 )
        {
          sub_2DF4E0(
            (unsigned int)v102,
            (unsigned int)v107,
            v17,
            v8,
            v9,
            v10,
            v93,
            (__int64)v95,
            v96,
            v97,
            (__int64)v98);
          v49 = v102[0];
          v93 = v102[1];
          while ( 1 )
          {
            v70 = v109;
            v71 = *((_DWORD *)v109 + 2);
            if ( v71 > 8 )
              break;
LABEL_117:
            if ( *((_DWORD *)v70 + 2) == -1 )
              goto LABEL_134;
            sub_2DF4E0(
              (unsigned int)&v105,
              (unsigned int)v107,
              v62,
              v63,
              v64,
              v65,
              v93,
              (__int64)v95,
              v96,
              v97,
              (__int64)v98);
            v66 = v105;
            v67 = v106;
            v68 = sub_15E1B70(v111[0]);
            v69 = v68;
            if ( v68 )
              ++*(_DWORD *)(v68 + 8);
            if ( v49 )
            {
              v37 = (*(_DWORD *)(v49 + 8))-- == 1;
              if ( v37 )
                sub_15D7BC0(v93, v49);
            }
            if ( v66 )
            {
              v37 = (*(_DWORD *)(v66 + 8))-- == 1;
              if ( v37 )
                sub_15D7BC0(v67, v66);
            }
            v49 = v69;
          }
          while ( 1 )
          {
            if ( v71 <= 13 )
            {
              if ( v71 == 10 )
                ++*((_DWORD *)v70 + 3);
            }
            else if ( v71 != 32 )
            {
              if ( v71 != 59 )
              {
LABEL_131:
                v70 = v109;
                goto LABEL_117;
              }
              *((_DWORD *)v70 + 2) = std::istream::get((std::istream *)*v70);
LABEL_134:
              v72 = (unsigned int **)v110;
              v73 = sub_2F7D10(*(_QWORD *)v107, v49, 0);
              v74 = *v72;
              if ( *v72 )
              {
                v75 = *(v74 - 1);
                if ( (_DWORD)v75 == *(v74 - 2) )
                {
                  v80 = (unsigned int)(3 * v75 + 1) >> 1;
                  v81 = 4 * v80 + 8;
                  if ( 4 * (int)v75 + 8 >= v81 || (unsigned int)v75 >= v80 )
                  {
                    v4 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(&v105, "Overflow encountered when expanding vector");
                    *v4 = (char *)off_1C63128;
                    sub_2333C0(v4 + 1, &v105);
                    sub_233E40((__int64)&v105);
                    __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v82 = (unsigned int *)sub_186B300(v74 - 2, v81);
                  v74 = v82 + 2;
                  *v72 = v82 + 2;
                  *v82 = v80;
                  v76 = &v82[v82[1] + 2];
                }
                else
                {
                  v76 = &v74[v75];
                }
              }
              else
              {
                v92 = (_QWORD *)sub_186B270(0x10u);
                *v92 = 2;
                v74 = (unsigned int *)(v92 + 1);
                *v72 = v74;
                v76 = v74;
              }
              *v76 = v73;
              ++*(v74 - 1);
              if ( v49 )
              {
                v37 = (*(_DWORD *)(v49 + 8))-- == 1;
                if ( v37 )
                  goto LABEL_115;
              }
              goto LABEL_4;
            }
            v71 = std::istream::get((std::istream *)*v70);
            *((_DWORD *)v70 + 2) = v71;
            if ( v71 <= 8 )
              goto LABEL_131;
          }
        }
      }
      sub_2DF4E0((_DWORD)v95, (unsigned int)v107, v17, v8, v9, v10, v93, (__int64)v95, v96, v97, (__int64)v98);
      v23 = *(_QWORD *)v103;
      v24 = v104;
      v25 = v109;
      v26 = *(_QWORD *)v103;
      v27 = *((_DWORD *)v109 + 2);
      if ( v27 == -1 )
        goto LABEL_79;
LABEL_19:
      if ( v27 > 8 )
        goto LABEL_46;
LABEL_20:
      v28 = 62;
      v29 = ">=";
      do
      {
        if ( !v27 || v27 != v28 )
        {
          v30 = v109;
          j = *((_DWORD *)v109 + 2);
          if ( j <= 8 )
            goto LABEL_32;
          while ( 1 )
          {
            if ( j <= 13 )
            {
              if ( j == 10 )
                ++*((_DWORD *)v30 + 3);
            }
            else if ( j != 32 )
            {
              if ( j == 61 )
              {
                *((_DWORD *)v30 + 2) = std::istream::get((std::istream *)*v30);
                v39 = v108[0];
                sub_2DF050(&v105, v107);
                v40 = v105;
                v41 = v106;
                v42 = sub_15E1B70(v39);
                v26 = v42;
                if ( v42 )
                  ++*(_DWORD *)(v42 + 8);
                if ( v23 )
                {
                  v37 = (*(_DWORD *)(v23 + 8))-- == 1;
                  if ( v37 )
                    sub_15D7BC0(v24, v23);
                }
                if ( v40 )
                {
                  v37 = (*(_DWORD *)(v40 + 8))-- == 1;
                  if ( v37 )
                    sub_15D7BC0(v41, v40);
                }
                v43 = v109;
                v44 = *((_DWORD *)v109 + 2);
                if ( v44 <= 8 )
                  goto LABEL_79;
                while ( 1 )
                {
                  if ( v44 <= 13 )
                  {
                    if ( v44 == 10 )
                      ++*((_DWORD *)v43 + 3);
                  }
                  else if ( v44 != 32 )
                  {
                    if ( v44 == 59 )
                      goto LABEL_150;
                    goto LABEL_79;
                  }
                  v44 = std::istream::get((std::istream *)*v43);
                  *((_DWORD *)v43 + 2) = v44;
                  if ( v44 <= 8 )
                    goto LABEL_79;
                }
              }
LABEL_28:
              v30 = v109;
              for ( j = *((_DWORD *)v109 + 2); j > 8; *((_DWORD *)v30 + 2) = j )
              {
                if ( j <= 13 )
                {
                  if ( j == 10 )
                    ++*((_DWORD *)v30 + 3);
                }
                else if ( j != 32 )
                {
                  break;
                }
                j = std::istream::get((std::istream *)*v30);
              }
LABEL_32:
              v32 = 60;
              v33 = "<=";
              while ( j && j == v32 )
              {
                j = std::istream::get((std::istream *)*v30);
                v32 = *++v33;
                *((_DWORD *)v30 + 2) = j;
                if ( !(_BYTE)v32 )
                {
                  sub_2DF050(&v105, v107);
                  v83 = v105;
                  v84 = v106;
                  v85 = sub_15E1B70(v111[0]);
                  v26 = v85;
                  if ( v85 )
                    ++*(_DWORD *)(v85 + 8);
                  if ( v23 )
                  {
                    v37 = (*(_DWORD *)(v23 + 8))-- == 1;
                    if ( v37 )
                      sub_15D7BC0(v24, v23);
                  }
                  if ( v83 )
                  {
                    v37 = (*(_DWORD *)(v83 + 8))-- == 1;
                    if ( v37 )
                      sub_15D7BC0(v84, v83);
                  }
                  v43 = v109;
                  v86 = *((_DWORD *)v109 + 2);
                  if ( v86 <= 8 )
                    goto LABEL_79;
                  if ( v86 <= 13 )
                    goto LABEL_166;
                  while ( 1 )
                  {
                    if ( v86 != 32 )
                    {
                      if ( v86 != 59 )
                        goto LABEL_79;
                      goto LABEL_150;
                    }
                    while ( 1 )
                    {
                      v86 = std::istream::get((std::istream *)*v43);
                      *((_DWORD *)v43 + 2) = v86;
                      if ( v86 <= 8 )
                        goto LABEL_79;
                      if ( v86 > 13 )
                        break;
LABEL_166:
                      if ( v86 == 10 )
                        ++*((_DWORD *)v43 + 3);
                    }
                  }
                }
              }
              sub_2DF4E0(
                (unsigned int)&v105,
                (unsigned int)v107,
                v32,
                v20,
                v21,
                v22,
                (_DWORD)v94,
                (__int64)v95,
                v96,
                v97,
                (__int64)v98);
              v34 = v105;
              v35 = v106;
              v36 = sub_15E1B70(v111[0]);
              v26 = v36;
              if ( v36 )
                ++*(_DWORD *)(v36 + 8);
              if ( v23 )
              {
                v37 = (*(_DWORD *)(v23 + 8))-- == 1;
                if ( v37 )
                  sub_15D7BC0(v24, v23);
              }
              if ( v34 )
              {
                v37 = (*(_DWORD *)(v34 + 8))-- == 1;
                if ( v37 )
                  sub_15D7BC0(v35, v34);
              }
              v25 = v109;
              v27 = *((_DWORD *)v109 + 2);
              if ( v27 == -1 )
                goto LABEL_79;
              v23 = v26;
              if ( v27 <= 8 )
                goto LABEL_20;
LABEL_46:
              if ( v27 > 13 )
              {
                if ( v27 == 32 )
                  goto LABEL_48;
                goto LABEL_20;
              }
              if ( v27 == 10 )
                ++*((_DWORD *)v25 + 3);
LABEL_48:
              v27 = std::istream::get((std::istream *)*v25);
              *((_DWORD *)v25 + 2) = v27;
              goto LABEL_19;
            }
            j = std::istream::get((std::istream *)*v30);
            *((_DWORD *)v30 + 2) = j;
            if ( j <= 8 )
              goto LABEL_28;
          }
        }
        v27 = std::istream::get((std::istream *)*v25);
        v28 = *++v29;
        *((_DWORD *)v25 + 2) = v27;
      }
      while ( (_BYTE)v28 );
      sub_2DF050(&v105, v107);
      v87 = v105;
      v88 = v106;
      v89 = sub_15E1B70(v111[0]);
      v26 = v89;
      if ( v89 )
        ++*(_DWORD *)(v89 + 8);
      if ( v23 )
      {
        v37 = (*(_DWORD *)(v23 + 8))-- == 1;
        if ( v37 )
          sub_15D7BC0(v24, v23);
      }
      if ( v87 )
      {
        v37 = (*(_DWORD *)(v87 + 8))-- == 1;
        if ( v37 )
          sub_15D7BC0(v88, v87);
      }
      v43 = v109;
      v90 = *((_DWORD *)v109 + 2);
      if ( v90 <= 8 )
        goto LABEL_79;
      if ( v90 <= 13 )
      {
LABEL_183:
        if ( v90 == 10 )
          ++*((_DWORD *)v43 + 3);
        goto LABEL_181;
      }
      while ( v90 == 32 )
      {
LABEL_181:
        v90 = std::istream::get((std::istream *)*v43);
        *((_DWORD *)v43 + 2) = v90;
        if ( v90 <= 8 )
          goto LABEL_79;
        if ( v90 <= 13 )
          goto LABEL_183;
      }
      if ( v90 == 59 )
LABEL_150:
        *((_DWORD *)v43 + 2) = std::istream::get((std::istream *)*v43);
LABEL_79:
      sub_2F2620(v107[0], v26, v19, v20, v21, v22, v94);
      if ( v26 )
      {
        v37 = (*(_DWORD *)(v26 + 8))-- == 1;
        if ( v37 )
          sub_15D7BC0(v24, v26);
      }
    }
  }
}

