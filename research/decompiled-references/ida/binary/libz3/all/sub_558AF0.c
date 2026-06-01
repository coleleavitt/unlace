__int64 __fastcall sub_558AF0(__int64 a1, __int64 *a2, __int64 a3)
{
  _QWORD *v4; // rbp
  unsigned int v5; // esi
  __int64 result; // rax
  __int64 v8; // rbx
  __m128i v9; // xmm0
  __int64 v10; // r8
  int v11; // eax
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rax
  __int64 v15; // r12
  bool v16; // zf
  __int64 v17; // rax
  __int64 v18; // r8
  int v19; // eax
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r13
  __int64 v27; // rsi
  __int64 v28; // rdi
  _QWORD *v29; // r12
  void *v30; // rdi
  __int64 *v31; // r12
  unsigned __int64 v32; // r13
  __int64 v33; // rsi
  _QWORD *v34; // rdi
  __int64 *v35; // r12
  unsigned __int64 v36; // r13
  __int64 v37; // rsi
  _QWORD *v38; // rdi
  __int64 *v39; // r12
  unsigned __int64 v40; // r13
  __int64 v41; // rsi
  __int64 v42; // rdi
  _QWORD *v43; // r12
  void *v44; // rdi
  __int64 *v45; // r12
  unsigned __int64 v46; // r13
  __int64 v47; // rsi
  _QWORD *v48; // rdi
  __int64 *v49; // r12
  unsigned __int64 v50; // r13
  __int64 v51; // rsi
  _QWORD *v52; // rdi
  __int64 *v53; // r12
  unsigned __int64 v54; // r13
  __int64 v55; // rsi
  __int64 v56; // rdi
  __int64 v57; // rsi
  _QWORD *v58; // rdi
  __int64 v59; // rsi
  _QWORD *v60; // rdi
  __int64 v61; // rsi
  __int64 v62; // rdi
  int v63[2]; // [rsp+8h] [rbp-1C0h]
  int v64[2]; // [rsp+8h] [rbp-1C0h]
  int v65; // [rsp+8h] [rbp-1C0h]
  int v66[2]; // [rsp+8h] [rbp-1C0h]
  int v67[2]; // [rsp+10h] [rbp-1B8h]
  int v68; // [rsp+18h] [rbp-1B0h]
  void *v69; // [rsp+18h] [rbp-1B0h]
  __m128i v70; // [rsp+20h] [rbp-1A8h] BYREF
  int v71[2]; // [rsp+30h] [rbp-198h]
  __int64 v72; // [rsp+38h] [rbp-190h]
  int v73; // [rsp+40h] [rbp-188h]
  void *ptr; // [rsp+48h] [rbp-180h] BYREF
  __int64 v75; // [rsp+50h] [rbp-178h] BYREF
  _QWORD *v76; // [rsp+58h] [rbp-170h]
  __int64 v77; // [rsp+60h] [rbp-168h] BYREF
  _QWORD *v78; // [rsp+68h] [rbp-160h]
  int v79[4]; // [rsp+70h] [rbp-158h] BYREF
  __int64 *v80; // [rsp+80h] [rbp-148h]
  _QWORD *v81; // [rsp+88h] [rbp-140h]
  __int64 *v82; // [rsp+90h] [rbp-138h]
  __int64 v83; // [rsp+98h] [rbp-130h]
  __int64 v84; // [rsp+A0h] [rbp-128h]
  __int64 v85; // [rsp+A8h] [rbp-120h]
  _QWORD *v86; // [rsp+B0h] [rbp-118h]
  __int64 *v87; // [rsp+B8h] [rbp-110h]
  void *v88; // [rsp+C0h] [rbp-108h]
  __int64 v89; // [rsp+C8h] [rbp-100h]
  void *v90; // [rsp+D0h] [rbp-F8h]
  __int64 v91; // [rsp+D8h] [rbp-F0h]
  int v92; // [rsp+E0h] [rbp-E8h]
  __int64 v93; // [rsp+E8h] [rbp-E0h]
  int v94[2]; // [rsp+F0h] [rbp-D8h] BYREF
  __m128i v95; // [rsp+100h] [rbp-C8h] BYREF
  __int64 *v96; // [rsp+110h] [rbp-B8h]
  _QWORD *v97; // [rsp+118h] [rbp-B0h]
  __int64 *v98; // [rsp+120h] [rbp-A8h]
  __int64 v99; // [rsp+128h] [rbp-A0h]
  __int64 v100; // [rsp+130h] [rbp-98h]
  __int64 v101; // [rsp+138h] [rbp-90h]
  _QWORD *v102; // [rsp+140h] [rbp-88h]
  __int64 *v103; // [rsp+148h] [rbp-80h]
  void *s; // [rsp+150h] [rbp-78h]
  __int64 v105; // [rsp+158h] [rbp-70h]
  void *v106; // [rsp+160h] [rbp-68h]
  __int64 v107; // [rsp+168h] [rbp-60h]
  int v108; // [rsp+170h] [rbp-58h]
  __int64 v109; // [rsp+178h] [rbp-50h]
  int v110[2]; // [rsp+180h] [rbp-48h] BYREF

  v4 = (_QWORD *)a2[1];
  v5 = *(_DWORD *)(a1 + 520);
  v72 = a1;
  v76 = v4;
  result = v5 >> 1;
  v78 = v4;
  v75 = 0;
  v77 = 0;
  v70 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v4, (__m128i)(unsigned __int64)v4);
  if ( !(v5 >> 1) )
    return result;
  v8 = 0;
  do
  {
    while ( (*(_DWORD *)(*(_QWORD *)(a3 + 8) + 4LL * ((unsigned int)v8 >> 5)) & (1 << v8)) == 0 )
    {
      ++v8;
      result = v5 >> 1;
      if ( (unsigned int)v8 >= (unsigned int)result )
        goto LABEL_93;
    }
    v9 = _mm_load_si128(&v70);
    *(_QWORD *)v71 = v94;
    v88 = v94;
    s = v110;
    v80 = nullptr;
    v81 = v4;
    v82 = nullptr;
    v83 = 0;
    v84 = 0;
    v85 = 0;
    v86 = v4;
    v87 = nullptr;
    v89 = 1;
    v90 = nullptr;
    v91 = 0;
    v93 = 0;
    *(_QWORD *)v94 = 0;
    v96 = nullptr;
    v97 = v4;
    v98 = nullptr;
    v99 = 0;
    v100 = 0;
    v101 = 0;
    v102 = v4;
    v103 = nullptr;
    v105 = 1;
    v106 = nullptr;
    *(__m128i *)v79 = v9;
    v92 = 1065353216;
    v95 = v9;
    v107 = 0;
    v10 = v4[105];
    *(_QWORD *)v63 = v4[107];
    v109 = 0;
    *(_QWORD *)v110 = 0;
    ptr = (void *)(8 * v8 + 1);
    v108 = 1065353216;
    v11 = sub_15E3510(v4, &ptr, 0, 0, v10, 0);
    v14 = sub_15DC610(
            (int)v4,
            v11,
            0,
            0,
            v12,
            v13,
            (int)v79,
            v63[0],
            (int)&ptr,
            (int)v110,
            v70.m128i_i32[0],
            v70.m128i_i8[8],
            v71[0],
            v72,
            v73,
            ptr);
    v15 = v14;
    if ( v14 )
    {
      ++*(_DWORD *)(v14 + 8);
      sub_14EA0D0(v79, v14, *(_QWORD *)v64);
      v16 = (*(_DWORD *)(v15 + 8))-- == 1;
      if ( v16 )
        sub_15D7BC0(v4, v15);
    }
    else
    {
      sub_14EA0D0(v79, 0, *(_QWORD *)v64);
    }
    sub_14EA2A0(v79, *a2, &v75);
    v17 = v4[108];
    v18 = v4[105];
    ptr = (void *)(8 * v8 + 1);
    v65 = v17;
    v19 = sub_15E3510(v4, *(_QWORD *)v67, 0, 0, v18, 0);
    v22 = sub_15DC610(
            (int)v4,
            v19,
            0,
            0,
            v20,
            v21,
            (int)v79,
            v65,
            v67[0],
            v68,
            v70.m128i_i32[0],
            v70.m128i_i8[8],
            v71[0],
            v72,
            v73,
            ptr);
    v23 = v22;
    if ( v22 )
    {
      ++*(_DWORD *)(v22 + 8);
      sub_14EA0D0(&v95, v22, *(_QWORD *)v66);
      v16 = (*(_DWORD *)(v23 + 8))-- == 1;
      if ( v16 )
        sub_15D7BC0(v4, v23);
    }
    else
    {
      sub_14EA0D0(&v95, 0, *(_QWORD *)v66);
    }
    sub_14EA2A0(&v95, *a2, &v77);
    v24 = v75;
    if ( v75 != v77 )
    {
      v25 = sub_15E1B70((int)v4);
      v26 = v25;
      if ( v25 )
        ++*(_DWORD *)(v25 + 8);
      v27 = *a2;
      if ( *a2 )
      {
        v28 = a2[1];
        v16 = (*(_DWORD *)(v27 + 8))-- == 1;
        if ( v16 )
          sub_15D7BC0(v28, v27);
      }
      *a2 = v26;
      goto LABEL_18;
    }
    v61 = *a2;
    if ( v75 != *a2 )
    {
      if ( v61 )
      {
        v62 = a2[1];
        v16 = (*(_DWORD *)(v61 + 8))-- == 1;
        if ( v16 )
        {
          sub_15D7BC0(v62, v61);
          v24 = v75;
          *a2 = v75;
          if ( !v24 )
            goto LABEL_18;
LABEL_103:
          ++*(_DWORD *)(v24 + 8);
          goto LABEL_18;
        }
      }
      *a2 = v24;
      if ( v24 )
        goto LABEL_103;
    }
LABEL_18:
    v29 = v106;
    if ( v106 )
    {
      do
      {
        v30 = v29;
        v29 = (_QWORD *)*v29;
        operator delete(v30, 0x18u);
      }
      while ( v29 );
    }
    memset(s, 0, 8 * v105);
    v107 = 0;
    v106 = nullptr;
    if ( s != v69 )
      operator delete(s, 8 * v105);
    v31 = v103;
    if ( v103 )
    {
      v32 = (unsigned __int64)&v103[*((unsigned int *)v103 - 1)];
      if ( (unsigned __int64)v103 >= v32 )
        goto LABEL_30;
      do
      {
        while ( 1 )
        {
          v33 = *v31;
          if ( *v31 )
          {
            v34 = v102;
            v16 = (*(_DWORD *)(v33 + 8))-- == 1;
            if ( v16 )
              break;
          }
          if ( (unsigned __int64)++v31 >= v32 )
            goto LABEL_29;
        }
        sub_15D7BC0(v34, v33);
        ++v31;
      }
      while ( (unsigned __int64)v31 < v32 );
LABEL_29:
      v31 = v103;
      if ( v103 )
LABEL_30:
        sub_186B220(v31 - 1);
    }
    if ( v101 )
      sub_186B220((void *)(v101 - 8));
    if ( v100 )
      sub_186B220((void *)(v100 - 8));
    if ( v99 )
      sub_186B220((void *)(v99 - 8));
    v35 = v98;
    if ( v98 )
    {
      v36 = (unsigned __int64)&v98[*((unsigned int *)v98 - 1)];
      if ( (unsigned __int64)v98 >= v36 )
        goto LABEL_45;
      do
      {
        while ( 1 )
        {
          v37 = *v35;
          if ( *v35 )
          {
            v38 = v97;
            v16 = (*(_DWORD *)(v37 + 8))-- == 1;
            if ( v16 )
              break;
          }
          if ( (unsigned __int64)++v35 >= v36 )
            goto LABEL_44;
        }
        sub_15D7BC0(v38, v37);
        ++v35;
      }
      while ( (unsigned __int64)v35 < v36 );
LABEL_44:
      v35 = v98;
      if ( v98 )
LABEL_45:
        sub_186B220(v35 - 1);
    }
    v39 = v96;
    if ( v96 )
    {
      v40 = (unsigned __int64)&v96[*((unsigned int *)v96 - 1)];
      if ( (unsigned __int64)v96 >= v40 )
        goto LABEL_54;
      do
      {
        while ( 1 )
        {
          v41 = *v39;
          if ( *v39 )
          {
            v42 = v95.m128i_i64[1];
            v16 = (*(_DWORD *)(v41 + 8))-- == 1;
            if ( v16 )
              break;
          }
          if ( (unsigned __int64)++v39 >= v40 )
            goto LABEL_53;
        }
        sub_15D7BC0(v42, v41);
        ++v39;
      }
      while ( (unsigned __int64)v39 < v40 );
LABEL_53:
      v39 = v96;
      if ( v96 )
LABEL_54:
        sub_186B220(v39 - 1);
    }
    v43 = v90;
    if ( v90 )
    {
      do
      {
        v44 = v43;
        v43 = (_QWORD *)*v43;
        operator delete(v44, 0x18u);
      }
      while ( v43 );
    }
    memset(v88, 0, 8 * v89);
    v91 = 0;
    v90 = nullptr;
    if ( v88 != *(void **)v71 )
      operator delete(v88, 8 * v89);
    v45 = v87;
    if ( v87 )
    {
      v46 = (unsigned __int64)&v87[*((unsigned int *)v87 - 1)];
      if ( (unsigned __int64)v87 >= v46 )
        goto LABEL_67;
      do
      {
        while ( 1 )
        {
          v47 = *v45;
          if ( *v45 )
          {
            v48 = v86;
            v16 = (*(_DWORD *)(v47 + 8))-- == 1;
            if ( v16 )
              break;
          }
          if ( (unsigned __int64)++v45 >= v46 )
            goto LABEL_66;
        }
        sub_15D7BC0(v48, v47);
        ++v45;
      }
      while ( (unsigned __int64)v45 < v46 );
LABEL_66:
      v45 = v87;
      if ( v87 )
LABEL_67:
        sub_186B220(v45 - 1);
    }
    if ( v85 )
      sub_186B220((void *)(v85 - 8));
    if ( v84 )
      sub_186B220((void *)(v84 - 8));
    if ( v83 )
      sub_186B220((void *)(v83 - 8));
    v49 = v82;
    if ( v82 )
    {
      v50 = (unsigned __int64)&v82[*((unsigned int *)v82 - 1)];
      if ( (unsigned __int64)v82 >= v50 )
        goto LABEL_82;
      do
      {
        while ( 1 )
        {
          v51 = *v49;
          if ( *v49 )
          {
            v52 = v81;
            v16 = (*(_DWORD *)(v51 + 8))-- == 1;
            if ( v16 )
              break;
          }
          if ( (unsigned __int64)++v49 >= v50 )
            goto LABEL_81;
        }
        sub_15D7BC0(v52, v51);
        ++v49;
      }
      while ( (unsigned __int64)v49 < v50 );
LABEL_81:
      v49 = v82;
      if ( v82 )
LABEL_82:
        sub_186B220(v49 - 1);
    }
    v53 = v80;
    if ( v80 )
    {
      v54 = (unsigned __int64)&v80[*((unsigned int *)v80 - 1)];
      if ( (unsigned __int64)v80 >= v54 )
        goto LABEL_91;
      do
      {
        while ( 1 )
        {
          v55 = *v53;
          if ( *v53 )
          {
            v56 = *(_QWORD *)&v79[2];
            v16 = (*(_DWORD *)(v55 + 8))-- == 1;
            if ( v16 )
              break;
          }
          if ( (unsigned __int64)++v53 >= v54 )
            goto LABEL_90;
        }
        sub_15D7BC0(v56, v55);
        ++v53;
      }
      while ( (unsigned __int64)v53 < v54 );
LABEL_90:
      v53 = v80;
      if ( v80 )
LABEL_91:
        sub_186B220(v53 - 1);
    }
    ++v8;
    v5 = *(_DWORD *)(v72 + 520);
    result = v5 >> 1;
  }
  while ( (unsigned int)v8 < (unsigned int)result );
LABEL_93:
  v57 = v77;
  if ( v77 )
  {
    v58 = v78;
    v16 = (*(_DWORD *)(v77 + 8))-- == 1;
    if ( v16 )
      result = sub_15D7BC0(v58, v57);
  }
  v59 = v75;
  v60 = v76;
  if ( v75 )
  {
    v16 = (*(_DWORD *)(v75 + 8))-- == 1;
    if ( v16 )
      return sub_15D7BC0(v60, v59);
  }
  return result;
}

