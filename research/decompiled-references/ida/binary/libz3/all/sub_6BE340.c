__int64 __fastcall sub_6BE340(
        __int64 a1,
        unsigned int a2,
        __int64 *a3,
        __int64 a4,
        __int64 *a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  char v9; // bp
  __int64 v11; // r14
  __int64 *v12; // r15
  __int64 *v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rsi
  int *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // edx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rdi
  bool v25; // zf
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned int v29; // r12d
  __int64 v30; // rdi
  __int64 (*v31)(); // rdx
  __m128i v32; // xmm0
  __int64 v33; // rbp
  __int64 v34; // rdi
  __int64 v35; // rax
  char v36; // bp
  int v37; // eax
  int v38; // edx
  int v39; // ecx
  int v40; // r8d
  int v41; // r9d
  int v42; // r13d
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned int v45; // ebp
  __int64 v46; // rax
  unsigned int v47; // r12d
  __int64 v48; // rax
  void (***v49)(void); // rbp
  __int64 v50; // rax
  char v52; // dl
  void *v53; // r12
  __int64 v54; // rbp
  __int64 v55; // r12
  void (__fastcall ***v56)(_QWORD); // rbp
  __int64 v57; // rbp
  void (***v58)(void); // rbp
  __int64 v59; // rax
  __int64 v60; // rax
  _QWORD *v61; // rax
  _QWORD *v62; // rbp
  __int64 v63; // r12
  unsigned int v64; // r13d
  __int64 v65; // rax
  _QWORD *v66; // r15
  __int64 *v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 *v71; // rcx
  __int64 *v72; // r15
  _QWORD *v73; // rsi
  __int64 v74; // rdx
  unsigned int v75; // eax
  unsigned int v76; // r13d
  size_t v77; // rsi
  unsigned int *v78; // rax
  __int64 v79; // rsi
  __int64 v80; // rcx
  char **exception; // rbx
  int v82; // [rsp+0h] [rbp-C8h]
  __int64 *v83; // [rsp+8h] [rbp-C0h]
  __int64 v84; // [rsp+10h] [rbp-B8h]
  void **p_ptr; // [rsp+10h] [rbp-B8h]
  __int64 v86; // [rsp+10h] [rbp-B8h]
  __int64 v87; // [rsp+18h] [rbp-B0h]
  int v88; // [rsp+20h] [rbp-A8h]
  unsigned int v89; // [rsp+24h] [rbp-A4h]
  __int64 *v90; // [rsp+28h] [rbp-A0h]
  __int64 *v91; // [rsp+30h] [rbp-98h]
  __int64 v92; // [rsp+38h] [rbp-90h]
  _QWORD *v93; // [rsp+40h] [rbp-88h]
  __int64 v94; // [rsp+48h] [rbp-80h]
  __int64 v95; // [rsp+48h] [rbp-80h]
  int v96[4]; // [rsp+50h] [rbp-78h] BYREF
  void *ptr; // [rsp+60h] [rbp-68h] BYREF
  __int64 v98; // [rsp+68h] [rbp-60h] BYREF
  int v99[2]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v100; // [rsp+78h] [rbp-50h]
  __int64 v101[9]; // [rsp+80h] [rbp-48h] BYREF

  v9 = a6;
  v11 = a1 + 80;
  v89 = a2;
  v90 = a3;
  v91 = a5;
  LODWORD(v94) = a6;
  sub_6BAEC0(a1);
  sub_8E36C0(a1 + 80);
  *(_BYTE *)(a1 + 760) = v9;
  *(_QWORD *)(a1 + 768) = a8;
  if ( a2 )
  {
    v12 = v90;
    v13 = &v90[a2];
    do
    {
      while ( 1 )
      {
        v15 = sub_15D1F10(*v12);
        v16 = *v12;
        v17 = *(int **)(v15 + 24);
        if ( !v17 )
          break;
        v18 = *v17;
        if ( (int)v18 < 0 )
          break;
        v14 = *(_QWORD *)(a1 + 40);
        if ( !v14 || (int)v18 >= *(_DWORD *)(v14 - 4) || !*(_QWORD *)(v14 + 8 * v18) )
          break;
        ++v12;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
        if ( v12 == v13 )
          goto LABEL_12;
      }
      *(_QWORD *)v99 = *v12;
      if ( v16 )
        ++*(_DWORD *)(v16 + 8);
      ++v12;
      sub_6ACAE0((_QWORD *)(a1 + 368), v99);
    }
    while ( v12 != v13 );
  }
LABEL_12:
  v93 = (_QWORD *)(a1 + 496);
  v19 = *(_QWORD *)(a1 + 752);
  if ( v19 )
  {
    while ( 1 )
    {
      v20 = *(_DWORD *)(v19 - 4);
      if ( !v20 )
        break;
      v21 = *(_QWORD *)(v19 + 8LL * (unsigned int)(v20 - 1));
      *(_QWORD *)v99 = v21;
      if ( v21 )
        ++*(_DWORD *)(v21 + 8);
      sub_6ACAE0((_QWORD *)(a1 + 512), v99);
      v19 = *(_QWORD *)(a1 + 752);
      v22 = (unsigned int)(*(_DWORD *)(v19 - 4) - 1);
      v23 = *(_QWORD *)(v19 + 8 * v22);
      *(_DWORD *)(v19 - 4) = v22;
      if ( v23 )
      {
        v24 = *(_QWORD *)(a1 + 744);
        v25 = (*(_DWORD *)(v23 + 8))-- == 1;
        if ( v25 )
        {
          sub_15D7BC0(v24, v23);
          v19 = *(_QWORD *)(a1 + 752);
          if ( !v19 )
            break;
        }
      }
    }
  }
  v26 = *(_QWORD *)(a1 + 392);
  *(_QWORD *)(a1 + 728) = v93;
  v83 = (__int64 *)(a1 + 392);
  if ( *v91 != v26 )
  {
    sub_6A99C0(v26, *(_QWORD *)(a1 + 400));
    v27 = *v91;
    *(_QWORD *)(a1 + 392) = *v91;
    if ( v27 )
      ++*(_DWORD *)(v27 + 8);
  }
  sub_14B9B80(a1 + 64, v83);
  v84 = a4;
  v28 = *(_QWORD *)(a1 + 40);
LABEL_23:
  v29 = 0;
  while ( v28 && v29 < *(_DWORD *)(v28 - 4) )
  {
    while ( 1 )
    {
      v30 = *(_QWORD *)(v28 + 8LL * v29);
      if ( v30 )
      {
        v31 = *(__int64 (**)())(*(_QWORD *)v30 + 64LL);
        if ( v31 != sub_6AFD50 )
          break;
      }
      if ( ++v29 >= *(_DWORD *)(v28 - 4) )
        goto LABEL_29;
    }
    ++v29;
    v52 = ((__int64 (__fastcall *)(__int64, __int64 *))v31)(v30, v83);
    v28 = *(_QWORD *)(a1 + 40);
    if ( v52 )
      goto LABEL_23;
  }
LABEL_29:
  sub_6BB860(a1 + 776, v83, a1 + 672, a1 + 696);
  v32 = _mm_loadu_si128((const __m128i *)(a1 + 392));
  if ( v32.m128i_i64[0] )
    ++*(_DWORD *)(v32.m128i_i64[0] + 8);
  *(__m128i *)v96 = v32;
  sub_6BDD20(a1, (unsigned __int8 (__fastcall ***)(_QWORD))(a1 + 8), (__int64 *)v96, (__int64 *)(a1 + 408));
  v33 = *(_QWORD *)v96;
  v92 = *(_QWORD *)&v96[2];
  v87 = *(_QWORD *)(a1 + 408);
  if ( *(_QWORD *)v96 == v87 )
  {
    if ( v87 )
      goto LABEL_36;
    v87 = 0;
  }
  else
  {
    v34 = *(_QWORD *)(a1 + 392);
    if ( *(_QWORD *)v96 != v34 )
    {
      sub_6A99C0(v34, *(_QWORD *)(a1 + 400));
      v35 = *(_QWORD *)(a1 + 408);
      *(_QWORD *)(a1 + 392) = v33;
      v87 = v35;
      if ( v33 )
      {
        ++*(_DWORD *)(v33 + 8);
        if ( v33 == v35 )
        {
          sub_8E3610(v11);
LABEL_36:
          ++*(_DWORD *)(v87 + 8);
          goto LABEL_37;
        }
      }
      else if ( !v35 )
      {
        sub_8E3610(v11);
        goto LABEL_37;
      }
    }
    sub_6A99C0(v33, v92);
    v60 = *(_QWORD *)(a1 + 408);
    v87 = v60;
    if ( v60 )
    {
      ++*(_DWORD *)(v60 + 8);
      sub_8E3610(v11);
      goto LABEL_36;
    }
    sub_8E3610(v11);
    v87 = 0;
  }
LABEL_37:
  sub_6A99C0(*(_QWORD *)(a1 + 568), *(_QWORD *)(a1 + 576));
  *(_QWORD *)(a1 + 568) = v87;
  sub_8E3610(v11);
  if ( v84 )
    sub_8E3610(v11);
  v36 = 0;
  p_ptr = &ptr;
  while ( 1 )
  {
    v37 = sub_8E3730(v11, 0, 0);
    v42 = v37;
    if ( v37 != 1 )
      break;
    if ( (unsigned __int8)sub_15EC800(
                            *(_QWORD *)(a1 + 48),
                            *(_QWORD *)(a1 + 392),
                            v38,
                            v39,
                            v40,
                            v41,
                            v82,
                            (__int64)v83,
                            (__int64)p_ptr,
                            v87,
                            v88,
                            (__int64)v90,
                            (__int64)v91,
                            v92,
                            (__int64)v93,
                            v94,
                            v96[0],
                            *(__int64 *)&v96[2]) )
      goto LABEL_88;
    ptr = nullptr;
    sub_8E3780(v11, p_ptr);
    if ( !ptr )
      goto LABEL_88;
    v53 = (void *)sub_186B270(8u);
    *(_QWORD *)v99 = 0;
    sub_1360C00(v53, ptr, v99);
    sub_18572D0(v99);
    while ( (unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 48)) )
    {
      while ( *(_QWORD *)(a1 + 392) && (unsigned int)sub_6BCA40(a1, (__int64)v53, 0) == 1 && *(_QWORD *)(a1 + 392) )
        sub_6BCA40(a1, (__int64)v53, 1);
      if ( (unsigned int)sub_6BCA40(a1, (__int64)v53, 1) )
      {
        sub_1872CE0("");
        sub_1873130(114, 1514);
      }
      if ( (unsigned int)sub_8E3730(v11, 0, 0) != 1 )
        goto LABEL_81;
      sub_8E3780(v11, p_ptr);
      if ( !ptr )
      {
        v42 = 0;
LABEL_81:
        sub_13606C0(v53);
        sub_186B220(v53);
        v56 = (void (__fastcall ***)(_QWORD))ptr;
        if ( !ptr || (v25 = *((_DWORD *)ptr + 4) == 1, --*((_DWORD *)ptr + 4), !v25) )
        {
LABEL_83:
          if ( v42 == 1 )
            goto LABEL_84;
LABEL_88:
          sub_6B2860(a7, v89, v90);
          goto LABEL_60;
        }
LABEL_101:
        (**v56)(v56);
        sub_186B220(v56);
        goto LABEL_83;
      }
      v54 = sub_186B270(8u);
      *(_QWORD *)v99 = 0;
      sub_1360C00(v54, ptr, v99);
      if ( (void *)v54 != v53 )
      {
        sub_13606C0(v53);
        sub_186B220(v53);
      }
      sub_18572D0(v99);
      v55 = *(_QWORD *)(a1 + 728);
      sub_6BCA40(a1, v54, 0);
      v25 = v55 == *(_QWORD *)(a1 + 728);
      v53 = (void *)v54;
      if ( v25 )
        break;
    }
    if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 48)) )
    {
      sub_13606C0(v53);
      sub_186B220(v53);
      v56 = (void (__fastcall ***)(_QWORD))ptr;
      if ( !ptr )
        goto LABEL_88;
      v25 = (*((_DWORD *)ptr + 4))-- == 1;
      if ( !v25 )
        goto LABEL_88;
      v42 = 0;
      goto LABEL_101;
    }
    sub_6B6BC0((__int64 *)a1, (__int64)v53);
    sub_13606C0(v53);
    sub_186B220(v53);
    v56 = (void (__fastcall ***)(_QWORD))ptr;
    if ( ptr )
    {
      v25 = (*((_DWORD *)ptr + 4))-- == 1;
      if ( v25 )
        goto LABEL_101;
    }
LABEL_84:
    v36 = 1;
  }
  if ( !v37 )
    goto LABEL_88;
  if ( !v36 )
  {
    v57 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 864LL);
    if ( v57 )
      ++*(_DWORD *)(v57 + 8);
    sub_6A99C0(*v91, v91[1]);
    *v91 = v57;
    if ( *(_QWORD *)(a1 + 408) != *(_QWORD *)(a1 + 392) )
    {
      v58 = (void (***)(void))sub_1434DE0(*(_QWORD *)(a1 + 48), 0);
      sub_14355E0(v58, *(_QWORD *)(a1 + 408), *v91, v83);
      if ( *v91 != *(_QWORD *)(a1 + 392) )
      {
        sub_6A99C0(*v91, v91[1]);
        v59 = *(_QWORD *)(a1 + 392);
        *v91 = v59;
        if ( v59 )
          ++*(_DWORD *)(v59 + 8);
      }
      sub_41EA70(v58);
    }
    goto LABEL_60;
  }
  if ( (_BYTE)v94 )
    goto LABEL_44;
  ptr = *(void **)(a1 + 48);
  v61 = (_QWORD *)sub_186B270(0x18u);
  v62 = v61 + 1;
  v63 = 0;
  v64 = 1;
  v61[1] = v93;
  *v61 = 0x100000002LL;
  do
  {
    v65 = v64 - 1;
    v66 = (_QWORD *)v62[v65];
    --v64;
    *((_DWORD *)v62 - 1) = v65;
    v67 = (__int64 *)v66[18];
    if ( !v67 )
    {
      v69 = v66[9];
      if ( !v69 )
        continue;
      v80 = v66[2];
      if ( v80 )
      {
        if ( *(_DWORD *)(v80 - 4) )
          goto LABEL_126;
LABEL_109:
        if ( v66[3] )
        {
LABEL_110:
          if ( !v67 )
            goto LABEL_126;
          goto LABEL_111;
        }
      }
      else if ( v66[3] )
      {
LABEL_126:
        v64 = *((_DWORD *)v62 - 1);
        continue;
      }
LABEL_132:
      *(_QWORD *)v99 = v69;
      ++*(_DWORD *)(v69 + 8);
      v98 = v63;
      sub_6ACBA0(&v98, v99);
      v63 = v98;
      v67 = (__int64 *)v66[18];
      goto LABEL_110;
    }
    v68 = *((unsigned int *)v67 - 1);
    if ( (_DWORD)v68 )
      goto LABEL_112;
    v69 = v66[9];
    if ( !v69 )
      goto LABEL_126;
    v70 = v66[2];
    if ( v70 )
    {
      if ( !*(_DWORD *)(v70 - 4) )
        goto LABEL_109;
    }
    else if ( !v66[3] )
    {
      goto LABEL_132;
    }
LABEL_111:
    v68 = *((unsigned int *)v67 - 1);
LABEL_112:
    v71 = &v67[v68];
    if ( v71 == v67 )
      goto LABEL_126;
    v72 = v67;
    do
    {
      v74 = *v72;
      v75 = *((_DWORD *)v62 - 1);
      if ( v75 == *((_DWORD *)v62 - 2) )
      {
        v76 = (3 * v75 + 1) >> 1;
        v77 = 8 * v76 + 8;
        if ( 8 * v75 + 8 >= (unsigned int)v77 || v75 >= v76 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_6A99E0((__int64 *)v99, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v99);
          sub_233E40((__int64)v99);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v95 = *v72;
        v86 = (__int64)v71;
        v78 = (unsigned int *)sub_186B300(v62 - 1, v77);
        v79 = v78[1];
        v62 = v78 + 2;
        v71 = (__int64 *)v86;
        *v78 = v76;
        v74 = v95;
        LODWORD(v78) = v79;
        v73 = &v62[v79];
        v64 = (_DWORD)v78 + 1;
      }
      else
      {
        v64 = v75 + 1;
        v73 = &v62[v75];
      }
      ++v72;
      *v73 = v74;
      *((_DWORD *)v62 - 1) = v64;
    }
    while ( v72 != v71 );
  }
  while ( v64 );
  sub_186B220(v62 - 1);
  if ( v63 )
    v64 = *(_DWORD *)(v63 - 4);
  sub_6B0370(a1 + 128, v64, v63, v91);
  v98 = v63;
  sub_2334C0((__int64 *)&ptr);
LABEL_44:
  if ( a8 )
  {
    v43 = *(_QWORD *)(a1 + 496);
    v100 = 0;
    v101[1] = 0;
    *(_QWORD *)v99 = v43;
    v101[0] = v43;
    sub_6BA260(v93, (__int64 *)v99, a8);
    sub_2334C0(v101);
    sub_24AC60((__int64 *)v99);
    v44 = *(_QWORD *)(a8 + 8);
    if ( v44 )
    {
      v45 = 0;
      do
      {
        if ( v45 >= *(_DWORD *)(v44 - 4) )
          break;
        sub_6AACF0((__int64 *)(*(_QWORD *)(a8 + 16) + 32LL * v45++), v89, (__int64)v90);
        v44 = *(_QWORD *)(a8 + 8);
      }
      while ( v44 );
    }
  }
  v46 = *(_QWORD *)(a1 + 368);
  if ( v46 )
  {
    v47 = 0;
    do
    {
      if ( v47 >= *(_DWORD *)(v46 - 4) )
        break;
      v48 = *(_QWORD *)(v46 + 8LL * v47);
      *(_QWORD *)v99 = v48;
      if ( v48 )
        ++*(_DWORD *)(v48 + 8);
      sub_6ACAE0((_QWORD *)(a7 + 8), v99);
      v46 = *(_QWORD *)(a1 + 368);
      ++v47;
    }
    while ( v46 );
  }
  if ( *(_QWORD *)(a1 + 408) != *(_QWORD *)(a1 + 392) )
  {
    v49 = (void (***)(void))sub_1434DE0(*(_QWORD *)(a1 + 48), 0);
    sub_14355E0(v49, *(_QWORD *)(a1 + 408), *v91, v83);
    if ( *v91 != *(_QWORD *)(a1 + 392) )
    {
      sub_6A99C0(*v91, v91[1]);
      v50 = *(_QWORD *)(a1 + 392);
      *v91 = v50;
      if ( v50 )
        ++*(_DWORD *)(v50 + 8);
    }
    sub_41EA70(v49);
  }
LABEL_60:
  sub_6BAEC0(a1);
  sub_8E36D0(v11);
  return sub_6A99C0(v87, v92);
}

