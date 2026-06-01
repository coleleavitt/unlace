__int64 __fastcall sub_1005F90(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r14
  unsigned __int64 v4; // rdx
  __int64 v5; // rsi
  void *v6; // r13
  size_t v7; // rbp
  unsigned int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 *v14; // rax
  __int64 v15; // r12
  void *v16; // rbp
  char *v17; // r15
  __int64 v18; // rbx
  __int64 v19; // r14
  __int64 v20; // rbx
  __int64 v21; // r13
  void *v22; // r12
  unsigned int v23; // eax
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rax
  char *v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rbp
  __int64 v32; // rdi
  char *v33; // rdi
  char *v35; // rax
  __int64 *v36; // rax
  void *v37; // rdi
  __int64 v38; // rbp
  __int64 v39; // rbx
  char *v40; // rax
  __int64 v41; // rdi
  __int32 v42; // eax
  __int64 v43; // r14
  __int64 v44; // r13
  __int64 v45; // rbp
  char *v46; // rdi
  int v47; // eax
  __int64 v48; // rbx
  __int64 v49; // r12
  __int64 v50; // rax
  __int64 v51; // rbx
  __m128i v52; // xmm2
  __int64 v53; // rdx
  __int64 v54; // rax
  __int32 v55; // esi
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rbp
  char *v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // r14
  __int64 v63; // r13
  char *v64; // rax
  size_t v65; // r12
  __int64 v66; // r15
  char v67; // al
  __int64 v68; // rbx
  __int64 *v69; // rbp
  unsigned int v70; // eax
  _QWORD *v71; // rax
  __int64 *v72; // rax
  __int64 v73; // rdx
  __int64 *v74; // [rsp+0h] [rbp-F8h]
  __int64 v75; // [rsp+0h] [rbp-F8h]
  unsigned int v76; // [rsp+8h] [rbp-F0h]
  __int64 v77; // [rsp+8h] [rbp-F0h]
  __int64 v78; // [rsp+18h] [rbp-E0h]
  char *v79; // [rsp+18h] [rbp-E0h]
  char *v80; // [rsp+20h] [rbp-D8h]
  __int64 v81; // [rsp+20h] [rbp-D8h]
  char *v82; // [rsp+30h] [rbp-C8h]
  __int64 v83; // [rsp+38h] [rbp-C0h]
  __int64 v85; // [rsp+50h] [rbp-A8h]
  void *v86; // [rsp+60h] [rbp-98h] BYREF
  __m128i si128; // [rsp+68h] [rbp-90h]
  void *ptr; // [rsp+80h] [rbp-78h] BYREF
  __m128i v89; // [rsp+88h] [rbp-70h]
  void *src; // [rsp+A0h] [rbp-58h] BYREF
  size_t n; // [rsp+A8h] [rbp-50h]

  v2 = a1;
  v3 = *(_QWORD *)(a2 + 24);
  v86 = nullptr;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384CD0);
  v85 = a2 + 8;
  if ( v3 == a2 + 8 )
  {
    *(_BYTE *)(a1 + 32) = 0;
    v33 = nullptr;
    goto LABEL_17;
  }
  while ( 1 )
  {
    ptr = nullptr;
    v4 = *(_QWORD *)(v3 + 40);
    v5 = *(_QWORD *)(v3 + 32);
    v89 = _mm_load_si128((const __m128i *)&xmmword_2384D20);
    sub_1005BF0((__int64)&src, v5, v4, &ptr);
    v6 = src;
    v7 = n;
    v8 = sub_2220DF0(src, n);
    v9 = sub_2220F70(&v86, v6, v7, v8);
    v13 = v9;
    v76 = v9;
    v14 = (__int64 *)((char *)v86 + 8 * v9);
    v15 = *v14;
    v74 = v14;
    if ( !*v14 )
      goto LABEL_50;
    if ( v15 == -8 )
    {
      --si128.m128i_i32[2];
LABEL_50:
      v51 = sub_220C370(v7 + 49, 8, v13, v10, v11, v12);
      if ( v7 )
        memcpy((void *)(v51 + 48), v6, v7);
      *(_BYTE *)(v51 + v7 + 48) = 0;
      v52 = _mm_load_si128((const __m128i *)&xmmword_2384D20);
      v53 = *(_QWORD *)(v3 + 32);
      v54 = *(_QWORD *)(v3 + 40);
      *(_QWORD *)v51 = v7;
      v55 = v89.m128i_i32[1];
      *(_QWORD *)(v51 + 24) = 0;
      *(_QWORD *)(v51 + 8) = v53;
      *(_QWORD *)(v51 + 16) = v54;
      *(__m128i *)(v51 + 32) = v52;
      if ( v55 )
      {
        sub_2220EB0(v51 + 24, v89.m128i_u32[0]);
        v58 = *(_QWORD *)(v51 + 24);
        v59 = (char *)ptr;
        v60 = *(unsigned int *)(v51 + 32);
        v81 = v58;
        v61 = *(__int64 *)((char *)v89.m128i_i64 + 4);
        v82 = (char *)ptr;
        *(_QWORD *)(v51 + 36) = *(__int64 *)((char *)v89.m128i_i64 + 4);
        if ( (_DWORD)v60 )
        {
          v62 = 8 * v60 + 8;
          v79 = (char *)v51;
          v63 = 0;
          v83 = 8LL * (unsigned int)(v60 - 1);
          v64 = v59;
          while ( 1 )
          {
            v68 = *(_QWORD *)&v64[v63];
            v69 = (__int64 *)(v63 + v58);
            if ( !v68 || v68 == -8 )
            {
              *v69 = v68;
              v62 += 4;
              if ( v83 == v63 )
                goto LABEL_62;
            }
            else
            {
              v65 = *(_QWORD *)v68;
              v66 = sub_220C370(*(_QWORD *)v68 + 17LL, 8, v61, v59, v56, v57);
              if ( v65 )
                memcpy((void *)(v66 + 16), (const void *)(v68 + 16), v65);
              *(_BYTE *)(v66 + v65 + 16) = 0;
              v67 = *(_BYTE *)(v68 + 8);
              *(_QWORD *)v66 = v65;
              *(_BYTE *)(v66 + 8) = v67;
              *v69 = v66;
              *(_DWORD *)(v81 + v62) = *(_DWORD *)&v82[v62];
              v62 += 4;
              if ( v83 == v63 )
              {
LABEL_62:
                v51 = (__int64)v79;
                break;
              }
            }
            v59 = v79;
            v64 = (char *)ptr;
            v63 += 8;
            v58 = *((_QWORD *)v79 + 3);
          }
        }
      }
      *v74 = v51;
      ++si128.m128i_i32[1];
      v70 = sub_2221390(&v86, v76);
      v71 = (char *)v86 + 8 * v70;
      if ( !*v71 || *v71 == -8 )
      {
        v72 = v71 + 1;
        do
        {
          do
            v73 = *v72++;
          while ( v73 == -8 );
        }
        while ( !v73 );
      }
      goto LABEL_24;
    }
    v78 = v15 + 24;
    sub_1005BB0((__int64 **)&src, (__int64 *)ptr + v89.m128i_u32[0], 1);
    v16 = src;
    v80 = (char *)src;
    sub_1005BB0((__int64 **)&src, (__int64 *)ptr, v89.m128i_i32[0] == 0);
    v17 = (char *)src;
    if ( v16 != src )
      break;
LABEL_24:
    v37 = ptr;
    if ( v89.m128i_i32[1] && v89.m128i_i32[0] )
    {
      v38 = 0;
      v39 = 8LL * (unsigned int)(v89.m128i_i32[0] - 1) + 8;
      v40 = (char *)ptr;
      do
      {
        v41 = *(_QWORD *)&v40[v38];
        if ( v41 != -8 && v41 )
        {
          operator delete();
          v40 = (char *)ptr;
        }
        v38 += 8;
      }
      while ( v39 != v38 );
      v37 = v40;
    }
    free(v37);
    v3 = std::_Rb_tree_increment();
    if ( v85 == v3 )
    {
      v2 = a1;
      v42 = si128.m128i_i32[1];
      v33 = (char *)v86;
      *(_BYTE *)(a1 + 32) = 0;
      if ( !v42 )
        goto LABEL_17;
      goto LABEL_34;
    }
  }
  v18 = *(_QWORD *)src;
  v77 = v3;
  v19 = v15;
  while ( 1 )
  {
    v20 = v18 + 16;
    v21 = *(_QWORD *)(v20 - 16);
    sub_E9D250((__int64 **)&src, (__int64 *)(*(_QWORD *)(v19 + 24) + 8LL * *(unsigned int *)(v19 + 32)), 1);
    v22 = src;
    v23 = sub_2220DF0(v20, v21);
    v24 = sub_2221120(v78, v20, v21, v23);
    if ( v24 == -1 )
      sub_E9D250((__int64 **)&src, (__int64 *)(*(_QWORD *)(v19 + 24) + 8LL * *(unsigned int *)(v19 + 32)), 1);
    else
      sub_E9D250((__int64 **)&src, (__int64 *)(*(_QWORD *)(v19 + 24) + 8LL * v24), 1);
    if ( v22 == src )
      break;
    v18 = *((_QWORD *)v17 + 1);
    v35 = v17 + 8;
    if ( v18 && v18 != -8 )
    {
      v17 += 8;
      if ( v35 == v80 )
        goto LABEL_24;
    }
    else
    {
      v36 = (__int64 *)(v17 + 16);
      do
      {
        do
        {
          v18 = *v36;
          v17 = (char *)v36++;
        }
        while ( v18 == -8 );
      }
      while ( !v18 );
      if ( v17 == v80 )
        goto LABEL_24;
    }
  }
  v2 = a1;
  v25 = *v74;
  *(_BYTE *)(a1 + 32) = 1;
  v26 = *(_QWORD *)(v25 + 16);
  v27 = *(_QWORD *)(v25 + 8);
  v28 = *(_QWORD *)(v77 + 40);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(v77 + 32);
  *(_QWORD *)(a1 + 8) = v26;
  LODWORD(v26) = v89.m128i_i32[1];
  *(_QWORD *)(a1 + 24) = v28;
  v29 = (char *)ptr;
  *(_QWORD *)a1 = v27;
  if ( (_DWORD)v26 && v89.m128i_i32[0] )
  {
    v30 = 0;
    v31 = 8LL * (unsigned int)(v89.m128i_i32[0] - 1) + 8;
    do
    {
      v32 = *(_QWORD *)&v29[v30];
      if ( v32 != -8 && v32 )
      {
        operator delete();
        v29 = (char *)ptr;
      }
      v30 += 8;
    }
    while ( v31 != v30 );
  }
  free(v29);
  v33 = (char *)v86;
  if ( si128.m128i_i32[1] )
  {
LABEL_34:
    if ( si128.m128i_i32[0] )
    {
      v75 = v2;
      v43 = 0;
      v44 = 8LL * (unsigned int)(si128.m128i_i32[0] - 1) + 8;
      do
      {
        v45 = *(_QWORD *)&v33[v43];
        if ( v45 && v45 != -8 )
        {
          v46 = *(char **)(v45 + 24);
          if ( *(_DWORD *)(v45 + 36) )
          {
            v47 = *(_DWORD *)(v45 + 32);
            if ( v47 )
            {
              v48 = 0;
              v49 = 8LL * (unsigned int)(v47 - 1) + 8;
              do
              {
                v50 = *(_QWORD *)&v46[v48];
                if ( v50 != -8 && v50 )
                {
                  operator delete();
                  v46 = *(char **)(v45 + 24);
                }
                v48 += 8;
              }
              while ( v49 != v48 );
            }
          }
          free(v46);
          operator delete();
          v33 = (char *)v86;
        }
        v43 += 8;
      }
      while ( v44 != v43 );
      v2 = v75;
    }
  }
LABEL_17:
  free(v33);
  return v2;
}

