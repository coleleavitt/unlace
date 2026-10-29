unsigned __int64 sub_3B3080()
{
  __int64 v0; // rdi
  _QWORD *v2; // r12
  char *v3; // rdx
  _QWORD *v4; // rbp
  __int64 v5; // r13
  __int64 i; // rbx
  char *v7; // rax
  void *v8; // rdi
  int v9; // eax
  unsigned __int64 v10; // r14
  int v11; // ebx
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // r14d
  const char *v18; // rax
  const char *v19; // rbp
  __int64 v20; // r15
  size_t v21; // rax
  unsigned __int8 v22; // dl
  int v23; // ebp
  int v24; // r14d
  int v25; // ebp
  __int64 v26; // rbx
  __int64 v27; // rdx
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  char *v32; // rbx
  const char *v33; // r13
  _BYTE *v34; // rsi
  __int64 v35; // r15
  __int64 v36; // r14
  __int64 v37; // r13
  char *v38; // rax
  void *v39; // rdi
  __m128i v40; // xmm0
  const char *v41; // rsi
  void *v42; // rdi
  _QWORD *v43; // rbx
  __int64 (__fastcall ***bpt_kernel_interface)(); // rdi
  const char *v45; // rdx
  void *v46; // rax
  void *v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r14
  __int64 v51; // r8
  __int64 v52; // rdx
  unsigned __int64 v53; // rbp
  __int64 v54; // rax
  void *v55; // rdi
  __int64 v56; // rbx
  size_t v57; // rax
  size_t v58; // r14
  size_t v59; // r15
  __int64 v60; // rdx
  int src; // [rsp+8h] [rbp-180h]
  const char *srca; // [rsp+8h] [rbp-180h]
  _QWORD *std_dirtree; // [rsp+10h] [rbp-178h]
  int j; // [rsp+1Ch] [rbp-16Ch]
  __int64 v65; // [rsp+20h] [rbp-168h]
  __int64 v66; // [rsp+28h] [rbp-160h]
  char *v67; // [rsp+30h] [rbp-158h]
  char v68; // [rsp+43h] [rbp-145h]
  int v69; // [rsp+44h] [rbp-144h]
  __int64 v70; // [rsp+58h] [rbp-130h] BYREF
  __int64 v71; // [rsp+60h] [rbp-128h] BYREF
  void *v72; // [rsp+68h] [rbp-120h] BYREF
  __m128i v73; // [rsp+70h] [rbp-118h] BYREF
  void *v74; // [rsp+80h] [rbp-108h] BYREF
  __int128 v75; // [rsp+88h] [rbp-100h]
  void *v76; // [rsp+A0h] [rbp-E8h] BYREF
  __int128 v77; // [rsp+A8h] [rbp-E0h]
  void *ptr; // [rsp+C0h] [rbp-C8h] BYREF
  __m128i v79; // [rsp+C8h] [rbp-C0h] BYREF
  void *v80; // [rsp+E0h] [rbp-A8h] BYREF
  void *v81[3]; // [rsp+E8h] [rbp-A0h] BYREF
  __m128i v82; // [rsp+100h] [rbp-88h]
  __int64 v83; // [rsp+110h] [rbp-78h]
  __int64 v84; // [rsp+118h] [rbp-70h]
  __int64 v85; // [rsp+120h] [rbp-68h]
  __int64 v86; // [rsp+128h] [rbp-60h]
  unsigned __int64 v87; // [rsp+130h] [rbp-58h]
  unsigned __int64 v88; // [rsp+138h] [rbp-50h]
  unsigned __int64 v89; // [rsp+148h] [rbp-40h]

  v89 = __readfsqword(0x28u);
  netnode_check(&v70, "$ bpts", 0, 0);
  v0 = v70;
  v74 = nullptr;
  v75 = 0;
  *(_QWORD *)(*(_QWORD *)(qword_2CCB598 + 1576) + 264LL) = 1;
  if ( netnode_qgetblob(v0, &v74, 1, 0, 83) <= 0 )
    goto LABEL_2;
  v2 = *(_QWORD **)(qword_2CCB598 + 1576);
  v73 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v74, (__m128i)(unsigned __int64)((unsigned __int64)v74 + v75));
  if ( v74 < (char *)v74 + (unsigned __int64)v75 )
  {
    v22 = *(_BYTE *)v74;
    v73.m128i_i64[0] = (__int64)v74 + 1;
    src = v22;
    if ( v22 > 5u )
      sub_378D50();
    v3 = (char *)v2[27];
    v4 = v2 + 27;
    if ( !v3 )
      goto LABEL_14;
    goto LABEL_8;
  }
  v3 = (char *)v2[27];
  if ( v3 )
  {
    src = 0;
    v4 = v2 + 27;
LABEL_8:
    v5 = v2[28];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = &v3[24 * i];
        v8 = *(void **)v7;
        if ( *(_QWORD *)v7 )
        {
          *((_QWORD *)v7 + 1) = 0;
          qfree(v8);
          v3 = (char *)v2[27];
        }
      }
    }
    v2[28] = 0;
    qfree(v3);
    v2[27] = 0;
    v2[29] = 0;
LABEL_14:
    if ( src > 1 )
    {
      v9 = unpack_dd(&v73);
      v10 = v2[28];
      v11 = v9;
      v12 = v9 + 1;
      if ( v12 != v10 )
      {
        v80 = nullptr;
        *(_OWORD *)v81 = 0;
        if ( v12 < v10 )
        {
          v53 = v9 + 1;
          do
          {
            v54 = v2[27] + 24 * v53;
            v55 = *(void **)v54;
            if ( *(_QWORD *)v54 )
            {
              *(_QWORD *)(v54 + 8) = 0;
              qfree(v55);
            }
            ++v53;
          }
          while ( v53 < v10 );
        }
        else
        {
          v13 = v2[27];
          v14 = v2[29];
          if ( (unsigned __int64)&v80 < v13 || (unsigned __int64)&v80 >= v13 + 24 * v14 )
          {
            if ( v14 < v12 )
            {
              v2[27] = qvector_reserve(v4, v13, v12, 24);
              v10 = v2[28];
            }
            if ( v10 < v12 )
            {
              v48 = 24 * v10;
              do
              {
                ++v10;
                v49 = v48 + v2[27];
                v48 += 24;
                *(_QWORD *)v49 = 0;
                *(_OWORD *)(v49 + 8) = 0;
              }
              while ( v12 != v10 );
            }
          }
          else
          {
            if ( v14 < v12 )
            {
              v2[27] = qvector_reserve(v4, v13, v12, 24);
              v10 = v2[28];
            }
            if ( v10 < v12 )
            {
              v15 = 24 * v10;
              do
              {
                ++v10;
                v16 = v15 + v2[27];
                v15 += 24;
                *(_QWORD *)v16 = 0;
                *(_OWORD *)(v16 + 8) = 0;
              }
              while ( v12 != v10 );
            }
          }
        }
        v2[28] = v12;
      }
      v17 = 1;
      if ( v11 > 0 )
      {
        do
        {
          v18 = (const char *)unpack_ds(&v73, v73.m128i_i64[1], 1);
          v19 = v18;
          if ( v18 )
          {
            v20 = v2[27] + 24LL * v17;
            v21 = strlen(v18);
            *(_QWORD *)v20 = v19;
            *(__m128i *)(v20 + 8) = _mm_unpacklo_epi64((__m128i)(v21 + 1), (__m128i)(v21 + 1));
          }
          ++v17;
        }
        while ( v11 >= v17 );
      }
    }
    goto LABEL_33;
  }
  src = 0;
LABEL_33:
  v23 = unpack_dd(&v73);
  std_dirtree = (_QWORD *)get_std_dirtree(5);
  v24 = dirtree_get_dir_size(*std_dirtree, 0) == 0 ? 8 : 12;
  v25 = v23 - 1;
  if ( v25 >= 0 )
  {
    v26 = 0;
    do
    {
      v80 = &qword_60;
      memset(v81, 0, sizeof(v81));
      v83 = 0xFFFFFFFFLL;
      v82 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
      v85 = 4;
      v84 = -1;
      v86 = 9;
      v87 = 0xFFFFFFFF00000000LL;
      v88 = 0;
      v26 = sub_3AEC10((__int64)&v80, (unsigned __int8 **)&v73, v26, src);
      if ( v2[33] < v88 )
        v2[33] = v88;
      sub_3B2AC0((__int64)&v80, v24, v27, v28, v29, v30);
      if ( v81[0] )
      {
        v81[1] = nullptr;
        qfree(v81[0]);
      }
    }
    while ( v25-- != 0 );
  }
  ++v2[33];
  if ( !(unsigned __int8)netnode_inited() )
    goto LABEL_2;
  netnode_check(&ptr, "$ bptsgrps", 0, 0);
  if ( ptr == (void *)-1LL )
    goto LABEL_2;
  netnode_check(&v71, "$ bptsgrps", 0, 0);
  v76 = nullptr;
  v77 = 0;
  if ( netnode_qgetblob(v71, &v76, 1, 0, 71) <= 0 )
    goto LABEL_76;
  v72 = v76;
  v67 = (char *)v76 + v77;
  v69 = unpack_dd(&v72);
  if ( v69 <= 1 )
    goto LABEL_95;
  for ( j = 1; j != v69; ++j )
  {
    v80 = nullptr;
    memset(v81, 0, sizeof(v81));
    v82 = 0;
    v32 = nullptr;
    v68 = sub_3AEE10((__int64 *)&v80, (unsigned __int64 *)&v72, (unsigned __int64)v67);
    ptr = nullptr;
    srca = haystack;
    v79 = 0;
    if ( v82.m128i_i64[0] )
    {
      srca = (const char *)v81[2];
      v32 = strchr((const char *)v81[2], 47);
    }
    v33 = srca;
    v34 = nullptr;
    while ( v32 )
    {
      if ( v32 != v33 )
      {
        v50 = v79.m128i_i64[0];
        v51 = v32 - v33;
        if ( v79.m128i_i64[0] )
        {
          v50 = v79.m128i_i64[0] - 1;
          v51 = v32 - v33 + v79.m128i_i64[0] - 1;
        }
        v52 = v51 + 1;
        if ( v79.m128i_i64[1] < (unsigned __int64)(v51 + 1) )
        {
          v66 = v51;
          v65 = v51 + 1;
          ptr = (void *)qvector_reserve(&ptr, v34, v52, 1);
          v51 = v66;
          v34 = ptr;
          v52 = v65;
        }
        v79.m128i_i64[0] = v52;
        v34[v51] = 0;
        memmove((char *)ptr + v50, v33, v32 - v33);
        v34 = ptr;
      }
      v37 = v79.m128i_i64[0];
      if ( v79.m128i_i64[0] )
      {
        v35 = v79.m128i_i64[0] + 1;
        v36 = v79.m128i_i64[0];
        v37 = v79.m128i_i64[0] - 1;
        if ( v79.m128i_i64[1] >= (unsigned __int64)(v79.m128i_i64[0] + 1) )
          goto LABEL_49;
      }
      else
      {
        v35 = 2;
        v36 = 1;
        if ( v79.m128i_i64[1] >= 2uLL )
          goto LABEL_49;
      }
      ptr = (void *)qvector_reserve(&ptr, v34, v35, 1);
      v34 = ptr;
LABEL_49:
      v79.m128i_i64[0] = v35;
      v34[v36] = 0;
      *((_BYTE *)ptr + v37) = 95;
      v33 = v32 + 1;
      v38 = strchr(v32 + 1, 47);
      v34 = ptr;
      v32 = v38;
    }
    if ( v33 == srca )
    {
      v39 = v34;
    }
    else
    {
      if ( *v33 && v33 )
      {
        v56 = v79.m128i_i64[0];
        v57 = strlen(v33);
        v58 = v57;
        v59 = v57;
        if ( v56 )
        {
          --v56;
          v59 = v57 + v56;
        }
        v60 = v59 + 1;
        if ( v79.m128i_i64[1] < v59 + 1 )
        {
          ptr = (void *)qvector_reserve(&ptr, v34, v60, 1);
          v60 = v59 + 1;
          v34 = ptr;
        }
        v79.m128i_i64[0] = v60;
        v34[v59] = 0;
        memmove((char *)ptr + v56, v33, v58);
        v34 = ptr;
      }
      v39 = v81[2];
      v81[2] = v34;
      v40 = _mm_loadu_si128(&v79);
      ptr = v39;
      v79.m128i_i64[1] = v82.m128i_i64[1];
      v82 = v40;
    }
    if ( v39 )
    {
      v79.m128i_i64[0] = 0;
      qfree(v39);
    }
    v41 = haystack;
    if ( v82.m128i_i64[0] )
      v41 = (const char *)v81[2];
    dirtree_mkdir(*std_dirtree, v41);
    v42 = v80;
    v43 = v80;
    if ( 8 * (__int64)v81[0] )
    {
      while ( 1 )
      {
        bpt_kernel_interface = get_bpt_kernel_interface();
        v45 = haystack;
        if ( v82.m128i_i64[0] )
          v45 = (const char *)v81[2];
        if ( !((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(), _QWORD, const char *))(*bpt_kernel_interface)[44])(
                bpt_kernel_interface,
                *v43,
                v45) )
          break;
        v42 = v80;
        if ( ++v43 == (_QWORD *)((char *)v80 + 8 * (__int64)v81[0]) )
          goto LABEL_89;
      }
      v46 = v81[2];
LABEL_72:
      if ( v46 )
      {
        v82.m128i_i64[0] = 0;
        qfree(v46);
      }
      if ( v80 )
      {
        v81[0] = nullptr;
        qfree(v80);
      }
LABEL_76:
      v47 = v76;
      if ( v76 )
        goto LABEL_77;
      goto LABEL_2;
    }
LABEL_89:
    v46 = v81[2];
    if ( !v68 )
      goto LABEL_72;
    if ( v81[2] )
    {
      v82.m128i_i64[0] = 0;
      qfree(v81[2]);
      v42 = v80;
    }
    if ( v42 )
    {
      v81[0] = nullptr;
      qfree(v42);
    }
  }
LABEL_95:
  netnode_kill((int)&v71);
  v47 = v76;
  if ( v76 )
  {
LABEL_77:
    *(_QWORD *)&v77 = 0;
    qfree(v47);
  }
LABEL_2:
  if ( v74 )
  {
    *(_QWORD *)&v75 = 0;
    qfree(v74);
  }
  return v89 - __readfsqword(0x28u);
}
