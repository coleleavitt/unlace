__int64 __fastcall sub_AE2900(_QWORD *a1, __int64 a2, int a3)
{
  char **v3; // rbx
  char **v4; // r13
  char **exception; // rbx
  char **v6; // rbx
  char **v7; // rbx
  char **v8; // r12
  __int64 *v12; // rax
  int v13; // edi
  __int64 v14; // rax
  __int64 *v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // edx
  __int64 *v18; // rsi
  __int64 v19; // rdx
  __int64 *v20; // r8
  __int64 *i; // rax
  __int64 v22; // rdx
  unsigned int v23; // eax
  __int16 v24; // dx
  __int64 v25; // rax
  __int64 v26; // r12
  unsigned int v27; // edx
  __int64 v29; // r13
  _QWORD *v30; // rdx
  unsigned int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  _QWORD *v34; // rcx
  __int64 v35; // rax
  int v36; // edx
  __int64 v37; // rax
  _QWORD *v38; // rdx
  unsigned int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  __int64 *v42; // rcx
  int v43; // r13d
  char v45; // dl
  __int64 v46; // rax
  unsigned __int8 v47; // r12
  int v48; // r14d
  _QWORD *v49; // rcx
  __int64 v50; // rax
  __int64 *v51; // rax
  __int64 v52; // rax
  __int64 v53; // r13
  unsigned int v54; // r12d
  unsigned int v55; // ecx
  unsigned int *v56; // rax
  __int64 v57; // rcx
  unsigned int v58; // r12d
  unsigned int v59; // ecx
  unsigned int *v60; // rax
  __int64 v61; // rcx
  char v62; // dl
  unsigned __int8 v63; // r14
  int v64; // r12d
  _QWORD *v65; // rdx
  __int64 v66; // rax
  __int64 *v67; // rax
  unsigned int v68; // r15d
  unsigned int v69; // ecx
  unsigned int *v70; // rax
  __int64 v71; // rax
  _QWORD *v72; // rax
  unsigned int v73; // r15d
  unsigned int v74; // edx
  unsigned int *v75; // rax
  __int64 v76; // rax
  _QWORD *v77; // rax
  unsigned int v78; // edx
  __int64 v79; // rcx
  int v80; // edx
  __int64 *v81; // rcx
  __int64 v82; // rdx
  int v83; // eax
  _QWORD *v84; // rdx
  _QWORD *v85; // rdx
  unsigned int v86; // r12d
  unsigned int v87; // ecx
  unsigned int *v88; // rdx
  __int64 v89; // rcx
  _QWORD *v90; // rax
  unsigned int v91; // r13d
  unsigned int v92; // ecx
  unsigned int *v93; // rax
  __int64 v94; // rsi
  _QWORD *v95; // rax
  _QWORD *v96; // rax
  __int64 v97[11]; // [rsp+10h] [rbp-58h] BYREF

  v12 = (__int64 *)a1[18];
  v13 = *(_DWORD *)(a2 + 12);
  v14 = *v12;
  v15 = *(__int64 **)(v14 + 96);
  v16 = *(unsigned int *)(v14 + 104);
  v17 = v16 - 1;
  v16 *= 16;
  v18 = (__int64 *)((char *)v15 + v16);
  v19 = 16LL * (v13 & v17);
  v20 = &v15[(unsigned __int64)v19 / 8];
  if ( v19 != v16 )
  {
    for ( i = &v15[(unsigned __int64)v19 / 8]; v18 != i; i += 2 )
    {
      v22 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v22 + 12) == v13 && a2 == v22 )
        {
LABEL_20:
          v29 = i[1];
          if ( v29 )
          {
            v30 = (_QWORD *)a1[7];
            ++*(_DWORD *)(v29 + 8);
            if ( v30 )
            {
              v31 = *((_DWORD *)v30 - 1);
              if ( v31 == *((_DWORD *)v30 - 2) )
              {
                v54 = (3 * v31 + 1) >> 1;
                v55 = 8 * v54 + 8;
                if ( 8 * v31 + 8 >= v55 || v31 >= v54 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v97, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v97);
                  sub_233E40((__int64)v97);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v56 = (unsigned int *)sub_186B300(v30 - 1, v55);
                v57 = v56[1];
                v30 = v56 + 2;
                *v56 = v54;
                a1[7] = v56 + 2;
                LODWORD(v56) = v57;
                v34 = &v30[v57];
                v33 = (_DWORD)v56 + 1;
              }
              else
              {
                v32 = v31;
                v33 = v31 + 1;
                v34 = &v30[v32];
              }
            }
            else
            {
              v84 = (_QWORD *)sub_186B270(0x18u);
              *v84 = 2;
              v33 = 1;
              v30 = v84 + 1;
              a1[7] = v30;
              v34 = v30;
            }
            *v34 = v29;
            *((_DWORD *)v30 - 1) = v33;
            if ( a2 != v29 )
            {
              v35 = a1[5];
              if ( v35 )
              {
                v36 = *(_DWORD *)(v35 - 4);
                if ( v36 )
                  *(_BYTE *)(v35 + 16LL * (unsigned int)(v36 - 1) + 8) |= 2u;
              }
            }
            return 1;
          }
LABEL_8:
          v23 = *(_DWORD *)(a2 + 8);
          if ( !a3 )
            goto LABEL_36;
          goto LABEL_9;
        }
      }
      else if ( !v22 )
      {
        goto LABEL_8;
      }
    }
  }
  if ( v15 == v20 )
    goto LABEL_8;
  while ( 1 )
  {
    v37 = *v15;
    if ( (unsigned __int64)*v15 <= 1 )
      break;
    if ( *(_DWORD *)(v37 + 12) == v13 && a2 == v37 )
    {
      i = v15;
      goto LABEL_20;
    }
LABEL_32:
    v15 += 2;
    if ( v20 == v15 )
      goto LABEL_8;
  }
  if ( v37 )
    goto LABEL_32;
  v23 = *(_DWORD *)(a2 + 8);
  if ( !a3 )
  {
LABEL_36:
    v38 = (_QWORD *)a1[7];
    *(_DWORD *)(a2 + 8) = v23 + 1;
    if ( v38 )
    {
      v39 = *((_DWORD *)v38 - 1);
      if ( v39 == *((_DWORD *)v38 - 2) )
      {
        v58 = (3 * v39 + 1) >> 1;
        v59 = 8 * v58 + 8;
        if ( 8 * v39 + 8 >= v59 || v39 >= v58 )
        {
          v7 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v97, "Overflow encountered when expanding vector");
          *v7 = (char *)off_1C63128;
          sub_2333C0(v7 + 1, v97);
          sub_233E40((__int64)v97);
          __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v60 = (unsigned int *)sub_186B300(v38 - 1, v59);
        v61 = v60[1];
        v38 = v60 + 2;
        *v60 = v58;
        a1[7] = v60 + 2;
        LODWORD(v60) = v61;
        v42 = &v38[v61];
        v41 = (_DWORD)v60 + 1;
      }
      else
      {
        v40 = v39;
        v41 = v39 + 1;
        v42 = &v38[v40];
      }
    }
    else
    {
      v85 = (_QWORD *)sub_186B270(0x18u);
      *v85 = 2;
      v41 = 1;
      v38 = v85 + 1;
      a1[7] = v38;
      v42 = v38;
    }
    *v42 = a2;
    *((_DWORD *)v38 - 1) = v41;
    return 1;
  }
LABEL_9:
  v24 = *(_WORD *)(a2 + 4);
  if ( v23 <= 1 || a2 == a1[15] )
  {
    v43 = 0;
    goto LABEL_41;
  }
  if ( v24 )
  {
    if ( v24 == 2 )
      goto LABEL_55;
    if ( v24 != 1 )
    {
LABEL_44:
      sub_1872CE0("");
      sub_1873130(114, 226);
    }
LABEL_64:
    sub_AE2070(a1, a2);
    return 1;
  }
  if ( !*(_DWORD *)(a2 + 24) )
  {
    v25 = a1[7];
LABEL_14:
    v26 = a1[1];
    *(_DWORD *)(a2 + 8) += 2;
    if ( v25 )
    {
      v27 = *(_DWORD *)(v25 - 4);
      if ( v27 == *(_DWORD *)(v25 - 8) )
      {
        v91 = (3 * v27 + 1) >> 1;
        v92 = 8 * v91 + 8;
        if ( 8 * v27 + 8 >= v92 || v27 >= v91 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v97, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v97);
          sub_233E40((__int64)v97);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v93 = (unsigned int *)sub_186B300((void *)(v25 - 8), v92);
        v94 = v93[1];
        *v93 = v91;
        a1[7] = v93 + 2;
        *(_QWORD *)&v93[2 * v94 + 2] = a2;
        v93[1] = v94 + 1;
      }
      else
      {
        *(_QWORD *)(v25 + 8LL * v27) = a2;
        *(_DWORD *)(v25 - 4) = v27 + 1;
      }
    }
    else
    {
      v72 = (_QWORD *)sub_186B270(0x18u);
      v72[1] = a2;
      a1[7] = v72 + 1;
      *v72 = 0x100000002LL;
    }
    if ( (*(_DWORD *)(a2 + 8))-- == 1 )
      sub_15D7BC0(v26, a2);
    return 1;
  }
LABEL_55:
  v52 = sub_1680FB0(a1[4], a2, 0);
  v53 = v52;
  if ( v52 )
  {
    ++*(_DWORD *)(v52 + 8);
    v77 = (_QWORD *)a1[7];
    if ( v77 )
    {
      v78 = *((_DWORD *)v77 - 1);
      if ( v78 == *((_DWORD *)v77 - 2) )
      {
        v86 = (3 * v78 + 1) >> 1;
        v87 = 8 * v86 + 8;
        if ( 8 * v78 + 8 >= v87 || v78 >= v86 )
        {
          v8 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v97, "Overflow encountered when expanding vector");
          *v8 = (char *)off_1C63128;
          sub_2333C0(v8 + 1, v97);
          sub_233E40((__int64)v97);
          __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v88 = (unsigned int *)sub_186B300(v77 - 1, v87);
        v77 = v88 + 2;
        v89 = v88[1];
        *v88 = v86;
        a1[7] = v88 + 2;
        LODWORD(v88) = v89;
        v81 = &v77[v89];
        v80 = (_DWORD)v88 + 1;
      }
      else
      {
        v79 = v78;
        v80 = v78 + 1;
        v81 = &v77[v79];
      }
    }
    else
    {
      v96 = (_QWORD *)sub_186B270(0x18u);
      v80 = 1;
      *v96 = 2;
      v77 = v96 + 1;
      a1[7] = v77;
      v81 = v77;
    }
    *v81 = v53;
    *((_DWORD *)v77 - 1) = v80;
    if ( a2 != v53 )
    {
      v82 = a1[5];
      if ( v82 )
      {
        v83 = *(_DWORD *)(v82 - 4);
        if ( v83 )
          *(_BYTE *)(v82 + 16LL * (unsigned int)(v83 - 1) + 8) |= 2u;
      }
    }
    return 1;
  }
  v24 = *(_WORD *)(a2 + 4);
  v43 = 1;
LABEL_41:
  if ( v24 == 1 )
    goto LABEL_64;
  if ( v24 == 2 )
  {
    v45 = 3;
    if ( a3 != 3 )
      v45 = (a3 - 1) & 3;
    v46 = a1[7];
    v47 = v45;
    if ( v46 )
      v48 = *(_DWORD *)(v46 - 4);
    else
      v48 = 0;
    v49 = (_QWORD *)a1[5];
    if ( v49 )
    {
      v50 = *((unsigned int *)v49 - 1);
      if ( (_DWORD)v50 == *((_DWORD *)v49 - 2) )
      {
        v73 = (unsigned int)(3 * v50 + 1) >> 1;
        v74 = 16 * v73 + 8;
        if ( 16 * (int)v50 + 8 >= v74 || (unsigned int)v50 >= v73 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v97, "Overflow encountered when expanding vector");
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, v97);
          sub_233E40((__int64)v97);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v75 = (unsigned int *)sub_186B300(v49 - 1, v74);
        v49 = v75 + 2;
        *v75 = v73;
        v76 = v75[1];
        a1[5] = v49;
        v51 = &v49[2 * v76];
      }
      else
      {
        v51 = &v49[2 * v50];
      }
    }
    else
    {
      v90 = (_QWORD *)sub_186B270(0x28u);
      *v90 = 2;
      v49 = v90 + 1;
      a1[5] = v90 + 1;
      v51 = v90 + 1;
    }
    *v51 = a2;
    *((_DWORD *)v51 + 3) = v48;
    *((_DWORD *)v51 + 2) = v43 | (16 * v47);
    ++*((_DWORD *)v49 - 1);
    return 0;
  }
  else
  {
    if ( v24 )
      goto LABEL_44;
    v25 = a1[7];
    if ( !*(_DWORD *)(a2 + 24) )
      goto LABEL_14;
    v62 = 3;
    if ( a3 != 3 )
      v62 = (a3 - 1) & 3;
    v63 = v62;
    if ( v25 )
      v64 = *(_DWORD *)(v25 - 4);
    else
      v64 = 0;
    v65 = (_QWORD *)a1[5];
    if ( v65 )
    {
      v66 = *((unsigned int *)v65 - 1);
      if ( (_DWORD)v66 == *((_DWORD *)v65 - 2) )
      {
        v68 = (unsigned int)(3 * v66 + 1) >> 1;
        v69 = 16 * v68 + 8;
        if ( 16 * (int)v66 + 8 >= v69 || (unsigned int)v66 >= v68 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v97, "Overflow encountered when expanding vector");
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, v97);
          sub_233E40((__int64)v97);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v70 = (unsigned int *)sub_186B300(v65 - 1, v69);
        v65 = v70 + 2;
        *v70 = v68;
        v71 = v70[1];
        a1[5] = v65;
        v67 = &v65[2 * v71];
      }
      else
      {
        v67 = &v65[2 * v66];
      }
    }
    else
    {
      v95 = (_QWORD *)sub_186B270(0x28u);
      *v95 = 2;
      v65 = v95 + 1;
      a1[5] = v95 + 1;
      v67 = v95 + 1;
    }
    *v67 = a2;
    *((_DWORD *)v67 + 3) = v64;
    *((_DWORD *)v67 + 2) = v43 | (16 * v63);
    ++*((_DWORD *)v65 - 1);
    return 0;
  }
}

