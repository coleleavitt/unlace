unsigned __int64 __fastcall sub_1A00C0(__int64 *a1, char a2)
{
  __int64 v2; // rax
  int v4; // ebp
  __int64 *v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rdx
  __int64 *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  __int64 v12; // rbp
  __m128i si128; // xmm0
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // rbx
  __int64 *v16; // rbp
  __int64 v17; // r14
  void *v18; // rax
  size_t v19; // rdx
  _QWORD *v20; // rdi
  __int64 v21; // rax
  int v22; // ebx
  __int64 j; // rax
  __int64 *v24; // rbp
  __int64 v25; // rdi
  __int64 v26; // r12
  __int64 v27; // rbx
  __int64 *v28; // rbp
  __int64 v29; // rdi
  unsigned __int64 v31; // rbp
  __int64 *v32; // r12
  __int64 v33; // rdi
  void *v34; // rax
  size_t v35; // rax
  __int64 *v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rbx
  size_t v40; // rbx
  __int64 *v41; // rbx
  __int64 i; // rbx
  __int64 v43; // rax
  __int64 v44; // rcx
  _QWORD *v45; // rax
  __int64 v46; // rdx
  _QWORD *v47; // rax
  _QWORD *v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  int v52; // r9d
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  int v56; // r9d
  int v57; // r8d
  int v58; // r9d
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  int v62; // r9d
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r12
  __int64 v66; // r13
  void *v67; // rax
  size_t v68; // rdx
  __int64 *v69; // r12
  __int64 v70; // rcx
  __int64 v71; // r14
  __int64 v72; // rax
  void *v73; // rax
  size_t n[2]; // [rsp+0h] [rbp-1F8h] BYREF
  __int64 *v75; // [rsp+10h] [rbp-1E8h]
  void **v76; // [rsp+18h] [rbp-1E0h]
  unsigned int v77; // [rsp+20h] [rbp-1D8h]
  char v78; // [rsp+27h] [rbp-1D1h]
  __int64 v79; // [rsp+28h] [rbp-1D0h]
  __int64 v80; // [rsp+30h] [rbp-1C8h]
  __int64 (__fastcall ***v81)(); // [rsp+38h] [rbp-1C0h]
  _QWORD v82[2]; // [rsp+40h] [rbp-1B8h] BYREF
  _QWORD v83[2]; // [rsp+50h] [rbp-1A8h] BYREF
  __int64 v84[2]; // [rsp+60h] [rbp-198h] BYREF
  void *v85; // [rsp+70h] [rbp-188h] BYREF
  __int128 v86; // [rsp+78h] [rbp-180h]
  __int64 v87[2]; // [rsp+90h] [rbp-168h] BYREF
  void *v88; // [rsp+A0h] [rbp-158h] BYREF
  __int128 v89; // [rsp+A8h] [rbp-150h]
  __int64 v90[2]; // [rsp+C0h] [rbp-138h] BYREF
  __int64 v91; // [rsp+D0h] [rbp-128h] BYREF
  __int64 v92; // [rsp+D8h] [rbp-120h]
  __int64 v93[2]; // [rsp+F0h] [rbp-108h] BYREF
  void *v94; // [rsp+100h] [rbp-F8h] BYREF
  __int128 v95; // [rsp+108h] [rbp-F0h]
  __int64 (__fastcall **v96)(); // [rsp+120h] [rbp-D8h] BYREF
  __int64 *v97; // [rsp+128h] [rbp-D0h] BYREF
  __int128 v98; // [rsp+130h] [rbp-C8h]
  __int64 v99[2]; // [rsp+140h] [rbp-B8h] BYREF
  void *src; // [rsp+150h] [rbp-A8h]
  __int128 v101; // [rsp+158h] [rbp-A0h]
  __int64 v102[2]; // [rsp+168h] [rbp-90h] BYREF
  __int64 v103; // [rsp+178h] [rbp-80h]
  __m128i v104; // [rsp+180h] [rbp-78h]
  int v105; // [rsp+190h] [rbp-68h]
  _QWORD *v106; // [rsp+198h] [rbp-60h]
  __int64 v107; // [rsp+1A0h] [rbp-58h]
  __int64 *v108; // [rsp+1A8h] [rbp-50h]
  __int64 *v109; // [rsp+1B0h] [rbp-48h]
  unsigned __int64 v110; // [rsp+1B8h] [rbp-40h]

  v78 = a2;
  v110 = __readfsqword(0x28u);
  v2 = 0;
  if ( !a1[3] )
    return v110 - __readfsqword(0x28u);
  v4 = 0;
  v75 = v84;
  v84[0] = 0;
  v84[1] = 0;
  v85 = nullptr;
  v76 = &v85;
  v86 = 0;
  do
  {
    v5 = *(__int64 **)(a1[2] + 8 * v2);
    sub_64280(v75, v5);
    sub_316CB0(v76, v5 + 2);
    v2 = ++v4;
  }
  while ( v4 < (unsigned __int64)a1[3] );
  v6 = a1[5];
  v7 = (_QWORD *)*a1;
  v96 = &off_4DE388;
  v8 = v75;
  v107 = v6;
  v108 = a1 + 6;
  v97 = nullptr;
  v99[0] = 0;
  v99[1] = 0;
  src = nullptr;
  v102[0] = 0;
  v102[1] = 0;
  v103 = 0;
  v105 = 1;
  v106 = v7;
  v109 = a1 + 11;
  v98 = 0;
  v101 = 0;
  v104 = 0;
  sub_648D0(v102, v75);
  v11 = v86;
  v12 = 0;
  if ( (_QWORD)v86 )
  {
    v34 = (void *)qalloc_or_throw(16 * v86, (__int64)v75, v9, v10);
    v8 = (__int64 *)v85;
    v12 = (__int64)v34;
    memcpy(v34, v85, 16 * v11);
  }
  si128 = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v11);
  if ( v103 )
  {
    *(__m128i *)n = si128;
    v104.m128i_i64[0] = 0;
    qfree(v103);
    si128 = _mm_load_si128((const __m128i *)n);
  }
  v103 = v12;
  v104 = si128;
  v14 = v98;
  v15 = *((int *)v106 + 16);
  if ( v15 < (unsigned __int64)v98 )
  {
    v31 = *((int *)v106 + 16);
    do
    {
      v32 = &v97[5 * v31];
      v33 = v32[2];
      if ( v33 )
      {
        v32[3] = 0;
        qfree(v33);
      }
      ++v31;
      qfree(*v32);
    }
    while ( v31 < v14 );
LABEL_17:
    *(_QWORD *)&v98 = v15;
    goto LABEL_18;
  }
  if ( (unsigned __int64)v98 >= v15 )
    goto LABEL_18;
  v8 = v97;
  if ( v99 < v97 || v99 >= &v97[5 * *((_QWORD *)&v98 + 1)] )
  {
    if ( *((_QWORD *)&v98 + 1) >= v15
      || (v72 = qvector_reserve((__int64)&v97, (__int64)v97, *((int *)v106 + 16), 40),
          v14 = v98,
          v97 = (__int64 *)v72,
          v8 = (__int64 *)v72,
          (unsigned __int64)v98 < v15) )
    {
      while ( 1 )
      {
        v16 = &v8[5 * v14];
        v8 = v99;
        sub_64000(v16, (__int64)v99);
        v16[2] = 0;
        *(_OWORD *)(v16 + 3) = 0;
        v17 = v101;
        if ( (_QWORD)v101 )
        {
          n[0] = 16 * v101;
          v18 = (void *)qalloc_or_throw(16 * v101, (__int64)v99, 16 * v101, v10);
          v16[2] = (__int64)v18;
          v19 = n[0];
          ++v14;
          v16[4] = v17;
          v8 = (__int64 *)src;
          memcpy(v18, src, v19);
          v16[3] = v17;
          if ( v14 >= v15 )
            goto LABEL_17;
        }
        else if ( ++v14 >= v15 )
        {
          goto LABEL_17;
        }
        v8 = v97;
      }
    }
    goto LABEL_17;
  }
  v8 = v99;
  sub_64000(v93, (__int64)v99);
  v65 = v101;
  v94 = nullptr;
  v95 = 0;
  if ( (_QWORD)v101 )
  {
    v73 = (void *)qalloc_or_throw(16 * v101, (__int64)v99, v63, v64);
    v8 = (__int64 *)src;
    v94 = v73;
    *((_QWORD *)&v95 + 1) = v65;
    memcpy(v73, src, 16 * v65);
    *(_QWORD *)&v95 = v65;
  }
  if ( *((_QWORD *)&v98 + 1) < v15 )
  {
    v8 = v97;
    v97 = (__int64 *)qvector_reserve((__int64)&v97, (__int64)v97, v15, 40);
  }
  v66 = v98;
  if ( (unsigned __int64)v98 < v15 )
  {
    do
    {
      v8 = v93;
      v69 = &v97[5 * v66];
      sub_64000(v69, (__int64)v93);
      v69[2] = 0;
      *(_OWORD *)(v69 + 3) = 0;
      v71 = v95;
      if ( (_QWORD)v95 )
      {
        n[0] = 16 * v95;
        v67 = (void *)qalloc_or_throw(16 * v95, (__int64)v93, 16 * v95, v70);
        v69[2] = (__int64)v67;
        v68 = n[0];
        v69[4] = v71;
        v8 = (__int64 *)v94;
        memcpy(v67, v94, v68);
        v69[3] = v71;
      }
      ++v66;
    }
    while ( v15 != v66 );
  }
  *(_QWORD *)&v98 = v15;
  if ( v94 )
  {
    *(_QWORD *)&v95 = 0;
    qfree((__int64)v94);
  }
  qfree(v93[0]);
LABEL_18:
  v20 = (_QWORD *)*a1;
  v81 = &v96;
  v21 = sub_670E0(v20, (__int64)v8, v9, v10);
  v81 = &v96;
  sub_3111E0(v21, &v96);
  if ( !(_QWORD)v86 )
    sub_1953C0();
  v80 = 40;
  v77 = 1;
  v79 = *((_QWORD *)v85 + 2 * v86 - 2) + *((_QWORD *)v85 + 2 * v86 - 1) - 1LL;
  if ( *(int *)(*a1 + 64) <= 1 )
    goto LABEL_22;
  while ( !(unsigned __int8)sub_64880(v75) || (_QWORD)v86 )
  {
    if ( v77 >= *(_DWORD *)(*a1 + 64) )
    {
      if ( !under_debugger )
        sub_383060(52719);
LABEL_104:
      BUG();
    }
    v35 = *(_QWORD *)(*(_QWORD *)(*a1 + 528) + 8LL * v77);
    n[0] = v35;
    if ( *((_DWORD *)a1 + 10) == v77
      || *((_DWORD *)a1 + 11) == v77
      || (unsigned __int8)sub_64780((_QWORD *)(v35 + 120), v75)
      || (unsigned __int8)sub_318470(n[0] + 136, v76) )
    {
      v36 = v75;
      sub_64000(v87, (__int64)v75);
      v39 = v86;
      v88 = nullptr;
      v89 = 0;
      if ( (_QWORD)v86 )
      {
        v88 = (void *)qalloc_or_throw(16 * v86, (__int64)v36, v37, v38);
        *((_QWORD *)&v89 + 1) = v39;
        memcpy(v88, v85, 16 * v39);
        *(_QWORD *)&v89 = v39;
      }
      if ( *((_DWORD *)a1 + 10) != v77 && *((_DWORD *)a1 + 11) != v77 )
      {
        v40 = n[0];
        sub_64700(v87, (__int64 *)(n[0] + 120));
        sub_3180C0(&v88, v40 + 136);
      }
      v41 = &v97[(unsigned __int64)v80 / 8];
      sub_64700(v87, &v97[(unsigned __int64)v80 / 8]);
      sub_3180C0(&v88, v41 + 2);
      for ( i = *(_QWORD *)(n[0] + 48); i; i = *(_QWORD *)(i + 8) )
      {
        if ( (unsigned __int8)sub_64880(v87) && !(_QWORD)v89 )
          break;
        v44 = a1[1];
        if ( !v44 )
          goto LABEL_74;
        v45 = *(_QWORD **)v44;
        v46 = *(_QWORD *)v44 + 8LL * *(_QWORD *)(v44 + 8);
        if ( *(_QWORD *)v44 != v46 )
        {
          while ( i != *v45 )
          {
            if ( (_QWORD *)v46 == ++v45 )
              goto LABEL_69;
          }
          if ( (_QWORD *)v46 != v45 )
            continue;
        }
LABEL_69:
        v47 = *(_QWORD **)(v44 + 56);
        v48 = &v47[*(_QWORD *)(v44 + 64)];
        if ( v47 == v48 )
          goto LABEL_74;
        while ( i != *v47 )
        {
          if ( v48 == ++v47 )
            goto LABEL_74;
        }
        if ( v48 == v47 )
        {
LABEL_74:
          sub_124680((__int64)v90, n[0], i, 0);
          if ( v78 && (unsigned __int8)sub_317040(&v91, v79) )
          {
            v83[1] = -1;
            v83[0] = v79;
            sub_317BD0(&v91, v83);
            if ( !v92 )
            {
              if ( !under_debugger )
                sub_383060(52556);
              goto LABEL_104;
            }
            v82[0] = *(_QWORD *)(v91 + 16 * v92 - 16) + 1LL;
            v82[1] = v79;
            sub_317BD0(&v91, v82);
          }
          sub_64700(v90, v87);
          sub_3180C0(&v91, &v88);
          sub_64640(v75, v90, v49, v50, v51, v52);
          sub_317C60(v76, &v91);
          sub_64640(v87, v90, v53, v54, v55, v56);
          sub_317C60(&v88, &v91);
          sub_127A20((__int64)v93, n[0], i, 0, v57, v58);
          sub_64640(v87, v93, v59, v60, v61, v62);
          sub_317C60(&v88, &v94);
          if ( v94 )
          {
            *(_QWORD *)&v95 = 0;
            qfree((__int64)v94);
          }
          qfree(v93[0]);
          if ( v91 )
          {
            v92 = 0;
            qfree(v91);
          }
          qfree(v90[0]);
        }
      }
      if ( v88 )
      {
        *(_QWORD *)&v89 = 0;
        qfree((__int64)v88);
      }
      qfree(v87[0]);
    }
    v43 = *a1;
    ++v77;
    v80 += 40;
    if ( *(_DWORD *)(v43 + 64) <= (signed int)v77 )
      break;
  }
LABEL_22:
  v22 = 0;
  for ( j = 0; v22 < (unsigned __int64)a1[3]; j = v22 )
  {
    v24 = *(__int64 **)(a1[2] + 8 * j);
    sub_64700(v24, v75);
    sub_3180C0(v24 + 2, v76);
    ++v22;
  }
  v96 = (__int64 (__fastcall **)())&unk_4EBF08;
  if ( v103 )
  {
    v104.m128i_i64[0] = 0;
    qfree(v103);
  }
  qfree(v102[0]);
  if ( src )
  {
    *(_QWORD *)&v101 = 0;
    qfree((__int64)src);
  }
  qfree(v99[0]);
  v25 = (__int64)v97;
  if ( v97 )
  {
    v26 = v98;
    if ( (_QWORD)v98 )
    {
      v27 = 0;
      do
      {
        v28 = (__int64 *)(v25 + 40 * v27);
        v29 = v28[2];
        if ( v29 )
        {
          v28[3] = 0;
          qfree(v29);
        }
        ++v27;
        qfree(*v28);
        v25 = (__int64)v97;
      }
      while ( v26 != v27 );
    }
    *(_QWORD *)&v98 = 0;
    qfree(v25);
  }
  if ( v85 )
  {
    *(_QWORD *)&v86 = 0;
    qfree((__int64)v85);
  }
  qfree(v84[0]);
  return v110 - __readfsqword(0x28u);
}
