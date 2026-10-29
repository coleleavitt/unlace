__int64 __fastcall sub_3C4360(_QWORD *a1, __int64 *a2, double a3)
{
  _QWORD *v4; // rbp
  _QWORD *v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rdi
  bool v8; // zf
  _QWORD *v9; // rbp
  _QWORD *v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rdi
  char *v13; // rdi
  int v14; // ecx
  char *v15; // rdx
  unsigned int v16; // esi
  char *v17; // rax
  unsigned int v18; // ebp
  __int64 v19; // r12
  void *v20; // rcx
  __int64 v21; // rax
  int v22; // r9d
  unsigned int *v23; // rbp
  unsigned int i; // r12d
  int v25; // eax
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rax
  __int64 v29; // r15
  int v30; // eax
  __int64 v31; // r15
  __int64 v32; // rax
  __int64 v33; // r8
  int v34; // ecx
  __int64 v35; // r12
  int v36; // r9d
  __int64 v37; // rax
  unsigned int v38; // r15d
  int v39; // ecx
  __int64 v40; // r13
  __int64 v41; // rdi
  _QWORD *v42; // rdx
  unsigned int v43; // eax
  __int64 v44; // rcx
  int v45; // eax
  __int64 *v46; // rcx
  int v47; // ecx
  __int64 v48; // r12
  _QWORD *v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rax
  __int64 v52; // r13
  __int64 v53; // rsi
  __int64 v54; // rdi
  _BYTE *v55; // rdi
  char *v56; // rsi
  __int64 v57; // rax
  unsigned int j; // r13d
  __int64 v59; // r15
  __int64 v60; // r13
  __int64 v61; // rax
  unsigned int v63; // r12d
  size_t v64; // rsi
  unsigned int *v65; // rax
  __int64 v66; // rcx
  _BYTE *v67; // rdi
  char *v68; // rsi
  __int64 v69; // rax
  unsigned int k; // r13d
  __int64 v71; // r15
  __int64 v72; // r13
  __int64 v73; // rax
  _QWORD *v74; // rax
  unsigned int v75; // esi
  char **exception; // rbx
  unsigned int *v77; // [rsp+0h] [rbp-2E8h]
  int v78; // [rsp+0h] [rbp-2E8h]
  __int64 v79; // [rsp+0h] [rbp-2E8h]
  __int64 *v80; // [rsp+8h] [rbp-2E0h]
  __int64 v81; // [rsp+8h] [rbp-2E0h]
  void *v82; // [rsp+8h] [rbp-2E0h]
  _QWORD *v83; // [rsp+10h] [rbp-2D8h]
  int v84; // [rsp+10h] [rbp-2D8h]
  _QWORD *v85; // [rsp+10h] [rbp-2D8h]
  int v86; // [rsp+18h] [rbp-2D0h]
  int v87; // [rsp+18h] [rbp-2D0h]
  __int64 v88; // [rsp+18h] [rbp-2D0h]
  int v89; // [rsp+20h] [rbp-2C8h]
  int v90; // [rsp+20h] [rbp-2C8h]
  unsigned int *v91; // [rsp+28h] [rbp-2C0h] BYREF
  __int64 v92; // [rsp+30h] [rbp-2B8h] BYREF
  void *v93; // [rsp+38h] [rbp-2B0h]
  __int64 v94; // [rsp+40h] [rbp-2A8h] BYREF
  unsigned int *v95; // [rsp+48h] [rbp-2A0h] BYREF
  int v96[2]; // [rsp+50h] [rbp-298h] BYREF
  __int64 v97; // [rsp+58h] [rbp-290h]
  _BYTE v98[32]; // [rsp+60h] [rbp-288h] BYREF
  _QWORD v99[67]; // [rsp+80h] [rbp-268h] BYREF
  _BYTE v100[80]; // [rsp+298h] [rbp-50h] BYREF

  v4 = (_QWORD *)a1[2];
  v80 = a2;
  if ( v4 )
  {
    v5 = &v4[*((unsigned int *)v4 - 1)];
    if ( v4 >= v5 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v6 = *v4;
        if ( *v4 )
        {
          v7 = a1[1];
          v8 = (*(_DWORD *)(v6 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( ++v4 >= v5 )
          goto LABEL_8;
      }
      sub_15D7BC0(v7, v6);
      ++v4;
    }
    while ( v4 < v5 );
LABEL_8:
    v4 = (_QWORD *)a1[2];
    if ( v4 )
LABEL_9:
      *((_DWORD *)v4 - 1) = 0;
  }
  v9 = (_QWORD *)a1[17];
  if ( v9 )
  {
    v10 = &v9[*((unsigned int *)v9 - 1)];
    if ( v9 >= v10 )
      goto LABEL_18;
    do
    {
      while ( 1 )
      {
        v11 = *v9;
        if ( *v9 )
        {
          v12 = a1[16];
          v8 = (*(_DWORD *)(v11 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( ++v9 >= v10 )
          goto LABEL_17;
      }
      sub_15D7BC0(v12, v11);
      ++v9;
    }
    while ( v9 < v10 );
LABEL_17:
    v9 = (_QWORD *)a1[17];
    if ( v9 )
LABEL_18:
      *((_DWORD *)v9 - 1) = 0;
  }
  if ( *((_DWORD *)a1 + 39) || *((_DWORD *)a1 + 40) )
  {
    v13 = (char *)a1[18];
    v14 = 0;
    v15 = &v13[8 * *((unsigned int *)a1 + 38)];
    v16 = *((_DWORD *)a1 + 38);
    v17 = v13;
    if ( v13 == v15 )
      goto LABEL_32;
    do
    {
      while ( *(_QWORD *)v17 )
      {
        *(_QWORD *)v17 = 0;
        v17 += 8;
        if ( v15 == v17 )
          goto LABEL_26;
      }
      v17 += 8;
      ++v14;
    }
    while ( v15 != v17 );
LABEL_26:
    if ( v16 <= 0x10 || 3 * v16 >= 4 * v14 )
      goto LABEL_32;
    if ( v13 )
    {
      sub_186B220(v13);
      v18 = *((_DWORD *)a1 + 38);
      a1[18] = 0;
      v18 >>= 1;
      *((_DWORD *)a1 + 38) = v18;
      v19 = v18;
      v20 = (void *)sub_186B270(8LL * v18);
      if ( !v18 )
      {
LABEL_31:
        a1[18] = v20;
LABEL_32:
        *(_QWORD *)((char *)a1 + 156) = 0;
        goto LABEL_33;
      }
    }
    else
    {
      a1[18] = 0;
      v75 = v16 >> 1;
      v19 = v75;
      *((_DWORD *)a1 + 38) = v75;
      v20 = (void *)sub_186B270(8LL * v75);
    }
    v20 = memset(v20, 0, 8 * v19);
    goto LABEL_31;
  }
LABEL_33:
  v21 = *a1;
  v91 = nullptr;
  v86 = v21;
  v92 = v21;
  v94 = v21;
  sub_3BF620(v80, &v91);
  v77 = v91;
  v83 = v99;
  sub_633760(v99, *a1, 0, v100);
  v23 = nullptr;
  v100[8] = 0;
  v99[0] = &off_1C4CA80;
  if ( v77 )
  {
    for ( i = 0; i < *(v77 - 1); ++i )
    {
      v31 = *a1;
      v32 = 2LL * i;
      v33 = *(_QWORD *)&v77[v32];
      if ( !v33 )
      {
        v33 = *(_QWORD *)(v31 + 840);
        *(_QWORD *)&v77[2 * i] = v33;
      }
      *(_QWORD *)v96 = (v32 * 4) | 1;
      v25 = sub_15E3510(v31, v96, 0, 0, v33, 0);
      v28 = sub_15DC610(
              v31,
              v25,
              0,
              0,
              v26,
              v27,
              (int)v77,
              (int)v80,
              (int)v83,
              v86,
              v89,
              (char)v91,
              v92,
              (int)v93,
              v94,
              v95);
      v29 = v28;
      if ( v28 )
        ++*(_DWORD *)(v28 + 8);
      if ( !v23 || (v30 = *(v23 - 1), v30 == *(v23 - 2)) )
      {
        v95 = v23;
        sub_23A6F0(&v95);
        v23 = v95;
        v30 = *(v95 - 1);
      }
      *(_QWORD *)&v23[2 * v30] = v29;
      *(v23 - 1) = v30 + 1;
    }
    if ( v23 )
      v34 = *(v23 - 1);
    else
      v34 = 0;
  }
  else
  {
    v34 = 0;
  }
  sub_157BE40(
    (int)v96,
    (int)v83,
    *v80,
    v34,
    (int)v23,
    v22,
    (int)v77,
    (__int64)v80,
    (int)v83,
    v86,
    v89,
    (int)v91,
    v92,
    v93);
  v35 = *(_QWORD *)v96;
  if ( *(_QWORD *)v96 )
    ++*(_DWORD *)(*(_QWORD *)v96 + 8LL);
  sub_3BCB30(a1[3], a1[4]);
  a1[3] = v35;
  v37 = *(_QWORD *)(v81 + 24);
  if ( v37 && (v38 = 0, *(_DWORD *)(v37 - 4)) )
  {
    while ( 1 )
    {
      if ( v23 )
        v39 = *(v23 - 1);
      else
        v39 = 0;
      sub_157BE40(
        (int)v96,
        v84,
        *(_QWORD *)(v37 + 8LL * v38),
        v39,
        (int)v23,
        v36,
        v78,
        v81,
        v84,
        v87,
        v90,
        (int)v91,
        v92,
        v93);
      v40 = *(_QWORD *)v96;
      *(_QWORD *)v96 = v35;
      if ( v35 )
      {
        v41 = v97;
        v8 = (*(_DWORD *)(v35 + 8))-- == 1;
        if ( v8 )
          sub_15D7BC0(v41, v35);
      }
      if ( v40 )
        ++*(_DWORD *)(v40 + 8);
      v42 = (_QWORD *)a1[2];
      if ( v42 )
      {
        v43 = *((_DWORD *)v42 - 1);
        if ( v43 == *((_DWORD *)v42 - 2) )
        {
          v63 = (3 * v43 + 1) >> 1;
          v64 = 8 * v63 + 8;
          if ( 8 * v43 + 8 >= (unsigned int)v64 || v43 >= v63 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_3BCB70((__int64 *)v96, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v96);
            sub_233E40((__int64)v96);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v65 = (unsigned int *)sub_186B300(v42 - 1, v64);
          v66 = v65[1];
          v42 = v65 + 2;
          *v65 = v63;
          a1[2] = v65 + 2;
          LODWORD(v65) = v66;
          v46 = &v42[v66];
          v45 = (_DWORD)v65 + 1;
        }
        else
        {
          v44 = v43;
          v45 = v43 + 1;
          v46 = &v42[v44];
        }
      }
      else
      {
        v74 = (_QWORD *)sub_186B270(0x18u);
        v42 = v74 + 1;
        *v74 = 2;
        v45 = 1;
        a1[2] = v42;
        v46 = v42;
      }
      *v46 = v40;
      ++v38;
      *((_DWORD *)v42 - 1) = v45;
      v37 = *(_QWORD *)(v81 + 24);
      if ( !v37 )
        break;
      v35 = v40;
      if ( v38 >= *(_DWORD *)(v37 - 4) )
        goto LABEL_62;
    }
  }
  else
  {
LABEL_62:
    v40 = v35;
  }
  if ( v23 )
    v47 = *(v23 - 1);
  else
    v47 = 0;
  sub_157BE40((int)v96, v84, *(_QWORD *)(v81 + 32), v47, (int)v23, v36, v78, v81, v84, v87, v90, (int)v91, v92, v93);
  v48 = *(_QWORD *)v96;
  *(_QWORD *)v96 = v40;
  sub_3BCB50(v40, v97);
  if ( v48 )
    ++*(_DWORD *)(v48 + 8);
  v49 = (_QWORD *)sub_186B270(0x18u);
  v50 = *a1;
  v49[1] = v48;
  *v49 = 0x100000002LL;
  v82 = v49 + 1;
  v51 = sub_15E1AF0(v50);
  v52 = v51;
  if ( v51 )
    ++*(_DWORD *)(v51 + 8);
  v53 = a1[6];
  v54 = a1[5];
  sub_3BCB50(v54, v53);
  a1[5] = v52;
  if ( (unsigned int)sub_180B130(v54) > 1 )
  {
    if ( (unsigned __int8)sub_186A530(a3) )
    {
      sub_186A4C0(a3);
      v55 = (_BYTE *)sub_180B150(v54, v53);
      v56 = "setup-match: ";
      sub_3BCC00((__int64)v55, "setup-match: ");
      v57 = a1[2];
      for ( j = 0; v57; v57 = a1[2] )
      {
        if ( j >= *(_DWORD *)(v57 - 4) )
          break;
        v59 = sub_180B150(v55, v56);
        sub_1606360(v96, *(_QWORD *)(a1[2] + 8LL * j), *a1, 0, 0, 0);
        sub_160E8B0(v59, v96);
        v56 = " ";
        std::__ostream_insert<char,std::char_traits<char>>();
        v55 = v98;
        ++j;
        sub_18572D0(v98);
      }
      v60 = sub_180B150(v55, v56);
      sub_1606360(v96, a1[5], *a1, 0, 0, 0);
      v61 = sub_160E8B0(v60, v96);
      sub_3BCC00(v61, "\n");
      sub_18572D0(v98);
      sub_186A500(v98, "\n");
    }
    else
    {
      v67 = (_BYTE *)sub_180B150(v54, v53);
      v68 = "setup-match: ";
      sub_3BCC00((__int64)v67, "setup-match: ");
      v69 = a1[2];
      for ( k = 0; v69; v69 = a1[2] )
      {
        if ( k >= *(_DWORD *)(v69 - 4) )
          break;
        v71 = sub_180B150(v67, v68);
        sub_1606360(v96, *(_QWORD *)(a1[2] + 8LL * k), *a1, 0, 0, 0);
        sub_160E8B0(v71, v96);
        v68 = " ";
        std::__ostream_insert<char,std::char_traits<char>>();
        v67 = v98;
        ++k;
        sub_18572D0(v98);
      }
      v72 = sub_180B150(v67, v68);
      sub_1606360(v96, a1[5], *a1, 0, 0, 0);
      v73 = sub_160E8B0(v72, v96);
      sub_3BCC00(v73, "\n");
      sub_18572D0(v98);
    }
  }
  v99[0] = &off_1C4CA80;
  sub_267D20(v85);
  if ( v79 )
    sub_186B220((void *)(v79 - 8));
  sub_3BCB50(v48, v88);
  v95 = v23;
  sub_2334C0(&v94);
  v93 = v82;
  return sub_2334C0(&v92);
}

