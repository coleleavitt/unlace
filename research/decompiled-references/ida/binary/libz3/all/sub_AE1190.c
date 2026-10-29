__int64 __fastcall sub_AE1190(__int64 *a1, __int64 a2, __int64 *a3)
{
  char **exception; // r12
  void *v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rsi
  void *v11; // rdi
  bool v12; // zf
  int *v14; // rbx
  int v15; // r14d
  __int64 v16; // r15
  unsigned int v17; // edx
  __int64 v18; // rax
  int *v19; // rax
  int *v20; // rdi
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rdx
  __int64 v24; // rbx
  _QWORD *v25; // r14
  _QWORD *v26; // rbx
  __int64 v27; // r15
  __int64 v28; // r14
  __int64 v29; // rbx
  int v30; // eax
  int v31; // r8d
  int v32; // r9d
  __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // r14
  __int64 *v36; // rbx
  __int64 v37; // rsi
  _QWORD *v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rcx
  int v42; // eax
  _QWORD *v43; // rcx
  unsigned int v44; // eax
  unsigned int v45; // r14d
  size_t v46; // rsi
  unsigned int *v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rbx
  int v51; // r9d
  __int64 v52; // rax
  __int64 v53; // rdi
  __int64 v54; // rbx
  __int64 v55; // rsi
  __int64 v56; // rdi
  __int64 v57; // rsi
  __int64 v58; // rdi
  __int64 v59; // rsi
  __int64 v60; // rdi
  __int64 v61; // rsi
  __int64 v62; // rdi
  _QWORD *v63; // rax
  __int64 v64; // rsi
  __int64 v65; // rdi
  __int64 v66; // rax
  unsigned __int64 v67; // rax
  __int64 v68; // rsi
  int v69; // [rsp-8h] [rbp-358h]
  int *v70; // [rsp+0h] [rbp-350h]
  int v71; // [rsp+0h] [rbp-350h]
  void *v72; // [rsp+0h] [rbp-350h]
  __int64 v73; // [rsp+8h] [rbp-348h]
  int v74; // [rsp+8h] [rbp-348h]
  __int64 v75; // [rsp+10h] [rbp-340h]
  int v76; // [rsp+10h] [rbp-340h]
  void **v77; // [rsp+18h] [rbp-338h]
  int v78; // [rsp+18h] [rbp-338h]
  int v79[2]; // [rsp+20h] [rbp-330h]
  int v80[2]; // [rsp+20h] [rbp-330h]
  int v81; // [rsp+20h] [rbp-330h]
  __int64 v82; // [rsp+20h] [rbp-330h]
  unsigned int v83; // [rsp+28h] [rbp-328h]
  unsigned int v84; // [rsp+28h] [rbp-328h]
  char v85; // [rsp+28h] [rbp-328h]
  int v86; // [rsp+28h] [rbp-328h]
  int v87[2]; // [rsp+28h] [rbp-328h]
  __int64 v88; // [rsp+30h] [rbp-320h]
  int v89; // [rsp+30h] [rbp-320h]
  void *v90; // [rsp+38h] [rbp-318h] BYREF
  int v91[2]; // [rsp+40h] [rbp-310h] BYREF
  void *v92; // [rsp+48h] [rbp-308h]
  int v93[2]; // [rsp+50h] [rbp-300h] BYREF
  __int64 v94; // [rsp+58h] [rbp-2F8h]
  void *ptr; // [rsp+60h] [rbp-2F0h]
  int v96[2]; // [rsp+68h] [rbp-2E8h]
  int v97[14]; // [rsp+70h] [rbp-2E0h] BYREF
  void *v98; // [rsp+A8h] [rbp-2A8h]
  int v99; // [rsp+B0h] [rbp-2A0h]
  __int64 v100; // [rsp+B8h] [rbp-298h]
  __int64 v101[19]; // [rsp+F0h] [rbp-260h] BYREF
  int v102; // [rsp+188h] [rbp-1C8h]
  __int64 v103; // [rsp+190h] [rbp-1C0h]
  _QWORD v104[19]; // [rsp+198h] [rbp-1B8h] BYREF
  int v105; // [rsp+230h] [rbp-120h]
  _QWORD v106[18]; // [rsp+238h] [rbp-118h] BYREF
  int v107; // [rsp+2C8h] [rbp-88h]
  __int64 v108; // [rsp+2D0h] [rbp-80h]
  __int64 v109; // [rsp+2D8h] [rbp-78h]
  __int64 v110; // [rsp+2E0h] [rbp-70h]
  __int64 v111; // [rsp+2E8h] [rbp-68h]
  __int64 v112; // [rsp+2F0h] [rbp-60h]
  __int64 v113; // [rsp+2F8h] [rbp-58h]
  __int64 v114; // [rsp+300h] [rbp-50h]
  _BYTE v115[72]; // [rsp+308h] [rbp-48h] BYREF

  v75 = a2;
  v7 = (void *)*a1;
  v8 = *(_QWORD *)(a2 + 24);
  v9 = a1[11];
  *(_QWORD *)v91 = 0;
  v92 = v7;
  HIBYTE(v73) = sub_C05810(v9, v8, v91, 1);
  if ( !HIBYTE(v73) )
    goto LABEL_2;
  v70 = v97;
  ptr = v97;
  *(_QWORD *)v96 = 0x1000000000LL;
  v83 = *(_DWORD *)(a2 + 20);
  if ( v83 )
  {
    v14 = v97;
    v15 = 0;
    LODWORD(v16) = 16;
    v17 = 0;
    while ( 1 )
    {
      v18 = v17++;
      ++v15;
      *(_QWORD *)&v14[2 * v18] = 0;
      v96[0] = v17;
      if ( v83 == v15 )
        break;
      if ( v17 >= (unsigned int)v16 )
      {
        v16 = (unsigned int)(2 * v16);
        v19 = (int *)sub_186B270(8 * v16);
        v17 = v96[0];
        v20 = (int *)ptr;
        v14 = v19;
        if ( v96[0] )
        {
          if ( (unsigned int)(v96[0] - 1) <= 2 || v19 == (int *)((char *)ptr + 8) )
          {
            v67 = 0;
            v68 = 8LL * (unsigned int)v96[0];
            do
            {
              *(_QWORD *)&v14[v67 / 4] = *(_QWORD *)&v20[v67 / 4];
              v67 += 8LL;
            }
            while ( v67 != v68 );
          }
          else
          {
            v21 = 0;
            v22 = 16LL * ((unsigned int)v96[0] >> 1);
            do
            {
              *(__m128i *)&v14[v21 / 4] = _mm_loadu_si128((const __m128i *)&v20[v21 / 4]);
              v21 += 16LL;
            }
            while ( v22 != v21 );
            if ( (v17 & 1) != 0 )
              *(_QWORD *)&v14[2 * (v17 & 0xFFFFFFFE)] = *(_QWORD *)&v20[2 * (v17 & 0xFFFFFFFE)];
          }
        }
        if ( v20 != v97 && v20 )
        {
          sub_186B220(v20);
          v17 = v96[0];
        }
        ptr = v14;
        v96[1] = v16;
      }
    }
    v23 = (_QWORD *)a3[1];
    if ( !v23 )
    {
      v63 = (_QWORD *)sub_186B270(0x18u);
      v23 = v63 + 1;
      *v63 = 2;
      LODWORD(v24) = 0;
      v42 = 1;
      a3[1] = (__int64)v23;
      v43 = v23;
      goto LABEL_35;
    }
    v24 = *((unsigned int *)v23 - 1);
    if ( v83 >= (unsigned int)v24 )
    {
      while ( (unsigned int)v24 < v83 )
      {
        v44 = *((_DWORD *)v23 - 1);
        if ( v44 == *((_DWORD *)v23 - 2) )
        {
          v45 = (3 * v44 + 1) >> 1;
          v46 = 8 * v45 + 8;
          if ( 8 * v44 + 8 >= (unsigned int)v46 || v44 >= v45 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v101, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v101);
            sub_233E40((__int64)v101);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v47 = (unsigned int *)sub_186B300(v23 - 1, v46);
          v48 = v47[1];
          v23 = v47 + 2;
          *v47 = v45;
          a3[1] = (__int64)(v47 + 2);
          LODWORD(v47) = v48;
          v43 = &v23[v48];
          v42 = (_DWORD)v47 + 1;
        }
        else
        {
          v41 = v44;
          v42 = v44 + 1;
          v43 = &v23[v41];
        }
LABEL_35:
        *v43 = 0;
        LODWORD(v24) = v24 + 1;
        *((_DWORD *)v23 - 1) = v42;
      }
    }
    else
    {
      v25 = &v23[v24];
      v26 = &v23[v83];
      if ( v26 < v25 )
      {
        do
        {
LABEL_69:
          while ( 1 )
          {
            v64 = *v26;
            if ( *v26 )
            {
              v65 = *a3;
              v12 = (*(_DWORD *)(v64 + 8))-- == 1;
              if ( v12 )
                break;
            }
            if ( ++v26 >= v25 )
              goto LABEL_72;
          }
          sub_15D7BC0(v65, v64);
          ++v26;
        }
        while ( v26 < v25 );
LABEL_72:
        v66 = a3[1];
        if ( v66 )
          *(_DWORD *)(v66 - 4) = v83;
        if ( !v83 )
          goto LABEL_43;
      }
      else
      {
        *((_DWORD *)v23 - 1) = v83;
      }
    }
    v84 = v83 - 1;
    v77 = &v90;
    do
    {
      v27 = v84;
      v28 = *a1;
      v29 = 8LL * v84;
      *(_QWORD *)v80 = *(_QWORD *)(v75 + v29 + 80);
      sub_180C5A0(v77, 0);
      v30 = sub_15E3D10(
              v28,
              (int)v77,
              (int)&qword_18D6CD0,
              0,
              0,
              v80[0],
              1,
              v69,
              (int)v70,
              v73,
              v75,
              (int)v77,
              v80[0],
              v84,
              v88,
              (int)v90,
              v91[0],
              (int)v92,
              v93[0],
              v94,
              (int)ptr,
              v96[0],
              v97[0],
              v97[2],
              v97[4],
              v97[6],
              v97[8],
              v97[10],
              v97[12],
              v98,
              v99,
              v100);
      v33 = sub_15DC610(v28, v30, 0, 0, v31, v32, v71, v74, v76, v78, v81, v85, v89, (int)v90, v91[0], v92);
      v34 = *a3;
      v35 = v33;
      v36 = (__int64 *)(a3[1] + v29);
      if ( v33 )
        ++*(_DWORD *)(v33 + 8);
      v37 = *v36;
      if ( *v36 )
      {
        v12 = (*(_DWORD *)(v37 + 8))-- == 1;
        if ( v12 )
          sub_15D7BC0(v34, v37);
      }
      v38 = ptr;
      v39 = a1[11];
      *v36 = v35;
      v38[v27] = v35;
      if ( (unsigned __int8)sub_C05A60(v39, *(_QWORD *)v79) )
      {
        v40 = sub_C05A50(a1[11], *(_QWORD *)v79);
        sub_ADF340(a1, v35, v40);
      }
      v84 = v86 - 1;
    }
    while ( v84 != -1 );
  }
  else
  {
    v26 = (_QWORD *)a3[1];
    if ( v26 )
    {
      v49 = *((unsigned int *)v26 - 1);
      if ( (_DWORD)v49 )
      {
        v25 = &v26[v49];
        if ( v26 < v25 )
          goto LABEL_69;
        *((_DWORD *)v26 - 1) = 0;
      }
    }
  }
LABEL_43:
  v50 = *a1;
  sub_1584DD0(v101, *a1, 0);
  v101[18] = (__int64)v115;
  v101[0] = (__int64)&off_1C4CA60;
  v102 = 0;
  v103 = 0;
  sub_1584DD0(v104, v50, 0);
  v104[18] = 0;
  v105 = 0;
  v104[0] = &off_1C61DB8;
  sub_1584DD0(v106, v50, 0);
  v107 = 0;
  v109 = v50;
  v111 = v50;
  v106[0] = &off_1C61DE0;
  v108 = 0;
  v110 = 0;
  v112 = 0;
  v113 = v50;
  v114 = 0;
  v101[0] = (__int64)&off_1C4CA80;
  v115[8] = 1;
  sub_157BE40(
    (int)v93,
    (int)v101,
    v91[0],
    v96[0],
    (int)ptr,
    v51,
    (int)v70,
    v73,
    v75,
    (int)v77,
    v79[0],
    (int)v101,
    v88,
    v90);
  v82 = *a1;
  v52 = sub_15E1A70(*a1);
  v53 = a1[9];
  v54 = v52;
  if ( v52 )
  {
    ++*(_DWORD *)(v52 + 8);
    sub_8F8A20(v53);
    v12 = (*(_DWORD *)(v54 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v82, v54);
  }
  else
  {
    sub_8F8A20(v53);
  }
  v55 = *(_QWORD *)v93;
  if ( *(_QWORD *)v93 )
  {
    v56 = v94;
    v12 = (*(_DWORD *)(*(_QWORD *)v93 + 8LL))-- == 1;
    if ( v12 )
      sub_15D7BC0(v56, v55);
  }
  v101[0] = (__int64)&off_1C4CA60;
  if ( v114 )
    sub_186B220((void *)(v114 - 8));
  v57 = v112;
  if ( v112 )
  {
    v58 = v113;
    v12 = (*(_DWORD *)(v112 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v58, v57);
  }
  v59 = v110;
  if ( v110 )
  {
    v60 = v111;
    v12 = (*(_DWORD *)(v110 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v60, v59);
  }
  v61 = v108;
  if ( v108 )
  {
    v62 = v109;
    v12 = (*(_DWORD *)(v108 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v62, v61);
  }
  v106[0] = &qword_1C637E8;
  sub_15841B0(v106);
  v104[0] = &qword_1C637E8;
  sub_15841B0(v104);
  if ( v103 )
    sub_186B220((void *)(v103 - 8));
  sub_15841B0(*(_QWORD *)v87);
  if ( ptr && ptr != v72 )
    sub_186B220(ptr);
LABEL_2:
  v10 = *(_QWORD *)v91;
  if ( *(_QWORD *)v91 )
  {
    v11 = v92;
    v12 = (*(_DWORD *)(*(_QWORD *)v91 + 8LL))-- == 1;
    if ( v12 )
      sub_15D7BC0(v11, v10);
  }
  return HIBYTE(v73);
}

