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
  unsigned __int64 v26; // rbp
  unsigned __int64 v28; // rbp
  __int64 v29; // r12
  size_t v30; // rax
  __int64 v31; // rbx
  size_t v32; // rbx
  __int64 v33; // rbx
  __int64 i; // rbx
  __int64 v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // rdx
  _QWORD *v39; // rax
  _QWORD *v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  int v44; // r9d
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  int v48; // r9d
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  int v52; // r9d
  __int64 v53; // r12
  __int64 v54; // r13
  void *v55; // rax
  size_t v56; // rdx
  __int64 v57; // r12
  __int64 v58; // r14
  __int64 v59; // rax
  size_t n[2]; // [rsp+0h] [rbp-1F8h] BYREF
  __int64 *v61; // [rsp+10h] [rbp-1E8h]
  void **v62; // [rsp+18h] [rbp-1E0h]
  unsigned int v63; // [rsp+20h] [rbp-1D8h]
  char v64; // [rsp+27h] [rbp-1D1h]
  __int64 v65; // [rsp+28h] [rbp-1D0h]
  __int64 v66; // [rsp+30h] [rbp-1C8h]
  __int64 (__fastcall ***v67)(); // [rsp+38h] [rbp-1C0h]
  _QWORD v68[2]; // [rsp+40h] [rbp-1B8h] BYREF
  _QWORD v69[2]; // [rsp+50h] [rbp-1A8h] BYREF
  _QWORD v70[2]; // [rsp+60h] [rbp-198h] BYREF
  void *v71; // [rsp+70h] [rbp-188h] BYREF
  __int128 v72; // [rsp+78h] [rbp-180h]
  __int64 v73[2]; // [rsp+90h] [rbp-168h] BYREF
  void *v74; // [rsp+A0h] [rbp-158h] BYREF
  __int128 v75; // [rsp+A8h] [rbp-150h]
  __int64 v76[2]; // [rsp+C0h] [rbp-138h] BYREF
  __int64 v77; // [rsp+D0h] [rbp-128h] BYREF
  __int64 v78; // [rsp+D8h] [rbp-120h]
  __int64 v79[2]; // [rsp+F0h] [rbp-108h] BYREF
  void *v80; // [rsp+100h] [rbp-F8h] BYREF
  __int128 v81; // [rsp+108h] [rbp-F0h]
  __int64 (__fastcall **v82)(); // [rsp+120h] [rbp-D8h] BYREF
  unsigned __int64 v83; // [rsp+128h] [rbp-D0h]
  __int128 v84; // [rsp+130h] [rbp-C8h]
  _QWORD v85[2]; // [rsp+140h] [rbp-B8h] BYREF
  void *src; // [rsp+150h] [rbp-A8h]
  __int128 v87; // [rsp+158h] [rbp-A0h]
  __int64 v88[2]; // [rsp+168h] [rbp-90h] BYREF
  void *v89; // [rsp+178h] [rbp-80h]
  __m128i v90; // [rsp+180h] [rbp-78h]
  int v91; // [rsp+190h] [rbp-68h]
  _QWORD *v92; // [rsp+198h] [rbp-60h]
  __int64 v93; // [rsp+1A0h] [rbp-58h]
  __int64 *v94; // [rsp+1A8h] [rbp-50h]
  __int64 *v95; // [rsp+1B0h] [rbp-48h]
  unsigned __int64 v96; // [rsp+1B8h] [rbp-40h]

  v64 = a2;
  v96 = __readfsqword(0x28u);
  v2 = 0;
  if ( !a1[3] )
    return v96 - __readfsqword(0x28u);
  v4 = 0;
  v61 = v70;
  v70[0] = 0;
  v70[1] = 0;
  v71 = nullptr;
  v62 = &v71;
  v72 = 0;
  do
  {
    v5 = *(__int64 **)(a1[2] + 8 * v2);
    sub_64280(v61, v5);
    sub_316CB0(v62, v5 + 2);
    v2 = ++v4;
  }
  while ( v4 < (unsigned __int64)a1[3] );
  v6 = a1[5];
  v7 = (_QWORD *)*a1;
  v82 = &off_4DE388;
  v93 = v6;
  v94 = a1 + 6;
  v83 = 0;
  v85[0] = 0;
  v85[1] = 0;
  src = nullptr;
  v88[0] = 0;
  v88[1] = 0;
  v89 = nullptr;
  v91 = 1;
  v92 = v7;
  v95 = a1 + 11;
  v84 = 0;
  v87 = 0;
  v90 = 0;
  sub_648D0(v88, v61);
  v8 = v72;
  v9 = nullptr;
  if ( (_QWORD)v72 )
  {
    v9 = (void *)qalloc_or_throw();
    memcpy(v9, v71, 16 * v8);
  }
  si128 = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v8);
  if ( v89 )
  {
    *(__m128i *)n = si128;
    v90.m128i_i64[0] = 0;
    qfree();
    si128 = _mm_load_si128((const __m128i *)n);
  }
  v89 = v9;
  v90 = si128;
  v11 = v84;
  v12 = *((int *)v92 + 16);
  if ( v12 < (unsigned __int64)v84 )
  {
    v28 = *((int *)v92 + 16);
    do
    {
      v29 = v83 + 40 * v28;
      if ( *(_QWORD *)(v29 + 16) )
      {
        *(_QWORD *)(v29 + 24) = 0;
        qfree();
      }
      ++v28;
      qfree();
    }
    while ( v28 < v11 );
LABEL_17:
    *(_QWORD *)&v84 = v12;
    goto LABEL_18;
  }
  if ( (unsigned __int64)v84 >= v12 )
    goto LABEL_18;
  v13 = v83;
  if ( (unsigned __int64)v85 < v83 || (unsigned __int64)v85 >= v83 + 40LL * *((_QWORD *)&v84 + 1) )
  {
    if ( *((_QWORD *)&v84 + 1) >= v12
      || (v59 = qvector_reserve(), v11 = v84, v83 = v59, v13 = v59, (unsigned __int64)v84 < v12) )
    {
      while ( 1 )
      {
        v14 = v13 + 40 * v11;
        sub_64000((__int64 *)v14, (__int64)v85);
        *(_QWORD *)(v14 + 16) = 0;
        *(_OWORD *)(v14 + 24) = 0;
        v15 = v87;
        if ( (_QWORD)v87 )
        {
          n[0] = 16 * v87;
          v16 = (void *)qalloc_or_throw();
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
        v13 = v83;
      }
    }
    goto LABEL_17;
  }
  sub_64000(v79, (__int64)v85);
  v53 = v87;
  v80 = nullptr;
  v81 = 0;
  if ( (_QWORD)v87 )
  {
    v80 = (void *)qalloc_or_throw();
    *((_QWORD *)&v81 + 1) = v53;
    memcpy(v80, src, 16 * v53);
    *(_QWORD *)&v81 = v53;
  }
  if ( *((_QWORD *)&v84 + 1) < v12 )
    v83 = qvector_reserve();
  v54 = v84;
  if ( (unsigned __int64)v84 < v12 )
  {
    do
    {
      v57 = v83 + 40 * v54;
      sub_64000((__int64 *)v57, (__int64)v79);
      *(_QWORD *)(v57 + 16) = 0;
      *(_OWORD *)(v57 + 24) = 0;
      v58 = v81;
      if ( (_QWORD)v81 )
      {
        n[0] = 16 * v81;
        v55 = (void *)qalloc_or_throw();
        *(_QWORD *)(v57 + 16) = v55;
        v56 = n[0];
        *(_QWORD *)(v57 + 32) = v58;
        memcpy(v55, v80, v56);
        *(_QWORD *)(v57 + 24) = v58;
      }
      ++v54;
    }
    while ( v12 != v54 );
  }
  *(_QWORD *)&v84 = v12;
  if ( v80 )
  {
    *(_QWORD *)&v81 = 0;
    qfree();
  }
  qfree();
LABEL_18:
  v18 = (_QWORD *)*a1;
  v67 = &v82;
  v19 = sub_670E0(v18);
  v67 = &v82;
  sub_3111E0(v19, &v82);
  if ( !(_QWORD)v72 )
    sub_1953C0();
  v66 = 40;
  v63 = 1;
  v65 = *((_QWORD *)v71 + 2 * v72 - 2) + *((_QWORD *)v71 + 2 * v72 - 1) - 1LL;
  if ( *(int *)(*a1 + 64) <= 1 )
    goto LABEL_22;
  while ( !(unsigned __int8)sub_64880(v61) || (_QWORD)v72 )
  {
    if ( v63 >= *(_DWORD *)(*a1 + 64) )
    {
      if ( !under_debugger )
        sub_383060(52719);
LABEL_104:
      BUG();
    }
    v30 = *(_QWORD *)(*(_QWORD *)(*a1 + 528) + 8LL * v63);
    n[0] = v30;
    if ( *((_DWORD *)a1 + 10) == v63
      || *((_DWORD *)a1 + 11) == v63
      || (unsigned __int8)sub_64780((_QWORD *)(v30 + 120), v61)
      || (unsigned __int8)sub_318470(n[0] + 136, v62) )
    {
      sub_64000(v73, (__int64)v61);
      v31 = v72;
      v74 = nullptr;
      v75 = 0;
      if ( (_QWORD)v72 )
      {
        v74 = (void *)qalloc_or_throw();
        *((_QWORD *)&v75 + 1) = v31;
        memcpy(v74, v71, 16 * v31);
        *(_QWORD *)&v75 = v31;
      }
      if ( *((_DWORD *)a1 + 10) != v63 && *((_DWORD *)a1 + 11) != v63 )
      {
        v32 = n[0];
        sub_64700(v73, (__int64 *)(n[0] + 120));
        sub_3180C0(&v74, v32 + 136);
      }
      v33 = v83 + v66;
      sub_64700(v73, (__int64 *)(v83 + v66));
      sub_3180C0(&v74, v33 + 16);
      for ( i = *(_QWORD *)(n[0] + 48); i; i = *(_QWORD *)(i + 8) )
      {
        if ( (unsigned __int8)sub_64880(v73) && !(_QWORD)v75 )
          break;
        v36 = a1[1];
        if ( !v36 )
          goto LABEL_74;
        v37 = *(_QWORD **)v36;
        v38 = *(_QWORD *)v36 + 8LL * *(_QWORD *)(v36 + 8);
        if ( *(_QWORD *)v36 != v38 )
        {
          while ( i != *v37 )
          {
            if ( (_QWORD *)v38 == ++v37 )
              goto LABEL_69;
          }
          if ( (_QWORD *)v38 != v37 )
            continue;
        }
LABEL_69:
        v39 = *(_QWORD **)(v36 + 56);
        v40 = &v39[*(_QWORD *)(v36 + 64)];
        if ( v39 == v40 )
          goto LABEL_74;
        while ( i != *v39 )
        {
          if ( v40 == ++v39 )
            goto LABEL_74;
        }
        if ( v40 == v39 )
        {
LABEL_74:
          sub_124680((__int64)v76, n[0], i, 0);
          if ( v64 && (unsigned __int8)sub_317040(&v77, v65) )
          {
            v69[1] = -1;
            v69[0] = v65;
            sub_317BD0(&v77, v69);
            if ( !v78 )
            {
              if ( !under_debugger )
                sub_383060(52556);
              goto LABEL_104;
            }
            v68[0] = *(_QWORD *)(v77 + 16 * v78 - 16) + 1LL;
            v68[1] = v65;
            sub_317BD0(&v77, v68);
          }
          sub_64700(v76, v73);
          sub_3180C0(&v77, &v74);
          sub_64640(v61, v76, v41, v42, v43, v44);
          sub_317C60(v62, &v77);
          sub_64640(v73, v76, v45, v46, v47, v48);
          sub_317C60(&v74, &v77);
          sub_127A20((__int64)v79, n[0], i, 0);
          sub_64640(v73, v79, v49, v50, v51, v52);
          sub_317C60(&v74, &v80);
          if ( v80 )
          {
            *(_QWORD *)&v81 = 0;
            qfree();
          }
          qfree();
          if ( v77 )
          {
            v78 = 0;
            qfree();
          }
          qfree();
        }
      }
      if ( v74 )
      {
        *(_QWORD *)&v75 = 0;
        qfree();
      }
      qfree();
    }
    v35 = *a1;
    ++v63;
    v66 += 40;
    if ( *(_DWORD *)(v35 + 64) <= (signed int)v63 )
      break;
  }
LABEL_22:
  v20 = 0;
  for ( j = 0; v20 < (unsigned __int64)a1[3]; j = v20 )
  {
    v22 = *(__int64 **)(a1[2] + 8 * j);
    sub_64700(v22, v61);
    sub_3180C0(v22 + 2, v62);
    ++v20;
  }
  v82 = (__int64 (__fastcall **)())&unk_4EBF08;
  if ( v89 )
  {
    v90.m128i_i64[0] = 0;
    qfree();
  }
  qfree();
  if ( src )
  {
    *(_QWORD *)&v87 = 0;
    qfree();
  }
  qfree();
  v23 = v83;
  if ( v83 )
  {
    v24 = v84;
    if ( (_QWORD)v84 )
    {
      v25 = 0;
      do
      {
        v26 = v23 + 40 * v25;
        if ( *(_QWORD *)(v26 + 16) )
        {
          *(_QWORD *)(v26 + 24) = 0;
          qfree();
        }
        ++v25;
        qfree();
        v23 = v83;
      }
      while ( v24 != v25 );
    }
    *(_QWORD *)&v84 = 0;
    qfree();
  }
  if ( v71 )
  {
    *(_QWORD *)&v72 = 0;
    qfree();
  }
  qfree();
  return v96 - __readfsqword(0x28u);
}
