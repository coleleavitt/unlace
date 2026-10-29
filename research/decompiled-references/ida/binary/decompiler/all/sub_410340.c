__int64 sub_410340()
{
  size_t v0; // rbp
  const char *v1; // rdx
  unsigned int v2; // ebp
  unsigned __int64 v4; // rdx
  __int64 v5; // r12
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  const char *v8; // rdx
  unsigned __int64 v9; // rdx
  __int64 v10; // r12
  __int64 v11; // rbx
  unsigned __int64 v12; // rax
  const char *v13; // rdx
  const char *v14; // rdx
  unsigned __int64 v15; // rdx
  __int64 v16; // r12
  __int64 v17; // rbx
  unsigned __int64 v18; // rax
  const char *v19; // rdx
  unsigned __int64 v20; // rdx
  __int64 v21; // r12
  __int64 v22; // rbx
  unsigned __int64 v23; // rax
  bool v24; // bp
  const char *v25; // rdx
  __int64 v26; // rbp
  unsigned __int64 v27; // rdi
  __int64 v28; // rbx
  unsigned __int64 v29; // rax
  const char *v30; // rsi
  __int64 v31; // rbp
  unsigned __int64 v32; // rdi
  __int64 i; // rbx
  unsigned __int64 v34; // rax
  __m128i v35; // xmm0
  __m128i v36; // xmm0
  char *v37; // rbx
  char *v38; // r9
  char *v39; // rcx
  const char *v40; // rdx
  __int64 v41; // rbp
  char *v42; // rbx
  __int64 v43; // [rsp+8h] [rbp-2A8h]
  void *v44; // [rsp+10h] [rbp-2A0h]
  char *v45; // [rsp+10h] [rbp-2A0h]
  void *v46; // [rsp+20h] [rbp-290h]
  unsigned __int8 v47; // [rsp+20h] [rbp-290h]
  char *v48; // [rsp+20h] [rbp-290h]
  void *v49; // [rsp+28h] [rbp-288h]
  char *v50; // [rsp+28h] [rbp-288h]
  unsigned __int8 v51; // [rsp+47h] [rbp-269h]
  unsigned __int64 v52; // [rsp+48h] [rbp-268h] BYREF
  __int128 v53; // [rsp+50h] [rbp-260h]
  unsigned __int64 v54; // [rsp+68h] [rbp-248h] BYREF
  __int128 v55; // [rsp+70h] [rbp-240h]
  unsigned __int64 v56; // [rsp+88h] [rbp-228h] BYREF
  __int128 v57; // [rsp+90h] [rbp-220h]
  unsigned __int64 v58; // [rsp+A8h] [rbp-208h] BYREF
  __int128 v59; // [rsp+B0h] [rbp-200h]
  unsigned __int64 v60; // [rsp+C8h] [rbp-1E8h] BYREF
  __int128 v61; // [rsp+D0h] [rbp-1E0h]
  unsigned __int64 v62; // [rsp+E8h] [rbp-1C8h] BYREF
  __int128 v63; // [rsp+F0h] [rbp-1C0h]
  char *v64; // [rsp+108h] [rbp-1A8h]
  __int128 v65; // [rsp+110h] [rbp-1A0h]
  void *v66; // [rsp+128h] [rbp-188h] BYREF
  __m128i v67; // [rsp+130h] [rbp-180h] BYREF
  char *v68; // [rsp+148h] [rbp-168h] BYREF
  __m128i v69; // [rsp+150h] [rbp-160h] BYREF
  void *v70; // [rsp+168h] [rbp-148h] BYREF
  __int128 v71; // [rsp+170h] [rbp-140h]
  __int64 v72; // [rsp+180h] [rbp-130h]
  _QWORD v73[3]; // [rsp+188h] [rbp-128h] BYREF
  char v74; // [rsp+1A0h] [rbp-110h]
  _QWORD v75[3]; // [rsp+1A8h] [rbp-108h] BYREF
  char v76; // [rsp+1C0h] [rbp-F0h]
  _QWORD v77[3]; // [rsp+1C8h] [rbp-E8h] BYREF
  char v78; // [rsp+1E0h] [rbp-D0h]
  _QWORD v79[3]; // [rsp+1E8h] [rbp-C8h] BYREF
  unsigned __int8 v80; // [rsp+200h] [rbp-B0h]
  _QWORD v81[3]; // [rsp+208h] [rbp-A8h] BYREF
  unsigned __int8 v82; // [rsp+220h] [rbp-90h]
  _QWORD v83[3]; // [rsp+228h] [rbp-88h] BYREF
  bool v84; // [rsp+240h] [rbp-70h]
  void *src; // [rsp+248h] [rbp-68h] BYREF
  size_t n[12]; // [rsp+250h] [rbp-60h] BYREF

  n[4] = __readfsqword(0x28u);
  src = 0;
  *(_OWORD *)n = 0;
  ++qword_4EFF68;
  sub_6AEF0((__int64 *)&src);
  v0 = n[0];
  v70 = 0;
  v71 = 0;
  if ( n[0] )
  {
    v70 = (void *)qalloc_or_throw();
    *((_QWORD *)&v71 + 1) = v0;
    memcpy(v70, src, v0);
    *(_QWORD *)&v71 = v0;
  }
  v72 = -1;
  netnode_check();
  netnode_check();
  if ( v77[0] == -1 )
  {
    v79[0] = 0;
    netnode_supset();
    v81[0] = 1;
    netnode_supset();
    v83[0] = 1;
    netnode_supset();
  }
  else
  {
    v72 = v83[0];
  }
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  *(_OWORD *)n = 0;
  src = 0;
  src = (void *)qvector_reserve();
  n[0] = 11;
  strcpy((char *)src, "Comment #0");
  sub_40D2B0((__int64)v73, (__int64)&v70, (__int64)&src);
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  if ( v74 )
  {
    v1 = s1;
    if ( v73[1] )
      v1 = (const char *)v73[0];
    sub_6C720((__int64)"Got error during test %s: %s\n", "Comment #0", v1);
    if ( v73[0] )
      qfree();
    v2 = 0;
    goto LABEL_15;
  }
  v53 = 0;
  v52 = 0;
  v44 = (void *)v73[0];
  src = (void *)v73[0];
  memset(n, 0, 24);
  n[0] = qvector_reserve();
  n[1] = 11;
  strcpy((char *)n[0], "Comment #0");
  sub_40FA00(&v52, (unsigned __int64)&src);
  if ( n[0] )
  {
    n[1] = 0;
    qfree();
  }
  v2 = sub_4100D0((__int64)&v70, "Test 1", &v52);
  if ( (_BYTE)v2 )
  {
    *(_OWORD *)n = 0;
    src = 0;
    src = (void *)qvector_reserve();
    n[0] = 11;
    strcpy((char *)src, "Comment #1");
    sub_40D2B0((__int64)v75, (__int64)&v70, (__int64)&src);
    if ( src )
    {
      n[0] = 0;
      qfree();
    }
    if ( v76 )
    {
      v8 = s1;
      if ( v75[1] )
        v8 = (const char *)v75[0];
      sub_6C720((__int64)"Got error during test %s: %s\n", "Comment #1", v8);
      if ( v75[0] )
        qfree();
      v2 = 0;
      goto LABEL_21;
    }
    v54 = 0;
    memset(n, 0, 24);
    v46 = (void *)v75[0];
    src = (void *)v75[0];
    v55 = 0;
    n[0] = qvector_reserve();
    n[1] = 11;
    strcpy((char *)n[0], "Comment #1");
    sub_40FA00(&v54, (unsigned __int64)&src);
    if ( n[0] )
    {
      n[1] = 0;
      qfree();
    }
    memset(n, 0, 24);
    src = v44;
    n[0] = qvector_reserve();
    n[1] = 11;
    strcpy((char *)n[0], "Comment #0");
    sub_40FA00(&v54, (unsigned __int64)&src);
    if ( n[0] )
    {
      n[1] = 0;
      qfree();
    }
    v2 = sub_4100D0((__int64)&v70, "Test 2", &v54);
    if ( !(_BYTE)v2 )
    {
LABEL_42:
      v9 = v54;
      if ( v54 )
      {
        v10 = v55;
        if ( (_QWORD)v55 )
        {
          v11 = 0;
          do
          {
            v12 = v9 + 32 * v11;
            if ( *(_QWORD *)(v12 + 8) )
            {
              *(_QWORD *)(v12 + 16) = 0;
              qfree();
              v9 = v54;
            }
            ++v11;
          }
          while ( v10 != v11 );
        }
        *(_QWORD *)&v55 = 0;
        qfree();
      }
      goto LABEL_21;
    }
    *(_OWORD *)n = 0;
    src = 0;
    src = (void *)qvector_reserve();
    n[0] = 11;
    strcpy((char *)src, "Comment #2");
    sub_40D2B0((__int64)v77, (__int64)&v70, (__int64)&src);
    if ( src )
    {
      n[0] = 0;
      qfree();
    }
    if ( v78 )
    {
      v13 = s1;
      if ( v77[1] )
        v13 = (const char *)v77[0];
      sub_6C720((__int64)"Got error during test %s: %s\n", "Comment #2", v13);
      if ( v77[0] )
        qfree();
      v2 = 0;
      goto LABEL_42;
    }
    v56 = 0;
    memset(n, 0, 24);
    v49 = (void *)v77[0];
    src = (void *)v77[0];
    v57 = 0;
    n[0] = qvector_reserve();
    n[1] = 11;
    strcpy((char *)n[0], "Comment #2");
    sub_40FA00(&v56, (unsigned __int64)&src);
    if ( n[0] )
    {
      n[1] = 0;
      qfree();
    }
    memset(n, 0, 24);
    src = v46;
    n[0] = qvector_reserve();
    n[1] = 11;
    strcpy((char *)n[0], "Comment #1");
    sub_40FA00(&v56, (unsigned __int64)&src);
    if ( n[0] )
    {
      n[1] = 0;
      qfree();
    }
    memset(n, 0, 24);
    src = v44;
    n[0] = qvector_reserve();
    n[1] = 11;
    strcpy((char *)n[0], "Comment #0");
    sub_40FA00(&v56, (unsigned __int64)&src);
    if ( n[0] )
    {
      n[1] = 0;
      qfree();
    }
    v2 = sub_4100D0((__int64)&v70, "Test 3", &v56);
    if ( !(_BYTE)v2 )
    {
LABEL_70:
      v15 = v56;
      if ( v56 )
      {
        v16 = v57;
        if ( (_QWORD)v57 )
        {
          v17 = 0;
          do
          {
            v18 = v15 + 32 * v17;
            if ( *(_QWORD *)(v18 + 8) )
            {
              *(_QWORD *)(v18 + 16) = 0;
              qfree();
              v15 = v56;
            }
            ++v17;
          }
          while ( v16 != v17 );
        }
        *(_QWORD *)&v57 = 0;
        qfree();
      }
      goto LABEL_42;
    }
    sub_40D570((__int64)v79, (__int64)&v70, (__int64)v46);
    v47 = v80;
    if ( v80 )
    {
      v14 = s1;
      if ( v79[1] )
        v14 = (const char *)v79[0];
      sub_6C720((__int64)"Got error during test %s: %s\n", "Del #1", v14);
      if ( v79[0] )
        qfree();
      v2 = 0;
      goto LABEL_70;
    }
    v58 = 0;
    src = v49;
    memset(n, 0, 24);
    v59 = 0;
    n[0] = qvector_reserve();
    n[1] = 11;
    strcpy((char *)n[0], "Comment #2");
    sub_40FA00(&v58, (unsigned __int64)&src);
    if ( n[0] )
    {
      n[1] = 0;
      qfree();
    }
    memset(n, 0, 24);
    src = v44;
    n[0] = qvector_reserve();
    n[1] = 11;
    strcpy((char *)n[0], "Comment #0");
    sub_40FA00(&v58, (unsigned __int64)&src);
    if ( n[0] )
    {
      n[1] = 0;
      qfree();
    }
    v2 = sub_4100D0((__int64)&v70, "Test 4", &v58);
    if ( !(_BYTE)v2 )
    {
LABEL_88:
      v20 = v58;
      if ( v58 )
      {
        v21 = v59;
        if ( (_QWORD)v59 )
        {
          v22 = 0;
          do
          {
            v23 = v20 + 32 * v22;
            if ( *(_QWORD *)(v23 + 8) )
            {
              *(_QWORD *)(v23 + 16) = 0;
              qfree();
              v20 = v58;
            }
            ++v22;
          }
          while ( v21 != v22 );
        }
        *(_QWORD *)&v59 = 0;
        qfree();
      }
      goto LABEL_70;
    }
    sub_40CF90((__int64)v81, (__int64)&v70, (__int64)v44);
    v51 = v82;
    if ( v82 )
    {
      v19 = s1;
      if ( v81[1] )
        v19 = (const char *)v81[0];
      sub_6C720((__int64)"Got error during test %s: %s\n", "Move #0", v19);
      if ( v81[0] )
        qfree();
LABEL_87:
      v2 = v47;
      goto LABEL_88;
    }
    v60 = 0;
    memset(n, 0, 24);
    src = v44;
    v61 = 0;
    n[0] = qvector_reserve();
    n[1] = 11;
    strcpy((char *)n[0], "Comment #0");
    sub_40FA00(&v60, (unsigned __int64)&src);
    if ( n[0] )
    {
      n[1] = 0;
      qfree();
    }
    src = v49;
    memset(n, 0, 24);
    n[0] = qvector_reserve();
    n[1] = 11;
    strcpy((char *)n[0], "Comment #2");
    sub_40FA00(&v60, (unsigned __int64)&src);
    if ( n[0] )
    {
      n[1] = 0;
      qfree();
    }
    v47 = sub_4100D0((__int64)&v70, "Test 5", &v60);
    if ( !v47 )
    {
LABEL_108:
      if ( v60 )
      {
        v26 = v61;
        if ( (_QWORD)v61 )
        {
          v27 = v60;
          v28 = 0;
          do
          {
            v29 = v27 + 32 * v28;
            if ( *(_QWORD *)(v29 + 8) )
            {
              *(_QWORD *)(v29 + 16) = 0;
              qfree();
              v27 = v60;
            }
            ++v28;
          }
          while ( v26 != v28 );
        }
        *(_QWORD *)&v61 = 0;
        qfree();
      }
      goto LABEL_87;
    }
    src = 0;
    *(_OWORD *)n = 0;
    src = (void *)qvector_reserve();
    n[0] = 17;
    *(__m128i *)src = _mm_load_si128((const __m128i *)&xmmword_425F20);
    *((_BYTE *)src + 16) = 0;
    sub_40CE30((__int64)v83, (__int64)&v70, (__int64)v49, (__int64)&src);
    if ( src )
    {
      n[0] = 0;
      qfree();
    }
    v24 = v84;
    if ( v84 )
    {
      v25 = s1;
      if ( v83[1] )
        v25 = (const char *)v83[0];
      sub_6C720((__int64)"Got error during test %s: %s\n", "Update #2", v25);
      if ( v83[0] )
        qfree();
LABEL_107:
      v47 = v51;
      goto LABEL_108;
    }
    v62 = 0;
    src = v44;
    memset(n, 0, 24);
    v63 = 0;
    n[0] = qvector_reserve();
    n[1] = 11;
    strcpy((char *)n[0], "Comment #0");
    sub_40FA00(&v62, (unsigned __int64)&src);
    if ( n[0] )
    {
      n[1] = 0;
      qfree();
    }
    memset(n, 0, 24);
    src = v49;
    n[0] = qvector_reserve();
    n[1] = 17;
    *(__m128i *)n[0] = _mm_load_si128((const __m128i *)&xmmword_425F20);
    *(_BYTE *)(n[0] + 16) = 0;
    sub_40FA00(&v62, (unsigned __int64)&src);
    if ( n[0] )
    {
      n[1] = 0;
      qfree();
    }
    v51 = sub_4100D0((__int64)&v70, "Test 6", &v62);
    if ( !v51 )
    {
LABEL_132:
      if ( v62 )
      {
        v31 = v63;
        v32 = v62;
        for ( i = 0; v31 != i; ++i )
        {
          v34 = v32 + 32 * i;
          if ( *(_QWORD *)(v34 + 8) )
          {
            *(_QWORD *)(v34 + 16) = 0;
            qfree();
            v32 = v62;
          }
        }
        *(_QWORD *)&v63 = 0;
        qfree();
      }
      goto LABEL_107;
    }
    v64 = 0;
    v65 = 0;
    v64 = (char *)qvector_reserve();
    *(_QWORD *)&v65 = 14;
    strcpy(v64, "doesn't exist");
    src = 0;
    *(_OWORD *)n = 0;
    if ( netnode_qsupstr() < 0 )
    {
      if ( !src )
        goto LABEL_141;
    }
    else
    {
      v24 = n[0] > 1;
      if ( !src )
        goto LABEL_124;
    }
    n[0] = 0;
    qfree();
LABEL_124:
    if ( v24 )
    {
      if ( (unsigned __int64)v65 <= 1 )
      {
        v30 = "update_entry(%llX)";
        sub_3D8380((__int64)&v66);
        LOBYTE(n[2]) = 1;
        v35 = _mm_loadu_si128(&v67);
        src = v66;
        *(__m128i *)n = v35;
      }
      else
      {
        v30 = (_BYTE *)(&dword_30 + 2);
        netnode_supset();
        LOBYTE(n[2]) = 0;
      }
      goto LABEL_127;
    }
LABEL_141:
    v30 = "%llX: invalid unbounded history index\n";
    sub_3D8380((__int64)&v68);
    LOBYTE(n[2]) = 1;
    v36 = _mm_loadu_si128(&v69);
    src = v68;
    *(__m128i *)n = v36;
LABEL_127:
    if ( v64 )
    {
      *(_QWORD *)&v65 = 0;
      qfree();
    }
    v51 = n[2];
    if ( LOBYTE(n[2]) )
    {
      sub_6C720((__int64)"run_qstring_history_test: all tests passed!\n", v30);
      netnode_kill();
      if ( src )
        qfree();
    }
    else
    {
      sub_6C720((__int64)"run_qstring_history_test: expected error on updating invalid comment\n", v30);
      sub_40FEC0((__int64)&v68);
      v37 = v68;
      v43 = v69.m128i_i64[0];
      v38 = v68;
      v39 = v68;
      v45 = &v68[32 * v69.m128i_i64[0]];
      while ( v45 != v39 )
      {
        v40 = s1;
        if ( *((_QWORD *)v39 + 2) )
          v40 = (const char *)*((_QWORD *)v39 + 1);
        v50 = v38;
        v48 = v39;
        sub_6C720((__int64)"=> (%llX, \"%s\")\n", *(_QWORD *)v39, v40);
        v38 = v50;
        v39 = v48 + 32;
      }
      v41 = 0;
      if ( v37 )
      {
        v42 = v38;
        while ( v43 != v41 )
        {
          if ( *((_QWORD *)v42 + 1) )
          {
            *((_QWORD *)v42 + 2) = 0;
            qfree();
          }
          ++v41;
          v42 += 32;
        }
        qfree();
      }
      sub_40BFE0();
    }
    goto LABEL_132;
  }
LABEL_21:
  v4 = v52;
  if ( v52 )
  {
    v5 = v53;
    if ( (_QWORD)v53 )
    {
      v6 = 0;
      do
      {
        v7 = v4 + 32 * v6;
        if ( *(_QWORD *)(v7 + 8) )
        {
          *(_QWORD *)(v7 + 16) = 0;
          qfree();
          v4 = v52;
        }
        ++v6;
      }
      while ( v5 != v6 );
    }
    *(_QWORD *)&v53 = 0;
    qfree();
  }
LABEL_15:
  netnode_kill();
  if ( v70 )
  {
    *(_QWORD *)&v71 = 0;
    qfree();
  }
  return v2;
}
