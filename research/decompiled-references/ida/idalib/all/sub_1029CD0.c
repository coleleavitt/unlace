__int64 __fastcall sub_1029CD0(__int64 a1, __int64 a2)
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
  _QWORD *v32; // rdi
  char *v33; // rdi
  char *v35; // rax
  __int64 *v36; // rax
  void *v37; // rdi
  __int64 v38; // rbp
  __int64 v39; // rbx
  char *v40; // rax
  _QWORD *v41; // rdi
  __int32 v42; // eax
  __int64 v43; // r14
  __int64 v44; // r13
  __int64 v45; // rbp
  char *v46; // rdi
  __int64 v47; // r15
  int v48; // eax
  __int64 v49; // rbx
  __int64 v50; // r12
  _QWORD *v51; // rax
  __int64 v52; // rbx
  __m128i v53; // xmm2
  __int64 v54; // rdx
  __int64 v55; // rax
  __int32 v56; // esi
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rbp
  char *v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // r14
  __int64 v64; // r13
  char *v65; // rax
  size_t v66; // r12
  __int64 v67; // r15
  char v68; // al
  __int64 v69; // rbx
  __int64 *v70; // rbp
  unsigned int v71; // eax
  _QWORD *v72; // rax
  __int64 *v73; // rax
  __int64 v74; // rdx
  __int64 *v75; // [rsp+0h] [rbp-F8h]
  __int64 v76; // [rsp+0h] [rbp-F8h]
  unsigned int v77; // [rsp+8h] [rbp-F0h]
  __int64 v78; // [rsp+8h] [rbp-F0h]
  __int64 v79; // [rsp+18h] [rbp-E0h]
  char *v80; // [rsp+18h] [rbp-E0h]
  char *v81; // [rsp+20h] [rbp-D8h]
  __int64 v82; // [rsp+20h] [rbp-D8h]
  char *v83; // [rsp+30h] [rbp-C8h]
  __int64 v84; // [rsp+38h] [rbp-C0h]
  __int64 v86; // [rsp+50h] [rbp-A8h]
  __int64 v87; // [rsp+58h] [rbp-A0h]
  void *v88; // [rsp+60h] [rbp-98h] BYREF
  __m128i si128; // [rsp+68h] [rbp-90h]
  void *ptr; // [rsp+80h] [rbp-78h] BYREF
  __m128i v91; // [rsp+88h] [rbp-70h]
  void *src; // [rsp+A0h] [rbp-58h] BYREF
  size_t n; // [rsp+A8h] [rbp-50h]

  v2 = a1;
  v3 = *(_QWORD *)(a2 + 24);
  v88 = nullptr;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D10);
  v86 = a2 + 8;
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
    v91 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
    sub_1029930((__int64)&src, v5, v4, &ptr);
    v6 = src;
    v7 = n;
    v8 = sub_2244B30(src, n);
    v9 = sub_2244CB0(&v88, v6, v7, v8);
    v13 = v9;
    v77 = v9;
    v14 = (__int64 *)((char *)v88 + 8 * v9);
    v15 = *v14;
    v75 = v14;
    if ( !*v14 )
      goto LABEL_51;
    if ( v15 == -8 )
    {
      --si128.m128i_i32[2];
LABEL_51:
      v52 = sub_22300B0(v7 + 49, 8, v13, v10, v11, v12);
      if ( v7 )
        memcpy((void *)(v52 + 48), v6, v7);
      *(_BYTE *)(v52 + v7 + 48) = 0;
      v53 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
      v54 = *(_QWORD *)(v3 + 32);
      v55 = *(_QWORD *)(v3 + 40);
      *(_QWORD *)v52 = v7;
      v56 = v91.m128i_i32[1];
      *(_QWORD *)(v52 + 24) = 0;
      *(_QWORD *)(v52 + 8) = v54;
      *(_QWORD *)(v52 + 16) = v55;
      *(__m128i *)(v52 + 32) = v53;
      if ( v56 )
      {
        sub_2244BF0(v52 + 24, v91.m128i_u32[0]);
        v59 = *(_QWORD *)(v52 + 24);
        v60 = (char *)ptr;
        v61 = *(unsigned int *)(v52 + 32);
        v82 = v59;
        v62 = *(__int64 *)((char *)v91.m128i_i64 + 4);
        v83 = (char *)ptr;
        *(_QWORD *)(v52 + 36) = *(__int64 *)((char *)v91.m128i_i64 + 4);
        if ( (_DWORD)v61 )
        {
          v87 = v3;
          v63 = 8 * v61 + 8;
          v80 = (char *)v52;
          v64 = 0;
          v84 = 8LL * (unsigned int)(v61 - 1);
          v65 = v60;
          while ( 1 )
          {
            v69 = *(_QWORD *)&v65[v64];
            v70 = (__int64 *)(v64 + v59);
            if ( !v69 || v69 == -8 )
            {
              *v70 = v69;
              v63 += 4;
              if ( v84 == v64 )
                goto LABEL_63;
            }
            else
            {
              v66 = *(_QWORD *)v69;
              v67 = sub_22300B0(*(_QWORD *)v69 + 17LL, 8, v62, v60, v57, v58);
              if ( v66 )
                memcpy((void *)(v67 + 16), (const void *)(v69 + 16), v66);
              *(_BYTE *)(v67 + v66 + 16) = 0;
              v68 = *(_BYTE *)(v69 + 8);
              *(_QWORD *)v67 = v66;
              *(_BYTE *)(v67 + 8) = v68;
              *v70 = v67;
              *(_DWORD *)(v82 + v63) = *(_DWORD *)&v83[v63];
              v63 += 4;
              if ( v84 == v64 )
              {
LABEL_63:
                v3 = v87;
                v52 = (__int64)v80;
                break;
              }
            }
            v60 = v80;
            v65 = (char *)ptr;
            v64 += 8;
            v59 = *((_QWORD *)v80 + 3);
          }
        }
      }
      *v75 = v52;
      ++si128.m128i_i32[1];
      v71 = sub_22450D0(&v88, v77);
      v72 = (char *)v88 + 8 * v71;
      if ( !*v72 || *v72 == -8 )
      {
        v73 = v72 + 1;
        do
        {
          do
            v74 = *v73++;
          while ( v74 == -8 );
        }
        while ( !v74 );
      }
      goto LABEL_25;
    }
    v79 = v15 + 24;
    sub_10298F0((__int64 **)&src, (__int64 *)ptr + v91.m128i_u32[0], 1);
    v16 = src;
    v81 = (char *)src;
    sub_10298F0((__int64 **)&src, (__int64 *)ptr, v91.m128i_i32[0] == 0);
    v17 = (char *)src;
    if ( v16 != src )
      break;
LABEL_25:
    v37 = ptr;
    if ( v91.m128i_i32[1] && v91.m128i_i32[0] )
    {
      v38 = 0;
      v39 = 8LL * (unsigned int)(v91.m128i_i32[0] - 1) + 8;
      v40 = (char *)ptr;
      do
      {
        v41 = *(_QWORD **)&v40[v38];
        if ( v41 != (_QWORD *)-8LL && v41 )
        {
          operator delete(v41, *v41 + 17LL, 8);
          v40 = (char *)ptr;
        }
        v38 += 8;
      }
      while ( v39 != v38 );
      v37 = v40;
    }
    free(v37);
    v3 = std::_Rb_tree_increment(v3);
    if ( v86 == v3 )
    {
      v2 = a1;
      v42 = si128.m128i_i32[1];
      v33 = (char *)v88;
      *(_BYTE *)(a1 + 32) = 0;
      if ( !v42 )
        goto LABEL_17;
      goto LABEL_35;
    }
  }
  v18 = *(_QWORD *)src;
  v78 = v3;
  v19 = v15;
  while ( 1 )
  {
    v20 = v18 + 16;
    v21 = *(_QWORD *)(v20 - 16);
    sub_EC0F90((__int64 **)&src, (__int64 *)(*(_QWORD *)(v19 + 24) + 8LL * *(unsigned int *)(v19 + 32)), 1);
    v22 = src;
    v23 = sub_2244B30(v20, v21);
    v24 = sub_2244E60(v79, v20, v21, v23);
    if ( v24 == -1 )
      sub_EC0F90((__int64 **)&src, (__int64 *)(*(_QWORD *)(v19 + 24) + 8LL * *(unsigned int *)(v19 + 32)), 1);
    else
      sub_EC0F90((__int64 **)&src, (__int64 *)(*(_QWORD *)(v19 + 24) + 8LL * v24), 1);
    if ( v22 == src )
      break;
    v18 = *((_QWORD *)v17 + 1);
    v35 = v17 + 8;
    if ( v18 && v18 != -8 )
    {
      v17 += 8;
      if ( v35 == v81 )
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
      if ( v17 == v81 )
      {
LABEL_24:
        v3 = v78;
        goto LABEL_25;
      }
    }
  }
  v2 = a1;
  v25 = *v75;
  *(_BYTE *)(a1 + 32) = 1;
  v26 = *(_QWORD *)(v25 + 16);
  v27 = *(_QWORD *)(v25 + 8);
  v28 = *(_QWORD *)(v78 + 40);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(v78 + 32);
  *(_QWORD *)(a1 + 8) = v26;
  LODWORD(v26) = v91.m128i_i32[1];
  *(_QWORD *)(a1 + 24) = v28;
  v29 = (char *)ptr;
  *(_QWORD *)a1 = v27;
  if ( (_DWORD)v26 && v91.m128i_i32[0] )
  {
    v30 = 0;
    v31 = 8LL * (unsigned int)(v91.m128i_i32[0] - 1) + 8;
    do
    {
      v32 = *(_QWORD **)&v29[v30];
      if ( v32 != (_QWORD *)-8LL && v32 )
      {
        operator delete(v32, *v32 + 17LL, 8);
        v29 = (char *)ptr;
      }
      v30 += 8;
    }
    while ( v31 != v30 );
  }
  free(v29);
  v33 = (char *)v88;
  if ( si128.m128i_i32[1] )
  {
LABEL_35:
    if ( si128.m128i_i32[0] )
    {
      v76 = v2;
      v43 = 0;
      v44 = 8LL * (unsigned int)(si128.m128i_i32[0] - 1) + 8;
      do
      {
        v45 = *(_QWORD *)&v33[v43];
        if ( v45 && v45 != -8 )
        {
          v46 = *(char **)(v45 + 24);
          v47 = *(_QWORD *)v45 + 49LL;
          if ( *(_DWORD *)(v45 + 36) )
          {
            v48 = *(_DWORD *)(v45 + 32);
            if ( v48 )
            {
              v49 = 0;
              v50 = 8LL * (unsigned int)(v48 - 1) + 8;
              do
              {
                v51 = *(_QWORD **)&v46[v49];
                if ( v51 != (_QWORD *)-8LL && v51 )
                {
                  operator delete(*(_QWORD *)&v46[v49], *v51 + 17LL, 8);
                  v46 = *(char **)(v45 + 24);
                }
                v49 += 8;
              }
              while ( v50 != v49 );
            }
          }
          free(v46);
          operator delete(v45, v47, 8);
          v33 = (char *)v88;
        }
        v43 += 8;
      }
      while ( v44 != v43 );
      v2 = v76;
    }
  }
LABEL_17:
  free(v33);
  return v2;
}
