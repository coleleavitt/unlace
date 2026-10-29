__int64 (__fastcall **__fastcall sub_7205A0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4))()
{
  __int64 v5; // r12
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  int v8; // r8d
  int v9; // r9d
  __int64 *v10; // r15
  __int64 v11; // rbx
  unsigned __int64 v12; // r14
  _QWORD *v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // r15
  int v16; // eax
  _DWORD *v17; // rsi
  int v18; // eax
  _DWORD *v19; // rsi
  __int64 *v20; // rbx
  __int64 v21; // rsi
  __int64 v22; // rdi
  bool v23; // zf
  __int64 *v24; // rax
  __int64 *v25; // rcx
  __int64 v26; // rdx
  _QWORD *v27; // rbx
  unsigned int v28; // eax
  int v29; // eax
  __int64 v30; // rdi
  int v31; // r8d
  int v32; // r9d
  __int64 v33; // rax
  __int64 (__fastcall **result)(); // rax
  unsigned int v35; // eax
  __int64 v36; // rsi
  int v37; // eax
  _QWORD *v38; // rsi
  unsigned int v39; // r15d
  size_t v40; // rsi
  unsigned int *v41; // rax
  __int64 v42; // rsi
  _QWORD *v43; // rax
  __int64 (__fastcall **v44)(); // r14
  __int64 v45; // r15
  __m128i v46; // xmm0
  __int64 v47; // rdx
  __int64 v48; // rdx
  char v49; // al
  __int64 *v50; // r14
  char v51; // bp
  unsigned __int64 v52; // r15
  __int64 v53; // rsi
  __int64 v54; // rdi
  int v55; // ecx
  __int32 v56; // eax
  int v57; // esi
  int v58; // edx
  int v59; // eax
  __int64 *v60; // rcx
  int v61; // esi
  __int64 v62; // rax
  unsigned int v63; // edx
  __int64 *v64; // rdi
  __int64 v65; // rdx
  __int64 *v66; // r8
  __int64 *i; // rax
  __int64 v68; // rdx
  __int64 v69; // r14
  __int64 v70; // rdx
  unsigned int v71; // ecx
  unsigned int v72; // ebp
  __int64 v73; // r15
  __int64 v74; // rax
  __int64 v75; // rbx
  __int64 v76; // rdx
  unsigned __int64 v77; // rax
  __int64 v78; // rbx
  __int64 v79; // rax
  __int64 v80; // rbp
  char **exception; // r12
  __m128i v82; // [rsp+0h] [rbp-138h] BYREF
  __int64 (__fastcall **v83)(); // [rsp+10h] [rbp-128h]
  __int64 v84; // [rsp+18h] [rbp-120h]
  __int64 v85; // [rsp+20h] [rbp-118h]
  __int64 v86; // [rsp+28h] [rbp-110h]
  __int64 *v87; // [rsp+30h] [rbp-108h]
  __m128i v88; // [rsp+38h] [rbp-100h] BYREF
  void *v89; // [rsp+48h] [rbp-F0h]
  __m128i v90; // [rsp+50h] [rbp-E8h] BYREF
  __int64 *v91; // [rsp+60h] [rbp-D8h]
  __int64 (__fastcall **v92)(); // [rsp+68h] [rbp-D0h]
  __m128i v93; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v94; // [rsp+88h] [rbp-B0h]
  void *v95; // [rsp+90h] [rbp-A8h]
  __int64 v96; // [rsp+A0h] [rbp-98h]
  void *v97; // [rsp+A8h] [rbp-90h]
  __int64 (__fastcall **v98)(); // [rsp+B0h] [rbp-88h]
  __int64 v99; // [rsp+C0h] [rbp-78h]
  void *v100; // [rsp+C8h] [rbp-70h]
  __int64 v101; // [rsp+D8h] [rbp-60h]
  void *ptr; // [rsp+E0h] [rbp-58h]
  __int64 v103; // [rsp+E8h] [rbp-50h]
  __int64 *v104; // [rsp+F0h] [rbp-48h]
  char v105; // [rsp+F8h] [rbp-40h]

  v5 = *a2;
  v87 = a2;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_QWORD *)(v5 + 16);
  v86 = a3;
  v84 = a4;
  v85 = *(_QWORD *)(v7 + 40);
  v88.m128i_i64[0] = (__int64)&v90;
  sub_6AA8D0(&v90, v6, a3);
  v10 = v91;
  if ( !v91 )
    goto LABEL_38;
  v11 = *((unsigned int *)v91 - 1);
  if ( !(_DWORD)v11 )
  {
    sub_186B220(v91 - 1);
LABEL_38:
    v83 = (__int64 (__fastcall **)())(a1 + 32);
    goto LABEL_25;
  }
  v12 = 0;
  v13 = nullptr;
  v82.m128i_i64[0] = 8 * v11;
  v83 = (__int64 (__fastcall **)())(a1 + 32);
  do
  {
    while ( 1 )
    {
      v14 = v10[v12 / 8];
      if ( !*(_WORD *)(v14 + 4) )
        break;
      v12 += 8LL;
      if ( v12 == v82.m128i_i64[0] )
        goto LABEL_11;
    }
    v15 = *(_QWORD *)(v14 + 16);
    v16 = sub_15F0200(v83);
    v17 = *(_DWORD **)(v15 + 24);
    if ( v17 && v16 == *v17 && v17[1] == 1 )
    {
      if ( !v13 )
        goto LABEL_36;
      goto LABEL_28;
    }
    v18 = sub_15F0200(v83);
    v19 = *(_DWORD **)(v15 + 24);
    if ( v19 && v18 == *v19 && v19[1] == 2 )
    {
      if ( !v13 )
      {
LABEL_36:
        v43 = (_QWORD *)sub_186B270(0x18u);
        v13 = v43 + 1;
        *v43 = 2;
        v37 = 1;
        v38 = v13;
LABEL_30:
        *v38 = v14;
        *((_DWORD *)v13 - 1) = v37;
        goto LABEL_10;
      }
LABEL_28:
      v35 = *((_DWORD *)v13 - 1);
      if ( v35 == *((_DWORD *)v13 - 2) )
      {
        v39 = (3 * v35 + 1) >> 1;
        v40 = 8 * v39 + 8;
        if ( 8 * v35 + 8 >= (unsigned int)v40 || v35 >= v39 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v93.m128i_i64, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v93);
          sub_233E40((__int64)&v93);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v41 = (unsigned int *)sub_186B300(v13 - 1, v40);
        v42 = v41[1];
        v13 = v41 + 2;
        *v41 = v39;
        LODWORD(v41) = v42;
        v38 = &v13[v42];
        v37 = (_DWORD)v41 + 1;
      }
      else
      {
        v36 = v35;
        v37 = v35 + 1;
        v38 = &v13[v36];
      }
      goto LABEL_30;
    }
LABEL_10:
    v12 += 8LL;
    v10 = v91;
  }
  while ( v12 != v82.m128i_i64[0] );
LABEL_11:
  if ( v10 )
  {
    v20 = &v10[*((unsigned int *)v10 - 1)];
    if ( v10 >= v20 )
      goto LABEL_19;
    do
    {
      while ( 1 )
      {
        v21 = *v10;
        if ( *v10 )
        {
          v22 = v90.m128i_i64[1];
          v23 = (*(_DWORD *)(v21 + 8))-- == 1;
          if ( v23 )
            break;
        }
        if ( ++v10 >= v20 )
          goto LABEL_18;
      }
      sub_15D7BC0(v22, v21);
      ++v10;
    }
    while ( v10 < v20 );
LABEL_18:
    v10 = v91;
    if ( v91 )
LABEL_19:
      sub_186B220(v10 - 1);
  }
  if ( !v13 )
  {
LABEL_25:
    v27 = (_QWORD *)sub_15F6BE0(v83, v85);
    v28 = sub_182D020(qword_1C7F2C0, v84);
    v29 = sub_15F0A30(v83, *(_QWORD *)(*v27 + 8LL * v28));
    v30 = *(_QWORD *)(a1 + 8);
    v93.m128i_i64[0] = v5;
    v33 = sub_15DC610(
            v30,
            v29,
            1,
            (int)&v93,
            v31,
            v32,
            v82.m128i_i32[0],
            v82.m128i_i32[2],
            (int)v83,
            v84,
            v85,
            v86,
            (int)v87,
            v88.m128i_i32[0],
            v88.m128i_i32[2],
            v89);
    return (__int64 (__fastcall **)())(*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 96LL))(
                                        *(_QWORD *)(a1 + 24),
                                        1,
                                        v33,
                                        0,
                                        0);
  }
  v24 = v13;
  v25 = &v13[*((unsigned int *)v13 - 1)];
  do
  {
    if ( v24 == v25 )
    {
      sub_186B220(v13 - 1);
      goto LABEL_25;
    }
    v26 = *v24++;
  }
  while ( v5 != *(_QWORD *)(v26 + 32) );
  v44 = v83;
  v45 = sub_15F0BB0((_DWORD)v83, *(_QWORD *)(v26 + 16), v26, (_DWORD)v25, v8, v9);
  v83 = &off_1C62200;
  v82 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v88), (__m128i)(unsigned __int64)&off_1C62200);
  sub_186B220(v13 - 1);
  v46 = _mm_load_si128(&v82);
  v91 = (__int64 *)v45;
  v47 = *v87;
  v92 = v44;
  v90.m128i_i64[0] = (__int64)off_1C53798;
  v90.m128i_i64[1] = v47;
  v48 = *(_QWORD *)(a1 + 8);
  v94 = 0;
  v95 = nullptr;
  v96 = 0;
  v97 = nullptr;
  v98 = &off_1C62200;
  v99 = 0;
  v100 = nullptr;
  v101 = 0;
  ptr = nullptr;
  v103 = v48;
  v104 = nullptr;
  v105 = 1;
  v93 = v46;
  v49 = sub_168D740(&v93, v86);
  v50 = v104;
  v51 = v49;
  if ( v104 )
  {
    v52 = (unsigned __int64)&v104[*((unsigned int *)v104 - 1)];
    if ( (unsigned __int64)v104 >= v52 )
      goto LABEL_47;
    do
    {
      while ( 1 )
      {
        v53 = *v50;
        if ( *v50 )
        {
          v54 = v103;
          v23 = (*(_DWORD *)(v53 + 8))-- == 1;
          if ( v23 )
            break;
        }
        if ( (unsigned __int64)++v50 >= v52 )
          goto LABEL_46;
      }
      sub_15D7BC0(v54, v53);
      ++v50;
    }
    while ( (unsigned __int64)v50 < v52 );
LABEL_46:
    v50 = v104;
    if ( v104 )
LABEL_47:
      sub_186B220(v50 - 1);
  }
  v98 = &off_1C62200;
  if ( ptr )
    sub_186B220(ptr);
  if ( v100 )
    sub_186B220(v100);
  result = &off_1C62200;
  v93.m128i_i64[1] = (__int64)&off_1C62200;
  if ( v97 )
    result = (__int64 (__fastcall **)())sub_186B220(v97);
  if ( v95 )
    result = (__int64 (__fastcall **)())sub_186B220(v95);
  if ( v51 )
    return result;
  v55 = *(_DWORD *)(v5 + 12);
  v82.m128i_i32[0] = *(_DWORD *)(v86 + 12);
  v56 = (v82.m128i_i32[0] - v55) ^ (v55 << 8);
  v57 = (v55 - v56) << 10;
  v58 = v56 ^ ((v55 - v56) << 16);
  v59 = v56 - v55;
  v60 = *(__int64 **)(a1 + 192);
  v61 = (v58 + v59) ^ v57;
  v62 = *(unsigned int *)(a1 + 200);
  v63 = v62 - 1;
  v62 *= 32;
  v64 = (__int64 *)((char *)v60 + v62);
  v65 = 32LL * (v61 & v63);
  v66 = &v60[(unsigned __int64)v65 / 8];
  if ( v65 != v62 )
  {
    for ( i = &v60[(unsigned __int64)v65 / 8]; v64 != i; i += 4 )
    {
      v68 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *((_DWORD *)i + 6) == v61 && v5 == v68 && v86 == i[1] )
          goto LABEL_67;
      }
      else if ( !v68 )
      {
        goto LABEL_65;
      }
    }
  }
  if ( v60 == v66 )
  {
LABEL_65:
    sub_1872CE0("");
    sub_1873130(114, 828);
  }
  while ( 2 )
  {
    v77 = *v60;
    if ( (unsigned __int64)*v60 <= 1 )
    {
      if ( !v77 )
        goto LABEL_65;
      goto LABEL_82;
    }
    if ( *((_DWORD *)v60 + 6) != v61 || v5 != v77 || v86 != v60[1] )
    {
LABEL_82:
      v60 += 4;
      if ( v66 == v60 )
        goto LABEL_65;
      continue;
    }
    break;
  }
  i = v60;
LABEL_67:
  v69 = i[2];
  result = (__int64 (__fastcall **)())sub_182D020(qword_1C7F2C0, v84);
  v70 = *(_QWORD *)(v69 + 32);
  if ( v70 )
  {
    v71 = *(_DWORD *)(v70 - 4);
    v72 = 0;
    if ( (unsigned int)result < v71 )
    {
      v78 = *(_QWORD *)(a1 + 8);
      v79 = sub_15E1B70(v78);
      v80 = v79;
      if ( v79 )
        ++*(_DWORD *)(v79 + 8);
      result = (__int64 (__fastcall **)())(*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 96LL))(
                                            *(_QWORD *)(a1 + 24),
                                            1,
                                            v79,
                                            0,
                                            0);
      if ( v80 )
      {
        v23 = (*(_DWORD *)(v80 + 8))-- == 1;
        if ( v23 )
          return (__int64 (__fastcall **)())sub_15D7BC0(v78, v80);
      }
    }
    else if ( v71 )
    {
      do
      {
        v73 = *(_QWORD *)(a1 + 8);
        sub_15E1B70(v73);
        v74 = sub_15E1A70(v73);
        v75 = v74;
        if ( v74 )
          ++*(_DWORD *)(v74 + 8);
        result = (__int64 (__fastcall **)())(*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 96LL))(
                                              *(_QWORD *)(a1 + 24),
                                              1,
                                              v74,
                                              0,
                                              0);
        if ( v75 )
        {
          v23 = (*(_DWORD *)(v75 + 8))-- == 1;
          if ( v23 )
            result = (__int64 (__fastcall **)())sub_15D7BC0(v73, v75);
        }
        v76 = *(_QWORD *)(v69 + 32);
        ++v72;
      }
      while ( v76 && v72 < *(_DWORD *)(v76 - 4) );
    }
  }
  return result;
}

