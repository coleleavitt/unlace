__int64 __fastcall sub_4D6B40(__int64 *a1, _QWORD *a2, __int64 *a3)
{
  char **exception; // r12
  char **v4; // r12
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 *v8; // rbx
  __int64 *v9; // r14
  void *v10; // rbp
  __int64 (__fastcall *v11)(__int64, __int64); // rdx
  char v12; // al
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rax
  int v16; // r8d
  int v17; // r9d
  unsigned __int64 v18; // r15
  __int64 *v19; // rbp
  __int64 v20; // rsi
  bool v21; // zf
  _QWORD *v22; // rax
  unsigned int v23; // ebp
  __int64 v24; // rax
  __int64 v25; // r15
  unsigned int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  __int64 *v29; // rcx
  unsigned int v30; // ebp
  __int64 v31; // rbp
  unsigned int v32; // eax
  __int64 v33; // rdx
  int v34; // eax
  __int64 *v35; // rdx
  void *v36; // rdi
  __int64 *v37; // r15
  _QWORD *v38; // rax
  unsigned int v39; // ecx
  size_t v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rdi
  unsigned int v45; // edx
  size_t v46; // rsi
  __int64 v47; // rax
  _QWORD *v48; // rax
  void (__fastcall ***v49)(_QWORD); // rbp
  void (__fastcall ***v50)(_QWORD); // rbp
  int v51; // ebp
  void *v52; // rdi
  char *v53; // rcx
  char *v54; // rax
  __int64 v55; // rdx
  __int64 result; // rax
  __int64 *v57; // rbp
  unsigned __int64 v58; // r13
  __int64 v59; // rsi
  __int64 *v60; // rbx
  unsigned __int64 v61; // rbp
  __int64 v62; // rsi
  __int64 v63; // rax
  __int64 v64; // rbp
  __int64 v65; // rsi
  __int64 v66; // rdi
  __int64 v67; // [rsp+0h] [rbp-1C8h]
  __int64 *v68; // [rsp+8h] [rbp-1C0h]
  __int64 *v69; // [rsp+10h] [rbp-1B8h]
  __int64 *v70; // [rsp+10h] [rbp-1B8h]
  int *v71; // [rsp+18h] [rbp-1B0h]
  __int64 *v72; // [rsp+20h] [rbp-1A8h]
  int *v73; // [rsp+28h] [rbp-1A0h]
  void *v74; // [rsp+28h] [rbp-1A0h]
  void *v75; // [rsp+30h] [rbp-198h]
  void *v76; // [rsp+38h] [rbp-190h] BYREF
  void *v77; // [rsp+40h] [rbp-188h] BYREF
  void *v78; // [rsp+48h] [rbp-180h] BYREF
  int v79[2]; // [rsp+50h] [rbp-178h]
  int v80; // [rsp+58h] [rbp-170h]
  int v81[2]; // [rsp+60h] [rbp-168h]
  int v82; // [rsp+68h] [rbp-160h]
  __int64 v83; // [rsp+70h] [rbp-158h] BYREF
  void *v84; // [rsp+78h] [rbp-150h]
  void *v85; // [rsp+80h] [rbp-148h]
  int v86; // [rsp+88h] [rbp-140h]
  int v87[2]; // [rsp+90h] [rbp-138h] BYREF
  int v88; // [rsp+98h] [rbp-130h]
  int v89; // [rsp+A0h] [rbp-128h]
  int v90; // [rsp+A8h] [rbp-120h]
  int v91[2]; // [rsp+B0h] [rbp-118h] BYREF
  int v92; // [rsp+B8h] [rbp-110h]
  __int16 v93; // [rsp+BCh] [rbp-10Ch]
  int v94; // [rsp+C0h] [rbp-108h]
  int v95; // [rsp+C8h] [rbp-100h]
  int v96; // [rsp+CCh] [rbp-FCh]
  int v97; // [rsp+D0h] [rbp-F8h]
  int v98[4]; // [rsp+D8h] [rbp-F0h]
  int v99[4]; // [rsp+E8h] [rbp-E0h]
  void *v100; // [rsp+F8h] [rbp-D0h]
  int v101[2]; // [rsp+100h] [rbp-C8h]
  int v102; // [rsp+108h] [rbp-C0h] BYREF
  int v103; // [rsp+110h] [rbp-B8h]
  int v104; // [rsp+118h] [rbp-B0h]
  int v105; // [rsp+120h] [rbp-A8h]
  int v106; // [rsp+128h] [rbp-A0h]
  int v107; // [rsp+130h] [rbp-98h]
  int v108; // [rsp+138h] [rbp-90h]
  int v109; // [rsp+140h] [rbp-88h]
  int v110; // [rsp+148h] [rbp-80h]
  int v111; // [rsp+150h] [rbp-78h]
  char v112; // [rsp+158h] [rbp-70h]

  v69 = a3;
  *(_QWORD *)v79 = a3[1];
  v6 = *(_QWORD *)v79;
  *(_QWORD *)v81 = *(_QWORD *)v79;
  v68 = &v83;
  sub_1624F90(&v83, *(_QWORD *)v79);
  *(_QWORD *)v87 = 0;
  v73 = &v102;
  v100 = &v102;
  *(_QWORD *)v91 = *(_QWORD *)v79;
  *(_QWORD *)v101 = 0x1000000000LL;
  v71 = v91;
  v92 = 256;
  v93 = 0;
  v96 = 0;
  v72 = (__int64 *)v87;
  *(_OWORD *)v98 = 0;
  *(_OWORD *)v99 = 0;
  sub_14DC230(v91, v87);
  sub_18572D0(v87);
  v7 = *a1;
  v76 = nullptr;
  (*(void (__fastcall **)(void **, __int64 *))(v7 + 200))(&v77, a1);
  (*(void (__fastcall **)(void **, __int64 *))(*a1 + 208))(&v78, a1);
  v8 = nullptr;
  v9 = nullptr;
  while ( 1 )
  {
    v10 = v78;
    v11 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v77 + 40LL);
    if ( v11 == sub_4C9890 )
    {
      if ( !(*(unsigned __int8 (**)(void))(*(_QWORD *)v77 + 16LL))() )
        goto LABEL_6;
      v12 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v10 + 16LL))(v10);
    }
    else
    {
      v12 = v11((__int64)v77, (__int64)v78);
    }
    if ( v12 )
      break;
LABEL_6:
    v15 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v77 + 24LL))(v77);
    (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v15 + 24LL))(v15, &v76);
    if ( v8 )
    {
      v18 = (unsigned __int64)&v8[*((unsigned int *)v8 - 1)];
      if ( (unsigned __int64)v8 < v18 )
      {
        v19 = v8;
        do
        {
          while ( 1 )
          {
            v20 = *v19;
            if ( *v19 )
            {
              v21 = (*(_DWORD *)(v20 + 8))-- == 1;
              if ( v21 )
                break;
            }
            if ( (unsigned __int64)++v19 >= v18 )
              goto LABEL_13;
          }
          sub_15D7BC0(v6, v20);
          ++v19;
        }
        while ( (unsigned __int64)v19 < v18 );
      }
LABEL_13:
      v22 = v76;
      *((_DWORD *)v8 - 1) = 0;
      if ( !v22 )
      {
        v30 = 0;
        if ( HIBYTE(v92) )
          goto LABEL_33;
        goto LABEL_24;
      }
    }
    else
    {
      v22 = v76;
      if ( !v76 )
        goto LABEL_98;
    }
    v23 = 0;
    while ( v23 < *((_DWORD *)v22 - 1) )
    {
      v67 = sub_1625BE0(v68, v22[v23], *(_QWORD *)(*a2 + 8LL * v23));
      sub_15DB5C0(v6, v23, *(_QWORD *)(*a2 + 8LL * v23));
      v24 = sub_15E1B70(v6);
      v25 = v24;
      if ( v24 )
        ++*(_DWORD *)(v24 + 8);
      if ( v8 )
      {
        v26 = *((_DWORD *)v8 - 1);
        if ( v26 == *((_DWORD *)v8 - 2) )
        {
          v39 = (3 * v26 + 1) >> 1;
          v40 = 8 * v39 + 8;
          if ( 8 * v26 + 8 >= (unsigned int)v40 || v26 >= v39 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v72, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v72);
            sub_233E40((__int64)v72);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          LODWORD(v67) = (3 * v26 + 1) >> 1;
          v41 = sub_186B300(v8 - 1, v40);
          v8 = (__int64 *)(v41 + 8);
          *(_DWORD *)v41 = v67;
          LODWORD(v41) = *(_DWORD *)(v41 + 4);
          v29 = &v8[(unsigned int)v41];
          v28 = v41 + 1;
        }
        else
        {
          v27 = v26;
          v28 = v26 + 1;
          v29 = &v8[v27];
        }
      }
      else
      {
        v48 = (_QWORD *)sub_186B270(0x18u);
        *v48 = 2;
        v8 = v48 + 1;
        v28 = 1;
        v29 = v8;
      }
      *v29 = v25;
      ++v23;
      *((_DWORD *)v8 - 1) = v28;
      v22 = v76;
      if ( !v76 )
        goto LABEL_22;
    }
    if ( v8 )
    {
LABEL_22:
      v30 = *((_DWORD *)v8 - 1);
      goto LABEL_23;
    }
LABEL_98:
    v8 = nullptr;
    v30 = 0;
LABEL_23:
    if ( HIBYTE(v92) )
    {
LABEL_33:
      v37 = v69;
      sub_14E1930((int)v71, v67, (int)v68, (int)v69, (__int64)v71, (__int64)v72, (__int64)v73, v75, (int)v76);
      v31 = *v37;
      if ( *v37 )
        goto LABEL_28;
      goto LABEL_34;
    }
LABEL_24:
    if ( (_BYTE)v92 )
    {
      if ( (unsigned int)sub_14DD000(v71, v30, v8, v69) != 5 )
        goto LABEL_26;
    }
    else if ( (unsigned int)sub_14DC740(
                              (int)v71,
                              v30,
                              (int)v8,
                              (int)v69,
                              v16,
                              v17,
                              v67,
                              (int)v68,
                              (int)v69,
                              (int)v71,
                              (int)v72,
                              v73,
                              (int)v75,
                              (int)v76,
                              (int)v77,
                              (int)v78,
                              v79[0],
                              v80,
                              v81[0],
                              v82,
                              v83,
                              (int)v84,
                              (int)v85,
                              v86,
                              v87[0],
                              v88,
                              v89,
                              v90,
                              v91[0],
                              0,
                              v94,
                              v95,
                              v97,
                              v98[0],
                              v98[2],
                              v99[0],
                              v99[2],
                              (int)v100,
                              v101[0],
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              v110) != 5 )
    {
LABEL_26:
      v31 = *v69;
LABEL_27:
      if ( v31 )
        goto LABEL_28;
LABEL_34:
      v31 = 0;
      goto LABEL_35;
    }
    v42 = sub_15E1AF0(v91[0]);
    v31 = v42;
    if ( v42 )
    {
      ++*(_DWORD *)(v42 + 8);
      v43 = *v69;
      if ( !*v69 )
      {
        *v69 = v42;
LABEL_28:
        ++*(_DWORD *)(v31 + 8);
        if ( !v9 )
          goto LABEL_36;
        goto LABEL_29;
      }
      v44 = v69[1];
      v21 = (*(_DWORD *)(v43 + 8))-- == 1;
      if ( !v21 )
      {
        *v69 = v42;
        goto LABEL_28;
      }
LABEL_111:
      sub_15D7BC0(v44, v43);
      *v69 = v31;
      goto LABEL_27;
    }
    v43 = *v69;
    if ( *v69 )
    {
      v44 = v69[1];
      v21 = (*(_DWORD *)(v43 + 8))-- == 1;
      if ( v21 )
        goto LABEL_111;
      *v69 = 0;
      v31 = 0;
    }
    else
    {
      *v69 = 0;
      v31 = 0;
    }
LABEL_35:
    if ( !v9 )
    {
LABEL_36:
      v38 = (_QWORD *)sub_186B270(0x18u);
      v9 = v38 + 1;
      *v38 = 2;
      v34 = 1;
      v35 = v9;
      goto LABEL_31;
    }
LABEL_29:
    v32 = *((_DWORD *)v9 - 1);
    if ( v32 == *((_DWORD *)v9 - 2) )
    {
      v45 = (3 * v32 + 1) >> 1;
      v46 = 8 * v45 + 8;
      if ( 8 * v32 + 8 >= (unsigned int)v46 || v32 >= v45 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v72, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v72);
        sub_233E40((__int64)v72);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      LODWORD(v67) = (3 * v32 + 1) >> 1;
      v47 = sub_186B300(v9 - 1, v46);
      v9 = (__int64 *)(v47 + 8);
      *(_DWORD *)v47 = v67;
      LODWORD(v47) = *(_DWORD *)(v47 + 4);
      v35 = &v9[(unsigned int)v47];
      v34 = v47 + 1;
    }
    else
    {
      v33 = v32;
      v34 = v32 + 1;
      v35 = &v9[v33];
    }
LABEL_31:
    v36 = v77;
    *v35 = v31;
    *((_DWORD *)v9 - 1) = v34;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v36 + 32LL))(v36);
  }
  v49 = (void (__fastcall ***)(_QWORD))v78;
  if ( v78 )
  {
    v21 = (*((_DWORD *)v78 + 2))-- == 1;
    if ( v21 )
    {
      (**v49)(v49);
      sub_186B220(v49);
    }
  }
  v50 = (void (__fastcall ***)(_QWORD))v77;
  if ( v77 && (v21 = *((_DWORD *)v77 + 2) == 1, --*((_DWORD *)v77 + 2), v21) )
  {
    (**v50)(v50);
    sub_186B220(v50);
    if ( !v9 )
      goto LABEL_107;
LABEL_57:
    v51 = *((_DWORD *)v9 - 1);
  }
  else
  {
    if ( v9 )
      goto LABEL_57;
LABEL_107:
    v51 = 0;
  }
  if ( (_BYTE)v92 )
  {
    if ( (unsigned int)sub_14E0E20(
                         (int)v71,
                         v51,
                         (int)v9,
                         (int)v69,
                         v13,
                         v14,
                         v67,
                         (int)v68,
                         (int)v69,
                         (int)v71,
                         (int)v72,
                         v73) != 5 )
      goto LABEL_60;
LABEL_100:
    v63 = sub_15E1AF0(v91[0]);
    v64 = v63;
    if ( v63 )
      ++*(_DWORD *)(v63 + 8);
    v65 = *v70;
    if ( *v70 )
    {
      v66 = v70[1];
      v21 = (*(_DWORD *)(v65 + 8))-- == 1;
      if ( v21 )
        sub_15D7BC0(v66, v65);
    }
    *v70 = v64;
  }
  else if ( (unsigned int)sub_14E03D0(
                            (int)v71,
                            v67,
                            (__int64)v68,
                            (int)v69,
                            (int)v71,
                            (int)v72,
                            (int)v73,
                            (int)v75,
                            v76,
                            (int)v77,
                            (int)v78,
                            v79[0],
                            v80,
                            v81[0],
                            v82,
                            v83,
                            (int)v84,
                            (int)v85,
                            v86,
                            v87[0],
                            v88,
                            v89,
                            v90,
                            v91[0],
                            v92,
                            v94,
                            v95,
                            v97,
                            v98[0],
                            v98[2],
                            v99[0],
                            v99[2],
                            (int)v100,
                            v101[0],
                            v102,
                            v103,
                            v104,
                            v105,
                            v106,
                            v107,
                            v108,
                            v109,
                            v110,
                            v111,
                            v112) == 5 )
  {
    goto LABEL_100;
  }
LABEL_60:
  if ( v76 )
    sub_186B220((char *)v76 - 8);
  v52 = v100;
  v53 = (char *)v100 + 8 * (unsigned int)v101[0];
  v54 = (char *)v100;
  if ( v100 != v53 )
  {
    do
    {
      v55 = *(_QWORD *)v54;
      v54 += 8;
      *(_BYTE *)(v55 + 6) &= ~1u;
    }
    while ( v53 != v54 );
  }
  v101[0] = 0;
  if ( v52 && v52 != v74 )
    sub_186B220(v52);
  if ( *(_QWORD *)&v99[2] )
    sub_186B220((void *)(*(_QWORD *)&v99[2] - 8LL));
  if ( *(_QWORD *)v99 )
    sub_186B220((void *)(*(_QWORD *)v99 - 8LL));
  if ( *(_QWORD *)&v98[2] )
    sub_186B220((void *)(*(_QWORD *)&v98[2] - 8LL));
  result = *(_QWORD *)v98;
  if ( *(_QWORD *)v98 )
    result = sub_186B220((void *)(*(_QWORD *)v98 - 8LL));
  if ( v85 )
    result = sub_186B220(v85);
  if ( v84 )
    result = sub_186B220(v84);
  if ( v8 )
  {
    v57 = v8;
    v58 = (unsigned __int64)&v8[*((unsigned int *)v8 - 1)];
    if ( (unsigned __int64)v8 < v58 )
    {
      do
      {
        while ( 1 )
        {
          v59 = *v57;
          if ( *v57 )
          {
            v21 = (*(_DWORD *)(v59 + 8))-- == 1;
            if ( v21 )
              break;
          }
          if ( (unsigned __int64)++v57 >= v58 )
            goto LABEL_86;
        }
        ++v57;
        sub_15D7BC0(v6, v59);
      }
      while ( (unsigned __int64)v57 < v58 );
    }
LABEL_86:
    result = sub_186B220(v8 - 1);
  }
  if ( v9 )
  {
    v60 = v9;
    v61 = (unsigned __int64)&v9[*((unsigned int *)v9 - 1)];
    if ( (unsigned __int64)v9 < v61 )
    {
      do
      {
        while ( 1 )
        {
          v62 = *v60;
          if ( *v60 )
          {
            v21 = (*(_DWORD *)(v62 + 8))-- == 1;
            if ( v21 )
              break;
          }
          if ( (unsigned __int64)++v60 >= v61 )
            return sub_186B220(v9 - 1);
        }
        ++v60;
        sub_15D7BC0(v6, v62);
      }
      while ( (unsigned __int64)v60 < v61 );
    }
    return sub_186B220(v9 - 1);
  }
  return result;
}

