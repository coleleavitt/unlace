unsigned __int64 __fastcall sub_3EC7A0(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  void *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r13
  size_t v8; // rbx
  char *v9; // rbp
  int *v10; // rcx
  const char *v11; // rsi
  int *v12; // r14
  const char *v13; // rdi
  int v14; // eax
  int v15; // eax
  __int64 v16; // r15
  __int64 v17; // rax
  const char *v18; // rdi
  unsigned int v19; // r15d
  __int64 v20; // rax
  const char *v21; // r14
  __int64 i; // rbx
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rax
  size_t v26; // rbp
  void *v27; // r12
  void *v28; // rax
  const char *v29; // rsi
  const char *v30; // rdi
  __int64 v31; // rax
  _QWORD *v32; // rbx
  __int64 v33; // r13
  int v34; // ebp
  int v35; // ebx
  int j; // r12d
  __int64 v37; // r14
  _QWORD *v38; // rax
  char *v39; // rdx
  int v40; // r15d
  __int64 v41; // rbx
  __int64 v42; // r14
  _QWORD *v43; // rax
  _QWORD *v44; // rbx
  _QWORD *v45; // rbp
  void *v46; // rdi
  int *v48; // [rsp+0h] [rbp-D0h]
  int v49; // [rsp+0h] [rbp-D0h]
  unsigned int v50; // [rsp+8h] [rbp-C8h]
  __int64 v51; // [rsp+10h] [rbp-C0h]
  __int64 v52; // [rsp+18h] [rbp-B8h]
  __int64 v53; // [rsp+18h] [rbp-B8h]
  __int64 v55; // [rsp+20h] [rbp-B0h]
  __int64 v56; // [rsp+28h] [rbp-A8h]
  char *v57; // [rsp+28h] [rbp-A8h]
  __int64 v58; // [rsp+30h] [rbp-A0h]
  void *ptr; // [rsp+38h] [rbp-98h] BYREF
  __int128 v60; // [rsp+40h] [rbp-90h]
  int v61; // [rsp+60h] [rbp-70h] BYREF
  void *v62; // [rsp+68h] [rbp-68h]
  int *v63; // [rsp+70h] [rbp-60h]
  int *v64; // [rsp+78h] [rbp-58h]
  __int64 v65; // [rsp+80h] [rbp-50h]
  unsigned __int64 v66; // [rsp+90h] [rbp-40h]

  v66 = __readfsqword(0x28u);
  v1 = a1[1];
  v60 = 0;
  ptr = nullptr;
  v2 = *(int *)(v1 + 28);
  v51 = v1;
  if ( *(_DWORD *)(v1 + 28) )
  {
    ptr = (void *)qvector_reserve(&ptr, 0, v2, 8);
    memset((char *)ptr + 8 * v60, 0, 8 * (v2 - v60));
    *(_QWORD *)&v60 = v2;
  }
  v65 = 0;
  v63 = &v61;
  v64 = &v61;
  v61 = 0;
  v62 = nullptr;
  if ( *(int *)(v51 + 28) > 0 )
  {
    v56 = 0;
    while ( 1 )
    {
      v3 = switch_dbctx(*(int *)(v51 + 4 * v56 + 16));
      v4 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, v3);
      v5 = ptr;
      *((_QWORD *)ptr + v56) = v4;
      v6 = *((_QWORD *)ptr + v56);
      v7 = *(_QWORD *)(v6 + 24);
      v52 = v6 + 8;
      if ( v7 == v6 + 8 )
        goto LABEL_32;
      do
      {
        v8 = *(_QWORD *)(v7 + 40);
        v9 = nullptr;
        if ( !v8 )
        {
          v10 = (int *)v62;
          if ( v62 )
            goto LABEL_14;
LABEL_42:
          v12 = &v61;
          if ( v63 == &v61 )
          {
            LOBYTE(v19) = 1;
            v48 = &v61;
            goto LABEL_26;
          }
LABEL_21:
          v17 = std::_Rb_tree_decrement(v12);
          v48 = v12;
          v16 = *(_QWORD *)(v17 + 40);
          v12 = (int *)v17;
          if ( v8 )
          {
LABEL_22:
            v11 = v9;
            v18 = haystack;
            if ( v16 )
              goto LABEL_23;
          }
          else
          {
LABEL_45:
            v11 = haystack;
            if ( !v16 )
              goto LABEL_29;
LABEL_23:
            v18 = *((const char **)v12 + 4);
          }
          if ( strcmp(v18, v11) < 0 )
            goto LABEL_25;
          goto LABEL_29;
        }
        v9 = (char *)qalloc_or_throw(*(_QWORD *)(v7 + 40));
        memcpy(v9, *(const void **)(v7 + 32), v8);
        v10 = (int *)v62;
        if ( !v62 )
          goto LABEL_42;
        do
        {
LABEL_14:
          v16 = *((_QWORD *)v10 + 5);
          if ( v16 )
          {
            v11 = *((const char **)v10 + 4);
            v12 = v10;
            v13 = haystack;
            if ( !v8 )
              goto LABEL_11;
          }
          else
          {
            v11 = haystack;
            if ( !v8 )
            {
              while ( 1 )
              {
                v12 = *((int **)v10 + 3);
                if ( !v12 )
                  goto LABEL_29;
                v16 = *((_QWORD *)v12 + 5);
                if ( v16 )
                {
                  v11 = *((const char **)v12 + 4);
                  v13 = haystack;
                  goto LABEL_11;
                }
                v10 = *((int **)v10 + 3);
              }
            }
          }
          v12 = v10;
          v13 = v9;
LABEL_11:
          v14 = strcmp(v13, v11);
          v10 = *((int **)v12 + 3);
          if ( v14 < 0 )
            v10 = *((int **)v12 + 2);
          v15 = (v14 >> 31) & 1;
        }
        while ( v10 );
        if ( !(_BYTE)v15 )
        {
          v48 = v12;
          if ( v8 )
            goto LABEL_22;
          goto LABEL_45;
        }
        if ( v63 != v12 )
          goto LABEL_21;
        v48 = v12;
LABEL_25:
        LOBYTE(v19) = 1;
        if ( v48 != &v61 )
        {
          v29 = haystack;
          if ( *((_QWORD *)v48 + 5) )
            v29 = *((const char **)v48 + 4);
          v30 = haystack;
          if ( v8 )
            v30 = v9;
          v19 = (unsigned int)strcmp(v30, v29) >> 31;
        }
LABEL_26:
        v20 = operator new(0x38u);
        *(_QWORD *)(v20 + 32) = 0;
        v21 = (const char *)v20;
        *(_OWORD *)(v20 + 40) = 0;
        if ( v8 )
        {
          v28 = (void *)qalloc_or_throw(v8);
          *((_QWORD *)v21 + 4) = v28;
          *((_QWORD *)v21 + 6) = v8;
          memcpy(v28, v9, v8);
          *((_QWORD *)v21 + 5) = v8;
        }
        v11 = v21;
        std::_Rb_tree_insert_and_rebalance((unsigned __int8)v19, v21, v48, &v61);
        ++v65;
LABEL_29:
        if ( v9 )
          qfree(v9);
        v7 = std::_Rb_tree_increment(v7, v11, v5, v10);
      }
      while ( v52 != v7 );
LABEL_32:
      if ( *(_DWORD *)(v51 + 28) <= (int)++v56 )
      {
        for ( i = (__int64)v63; (int *)i != &v61; i = std::_Rb_tree_increment(i) )
        {
          v26 = *(_QWORD *)(i + 40);
          v27 = nullptr;
          if ( v26 )
          {
            v27 = (void *)qalloc_or_throw(*(_QWORD *)(i + 40));
            memcpy(v27, *(const void **)(i + 32), v26);
          }
          v23 = a1[23];
          v24 = a1[22];
          if ( a1[24] < (unsigned __int64)(v23 + 1) )
          {
            v31 = qvector_reserve(a1 + 22, v24, v23 + 1, 24);
            a1[22] = v31;
            v23 = a1[23];
            v24 = v31;
          }
          v25 = v24 + 24 * v23;
          *(_QWORD *)v25 = v27;
          *(__m128i *)(v25 + 8) = _mm_unpacklo_epi64((__m128i)v26, (__m128i)v26);
          ++a1[23];
        }
        break;
      }
    }
  }
  v32 = a1;
  v55 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 72LL))(a1);
  v33 = v32[22];
  v58 = v33 + 24LL * v32[23];
  if ( v58 != v33 )
  {
    v34 = *(_DWORD *)(v51 + 28);
    do
    {
      v53 = 0;
      v35 = v34 - 1;
      for ( j = 0; v34 - 1 > j; v53 += 8 )
      {
        while ( 1 )
        {
          v37 = *(_QWORD *)((char *)ptr + v53);
          v57 = (char *)ptr;
          v38 = sub_3DDF90(v37, v33);
          v49 = j++;
          if ( v38 != (_QWORD *)(v37 + 8) )
          {
            v50 = *((_DWORD *)v38 + 14);
            if ( j < v34 )
              break;
          }
          v53 += 8;
          if ( v35 <= j )
            goto LABEL_66;
        }
        v39 = v57;
        v40 = j;
        v41 = 8LL * j;
        while ( 1 )
        {
          v42 = *(_QWORD *)&v39[v41];
          v43 = sub_3DDF90(v42, v33);
          if ( v43 != (_QWORD *)(v42 + 8) )
          {
            sub_3DE620(v55, v49, v40, v50, *((_DWORD *)v43 + 14), 1);
            v34 = *(_DWORD *)(v51 + 28);
          }
          ++v40;
          v41 += 8;
          if ( v34 <= v40 )
            break;
          v39 = (char *)ptr;
        }
        v35 = v34 - 1;
      }
LABEL_66:
      v33 += 24;
    }
    while ( v58 != v33 );
  }
  v44 = v62;
  if ( v62 )
  {
    do
    {
      v45 = v44;
      sub_3E7A40((_QWORD *)v44[3]);
      v46 = (void *)v44[4];
      v44 = (_QWORD *)v44[2];
      if ( v46 )
      {
        v45[5] = 0;
        qfree(v46);
      }
      operator delete(v45, 0x38u);
    }
    while ( v44 );
  }
  if ( ptr )
  {
    *(_QWORD *)&v60 = 0;
    qfree(ptr);
  }
  return v66 - __readfsqword(0x28u);
}
