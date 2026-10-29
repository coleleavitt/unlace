unsigned __int64 __fastcall sub_3E6390(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  const char *v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  void *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r13
  size_t v11; // rbx
  char *v12; // rbp
  int *v13; // rcx
  int *v14; // r14
  const char *v15; // rdi
  int v16; // eax
  int v17; // eax
  __int64 v18; // r15
  __int64 v19; // rax
  const char *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  const char *v26; // r14
  __int64 v27; // rsi
  __int64 i; // rbx
  __int64 v29; // rdx
  __int64 v30; // rax
  size_t v31; // rbp
  void *v32; // r12
  char *v33; // rax
  void *v34; // rax
  const char *v35; // rdi
  __int64 v36; // rax
  _QWORD *v37; // rbx
  __int64 v38; // r13
  int v39; // ebp
  int v40; // ebx
  int j; // r12d
  __int64 v42; // r14
  _QWORD *v43; // rax
  char *v44; // rdx
  int v45; // r15d
  __int64 v46; // rbx
  __int64 v47; // r14
  _QWORD *v48; // rax
  _QWORD *v49; // rbx
  _QWORD *v50; // rbp
  void *v51; // rdi
  int *v53; // [rsp+0h] [rbp-D0h]
  int v54; // [rsp+0h] [rbp-D0h]
  unsigned int v55; // [rsp+8h] [rbp-C8h]
  __int64 v56; // [rsp+10h] [rbp-C0h]
  __int64 v57; // [rsp+18h] [rbp-B8h]
  __int64 v58; // [rsp+18h] [rbp-B8h]
  __int64 v60; // [rsp+20h] [rbp-B0h]
  __int64 v61; // [rsp+28h] [rbp-A8h]
  char *v62; // [rsp+28h] [rbp-A8h]
  __int64 v63; // [rsp+30h] [rbp-A0h]
  void *ptr; // [rsp+38h] [rbp-98h] BYREF
  __int128 v65; // [rsp+40h] [rbp-90h]
  int v66; // [rsp+60h] [rbp-70h] BYREF
  void *v67; // [rsp+68h] [rbp-68h]
  int *v68; // [rsp+70h] [rbp-60h]
  int *v69; // [rsp+78h] [rbp-58h]
  __int64 v70; // [rsp+80h] [rbp-50h]
  unsigned __int64 v71; // [rsp+90h] [rbp-40h]

  v71 = __readfsqword(0x28u);
  v1 = a1[1];
  v65 = 0;
  ptr = nullptr;
  v2 = *(int *)(v1 + 28);
  v56 = v1;
  if ( *(_DWORD *)(v1 + 28) )
  {
    ptr = (void *)qvector_reserve(&ptr, 0, v2, 8);
    memset((char *)ptr + 8 * v65, 0, 8 * (v2 - v65));
    *(_QWORD *)&v65 = v2;
  }
  v70 = 0;
  v68 = &v66;
  v69 = &v66;
  v66 = 0;
  v67 = nullptr;
  if ( *(int *)(v56 + 28) > 0 )
  {
    v61 = 0;
    while ( 1 )
    {
      v3 = (const char *)switch_dbctx(*(int *)(v56 + 4 * v61 + 16));
      v4 = (*(__int64 (__fastcall **)(_QWORD *, const char *))(*a1 + 64LL))(a1, v3);
      v8 = ptr;
      *((_QWORD *)ptr + v61) = v4;
      v9 = *((_QWORD *)ptr + v61);
      v10 = *(_QWORD *)(v9 + 24);
      v57 = v9 + 8;
      if ( v10 == v9 + 8 )
        goto LABEL_32;
      do
      {
        v11 = *(_QWORD *)(v10 + 40);
        v12 = nullptr;
        if ( !v11 )
        {
          v13 = (int *)v67;
          if ( v67 )
            goto LABEL_14;
LABEL_42:
          v14 = &v66;
          if ( v68 == &v66 )
            goto LABEL_26;
LABEL_21:
          v19 = std::_Rb_tree_decrement();
          v53 = v14;
          v18 = *(_QWORD *)(v19 + 40);
          v14 = (int *)v19;
          if ( v11 )
          {
LABEL_22:
            v3 = v12;
            v20 = haystack;
            if ( v18 )
              goto LABEL_23;
          }
          else
          {
LABEL_45:
            v3 = haystack;
            if ( !v18 )
              goto LABEL_29;
LABEL_23:
            v20 = *((const char **)v14 + 4);
          }
          if ( strcmp(v20, v3) < 0 )
            goto LABEL_25;
          goto LABEL_29;
        }
        v33 = (char *)qalloc_or_throw(*(_QWORD *)(v10 + 40), v3, v8, v5, v6, v7);
        v3 = *(const char **)(v10 + 32);
        v12 = v33;
        memcpy(v33, v3, v11);
        v13 = (int *)v67;
        if ( !v67 )
          goto LABEL_42;
        do
        {
LABEL_14:
          v18 = *((_QWORD *)v13 + 5);
          if ( v18 )
          {
            v3 = *((const char **)v13 + 4);
            v14 = v13;
            v15 = haystack;
            if ( !v11 )
              goto LABEL_11;
          }
          else
          {
            v3 = haystack;
            if ( !v11 )
            {
              while ( 1 )
              {
                v14 = *((int **)v13 + 3);
                if ( !v14 )
                  goto LABEL_29;
                v18 = *((_QWORD *)v14 + 5);
                if ( v18 )
                {
                  v3 = *((const char **)v14 + 4);
                  v15 = haystack;
                  goto LABEL_11;
                }
                v13 = *((int **)v13 + 3);
              }
            }
          }
          v14 = v13;
          v15 = v12;
LABEL_11:
          v16 = strcmp(v15, v3);
          v13 = *((int **)v14 + 3);
          if ( v16 < 0 )
            v13 = *((int **)v14 + 2);
          v17 = (v16 >> 31) & 1;
        }
        while ( v13 );
        if ( !(_BYTE)v17 )
        {
          v53 = v14;
          if ( v11 )
            goto LABEL_22;
          goto LABEL_45;
        }
        if ( v68 != v14 )
          goto LABEL_21;
        v53 = v14;
LABEL_25:
        v3 = (const char *)&v66;
        if ( v53 != &v66 )
        {
          v3 = haystack;
          if ( *((_QWORD *)v53 + 5) )
            v3 = *((const char **)v53 + 4);
          v35 = haystack;
          if ( v11 )
            v35 = v12;
          strcmp(v35, v3);
        }
LABEL_26:
        v21 = operator new(0x38u);
        *(_QWORD *)(v21 + 32) = 0;
        v26 = (const char *)v21;
        *(_OWORD *)(v21 + 40) = 0;
        if ( v11 )
        {
          v34 = (void *)qalloc_or_throw(v11, v3, v22, v23, v24, v25);
          *((_QWORD *)v26 + 4) = v34;
          *((_QWORD *)v26 + 6) = v11;
          memcpy(v34, v12, v11);
          *((_QWORD *)v26 + 5) = v11;
        }
        v3 = v26;
        std::_Rb_tree_insert_and_rebalance();
        ++v70;
LABEL_29:
        if ( v12 )
          qfree(v12);
        v10 = std::_Rb_tree_increment();
      }
      while ( v57 != v10 );
LABEL_32:
      v27 = v56;
      if ( *(_DWORD *)(v56 + 28) <= (int)++v61 )
      {
        for ( i = (__int64)v68; (int *)i != &v66; i = std::_Rb_tree_increment() )
        {
          v31 = *(_QWORD *)(i + 40);
          v32 = nullptr;
          if ( v31 )
          {
            v32 = (void *)qalloc_or_throw(*(_QWORD *)(i + 40), v27, v8, v5, v6, v7);
            memcpy(v32, *(const void **)(i + 32), v31);
          }
          v29 = a1[23];
          v27 = a1[22];
          if ( a1[24] < (unsigned __int64)(v29 + 1) )
          {
            v36 = qvector_reserve(a1 + 22, v27, v29 + 1, 24);
            a1[22] = v36;
            v29 = a1[23];
            v27 = v36;
          }
          v30 = v27 + 24 * v29;
          *(_QWORD *)v30 = v32;
          *(__m128i *)(v30 + 8) = _mm_unpacklo_epi64((__m128i)v31, (__m128i)v31);
          ++a1[23];
        }
        break;
      }
    }
  }
  v37 = a1;
  v60 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 72LL))(a1);
  v38 = v37[22];
  v63 = v38 + 24LL * v37[23];
  if ( v63 != v38 )
  {
    v39 = *(_DWORD *)(v56 + 28);
    do
    {
      v58 = 0;
      v40 = v39 - 1;
      for ( j = 0; v39 - 1 > j; v58 += 8 )
      {
        while ( 1 )
        {
          v42 = *(_QWORD *)((char *)ptr + v58);
          v62 = (char *)ptr;
          v43 = sub_3D80D0(v42, v38);
          v54 = j++;
          if ( v43 != (_QWORD *)(v42 + 8) )
          {
            v55 = *((_DWORD *)v43 + 14);
            if ( j < v39 )
              break;
          }
          v58 += 8;
          if ( v40 <= j )
            goto LABEL_66;
        }
        v44 = v62;
        v45 = j;
        v46 = 8LL * j;
        while ( 1 )
        {
          v47 = *(_QWORD *)&v44[v46];
          v48 = sub_3D80D0(v47, v38);
          if ( v48 != (_QWORD *)(v47 + 8) )
          {
            sub_3D8760(v60, v54, v45, v55, *((_DWORD *)v48 + 14), 1);
            v39 = *(_DWORD *)(v56 + 28);
          }
          ++v45;
          v46 += 8;
          if ( v39 <= v45 )
            break;
          v44 = (char *)ptr;
        }
        v40 = v39 - 1;
      }
LABEL_66:
      v38 += 24;
    }
    while ( v63 != v38 );
  }
  v49 = v67;
  if ( v67 )
  {
    do
    {
      v50 = v49;
      sub_3E17C0((_QWORD *)v49[3]);
      v51 = (void *)v49[4];
      v49 = (_QWORD *)v49[2];
      if ( v51 )
      {
        v50[5] = 0;
        qfree(v51);
      }
      operator delete(v50, 0x38u);
    }
    while ( v49 );
  }
  if ( ptr )
  {
    *(_QWORD *)&v65 = 0;
    qfree(ptr);
  }
  return v71 - __readfsqword(0x28u);
}

