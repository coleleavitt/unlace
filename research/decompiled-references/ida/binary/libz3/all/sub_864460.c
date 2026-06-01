__int64 __fastcall sub_864460(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  char **v3; // rbx
  char **v4; // rbx
  __int64 v6; // rdx
  unsigned int v7; // r14d
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // r9d
  unsigned int *v17; // rax
  unsigned int *v18; // r15
  unsigned int v19; // r14d
  __int64 v21; // r12
  _QWORD *v22; // rax
  _QWORD *v23; // r13
  _QWORD *v24; // rax
  _QWORD *v25; // r12
  unsigned int v26; // eax
  __int64 v27; // rax
  __int64 v28; // r15
  __int64 v29; // rax
  __int64 v30; // r14
  unsigned int v31; // eax
  __int64 v32; // rdx
  int v33; // eax
  __int64 *v34; // rdx
  unsigned int v35; // eax
  unsigned int v36; // r14d
  size_t v37; // rsi
  unsigned int *v38; // rax
  unsigned int v39; // r14d
  size_t v40; // rsi
  unsigned int *v41; // rax
  unsigned int v42; // edx
  size_t v43; // rsi
  unsigned int *v44; // rax
  _DWORD *v45; // rcx
  __int64 v46; // rax
  unsigned int *v47; // r15
  __int64 v48; // rax
  __int64 v49; // r14
  __int64 v50; // rax
  __int64 v51; // r8
  int v52; // r9d
  bool v53; // zf
  __int64 *v54; // rbx
  unsigned __int64 v55; // r15
  __int64 v56; // rsi
  __int64 *v57; // rbx
  unsigned __int64 v58; // r12
  __int64 v59; // rsi
  __int64 *v60; // rbx
  unsigned __int64 v61; // r12
  __int64 v62; // rsi
  _QWORD *v63; // rax
  __int64 v64; // r14
  __int64 v65; // rax
  __int64 v66; // r8
  int v67; // r9d
  __int64 v68; // [rsp+0h] [rbp-F0h]
  __int64 v69; // [rsp+10h] [rbp-E0h]
  __int64 v70; // [rsp+18h] [rbp-D8h]
  __int64 v71; // [rsp+18h] [rbp-D8h]
  __int64 v72; // [rsp+20h] [rbp-D0h]
  __int64 v73; // [rsp+28h] [rbp-C8h]
  __int64 v74; // [rsp+30h] [rbp-C0h]
  __int64 v75; // [rsp+30h] [rbp-C0h]
  unsigned int v76; // [rsp+38h] [rbp-B8h]
  bool v77; // [rsp+3Ch] [rbp-B4h]
  unsigned int v78; // [rsp+3Ch] [rbp-B4h]
  unsigned int *v79; // [rsp+40h] [rbp-B0h]
  unsigned int *v80; // [rsp+48h] [rbp-A8h]
  _QWORD *v81; // [rsp+50h] [rbp-A0h]
  unsigned int *v82; // [rsp+50h] [rbp-A0h]
  unsigned int v83; // [rsp+58h] [rbp-98h]
  unsigned int v84; // [rsp+58h] [rbp-98h]
  unsigned int v85; // [rsp+58h] [rbp-98h]
  int v86[2]; // [rsp+58h] [rbp-98h]
  int v87[2]; // [rsp+90h] [rbp-60h] BYREF
  int v88[2]; // [rsp+A0h] [rbp-50h] BYREF

  v6 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)v87 = a2;
  ++*(_DWORD *)(a1 + 164);
  v7 = *(_DWORD *)(a2 + 24);
  v72 = v6;
  v8 = sub_15DCAD0(*(_QWORD *)(a1 + 120), (int)v87, 0);
  v80 = (unsigned int *)v8;
  if ( v8 )
    ++*(_DWORD *)(v8 + 8);
  v9 = *(_QWORD *)(a1 + 120);
  *(_QWORD *)v88 = *(_QWORD *)(a2 + 32);
  v10 = sub_15DCAD0(v9, (int)v88, 0);
  v79 = (unsigned int *)v10;
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 1720LL);
  if ( v11 )
  {
    v77 = 1;
    v12 = *v80;
    v13 = *(_DWORD *)(v11 - 4);
    if ( (unsigned int)v12 < v13 )
    {
      if ( *(_QWORD *)(v11 + 8 * v12) )
      {
        v14 = *v79;
        if ( (unsigned int)v14 < v13 )
          v77 = *(_QWORD *)(v11 + 8 * v14) == 0;
      }
    }
  }
  else
  {
    v77 = 1;
  }
  v74 = sub_7E5940(a1, v80);
  v73 = sub_7E5940(a1, v79);
  if ( (unsigned __int8)sub_8603D0(a1, a2) )
  {
    v17 = *(unsigned int **)(a2 + 8LL * (v7 - 1) + 32);
    v18 = v17;
    if ( v17 )
      ++v17[2];
    if ( v79 )
    {
      v83 = v79[2];
      v79[2] = v83 - 1;
      if ( v83 == 1 )
        sub_15D7BC0(v72, v79);
    }
    goto LABEL_16;
  }
  if ( (unsigned __int8)sub_860450(a1, a2) )
  {
    v18 = v79;
LABEL_16:
    v19 = sub_7CA650(*(_QWORD *)(a1 + 80), v74, v73, *(_QWORD *)(a1 + 464), v15, v16) | v77;
    goto LABEL_17;
  }
  v21 = *(_QWORD *)(a2 + 32);
  v68 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)v87 = v68;
  if ( v21 )
    ++*(_DWORD *)(v21 + 8);
  v22 = (_QWORD *)sub_186B270(0x18u);
  v22[1] = v21;
  v23 = v22 + 1;
  *v22 = 0x100000002LL;
  ++*(_DWORD *)(a2 + 8);
  v24 = (_QWORD *)sub_186B270(0x18u);
  *v24 = 0x100000002LL;
  v25 = v24 + 1;
  v24[1] = a2;
  if ( v7 <= 2 )
  {
    *(_QWORD *)v86 = 0;
  }
  else
  {
    *(_QWORD *)v86 = 0;
    v81 = (_QWORD *)(a2 + 40);
    v70 = a2 + 8LL * (v7 - 3) + 48;
    do
    {
      v27 = sub_15D1F10(*v81);
      v28 = sub_863700(a1, v27);
      v29 = sub_15E1B70(*(_QWORD *)(a1 + 72));
      v30 = v29;
      if ( v29 )
        ++*(_DWORD *)(v29 + 8);
      if ( *(_QWORD *)v86 )
      {
        v31 = *(_DWORD *)(*(_QWORD *)v86 - 4LL);
        if ( v31 == *(_DWORD *)(*(_QWORD *)v86 - 8LL) )
        {
          v42 = (3 * v31 + 1) >> 1;
          v43 = 8 * v42 + 8;
          if ( 8 * v31 + 8 >= (unsigned int)v43 || v31 >= v42 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v88, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v88);
            sub_233E40((__int64)v88);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v76 = (3 * v31 + 1) >> 1;
          v44 = (unsigned int *)sub_186B300((void *)(*(_QWORD *)v86 - 8LL), v43);
          v45 = v44 + 2;
          *(_QWORD *)v86 = v44 + 2;
          *v44 = v76;
          LODWORD(v44) = v44[1];
          v34 = (__int64 *)&v45[2 * (unsigned int)v44];
          v33 = (_DWORD)v44 + 1;
        }
        else
        {
          v32 = v31;
          v33 = v31 + 1;
          v34 = (__int64 *)(*(_QWORD *)v86 + 8 * v32);
        }
      }
      else
      {
        v63 = (_QWORD *)sub_186B270(0x18u);
        *v63 = 2;
        *(_QWORD *)v86 = v63 + 1;
        v34 = v63 + 1;
        v33 = 1;
      }
      *v34 = v30;
      *(_DWORD *)(*(_QWORD *)v86 - 4LL) = v33;
      if ( v28 )
        ++*(_DWORD *)(v28 + 8);
      v35 = *((_DWORD *)v23 - 1);
      if ( v35 == *((_DWORD *)v23 - 2) )
      {
        v36 = (3 * v35 + 1) >> 1;
        v37 = 8 * v36 + 8;
        if ( 8 * v35 + 8 >= (unsigned int)v37 || v35 >= v36 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v88, "Overflow encountered when expanding vector");
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, v88);
          sub_233E40((__int64)v88);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v38 = (unsigned int *)sub_186B300(v23 - 1, v37);
        *v38 = v36;
        v23 = v38 + 2;
        v35 = v38[1];
      }
      v23[v35] = v28;
      *((_DWORD *)v23 - 1) = v35 + 1;
      if ( v28 )
        ++*(_DWORD *)(v28 + 8);
      v26 = *((_DWORD *)v25 - 1);
      if ( v26 == *((_DWORD *)v25 - 2) )
      {
        v39 = (3 * v26 + 1) >> 1;
        v40 = 8 * v39 + 8;
        if ( 8 * v26 + 8 >= (unsigned int)v40 || v26 >= v39 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v88, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v88);
          sub_233E40((__int64)v88);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v41 = (unsigned int *)sub_186B300(v25 - 1, v40);
        *v41 = v39;
        v25 = v41 + 2;
        v26 = v41[1];
      }
      ++v81;
      v25[v26] = v28;
      *((_DWORD *)v25 - 1) = v26 + 1;
    }
    while ( v81 != (_QWORD *)v70 );
  }
  v69 = *(_QWORD *)(a1 + 72);
  v46 = sub_15DCAD0(*(_QWORD *)(a1 + 120), (int)v23, 0);
  v47 = (unsigned int *)v46;
  if ( v46 )
    ++*(_DWORD *)(v46 + 8);
  v48 = sub_15DCAD0(*(_QWORD *)(a1 + 120), (int)v25, 0);
  v82 = (unsigned int *)v48;
  if ( v48 )
    ++*(_DWORD *)(v48 + 8);
  v49 = *(_QWORD *)(a1 + 80);
  v71 = *(_QWORD *)(a1 + 464);
  v50 = sub_7E5940(a1, v47);
  v19 = sub_7CA650(v49, v50, v74, v71, v51, v52);
  if ( !(_BYTE)v19 )
  {
    v64 = *(_QWORD *)(a1 + 80);
    v75 = *(_QWORD *)(a1 + 464);
    v65 = sub_7E5940(a1, v82);
    v19 = sub_7CA650(v64, v65, v73, v75, v66, v67) | v77;
  }
  if ( v82 )
  {
    v78 = v82[2];
    v82[2] = v78 - 1;
    if ( v78 == 1 )
      sub_15D7BC0(v69, v82);
  }
  if ( v47 )
  {
    v53 = v47[2]-- == 1;
    if ( v53 )
      sub_15D7BC0(v69, v47);
  }
  v54 = v25;
  v55 = (unsigned __int64)&v25[*((unsigned int *)v25 - 1)];
  if ( (unsigned __int64)v25 < v55 )
  {
    do
    {
      while ( 1 )
      {
        v56 = *v54;
        if ( *v54 )
        {
          v53 = (*(_DWORD *)(v56 + 8))-- == 1;
          if ( v53 )
            break;
        }
        if ( (unsigned __int64)++v54 >= v55 )
          goto LABEL_70;
      }
      ++v54;
      sub_15D7BC0(v68, v56);
    }
    while ( (unsigned __int64)v54 < v55 );
  }
LABEL_70:
  v57 = v23;
  sub_186B220(v25 - 1);
  v58 = (unsigned __int64)&v23[*((unsigned int *)v23 - 1)];
  if ( (unsigned __int64)v23 < v58 )
  {
    do
    {
      while ( 1 )
      {
        v59 = *v57;
        if ( *v57 )
        {
          v53 = (*(_DWORD *)(v59 + 8))-- == 1;
          if ( v53 )
            break;
        }
        if ( (unsigned __int64)++v57 >= v58 )
          goto LABEL_76;
      }
      ++v57;
      sub_15D7BC0(v68, v59);
    }
    while ( (unsigned __int64)v57 < v58 );
  }
LABEL_76:
  sub_186B220(v23 - 1);
  if ( *(_QWORD *)v86 )
  {
    v60 = *(__int64 **)v86;
    v61 = *(_QWORD *)v86 + 8LL * *(unsigned int *)(*(_QWORD *)v86 - 4LL);
    if ( *(_QWORD *)v86 < v61 )
    {
      do
      {
        while ( 1 )
        {
          v62 = *v60;
          if ( *v60 )
          {
            v53 = (*(_DWORD *)(v62 + 8))-- == 1;
            if ( v53 )
              break;
          }
          if ( (unsigned __int64)++v60 >= v61 )
            goto LABEL_83;
        }
        ++v60;
        sub_15D7BC0(v68, v62);
      }
      while ( (unsigned __int64)v60 < v61 );
    }
LABEL_83:
    sub_186B220((void *)(*(_QWORD *)v86 - 8LL));
  }
  v18 = v79;
LABEL_17:
  if ( v18 )
  {
    v84 = v18[2];
    v18[2] = v84 - 1;
    if ( v84 == 1 )
      sub_15D7BC0(v72, v18);
  }
  v85 = v80[2];
  v80[2] = v85 - 1;
  if ( v85 == 1 )
    sub_15D7BC0(v72, v80);
  return v19;
}

