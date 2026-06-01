__int64 __fastcall sub_BECB70(__int64 *a1, unsigned int a2)
{
  char **v2; // r14
  char **exception; // r14
  __int64 v5; // r15
  __int64 v6; // rbx
  __int64 v7; // rax
  void *v8; // rdi
  int v9; // eax
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rdi
  void *v14; // r15
  _DWORD *v15; // rax
  __int64 v16; // rax
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r15
  int v23; // ebx
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // rdi
  int v28; // r15d
  void *v29; // r13
  unsigned int *v30; // r13
  _QWORD *v31; // rax
  unsigned int **v32; // rbx
  __int64 v33; // rax
  unsigned int v34; // r13d
  __int64 v35; // rcx
  unsigned int v36; // edx
  unsigned int *v37; // r15
  unsigned int v38; // eax
  __int64 v39; // r15
  void *v40; // rdi
  int v41; // ecx
  int v42; // r8d
  int v43; // r9d
  __int64 v44; // rdi
  unsigned int *v45; // rdx
  unsigned int v46; // ecx
  __int64 v47; // rax
  unsigned int v48; // ecx
  __int64 v49; // rdi
  __int64 v50; // r15
  __int64 v51; // r12
  __int64 v52; // rax
  bool v53; // zf
  unsigned int **v54; // r12
  unsigned int **v55; // r14
  unsigned int *v56; // rsi
  __int64 *v57; // r12
  __int64 v58; // rax
  __int64 v59; // r14
  __int64 *v60; // rbx
  __int64 *v61; // r13
  __int64 v62; // rsi
  __int64 v63; // rdi
  unsigned int v65; // ecx
  size_t v66; // rsi
  unsigned int *v67; // rax
  unsigned int v68; // r15d
  size_t v69; // rsi
  unsigned int *v70; // rax
  unsigned int *v71; // rax
  __int64 v72; // rbx
  int v73; // eax
  int v74; // r8d
  int v75; // r9d
  __int64 v76; // [rsp+0h] [rbp-F0h]
  __int64 v77; // [rsp+10h] [rbp-E0h]
  int v78; // [rsp+18h] [rbp-D8h]
  unsigned __int8 v79; // [rsp+1Fh] [rbp-D1h]
  unsigned int *v80; // [rsp+20h] [rbp-D0h]
  __int64 v81; // [rsp+28h] [rbp-C8h]
  __int64 v82; // [rsp+38h] [rbp-B8h]
  __int64 v83; // [rsp+40h] [rbp-B0h]
  void *v84; // [rsp+48h] [rbp-A8h]
  void *v85; // [rsp+50h] [rbp-A0h]
  unsigned int v86; // [rsp+50h] [rbp-A0h]
  void *v87; // [rsp+50h] [rbp-A0h]
  unsigned int v88; // [rsp+58h] [rbp-98h]
  unsigned int *v89; // [rsp+58h] [rbp-98h]
  __int64 v90; // [rsp+68h] [rbp-88h]
  int v91; // [rsp+68h] [rbp-88h]
  void *v92; // [rsp+68h] [rbp-88h]
  _QWORD v93[2]; // [rsp+78h] [rbp-78h] BYREF
  unsigned int *v94; // [rsp+90h] [rbp-60h] BYREF
  unsigned int *v95; // [rsp+A0h] [rbp-50h] BYREF
  __int64 v96; // [rsp+A8h] [rbp-48h]
  __int64 v97; // [rsp+B0h] [rbp-40h] BYREF
  __int64 v98; // [rsp+B8h] [rbp-38h]

  v5 = *a1;
  v78 = a2;
  v6 = *(_QWORD *)(*(_QWORD *)(a1[1] + 8840) + 8LL * (a2 >> 1));
  v7 = a1[2];
  v8 = qword_1C7F2C0;
  v77 = v7;
  v9 = *(_DWORD *)v6;
  v95 = nullptr;
  v96 = 0;
  v97 = 1;
  v98 = 0;
  if ( v9 < 0 )
  {
    v92 = qword_1C7F2C0;
    sub_1830C40(qword_1C7F2C0, &v95, (unsigned int)v9);
    v8 = v92;
  }
  else
  {
    LODWORD(v95) = v9;
  }
  sub_182CBA0(v8, &v97);
  v13 = *(_QWORD *)(v5 + 1840);
  BYTE4(v97) &= ~1u;
  LODWORD(v97) = 1;
  if ( !v13 )
  {
    sub_16669E0(v5 + 1832);
    v13 = *(_QWORD *)(v5 + 1840);
  }
  v83 = sub_166A700(v13, (unsigned int)&v95, 1, v10, v11, v12);
  v14 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v95);
  sub_182CBA0(v14, &v97);
  if ( v83 )
    ++*(_DWORD *)(v83 + 8);
  if ( *(_WORD *)(v6 + 4)
    || (v15 = *(_DWORD **)(*(_QWORD *)(v6 + 16) + 24LL)) == nullptr
    || *(_DWORD *)(*a1 + 1744) != *v15
    || v15[1] != 16
    || *(_DWORD *)(v6 + 24) != 2 )
  {
    sub_1872CE0("");
    sub_1873130(114, 61);
  }
  v71 = *(unsigned int **)(v6 + 32);
  v72 = *(_QWORD *)(v6 + 40);
  v80 = v71;
  v82 = sub_15D1F10(v71);
  v16 = *a1;
  v93[0] = 0;
  v79 = sub_1555440((int)v16 + 1224, v72, (unsigned int)v93, v17, v18, v19);
  if ( !v79 )
    goto LABEL_44;
  v20 = a1[2];
  v95 = nullptr;
  v96 = 0;
  v76 = v20;
  v93[1] = v20;
  v21 = *a1;
  v97 = 1;
  v22 = v21;
  v23 = v21 + 1848;
  v98 = 0;
  sub_182CBA0(qword_1C7F2C0, &v97);
  v27 = *(_QWORD *)(v22 + 1840);
  BYTE4(v97) &= ~1u;
  LODWORD(v97) = 1;
  if ( !v27 )
  {
    sub_16669E0(v22 + 1832);
    v27 = *(_QWORD *)(v22 + 1840);
  }
  v28 = sub_166A700(v27, (unsigned int)&v95, 1, v24, v25, v26);
  v29 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v95);
  sub_182CBA0(v29, &v97);
  sub_180C5A0(&v94, "seq.cont");
  sub_1407560((unsigned int)&v95, v23, (unsigned int)&v94, v83, v28, 0, 0, v82, 1);
  v30 = v95;
  v31 = (_QWORD *)sub_186B270(0x18u);
  v31[1] = v30;
  v32 = (unsigned int **)(v31 + 1);
  *v31 = 0x100000002LL;
  if ( v93[0] )
  {
    v33 = 16LL * *(unsigned int *)(v93[0] - 4LL);
    v81 = v93[0] + v33;
    if ( v93[0] == v93[0] + v33 )
    {
      v49 = *a1;
      v50 = *(_QWORD *)(*a1 + 24);
LABEL_34:
      if ( v30 )
        goto LABEL_35;
      goto LABEL_76;
    }
    v90 = v93[0];
    v34 = 0;
    do
    {
      v35 = *(_QWORD *)(v90 + 8);
      if ( v35 )
      {
        v36 = 0;
        do
        {
          if ( v36 >= *(_DWORD *)(v35 - 4) )
            break;
          v37 = *(unsigned int **)(v35 + 8LL * v36);
          if ( v37 )
            ++v37[2];
          v38 = *((_DWORD *)v32 - 1);
          if ( v38 == *((_DWORD *)v32 - 2) )
          {
            v65 = (3 * v38 + 1) >> 1;
            v66 = 8 * v65 + 8;
            if ( 8 * v38 + 8 >= (unsigned int)v66 || v38 >= v65 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)&v95, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v95);
              sub_233E40((__int64)&v95);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v86 = (3 * v38 + 1) >> 1;
            v88 = v36;
            v67 = (unsigned int *)sub_186B300(v32 - 1, v66);
            v32 = (unsigned int **)(v67 + 2);
            *v67 = v86;
            v35 = *(_QWORD *)(v90 + 8);
            v38 = v67[1];
            v36 = v88;
          }
          ++v36;
          v32[v38] = v37;
          *((_DWORD *)v32 - 1) = v38 + 1;
        }
        while ( v35 );
      }
      v39 = *a1;
      v95 = nullptr;
      v96 = 0;
      v97 = 1;
      v98 = 0;
      v40 = qword_1C7F2C0;
      if ( (++v34 & 0x80000000) != 0 )
      {
        v87 = qword_1C7F2C0;
        sub_1830C40(qword_1C7F2C0, &v95, v34);
        v40 = v87;
      }
      else
      {
        LODWORD(v95) = v34;
      }
      sub_182CBA0(v40, &v97);
      v44 = *(_QWORD *)(v39 + 1840);
      BYTE4(v97) &= ~1u;
      LODWORD(v97) = 1;
      if ( !v44 )
      {
        sub_16669E0(v39 + 1832);
        v44 = *(_QWORD *)(v39 + 1840);
      }
      v84 = (void *)sub_166A700(v44, (unsigned int)&v95, 1, v41, v42, v43);
      v85 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v95);
      sub_182CBA0(v85, &v97);
      sub_180C5A0(&v95, "seq.cont");
      sub_1407560((unsigned int)&v94, v39 + 1848, (unsigned int)&v95, v83, (_DWORD)v84, 0, 0, v82, 1);
      v45 = v94;
      v46 = *((_DWORD *)v32 - 1);
      if ( v46 == *((_DWORD *)v32 - 2) )
      {
        v68 = (3 * v46 + 1) >> 1;
        v69 = 8 * v68 + 8;
        if ( 8 * v46 + 8 >= (unsigned int)v69 || v46 >= v68 )
        {
          v2 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&v95, "Overflow encountered when expanding vector");
          *v2 = (char *)off_1C63128;
          sub_2333C0(v2 + 1, &v95);
          sub_233E40((__int64)&v95);
          __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v89 = v94;
        v70 = (unsigned int *)sub_186B300(v32 - 1, v69);
        *v70 = v68;
        v46 = v70[1];
        v32 = (unsigned int **)(v70 + 2);
        v45 = v89;
      }
      v47 = v46;
      v48 = v46 + 1;
      v90 += 16;
      v32[v47] = v45;
      *((_DWORD *)v32 - 1) = v48;
    }
    while ( v81 != v90 );
    v49 = *a1;
    v50 = *(_QWORD *)(*a1 + 24);
    v51 = *(_QWORD *)(*a1 + 1736);
    if ( !v48 )
    {
      v73 = sub_15D2D60(v51, *(_DWORD *)(*a1 + 1744), 1, 0, 0, 0, 0, v82);
      v52 = sub_15DC610(v51, v73, 0, 0, v74, v75, v76, (int)v93, v77, v78, (int)v80, v81, (int)&v94, v82, v83, v84);
      goto LABEL_33;
    }
    if ( v48 != 1 )
    {
      v52 = sub_15E1AF0(*(_QWORD *)(*a1 + 1736));
LABEL_33:
      v49 = *a1;
      v30 = (unsigned int *)v52;
      goto LABEL_34;
    }
  }
  else
  {
    v49 = *a1;
    v50 = *(_QWORD *)(*a1 + 24);
  }
  v30 = *v32;
  if ( *v32 )
  {
LABEL_35:
    ++v30[2];
    sub_BC58F0(v49, v78, v80, v30, 1);
    v53 = v30[2]-- == 1;
    if ( v53 )
      sub_15D7BC0(v50, v30);
    goto LABEL_37;
  }
LABEL_76:
  sub_BC58F0(v49, v78, v80, nullptr, 1);
LABEL_37:
  v54 = &v32[*((unsigned int *)v32 - 1)];
  if ( v32 < v54 )
  {
    v55 = v32;
    do
    {
      while ( 1 )
      {
        v56 = *v55;
        if ( *v55 )
        {
          v53 = v56[2]-- == 1;
          if ( v53 )
            break;
        }
        if ( ++v55 >= v54 )
          goto LABEL_43;
      }
      sub_15D7BC0(v76, v56);
      ++v55;
    }
    while ( v55 < v54 );
  }
LABEL_43:
  sub_186B220(v32 - 1);
LABEL_44:
  v57 = (__int64 *)v93[0];
  if ( v93[0] )
  {
    v58 = *(unsigned int *)(v93[0] - 4LL);
    if ( (_DWORD)v58 )
    {
      v59 = v93[0] + 16 * v58;
      do
      {
        v60 = (__int64 *)v57[1];
        if ( v60 )
        {
          v61 = &v60[*((unsigned int *)v60 - 1)];
          if ( v60 >= v61 )
            goto LABEL_55;
          do
          {
            while ( 1 )
            {
              v62 = *v60;
              if ( *v60 )
              {
                v63 = *v57;
                v53 = (*(_DWORD *)(v62 + 8))-- == 1;
                if ( v53 )
                  break;
              }
              if ( ++v60 >= v61 )
                goto LABEL_54;
            }
            sub_15D7BC0(v63, v62);
            ++v60;
          }
          while ( v60 < v61 );
LABEL_54:
          v60 = (__int64 *)v57[1];
          if ( v60 )
LABEL_55:
            sub_186B220(v60 - 1);
        }
        v57 += 2;
      }
      while ( (__int64 *)v59 != v57 );
      v57 = (__int64 *)v93[0];
    }
    sub_186B220(v57 - 1);
  }
  if ( v83 )
  {
    v91 = *(_DWORD *)(v83 + 8);
    *(_DWORD *)(v83 + 8) = v91 - 1;
    if ( v91 == 1 )
      sub_15D7BC0(v77, v83);
  }
  return v79;
}

