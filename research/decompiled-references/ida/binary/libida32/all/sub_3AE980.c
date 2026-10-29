unsigned __int64 sub_3AE980()
{
  __int64 v0; // rdi
  __int64 v2; // r12
  char *v3; // rdx
  __int64 v4; // rbp
  __int64 v5; // r13
  __int64 i; // rbx
  char *v7; // rax
  void *v8; // rdi
  int v9; // eax
  unsigned __int64 v10; // r13
  int v11; // ebx
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // r13d
  const char *v18; // rax
  const char *v19; // rbp
  __int64 v20; // r15
  size_t v21; // rax
  unsigned __int8 v22; // dl
  int v23; // ebp
  int v24; // r15d
  int v25; // ebp
  unsigned int v26; // ebx
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
  const char **v43; // rbx
  __int64 bpt_kernel_interface; // rdi
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
  int src; // [rsp+8h] [rbp-160h]
  const char *srca; // [rsp+8h] [rbp-160h]
  _QWORD *std_dirtree; // [rsp+10h] [rbp-158h]
  int j; // [rsp+1Ch] [rbp-14Ch]
  __int64 v65; // [rsp+20h] [rbp-148h]
  __int64 v66; // [rsp+28h] [rbp-140h]
  char *v67; // [rsp+30h] [rbp-138h]
  char v68; // [rsp+43h] [rbp-125h]
  int v69; // [rsp+44h] [rbp-124h]
  unsigned int v70; // [rsp+50h] [rbp-118h] BYREF
  unsigned int v71; // [rsp+54h] [rbp-114h] BYREF
  void *v72; // [rsp+58h] [rbp-110h] BYREF
  __m128i v73; // [rsp+60h] [rbp-108h] BYREF
  void *v74; // [rsp+70h] [rbp-F8h] BYREF
  __int128 v75; // [rsp+78h] [rbp-F0h]
  void *v76; // [rsp+90h] [rbp-D8h] BYREF
  __int128 v77; // [rsp+98h] [rbp-D0h]
  void *ptr; // [rsp+B0h] [rbp-B8h] BYREF
  __m128i v79; // [rsp+B8h] [rbp-B0h] BYREF
  void *v80; // [rsp+D0h] [rbp-98h] BYREF
  void *v81[3]; // [rsp+D8h] [rbp-90h] BYREF
  __m128i v82; // [rsp+F0h] [rbp-78h]
  unsigned __int64 v83; // [rsp+100h] [rbp-68h]
  __int64 v84; // [rsp+108h] [rbp-60h]
  __int64 v85; // [rsp+110h] [rbp-58h]
  unsigned __int64 v86; // [rsp+118h] [rbp-50h]
  unsigned int v87; // [rsp+120h] [rbp-48h]
  unsigned __int64 v88; // [rsp+128h] [rbp-40h]

  v88 = __readfsqword(0x28u);
  netnode_check(&v70, "$ bpts", 0, 0);
  v0 = v70;
  v74 = nullptr;
  v75 = 0;
  *(_DWORD *)(*(_QWORD *)(qword_2CA1698 + 1384) + 264LL) = 1;
  if ( netnode_qgetblob(v0, &v74, 1, 0, 83) <= 0 )
    goto LABEL_2;
  v2 = *(_QWORD *)(qword_2CA1698 + 1384);
  v73 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v74, (__m128i)(unsigned __int64)((unsigned __int64)v74 + v75));
  if ( v74 < (char *)v74 + (unsigned __int64)v75 )
  {
    v22 = *(_BYTE *)v74;
    v73.m128i_i64[0] = (__int64)v74 + 1;
    src = v22;
    if ( v22 > 5u )
      sub_375400();
    v3 = *(char **)(v2 + 216);
    v4 = v2 + 216;
    if ( !v3 )
      goto LABEL_14;
    goto LABEL_8;
  }
  v3 = *(char **)(v2 + 216);
  if ( v3 )
  {
    src = 0;
    v4 = v2 + 216;
LABEL_8:
    v5 = *(_QWORD *)(v2 + 224);
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
          v3 = *(char **)(v2 + 216);
        }
      }
    }
    *(_QWORD *)(v2 + 224) = 0;
    qfree(v3);
    *(_QWORD *)(v2 + 216) = 0;
    *(_QWORD *)(v2 + 232) = 0;
LABEL_14:
    if ( src > 1 )
    {
      v9 = unpack_dd(&v73);
      v10 = *(_QWORD *)(v2 + 224);
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
            v54 = *(_QWORD *)(v2 + 216) + 24 * v53;
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
          v13 = *(_QWORD *)(v2 + 216);
          v14 = *(_QWORD *)(v2 + 232);
          if ( (unsigned __int64)&v80 < v13 || (unsigned __int64)&v80 >= v13 + 24 * v14 )
          {
            if ( v14 < v12 )
            {
              *(_QWORD *)(v2 + 216) = qvector_reserve(v4, v13, v12, 24);
              v10 = *(_QWORD *)(v2 + 224);
            }
            if ( v10 < v12 )
            {
              v48 = 24 * v10;
              do
              {
                ++v10;
                v49 = v48 + *(_QWORD *)(v2 + 216);
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
              *(_QWORD *)(v2 + 216) = qvector_reserve(v4, v13, v12, 24);
              v10 = *(_QWORD *)(v2 + 224);
            }
            if ( v10 < v12 )
            {
              v15 = 24 * v10;
              do
              {
                ++v10;
                v16 = v15 + *(_QWORD *)(v2 + 216);
                v15 += 24;
                *(_QWORD *)v16 = 0;
                *(_OWORD *)(v16 + 8) = 0;
              }
              while ( v12 != v10 );
            }
          }
        }
        *(_QWORD *)(v2 + 224) = v12;
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
            v20 = *(_QWORD *)(v2 + 216) + 24LL * v17;
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
      v82.m128i_i64[0] = 0xFFFFFFFFLL;
      v80 = &qword_58;
      v84 = 4;
      memset(v81, 0, sizeof(v81));
      v85 = 9;
      v82.m128i_i64[1] = 0xFFFFFFFF00000000LL;
      v83 = 0xFFFFFFFF00000000LL;
      v86 = 0xFFFFFFFF00000000LL;
      v87 = 0;
      v26 = sub_3AA4F0((__int64)&v80, (unsigned __int8 **)&v73, v26, src);
      if ( *(_DWORD *)(v2 + 264) < v87 )
        *(_DWORD *)(v2 + 264) = v87;
      sub_3AE3C0((__int64)&v80, v24, v27, v28, v29, v30);
      if ( v81[0] )
      {
        v81[1] = nullptr;
        qfree(v81[0]);
      }
    }
    while ( v25-- != 0 );
  }
  ++*(_DWORD *)(v2 + 264);
  if ( !(unsigned __int8)netnode_inited() )
    goto LABEL_2;
  netnode_check(&ptr, "$ bptsgrps", 0, 0);
  if ( (_DWORD)ptr == -1 )
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
    v68 = sub_3AA6E0((__int64 *)&v80, (__int64 *)&v72, (unsigned __int64)v67);
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
    v43 = (const char **)v80;
    if ( 8 * (__int64)v81[0] )
    {
      while ( 1 )
      {
        bpt_kernel_interface = get_bpt_kernel_interface(v42, v41);
        v45 = haystack;
        if ( v82.m128i_i64[0] )
          v45 = (const char *)v81[2];
        v41 = *v43;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, const char *, const char *))(*(_QWORD *)bpt_kernel_interface
                                                                                     + 352LL))(
                bpt_kernel_interface,
                *v43,
                v45) )
          break;
        v42 = v80;
        if ( ++v43 == (const char **)((char *)v80 + 8 * (__int64)v81[0]) )
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
  return v88 - __readfsqword(0x28u);
}

