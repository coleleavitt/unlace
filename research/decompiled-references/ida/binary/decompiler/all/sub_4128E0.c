__int64 sub_4128E0()
{
  size_t v0; // rbx
  char *v1; // r14
  char v2; // r12
  const char *v3; // rdx
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 v6; // rdx
  __int64 v7; // rax
  size_t v8; // r13
  const char *v9; // r12
  char v10; // r13
  const char *v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // r12
  __int64 v14; // rcx
  __int64 v15; // rax
  size_t v16; // r12
  const char *v17; // r13
  char v18; // r12
  const char *v19; // rdx
  unsigned int v20; // r13d
  __int64 v21; // rbx
  __int64 v22; // r14
  __int64 v23; // rcx
  __int64 v24; // rax
  size_t v25; // r14
  const char *v26; // rdx
  const char *v27; // rdx
  const char *v29; // rdx
  const char *v30; // rdx
  __int64 v31; // rbp
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rax
  const char *v35; // rdx
  __int64 v36; // rbp
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rax
  const char *v40; // rdx
  const char *v41; // rdx
  const char *v42; // rdx
  __int64 v43; // rbp
  __int64 v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // rax
  const char *v47; // rdx
  const char *v48; // rdx
  const char *v49; // rdx
  char *v50; // [rsp+10h] [rbp-1D0h]
  char *v51; // [rsp+38h] [rbp-1A8h]
  void *v52; // [rsp+38h] [rbp-1A8h]
  void *v53; // [rsp+40h] [rbp-1A0h]
  char v54; // [rsp+40h] [rbp-1A0h]
  char *v55; // [rsp+48h] [rbp-198h]
  void *v56; // [rsp+50h] [rbp-190h]
  _BYTE *v57; // [rsp+58h] [rbp-188h] BYREF
  __int128 v58; // [rsp+60h] [rbp-180h]
  _BYTE *v59; // [rsp+78h] [rbp-168h] BYREF
  __int128 v60; // [rsp+80h] [rbp-160h]
  _BYTE *v61; // [rsp+98h] [rbp-148h] BYREF
  __int128 v62; // [rsp+A0h] [rbp-140h]
  _BYTE *v63; // [rsp+B8h] [rbp-128h] BYREF
  __int128 v64; // [rsp+C0h] [rbp-120h]
  _BYTE *v65; // [rsp+D8h] [rbp-108h] BYREF
  __int128 v66; // [rsp+E0h] [rbp-100h]
  __int64 v67; // [rsp+F0h] [rbp-F0h]
  void *v68; // [rsp+F8h] [rbp-E8h] BYREF
  __int128 v69; // [rsp+100h] [rbp-E0h]
  __int64 v70; // [rsp+110h] [rbp-D0h]
  char *v71; // [rsp+118h] [rbp-C8h] BYREF
  __int128 v72; // [rsp+120h] [rbp-C0h]
  char v73; // [rsp+130h] [rbp-B0h]
  char *v74; // [rsp+138h] [rbp-A8h] BYREF
  __int128 v75; // [rsp+140h] [rbp-A0h]
  __int64 v76; // [rsp+150h] [rbp-90h]
  __int64 v77; // [rsp+158h] [rbp-88h] BYREF
  __int128 v78; // [rsp+160h] [rbp-80h]
  char v79; // [rsp+170h] [rbp-70h]
  void *src; // [rsp+178h] [rbp-68h] BYREF
  size_t n[12]; // [rsp+180h] [rbp-60h] BYREF

  n[4] = __readfsqword(0x28u);
  src = 0;
  *(_OWORD *)n = 0;
  ++qword_4EFF68;
  sub_6AEF0((__int64 *)&src);
  v0 = n[0];
  v68 = 0;
  v69 = 0;
  if ( n[0] )
  {
    v68 = (void *)qalloc_or_throw();
    *((_QWORD *)&v69 + 1) = v0;
    memcpy(v68, src, v0);
    *(_QWORD *)&v69 = v0;
  }
  v70 = -1;
  netnode_check();
  netnode_check();
  if ( v65 == (_BYTE *)-1LL )
  {
    v71 = 0;
    netnode_supset();
    v74 = &byte_1;
    netnode_supset();
    v77 = 1;
    netnode_supset();
  }
  else
  {
    v70 = v77;
  }
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  v62 = 0;
  v61 = 0;
  v61 = (_BYTE *)qvector_reserve();
  *(_QWORD *)&v62 = 2;
  *v61 = 65;
  v61[1] = 0;
  sub_40D2B0((__int64)&v71, (__int64)&v68, (__int64)&v61);
  if ( v73 )
  {
    if ( (_QWORD)v72 )
      sub_6C720((__int64)"FAIL (%s): %s\n", "add A", v71);
    else
      sub_6C720((__int64)"FAIL (%s): %s\n", "add A", s1);
    if ( v71 )
      qfree();
    goto LABEL_138;
  }
  v1 = v71;
  v63 = 0;
  v64 = 0;
  v63 = (_BYTE *)qvector_reserve();
  *(_QWORD *)&v64 = 2;
  *v63 = 66;
  v63[1] = 0;
  sub_40D2B0((__int64)&v74, (__int64)&v68, (__int64)&v63);
  v2 = v76;
  if ( (_BYTE)v76 )
  {
    v27 = s1;
    if ( (_QWORD)v75 )
      v27 = v74;
    sub_6C720((__int64)"FAIL (%s): %s\n", "add B", v27);
    if ( v74 )
      qfree();
    if ( v63 )
    {
      *(_QWORD *)&v64 = 0;
      qfree();
      if ( !v61 )
        goto LABEL_140;
      goto LABEL_20;
    }
LABEL_138:
    if ( v61 )
    {
      *(_QWORD *)&v62 = 0;
      qfree();
    }
LABEL_140:
    netnode_kill();
    if ( !v68 )
      return 0;
LABEL_141:
    *(_QWORD *)&v69 = 0;
    qfree();
    return 0;
  }
  v65 = 0;
  v66 = 0;
  v50 = v74;
  v65 = (_BYTE *)qvector_reserve();
  *(_QWORD *)&v66 = 2;
  *v65 = 67;
  v65[1] = 0;
  sub_40D2B0((__int64)&v77, (__int64)&v68, (__int64)&v65);
  v2 = v79;
  if ( !v79 )
  {
    sub_40D570((__int64)&src, (__int64)&v68, v77);
    v2 = n[2];
    if ( LOBYTE(n[2]) )
    {
      v3 = s1;
      if ( n[0] )
        v3 = (const char *)src;
      sub_6C720((__int64)"FAIL (%s): %s\n", "del head C", v3);
      if ( src )
        qfree();
    }
    goto LABEL_15;
  }
  v35 = s1;
  if ( (_QWORD)v78 )
    v35 = (const char *)v77;
  sub_6C720((__int64)"FAIL (%s): %s\n", "add C", v35);
  if ( !v77 )
  {
LABEL_15:
    if ( !v65 )
      goto LABEL_17;
    goto LABEL_16;
  }
  qfree();
  if ( v65 )
  {
LABEL_16:
    *(_QWORD *)&v66 = 0;
    qfree();
  }
LABEL_17:
  if ( v63 )
  {
    *(_QWORD *)&v64 = 0;
    qfree();
  }
  if ( v61 )
  {
LABEL_20:
    *(_QWORD *)&v62 = 0;
    qfree();
  }
  if ( v2 )
    goto LABEL_140;
  v78 = 0;
  src = v50;
  v77 = 0;
  memset(n, 0, 24);
  n[0] = qvector_reserve();
  n[1] = 2;
  *(_BYTE *)n[0] = 66;
  *(_BYTE *)(n[0] + 1) = 0;
  sub_40FA00((unsigned __int64 *)&v77, (unsigned __int64)&src);
  if ( n[0] )
  {
    n[1] = 0;
    qfree();
  }
  src = v1;
  memset(n, 0, 24);
  n[0] = qvector_reserve();
  n[1] = 2;
  *(_BYTE *)n[0] = 65;
  *(_BYTE *)(n[0] + 1) = 0;
  sub_40FA00((unsigned __int64 *)&v77, (unsigned __int64)&src);
  if ( n[0] )
  {
    n[1] = 0;
    qfree();
  }
  if ( !(unsigned __int8)sub_411A30((__int64)&v68, "delete.head", &v77) )
  {
    if ( v77 )
    {
      v31 = v78;
      if ( (_QWORD)v78 )
      {
        v32 = 0;
        v33 = v77;
        do
        {
          v34 = v33 + 32 * v32;
          if ( *(_QWORD *)(v34 + 8) )
          {
            *(_QWORD *)(v34 + 16) = 0;
            qfree();
            v33 = v77;
          }
          ++v32;
        }
        while ( v31 != v32 );
      }
      *(_QWORD *)&v78 = 0;
      qfree();
    }
    goto LABEL_140;
  }
  if ( v77 )
  {
    v4 = v78;
    if ( (_QWORD)v78 )
    {
      v5 = 0;
      v6 = v77;
      do
      {
        v7 = v6 + 32 * v5;
        if ( *(_QWORD *)(v7 + 8) )
        {
          *(_QWORD *)(v7 + 16) = 0;
          qfree();
          v6 = v77;
        }
        ++v5;
      }
      while ( v4 != v5 );
    }
    *(_QWORD *)&v78 = 0;
    qfree();
  }
  netnode_kill();
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree();
  }
  *(_OWORD *)n = 0;
  src = 0;
  ++qword_4EFF68;
  sub_6AEF0((__int64 *)&src);
  v8 = n[0];
  v68 = 0;
  v69 = 0;
  if ( n[0] )
  {
    v68 = (void *)qalloc_or_throw();
    *((_QWORD *)&v69 + 1) = v8;
    memcpy(v68, src, v8);
    *(_QWORD *)&v69 = v8;
  }
  v70 = -1;
  netnode_check();
  if ( v65 == (_BYTE *)-1LL )
  {
    netnode_check();
    v71 = 0;
    netnode_supset();
    v74 = &byte_1;
    netnode_supset();
    v77 = 1;
    netnode_supset();
  }
  else
  {
    netnode_check();
    v70 = v77;
  }
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  v62 = 0;
  v61 = 0;
  v61 = (_BYTE *)qvector_reserve();
  *(_QWORD *)&v62 = 2;
  *v61 = 65;
  v61[1] = 0;
  sub_40D2B0((__int64)&v71, (__int64)&v68, (__int64)&v61);
  if ( v73 )
  {
    v30 = s1;
    if ( (_QWORD)v72 )
      v30 = v71;
    sub_6C720((__int64)"FAIL (%s): %s\n", "add A", v30);
    if ( v71 )
      qfree();
    goto LABEL_157;
  }
  v9 = v71;
  v63 = 0;
  v64 = 0;
  v63 = (_BYTE *)qvector_reserve();
  *(_QWORD *)&v64 = 2;
  *v63 = 66;
  v63[1] = 0;
  sub_40D2B0((__int64)&v74, (__int64)&v68, (__int64)&v63);
  v10 = v76;
  if ( (_BYTE)v76 )
  {
    v29 = s1;
    if ( (_QWORD)v75 )
      v29 = v74;
    sub_6C720((__int64)"FAIL (%s): %s\n", "add B", v29);
    if ( v74 )
      qfree();
    if ( v63 )
    {
      *(_QWORD *)&v64 = 0;
      qfree();
      if ( !v61 )
        goto LABEL_159;
      goto LABEL_55;
    }
LABEL_157:
    if ( v61 )
    {
      *(_QWORD *)&v62 = 0;
      qfree();
    }
LABEL_159:
    netnode_kill();
    if ( !v68 )
      return 0;
    goto LABEL_141;
  }
  v65 = 0;
  v66 = 0;
  v51 = v74;
  v65 = (_BYTE *)qvector_reserve();
  *(_QWORD *)&v66 = 2;
  *v65 = 67;
  v65[1] = 0;
  sub_40D2B0((__int64)&v77, (__int64)&v68, (__int64)&v65);
  v10 = v79;
  if ( v79 )
  {
    v41 = s1;
    if ( (_QWORD)v78 )
      v41 = (const char *)v77;
    sub_6C720((__int64)"FAIL (%s): %s\n", "add C", v41);
    if ( v77 )
      goto LABEL_49;
  }
  else
  {
    v53 = (void *)v77;
    sub_40D570((__int64)&src, (__int64)&v68, (__int64)v9);
    v10 = n[2];
    if ( LOBYTE(n[2]) )
    {
      v11 = s1;
      if ( n[0] )
        v11 = (const char *)src;
      sub_6C720((__int64)"FAIL (%s): %s\n", "del tail A", v11);
      if ( src )
LABEL_49:
        qfree();
    }
  }
  if ( v65 )
  {
    *(_QWORD *)&v66 = 0;
    qfree();
  }
  if ( v63 )
  {
    *(_QWORD *)&v64 = 0;
    qfree();
  }
  if ( v61 )
  {
LABEL_55:
    *(_QWORD *)&v62 = 0;
    qfree();
  }
  if ( v10 )
    goto LABEL_159;
  v77 = 0;
  src = v53;
  memset(n, 0, 24);
  v78 = 0;
  n[0] = qvector_reserve();
  n[1] = 2;
  *(_BYTE *)n[0] = 67;
  *(_BYTE *)(n[0] + 1) = 0;
  sub_40FA00((unsigned __int64 *)&v77, (unsigned __int64)&src);
  if ( n[0] )
  {
    n[1] = 0;
    qfree();
  }
  memset(n, 0, 24);
  src = v51;
  n[0] = qvector_reserve();
  n[1] = 2;
  *(_BYTE *)n[0] = 66;
  *(_BYTE *)(n[0] + 1) = 0;
  sub_40FA00((unsigned __int64 *)&v77, (unsigned __int64)&src);
  if ( n[0] )
  {
    n[1] = 0;
    qfree();
  }
  if ( !(unsigned __int8)sub_411A30((__int64)&v68, "delete.tail", &v77) )
  {
    if ( v77 )
    {
      v36 = v78;
      if ( (_QWORD)v78 )
      {
        v37 = 0;
        v38 = v77;
        do
        {
          v39 = v38 + 32 * v37;
          if ( *(_QWORD *)(v39 + 8) )
          {
            *(_QWORD *)(v39 + 16) = 0;
            qfree();
            v38 = v77;
          }
          ++v37;
        }
        while ( v36 != v37 );
      }
      *(_QWORD *)&v78 = 0;
      qfree();
    }
    goto LABEL_159;
  }
  if ( v77 )
  {
    if ( (_QWORD)v78 )
    {
      v12 = 0;
      v13 = v78;
      v14 = v77;
      do
      {
        v15 = v14 + 32 * v12;
        if ( *(_QWORD *)(v15 + 8) )
        {
          *(_QWORD *)(v15 + 16) = 0;
          qfree();
          v14 = v77;
        }
        ++v12;
      }
      while ( v13 != v12 );
    }
    *(_QWORD *)&v78 = 0;
    qfree();
  }
  netnode_kill();
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree();
  }
  src = 0;
  *(_OWORD *)n = 0;
  ++qword_4EFF68;
  sub_6AEF0((__int64 *)&src);
  v16 = n[0];
  v65 = 0;
  v66 = 0;
  if ( n[0] )
  {
    v65 = (_BYTE *)qalloc_or_throw();
    *((_QWORD *)&v66 + 1) = v16;
    memcpy(v65, src, v16);
    *(_QWORD *)&v66 = v16;
  }
  v67 = -1;
  netnode_check();
  if ( v68 == (void *)-1LL )
  {
    netnode_check();
    v71 = 0;
    netnode_supset();
    v74 = &byte_1;
    netnode_supset();
    v77 = 1;
    netnode_supset();
  }
  else
  {
    netnode_check();
    v67 = v77;
  }
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  v58 = 0;
  v57 = (_BYTE *)qvector_reserve();
  *(_QWORD *)&v58 = 2;
  *v57 = 65;
  v57[1] = 0;
  sub_40D2B0((__int64)&v68, (__int64)&v65, (__int64)&v57);
  if ( (_BYTE)v70 )
  {
    v42 = s1;
    if ( (_QWORD)v69 )
      v42 = (const char *)v68;
    sub_6C720((__int64)"FAIL (%s): %s\n", "add A", v42);
    if ( v68 )
      qfree();
    goto LABEL_197;
  }
  v59 = 0;
  v60 = 0;
  v52 = v68;
  v59 = (_BYTE *)qvector_reserve();
  *(_QWORD *)&v60 = 2;
  *v59 = 66;
  v59[1] = 0;
  sub_40D2B0((__int64)&v71, (__int64)&v65, (__int64)&v59);
  v54 = v73;
  if ( v73 )
  {
    v40 = s1;
    if ( (_QWORD)v72 )
      v40 = v71;
    sub_6C720((__int64)"FAIL (%s): %s\n", "add B", v40);
    if ( v71 )
      qfree();
    if ( v59 )
    {
      *(_QWORD *)&v60 = 0;
      qfree();
      v18 = v54;
      if ( !v57 )
      {
LABEL_187:
        netnode_kill();
        if ( v65 )
        {
          *(_QWORD *)&v66 = 0;
          qfree();
        }
        return 0;
      }
      goto LABEL_93;
    }
LABEL_197:
    if ( v57 )
    {
      *(_QWORD *)&v58 = 0;
      qfree();
    }
    goto LABEL_187;
  }
  v17 = v71;
  v61 = 0;
  v62 = 0;
  v61 = (_BYTE *)qvector_reserve();
  *(_QWORD *)&v62 = 2;
  *v61 = 67;
  v61[1] = 0;
  sub_40D2B0((__int64)&v74, (__int64)&v65, (__int64)&v61);
  v18 = v76;
  if ( !(_BYTE)v76 )
  {
    v63 = 0;
    v64 = 0;
    v55 = v74;
    v63 = (_BYTE *)qvector_reserve();
    *(_QWORD *)&v64 = 2;
    *v63 = 68;
    v63[1] = 0;
    sub_40D2B0((__int64)&v77, (__int64)&v65, (__int64)&v63);
    v18 = v79;
    if ( v79 )
    {
      v49 = s1;
      if ( (_QWORD)v78 )
        v49 = (const char *)v77;
      sub_6C720((__int64)"FAIL (%s): %s\n", "add D", v49);
      if ( !v77 )
        goto LABEL_86;
    }
    else
    {
      v56 = (void *)v77;
      sub_40D570((__int64)&src, (__int64)&v65, (__int64)v17);
      v18 = n[2];
      if ( !LOBYTE(n[2]) )
        goto LABEL_86;
      v19 = s1;
      if ( n[0] )
        v19 = (const char *)src;
      sub_6C720((__int64)"FAIL (%s): %s\n", "del middle B", v19);
      if ( !src )
        goto LABEL_86;
    }
    qfree();
LABEL_86:
    if ( v63 )
    {
      *(_QWORD *)&v64 = 0;
      qfree();
    }
    goto LABEL_88;
  }
  v47 = s1;
  if ( (_QWORD)v75 )
    v47 = v74;
  sub_6C720((__int64)"FAIL (%s): %s\n", "add C", v47);
  if ( v74 )
    qfree();
LABEL_88:
  if ( v61 )
  {
    *(_QWORD *)&v62 = 0;
    qfree();
  }
  if ( v59 )
  {
    *(_QWORD *)&v60 = 0;
    qfree();
  }
  if ( v57 )
  {
LABEL_93:
    *(_QWORD *)&v58 = 0;
    qfree();
  }
  if ( v18 )
    goto LABEL_187;
  v77 = 0;
  src = v56;
  memset(n, 0, 24);
  v78 = 0;
  n[0] = qvector_reserve();
  n[1] = 2;
  *(_BYTE *)n[0] = 68;
  *(_BYTE *)(n[0] + 1) = 0;
  sub_40FA00((unsigned __int64 *)&v77, (unsigned __int64)&src);
  if ( n[0] )
  {
    n[1] = 0;
    qfree();
  }
  memset(n, 0, 24);
  src = v55;
  n[0] = qvector_reserve();
  n[1] = 2;
  *(_BYTE *)n[0] = 67;
  *(_BYTE *)(n[0] + 1) = 0;
  sub_40FA00((unsigned __int64 *)&v77, (unsigned __int64)&src);
  if ( n[0] )
  {
    n[1] = 0;
    qfree();
  }
  memset(n, 0, 24);
  src = v52;
  n[0] = qvector_reserve();
  n[1] = 2;
  *(_BYTE *)n[0] = 65;
  *(_BYTE *)(n[0] + 1) = 0;
  sub_40FA00((unsigned __int64 *)&v77, (unsigned __int64)&src);
  if ( n[0] )
  {
    n[1] = 0;
    qfree();
  }
  v20 = sub_411A30((__int64)&v65, "delete.middle", &v77);
  if ( !(_BYTE)v20 )
  {
    if ( v77 )
    {
      v43 = v78;
      if ( (_QWORD)v78 )
      {
        v44 = 0;
        v45 = v77;
        do
        {
          v46 = v45 + 32 * v44;
          if ( *(_QWORD *)(v46 + 8) )
          {
            *(_QWORD *)(v46 + 16) = 0;
            qfree();
            v45 = v77;
          }
          ++v44;
        }
        while ( v43 != v44 );
      }
      *(_QWORD *)&v78 = 0;
      qfree();
    }
    goto LABEL_187;
  }
  if ( v77 )
  {
    if ( (_QWORD)v78 )
    {
      v21 = 0;
      v22 = v78;
      v23 = v77;
      do
      {
        v24 = v23 + 32 * v21;
        if ( *(_QWORD *)(v24 + 8) )
        {
          *(_QWORD *)(v24 + 16) = 0;
          qfree();
          v23 = v77;
        }
        ++v21;
      }
      while ( v22 != v21 );
    }
    *(_QWORD *)&v78 = 0;
    qfree();
  }
  netnode_kill();
  if ( v65 )
  {
    *(_QWORD *)&v66 = 0;
    qfree();
  }
  *(_OWORD *)n = 0;
  src = 0;
  ++qword_4EFF68;
  sub_6AEF0((__int64 *)&src);
  v25 = n[0];
  v74 = 0;
  v75 = 0;
  if ( n[0] )
  {
    v74 = (char *)qalloc_or_throw();
    *((_QWORD *)&v75 + 1) = v25;
    memcpy(v74, src, v25);
    *(_QWORD *)&v75 = v25;
  }
  v76 = -1;
  netnode_check();
  if ( v65 == (_BYTE *)-1LL )
  {
    netnode_check();
    v68 = 0;
    netnode_supset();
    v71 = &byte_1;
    netnode_supset();
    v77 = 1;
    netnode_supset();
  }
  else
  {
    netnode_check();
    v76 = v77;
  }
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  v72 = 0;
  v71 = 0;
  v71 = (char *)qvector_reserve();
  *(_QWORD *)&v72 = 2;
  *v71 = 65;
  v71[1] = 0;
  sub_40D2B0((__int64)&v77, (__int64)&v74, (__int64)&v71);
  if ( v79 )
  {
    v48 = s1;
    if ( (_QWORD)v78 )
      v48 = (const char *)v77;
    sub_6C720((__int64)"FAIL (%s): %s\n", "add A", v48);
    if ( !v77 )
      goto LABEL_123;
LABEL_122:
    qfree();
LABEL_123:
    if ( v71 )
    {
      *(_QWORD *)&v72 = 0;
      qfree();
    }
    goto LABEL_125;
  }
  sub_40D570((__int64)&src, (__int64)&v74, v77);
  if ( LOBYTE(n[2]) )
  {
    v26 = s1;
    if ( n[0] )
      v26 = (const char *)src;
    sub_6C720((__int64)"FAIL (%s): %s\n", "del only A", v26);
    if ( !src )
      goto LABEL_123;
    goto LABEL_122;
  }
  if ( v71 )
  {
    *(_QWORD *)&v72 = 0;
    qfree();
  }
  if ( netnode_altval() || sub_40DB00(&v74, 0) )
  {
    sub_6C720((__int64)"delete.only: list should be empty\n", 0);
LABEL_125:
    netnode_kill();
    if ( v74 )
    {
      *(_QWORD *)&v75 = 0;
      qfree();
    }
    return 0;
  }
  if ( netnode_altval() )
  {
    sub_6C720((__int64)"delete.only: head not BADNODE\n", 0);
    goto LABEL_125;
  }
  netnode_kill();
  if ( v74 )
  {
    *(_QWORD *)&v75 = 0;
    qfree();
  }
  return v20;
}
