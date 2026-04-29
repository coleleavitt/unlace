unsigned __int64 __fastcall sub_1A00C0(__int64 *a1, char a2)
{
  __int64 v2; // rax
  int v4; // ebp
  __int64 *v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rdx
  unsigned __int64 v8; // rbx
  void *v9; // rbp
  __m128i si128; // xmm0
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rbx
  __int64 v13; // rsi
  unsigned __int64 v14; // rbp
  __int64 v15; // r14
  void *v16; // rax
  size_t v17; // rdx
  _QWORD *v18; // rdi
  __int64 v19; // rax
  int v20; // ebx
  __int64 j; // rax
  __int64 *v22; // rbp
  unsigned __int64 v23; // rdi
  __int64 v24; // r12
  __int64 v25; // rbx
  _QWORD *v26; // rbp
  __int64 v27; // rdi
  unsigned __int64 v29; // rbp
  _QWORD *v30; // r12
  __int64 v31; // rdi
  size_t v32; // rax
  __int64 v33; // rbx
  size_t v34; // rbx
  __int64 v35; // rbx
  __int64 i; // rbx
  __int64 v37; // rax
  __int64 v38; // rcx
  _QWORD *v39; // rax
  __int64 v40; // rdx
  _QWORD *v41; // rax
  _QWORD *v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  int v46; // r9d
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  int v50; // r9d
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  int v54; // r9d
  __int64 v55; // r12
  __int64 v56; // r13
  void *v57; // rax
  size_t v58; // rdx
  __int64 v59; // r12
  __int64 v60; // r14
  __int64 v61; // rax
  size_t n[2]; // [rsp+0h] [rbp-1F8h] BYREF
  __int64 *v63; // [rsp+10h] [rbp-1E8h]
  void **v64; // [rsp+18h] [rbp-1E0h]
  unsigned int v65; // [rsp+20h] [rbp-1D8h]
  char v66; // [rsp+27h] [rbp-1D1h]
  __int64 v67; // [rsp+28h] [rbp-1D0h]
  __int64 v68; // [rsp+30h] [rbp-1C8h]
  __int64 (__fastcall ***v69)(); // [rsp+38h] [rbp-1C0h]
  _QWORD v70[2]; // [rsp+40h] [rbp-1B8h] BYREF
  _QWORD v71[2]; // [rsp+50h] [rbp-1A8h] BYREF
  _QWORD v72[2]; // [rsp+60h] [rbp-198h] BYREF
  void *v73; // [rsp+70h] [rbp-188h] BYREF
  __int128 v74; // [rsp+78h] [rbp-180h]
  __int64 v75[2]; // [rsp+90h] [rbp-168h] BYREF
  void *v76; // [rsp+A0h] [rbp-158h] BYREF
  __int128 v77; // [rsp+A8h] [rbp-150h]
  __int64 v78[2]; // [rsp+C0h] [rbp-138h] BYREF
  __int64 v79; // [rsp+D0h] [rbp-128h] BYREF
  __int64 v80; // [rsp+D8h] [rbp-120h]
  __int64 v81[2]; // [rsp+F0h] [rbp-108h] BYREF
  void *v82; // [rsp+100h] [rbp-F8h] BYREF
  __int128 v83; // [rsp+108h] [rbp-F0h]
  __int64 (__fastcall **v84)(); // [rsp+120h] [rbp-D8h] BYREF
  unsigned __int64 v85; // [rsp+128h] [rbp-D0h] BYREF
  __int128 v86; // [rsp+130h] [rbp-C8h]
  _QWORD v87[2]; // [rsp+140h] [rbp-B8h] BYREF
  void *src; // [rsp+150h] [rbp-A8h]
  __int128 v89; // [rsp+158h] [rbp-A0h]
  __int64 v90[2]; // [rsp+168h] [rbp-90h] BYREF
  void *v91; // [rsp+178h] [rbp-80h]
  __m128i v92; // [rsp+180h] [rbp-78h]
  int v93; // [rsp+190h] [rbp-68h]
  _QWORD *v94; // [rsp+198h] [rbp-60h]
  __int64 v95; // [rsp+1A0h] [rbp-58h]
  __int64 *v96; // [rsp+1A8h] [rbp-50h]
  __int64 *v97; // [rsp+1B0h] [rbp-48h]
  unsigned __int64 v98; // [rsp+1B8h] [rbp-40h]

  v66 = a2;
  v98 = __readfsqword(0x28u);
  v2 = 0;
  if ( !a1[3] )
    return v98 - __readfsqword(0x28u);
  v4 = 0;
  v63 = v72;
  v72[0] = 0;
  v72[1] = 0;
  v73 = nullptr;
  v64 = &v73;
  v74 = 0;
  do
  {
    v5 = *(__int64 **)(a1[2] + 8 * v2);
    sub_64280(v63, v5);
    sub_316CB0(v64, v5 + 2);
    v2 = ++v4;
  }
  while ( v4 < (unsigned __int64)a1[3] );
  v6 = a1[5];
  v7 = (_QWORD *)*a1;
  v84 = &off_4DE388;
  v95 = v6;
  v96 = a1 + 6;
  v85 = 0;
  v87[0] = 0;
  v87[1] = 0;
  src = nullptr;
  v90[0] = 0;
  v90[1] = 0;
  v91 = nullptr;
  v93 = 1;
  v94 = v7;
  v97 = a1 + 11;
  v86 = 0;
  v89 = 0;
  v92 = 0;
  sub_648D0(v90, v63);
  v8 = v74;
  v9 = nullptr;
  if ( (_QWORD)v74 )
  {
    v9 = (void *)qalloc_or_throw(16 * v74);
    memcpy(v9, v73, 16 * v8);
  }
  si128 = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v8);
  if ( v91 )
  {
    *(__m128i *)n = si128;
    v92.m128i_i64[0] = 0;
    qfree(v91);
    si128 = _mm_load_si128((const __m128i *)n);
  }
  v91 = v9;
  v92 = si128;
  v11 = v86;
  v12 = *((int *)v94 + 16);
  if ( v12 < (unsigned __int64)v86 )
  {
    v29 = *((int *)v94 + 16);
    do
    {
      v30 = (_QWORD *)(v85 + 40 * v29);
      v31 = v30[2];
      if ( v31 )
      {
        v30[3] = 0;
        qfree(v31);
      }
      ++v29;
      qfree(*v30);
    }
    while ( v29 < v11 );
LABEL_17:
    *(_QWORD *)&v86 = v12;
    goto LABEL_18;
  }
  if ( (unsigned __int64)v86 >= v12 )
    goto LABEL_18;
  v13 = v85;
  if ( (unsigned __int64)v87 < v85 || (unsigned __int64)v87 >= v85 + 40LL * *((_QWORD *)&v86 + 1) )
  {
    if ( *((_QWORD *)&v86 + 1) >= v12
      || (v61 = qvector_reserve(&v85, v85, *((int *)v94 + 16), 40),
          v11 = v86,
          v85 = v61,
          v13 = v61,
          (unsigned __int64)v86 < v12) )
    {
      while ( 1 )
      {
        v14 = v13 + 40 * v11;
        sub_64000((__int64 *)v14, (__int64)v87);
        *(_QWORD *)(v14 + 16) = 0;
        *(_OWORD *)(v14 + 24) = 0;
        v15 = v89;
        if ( (_QWORD)v89 )
        {
          n[0] = 16 * v89;
          v16 = (void *)qalloc_or_throw(16 * v89);
          *(_QWORD *)(v14 + 16) = v16;
          v17 = n[0];
          ++v11;
          *(_QWORD *)(v14 + 32) = v15;
          memcpy(v16, src, v17);
          *(_QWORD *)(v14 + 24) = v15;
          if ( v11 >= v12 )
            goto LABEL_17;
        }
        else if ( ++v11 >= v12 )
        {
          goto LABEL_17;
        }
        v13 = v85;
      }
    }
    goto LABEL_17;
  }
  sub_64000(v81, (__int64)v87);
  v55 = v89;
  v82 = nullptr;
  v83 = 0;
  if ( (_QWORD)v89 )
  {
    v82 = (void *)qalloc_or_throw(16 * v89);
    *((_QWORD *)&v83 + 1) = v55;
    memcpy(v82, src, 16 * v55);
    *(_QWORD *)&v83 = v55;
  }
  if ( *((_QWORD *)&v86 + 1) < v12 )
    v85 = qvector_reserve(&v85, v85, v12, 40);
  v56 = v86;
  if ( (unsigned __int64)v86 < v12 )
  {
    do
    {
      v59 = v85 + 40 * v56;
      sub_64000((__int64 *)v59, (__int64)v81);
      *(_QWORD *)(v59 + 16) = 0;
      *(_OWORD *)(v59 + 24) = 0;
      v60 = v83;
      if ( (_QWORD)v83 )
      {
        n[0] = 16 * v83;
        v57 = (void *)qalloc_or_throw(16 * v83);
        *(_QWORD *)(v59 + 16) = v57;
        v58 = n[0];
        *(_QWORD *)(v59 + 32) = v60;
        memcpy(v57, v82, v58);
        *(_QWORD *)(v59 + 24) = v60;
      }
      ++v56;
    }
    while ( v12 != v56 );
  }
  *(_QWORD *)&v86 = v12;
  if ( v82 )
  {
    *(_QWORD *)&v83 = 0;
    qfree(v82);
  }
  qfree(v81[0]);
LABEL_18:
  v18 = (_QWORD *)*a1;
  v69 = &v84;
  v19 = sub_670E0(v18);
  v69 = &v84;
  sub_3111E0(v19, &v84);
  if ( !(_QWORD)v74 )
    sub_1953C0();
  v68 = 40;
  v65 = 1;
  v67 = *((_QWORD *)v73 + 2 * v74 - 2) + *((_QWORD *)v73 + 2 * v74 - 1) - 1LL;
  if ( *(int *)(*a1 + 64) <= 1 )
    goto LABEL_22;
  while ( !(unsigned __int8)sub_64880(v63) || (_QWORD)v74 )
  {
    if ( v65 >= *(_DWORD *)(*a1 + 64) )
    {
      if ( !under_debugger )
        sub_383060(52719);
LABEL_104:
      BUG();
    }
    v32 = *(_QWORD *)(*(_QWORD *)(*a1 + 528) + 8LL * v65);
    n[0] = v32;
    if ( *((_DWORD *)a1 + 10) == v65
      || *((_DWORD *)a1 + 11) == v65
      || (unsigned __int8)sub_64780((_QWORD *)(v32 + 120), v63)
      || (unsigned __int8)sub_318470(n[0] + 136, v64) )
    {
      sub_64000(v75, (__int64)v63);
      v33 = v74;
      v76 = nullptr;
      v77 = 0;
      if ( (_QWORD)v74 )
      {
        v76 = (void *)qalloc_or_throw(16 * v74);
        *((_QWORD *)&v77 + 1) = v33;
        memcpy(v76, v73, 16 * v33);
        *(_QWORD *)&v77 = v33;
      }
      if ( *((_DWORD *)a1 + 10) != v65 && *((_DWORD *)a1 + 11) != v65 )
      {
        v34 = n[0];
        sub_64700(v75, (__int64 *)(n[0] + 120));
        sub_3180C0(&v76, v34 + 136);
      }
      v35 = v85 + v68;
      sub_64700(v75, (__int64 *)(v85 + v68));
      sub_3180C0(&v76, v35 + 16);
      for ( i = *(_QWORD *)(n[0] + 48); i; i = *(_QWORD *)(i + 8) )
      {
        if ( (unsigned __int8)sub_64880(v75) && !(_QWORD)v77 )
          break;
        v38 = a1[1];
        if ( !v38 )
          goto LABEL_74;
        v39 = *(_QWORD **)v38;
        v40 = *(_QWORD *)v38 + 8LL * *(_QWORD *)(v38 + 8);
        if ( *(_QWORD *)v38 != v40 )
        {
          while ( i != *v39 )
          {
            if ( (_QWORD *)v40 == ++v39 )
              goto LABEL_69;
          }
          if ( (_QWORD *)v40 != v39 )
            continue;
        }
LABEL_69:
        v41 = *(_QWORD **)(v38 + 56);
        v42 = &v41[*(_QWORD *)(v38 + 64)];
        if ( v41 == v42 )
          goto LABEL_74;
        while ( i != *v41 )
        {
          if ( v42 == ++v41 )
            goto LABEL_74;
        }
        if ( v42 == v41 )
        {
LABEL_74:
          sub_124680((__int64)v78, n[0], i, 0);
          if ( v66 && (unsigned __int8)sub_317040(&v79, v67) )
          {
            v71[1] = -1;
            v71[0] = v67;
            sub_317BD0(&v79, v71);
            if ( !v80 )
            {
              if ( !under_debugger )
                sub_383060(52556);
              goto LABEL_104;
            }
            v70[0] = *(_QWORD *)(v79 + 16 * v80 - 16) + 1LL;
            v70[1] = v67;
            sub_317BD0(&v79, v70);
          }
          sub_64700(v78, v75);
          sub_3180C0(&v79, &v76);
          sub_64640(v63, v78, v43, v44, v45, v46);
          sub_317C60(v64, &v79);
          sub_64640(v75, v78, v47, v48, v49, v50);
          sub_317C60(&v76, &v79);
          sub_127A20((__int64)v81, n[0], i, 0);
          sub_64640(v75, v81, v51, v52, v53, v54);
          sub_317C60(&v76, &v82);
          if ( v82 )
          {
            *(_QWORD *)&v83 = 0;
            qfree(v82);
          }
          qfree(v81[0]);
          if ( v79 )
          {
            v80 = 0;
            qfree(v79);
          }
          qfree(v78[0]);
        }
      }
      if ( v76 )
      {
        *(_QWORD *)&v77 = 0;
        qfree(v76);
      }
      qfree(v75[0]);
    }
    v37 = *a1;
    ++v65;
    v68 += 40;
    if ( *(_DWORD *)(v37 + 64) <= (signed int)v65 )
      break;
  }
LABEL_22:
  v20 = 0;
  for ( j = 0; v20 < (unsigned __int64)a1[3]; j = v20 )
  {
    v22 = *(__int64 **)(a1[2] + 8 * j);
    sub_64700(v22, v63);
    sub_3180C0(v22 + 2, v64);
    ++v20;
  }
  v84 = (__int64 (__fastcall **)())&unk_4EBF08;
  if ( v91 )
  {
    v92.m128i_i64[0] = 0;
    qfree(v91);
  }
  qfree(v90[0]);
  if ( src )
  {
    *(_QWORD *)&v89 = 0;
    qfree(src);
  }
  qfree(v87[0]);
  v23 = v85;
  if ( v85 )
  {
    v24 = v86;
    if ( (_QWORD)v86 )
    {
      v25 = 0;
      do
      {
        v26 = (_QWORD *)(v23 + 40 * v25);
        v27 = v26[2];
        if ( v27 )
        {
          v26[3] = 0;
          qfree(v27);
        }
        ++v25;
        qfree(*v26);
        v23 = v85;
      }
      while ( v24 != v25 );
    }
    *(_QWORD *)&v86 = 0;
    qfree(v23);
  }
  if ( v73 )
  {
    *(_QWORD *)&v74 = 0;
    qfree(v73);
  }
  qfree(v72[0]);
  return v98 - __readfsqword(0x28u);
}
