__m128i *__fastcall sub_658640(int a1, unsigned __int64 *a2, int a3)
{
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  int v6; // r8d
  int v7; // r9d
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rax
  unsigned int v11; // r13d
  __int64 *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r14
  unsigned int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  __int64 *v18; // rdx
  __int64 v19; // r14
  unsigned int v20; // edx
  _DWORD *v21; // rdi
  __int64 v22; // rcx
  unsigned __int64 v23; // r13
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // r13
  _QWORD *v27; // rdx
  unsigned int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  __int64 *v31; // rcx
  unsigned __int64 v32; // r12
  int v33; // edx
  __int64 v34; // rax
  bool v35; // zf
  __int64 *v36; // r12
  unsigned __int64 v37; // r13
  __int64 v38; // rsi
  unsigned int v40; // ecx
  size_t v41; // rsi
  unsigned int *v42; // rax
  __int64 v43; // rax
  unsigned int v44; // edx
  size_t v45; // rsi
  unsigned int *v46; // rax
  unsigned int v47; // ecx
  size_t v48; // rsi
  unsigned int *v49; // rax
  _DWORD *v50; // rdx
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  _QWORD *v53; // rax
  char **v54; // r13
  char **v55; // r12
  char **exception; // r13
  int v57; // [rsp-8h] [rbp-D8h]
  int v58; // [rsp+0h] [rbp-D0h]
  int v59; // [rsp+0h] [rbp-D0h]
  void *v60; // [rsp+8h] [rbp-C8h]
  int v61[2]; // [rsp+8h] [rbp-C8h]
  int v62; // [rsp+8h] [rbp-C8h]
  int v63; // [rsp+10h] [rbp-C0h]
  int v64; // [rsp+10h] [rbp-C0h]
  int v65; // [rsp+10h] [rbp-C0h]
  int v66; // [rsp+14h] [rbp-BCh]
  __int64 v67; // [rsp+18h] [rbp-B8h]
  void *v68; // [rsp+18h] [rbp-B8h]
  int v69; // [rsp+18h] [rbp-B8h]
  unsigned int v70; // [rsp+20h] [rbp-B0h]
  unsigned int v71; // [rsp+20h] [rbp-B0h]
  int v73; // [rsp+28h] [rbp-A8h]
  char v74; // [rsp+28h] [rbp-A8h]
  __m128i *v75; // [rsp+28h] [rbp-A8h]
  unsigned __int64 v76; // [rsp+30h] [rbp-A0h]
  unsigned __int64 v77; // [rsp+30h] [rbp-A0h]
  int v78; // [rsp+30h] [rbp-A0h]
  __int64 v79; // [rsp+30h] [rbp-A0h]
  int v80; // [rsp+38h] [rbp-98h]
  int v81[2]; // [rsp+38h] [rbp-98h]
  int v82[2]; // [rsp+38h] [rbp-98h]
  int v83; // [rsp+38h] [rbp-98h]
  int v84[2]; // [rsp+38h] [rbp-98h]
  int v85; // [rsp+40h] [rbp-90h]
  int v86; // [rsp+40h] [rbp-90h]
  int v87; // [rsp+40h] [rbp-90h]
  void *v88; // [rsp+48h] [rbp-88h] BYREF
  unsigned __int64 v89; // [rsp+50h] [rbp-80h]
  __int64 v90; // [rsp+58h] [rbp-78h]
  void *v91; // [rsp+60h] [rbp-70h] BYREF
  int v92; // [rsp+68h] [rbp-68h]
  __int64 v93; // [rsp+70h] [rbp-60h] BYREF
  int v94; // [rsp+78h] [rbp-58h]
  __int64 v95; // [rsp+80h] [rbp-50h] BYREF
  int v96; // [rsp+88h] [rbp-48h]
  int v97; // [rsp+90h] [rbp-40h]
  int v98; // [rsp+98h] [rbp-38h]
  int v99; // [rsp+A0h] [rbp-30h]
  void *v100; // [rsp+A8h] [rbp-28h]
  int v101; // [rsp+B0h] [rbp-20h]
  __int64 v102; // [rsp+B8h] [rbp-18h]

  sub_157E9E0((_DWORD)a2 + 200, a3);
  v8 = a2[28];
  v76 = *a2;
  v89 = *a2;
  if ( v8 )
  {
    v9 = v76;
    v10 = v8;
    v11 = 0;
    v12 = nullptr;
    *(_QWORD *)v81 = 0;
    do
    {
      if ( v11 >= *(_DWORD *)(v10 - 4) )
        break;
      v4 = *(_QWORD *)(v10 + 8LL * v11);
      if ( v4 )
      {
        v13 = sub_15DB5C0(v9, v11, v4);
        v14 = v13;
        if ( v13 )
          ++*(_DWORD *)(v13 + 8);
        if ( v12 )
        {
          v15 = *((_DWORD *)v12 - 1);
          if ( v15 == *((_DWORD *)v12 - 2) )
          {
            v44 = (3 * v15 + 1) >> 1;
            v45 = 8 * v44 + 8;
            if ( 8 * v15 + 8 >= (unsigned int)v45 || v15 >= v44 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v95, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v95);
              sub_233E40((__int64)&v95);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v70 = (3 * v15 + 1) >> 1;
            v46 = (unsigned int *)sub_186B300(v12 - 1, v45);
            v12 = (__int64 *)(v46 + 2);
            *v46 = v70;
            LODWORD(v46) = v46[1];
            v18 = &v12[(unsigned int)v46];
            v17 = (_DWORD)v46 + 1;
          }
          else
          {
            v16 = v15;
            v17 = v15 + 1;
            v18 = &v12[v16];
          }
        }
        else
        {
          v52 = (_QWORD *)sub_186B270(0x18u);
          v18 = v52 + 1;
          *v52 = 2;
          v17 = 1;
          v12 = v18;
        }
        *v18 = v14;
        *((_DWORD *)v12 - 1) = v17;
        v10 = a2[28];
        v19 = *(_QWORD *)(v10 + 8LL * v11);
        if ( *(_QWORD *)v81 )
        {
          v20 = *(_DWORD *)(*(_QWORD *)v81 - 4LL);
          if ( v20 == *(_DWORD *)(*(_QWORD *)v81 - 8LL) )
          {
            v40 = (3 * v20 + 1) >> 1;
            v41 = 8 * v40 + 8;
            if ( 8 * v20 + 8 >= (unsigned int)v41 || v20 >= v40 )
            {
              v54 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v95, "Overflow encountered when expanding vector");
              *v54 = (char *)off_1C63128;
              sub_2333C0(v54 + 1, &v95);
              sub_233E40((__int64)&v95);
              __cxa_throw(v54, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v70 = (3 * v20 + 1) >> 1;
            v42 = (unsigned int *)sub_186B300((void *)(*(_QWORD *)v81 - 8LL), v41);
            v21 = v42 + 2;
            *(_QWORD *)v81 = v42 + 2;
            *v42 = v70;
            v43 = v42[1];
            LODWORD(v4) = v43;
            v5 = &v21[2 * v43];
            v10 = a2[28];
            LODWORD(v4) = v4 + 1;
          }
          else
          {
            v21 = *(_DWORD **)v81;
            v22 = v20;
            LODWORD(v4) = v20 + 1;
            v5 = (_QWORD *)(*(_QWORD *)v81 + 8 * v22);
          }
        }
        else
        {
          v51 = (_QWORD *)sub_186B270(0x18u);
          *v51 = 2;
          LODWORD(v4) = 1;
          v5 = v51 + 1;
          *(_QWORD *)v81 = v5;
          v10 = a2[28];
          v21 = v5;
        }
        *v5 = v19;
        v9 = *a2;
        *(v21 - 1) = v4;
      }
      ++v11;
    }
    while ( v10 );
    sub_180CE20(
      (int)&v91,
      (_DWORD)a2 + 64,
      v4,
      (int)v5,
      v6,
      v7,
      (int)&v91,
      v60,
      v63,
      v67,
      v70,
      a1,
      v76,
      v81[0],
      v85,
      (int)v88,
      v89,
      v90,
      (int)v91,
      v92,
      v93,
      v94,
      v95,
      v96,
      v97,
      v98,
      v99,
      v100,
      v101,
      v102);
    v23 = *a2;
    *(_QWORD *)v61 = *(_QWORD *)(*a2 + 840);
    if ( *(_QWORD *)v82 )
      v66 = *(_DWORD *)(*(_QWORD *)v82 - 4LL);
    else
      v66 = 0;
  }
  else
  {
    sub_180CE20(
      (int)&v91,
      (_DWORD)a2 + 64,
      v4,
      (int)v5,
      v6,
      v7,
      (int)&v91,
      v60,
      v63,
      v67,
      v70,
      a1,
      v76,
      v80,
      v85,
      (int)v88,
      v89,
      v90,
      (int)v91,
      v92,
      v93,
      v94,
      v95,
      v96,
      v97,
      v98,
      v99,
      v100,
      v101,
      v102);
    v23 = *a2;
    v9 = v77;
    v12 = nullptr;
    v82[0] = 0;
    v66 = 0;
    *(_QWORD *)v61 = *(_QWORD *)(*a2 + 840);
  }
  v68 = v91;
  sub_180C5A0(&v95, "");
  sub_180C5A0(&v88, v68);
  v26 = sub_15E3D10(
          v23,
          (int)&v88,
          (int)&v95,
          v66,
          v82[0],
          v61[0],
          1,
          v57,
          v58,
          v61[0],
          v64,
          (int)v68,
          (int)&v88,
          v73,
          v77,
          v82[0],
          v86,
          (int)v88,
          v89,
          v90,
          (int)v91,
          v92,
          v93,
          v94,
          v95,
          v96,
          v97,
          v98,
          v99,
          v100,
          v101,
          v102);
  if ( v26 )
    *(_DWORD *)(v26 + 8) += 2;
  v27 = (_QWORD *)a2[19];
  if ( v27 )
  {
    v28 = *((_DWORD *)v27 - 1);
    if ( v28 == *((_DWORD *)v27 - 2) )
    {
      v47 = (3 * v28 + 1) >> 1;
      v48 = 8 * v47 + 8;
      if ( 8 * v28 + 8 >= (unsigned int)v48 || v28 >= v47 )
      {
        v55 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v95, "Overflow encountered when expanding vector");
        *v55 = (char *)off_1C63128;
        sub_2333C0(v55 + 1, &v95);
        sub_233E40((__int64)&v95);
        __cxa_throw(v55, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v71 = (3 * v28 + 1) >> 1;
      v49 = (unsigned int *)sub_186B300(v27 - 1, v48);
      v50 = v49 + 2;
      a2[19] = (unsigned __int64)(v49 + 2);
      v32 = *a2;
      *v49 = v71;
      LODWORD(v49) = v49[1];
      *(_QWORD *)&v50[2 * (unsigned int)v49] = v26;
      *(v50 - 1) = (_DWORD)v49 + 1;
      if ( v12 )
        goto LABEL_23;
      goto LABEL_51;
    }
    v29 = v28;
    v30 = v28 + 1;
    v31 = &v27[v29];
  }
  else
  {
    v53 = (_QWORD *)sub_186B270(0x18u);
    v27 = v53 + 1;
    *v53 = 2;
    v30 = 1;
    a2[19] = (unsigned __int64)v27;
    v31 = v27;
  }
  *v31 = v26;
  v32 = *a2;
  *((_DWORD *)v27 - 1) = v30;
  if ( v12 )
  {
LABEL_23:
    v33 = *((_DWORD *)v12 - 1);
    goto LABEL_24;
  }
LABEL_51:
  v33 = 0;
LABEL_24:
  v34 = sub_15DC610(v32, v26, v33, (int)v12, v24, v25, v59, v62, v65, v69, v71, v74, v78, v83, v87, v88);
  *v75 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v34, (__m128i)v32);
  if ( v34 )
    ++*(_DWORD *)(v34 + 8);
  if ( v91 != &v93 )
    operator delete(v91, v93 + 1);
  if ( v26 )
  {
    v35 = (*(_DWORD *)(v26 + 8))-- == 1;
    if ( v35 )
      sub_15D7BC0(v9, v26);
  }
  if ( v12 )
  {
    v36 = v12;
    v37 = (unsigned __int64)&v12[*((unsigned int *)v12 - 1)];
    if ( (unsigned __int64)v12 < v37 )
    {
      do
      {
        while ( 1 )
        {
          v38 = *v36;
          if ( *v36 )
          {
            v35 = (*(_DWORD *)(v38 + 8))-- == 1;
            if ( v35 )
              break;
          }
          if ( (unsigned __int64)++v36 >= v37 )
            goto LABEL_38;
        }
        ++v36;
        sub_15D7BC0(v79, v38);
      }
      while ( (unsigned __int64)v36 < v37 );
    }
LABEL_38:
    sub_186B220(v12 - 1);
  }
  if ( *(_QWORD *)v84 )
    sub_186B220((void *)(*(_QWORD *)v84 - 8LL));
  return v75;
}

