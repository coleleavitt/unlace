unsigned __int64 __fastcall sub_3DED10(_QWORD *a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // r14
  __int64 v3; // rax
  __int64 v4; // r12
  char *v5; // r15
  char *v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rbp
  _QWORD *v9; // rdi
  __m128 v10; // xmm0
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbp
  _QWORD *v17; // r15
  __int64 v18; // r14
  _QWORD *v19; // rbx
  const char *v20; // rsi
  _QWORD *v21; // r13
  const char *v22; // rdi
  int v23; // eax
  _QWORD *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  const char *v27; // rsi
  const char *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // r13
  size_t v31; // r14
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rdi
  int *v35; // rbx
  __int64 v36; // r13
  const char *v37; // rsi
  int *v38; // r14
  const char *v39; // rdi
  int v40; // eax
  int v41; // eax
  __int64 v42; // r15
  const char *v43; // rsi
  const char *v44; // rdi
  __int64 v45; // rax
  bool v46; // r15
  __int64 v47; // rax
  _QWORD *v48; // r13
  size_t v49; // r14
  __int64 v50; // rbp
  __int64 v51; // rdx
  __int64 v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rbx
  size_t v55; // r12
  void *v56; // rbx
  void *v57; // rdi
  void *v58; // rax
  void *v59; // rax
  const char *v60; // rsi
  const char *v61; // rdi
  __int64 v62; // rax
  const char *v63; // rsi
  const char *v64; // rdi
  unsigned int v65; // eax
  __int64 v66; // r13
  int v67; // ebp
  int v68; // ebx
  int i; // r12d
  char *v70; // r14
  char *v71; // rax
  char *v72; // rdx
  int v73; // r15d
  __int64 v74; // rbx
  char *v75; // r14
  char *v76; // rax
  _QWORD *v77; // rdi
  __int64 v78; // r13
  __int64 v79; // r12
  __int64 v80; // rbx
  _QWORD *v81; // rbp
  void *v82; // rdi
  __int64 v84; // rax
  _QWORD *v85; // [rsp+0h] [rbp-E0h]
  int v86; // [rsp+0h] [rbp-E0h]
  int v87; // [rsp+Ch] [rbp-D4h]
  unsigned int v88; // [rsp+Ch] [rbp-D4h]
  __int64 v89; // [rsp+10h] [rbp-D0h]
  _QWORD *v90; // [rsp+18h] [rbp-C8h]
  __int64 v91; // [rsp+18h] [rbp-C8h]
  __int64 v92; // [rsp+20h] [rbp-C0h]
  __int64 v93; // [rsp+28h] [rbp-B8h]
  char *v94; // [rsp+28h] [rbp-B8h]
  __int64 v96; // [rsp+30h] [rbp-B0h]
  __int64 v97; // [rsp+38h] [rbp-A8h]
  __int64 v98; // [rsp+40h] [rbp-A0h]
  void *ptr; // [rsp+48h] [rbp-98h] BYREF
  __int128 v100; // [rsp+50h] [rbp-90h]
  int v101; // [rsp+70h] [rbp-70h] BYREF
  int *v102; // [rsp+78h] [rbp-68h]
  int *v103; // [rsp+80h] [rbp-60h]
  int *v104; // [rsp+88h] [rbp-58h]
  __int64 v105; // [rsp+90h] [rbp-50h]
  unsigned __int64 v106; // [rsp+A0h] [rbp-40h]

  v106 = __readfsqword(0x28u);
  v1 = a1[1];
  v100 = 0;
  ptr = nullptr;
  v2 = *(int *)(v1 + 28);
  v89 = v1;
  if ( *(_DWORD *)(v1 + 28) )
  {
    v101 = 0;
    v102 = nullptr;
    v103 = &v101;
    v104 = &v101;
    v105 = 0;
    v3 = qvector_reserve(&ptr, 0, v2, 48);
    v4 = *((_QWORD *)&v100 + 1);
    v5 = (char *)v3;
    *((_QWORD *)&v100 + 1) = 0;
    v6 = (char *)ptr;
    v7 = v100 - 1;
    if ( (__int64)v100 - 1 >= 0 )
    {
      v8 = v3 + 8;
      do
      {
        v13 = *((_QWORD *)v6 + 2);
        if ( v13 )
        {
          v9 = nullptr;
          v10 = _mm_loadh_ps((const double *)v6 + 3);
          *(_DWORD *)v8 = *((_DWORD *)v6 + 2);
          v11 = *((_QWORD *)v6 + 4);
          *(__m128 *)(v8 + 8) = v10;
          *(_QWORD *)(v8 + 24) = v11;
          *(_QWORD *)(v13 + 8) = v8;
          v12 = *((_QWORD *)v6 + 5);
          *((_QWORD *)v6 + 2) = 0;
          *(_QWORD *)(v8 + 32) = v12;
          *((_QWORD *)v6 + 3) = v6 + 8;
          *((_QWORD *)v6 + 4) = v6 + 8;
          *((_QWORD *)v6 + 5) = 0;
        }
        else
        {
          *(_DWORD *)v8 = 0;
          *(_QWORD *)(v8 + 8) = 0;
          *(_QWORD *)(v8 + 16) = v8;
          *(_QWORD *)(v8 + 24) = v8;
          *(_QWORD *)(v8 + 32) = 0;
          v9 = *((_QWORD **)v6 + 2);
        }
        --v7;
        v6 += 48;
        v8 += 48;
        sub_3DCA00(v9);
      }
      while ( v7 != -1 );
      v6 = (char *)ptr;
    }
    qfree(v6);
    ptr = v5;
    *((_QWORD *)&v100 + 1) = v4;
    if ( (unsigned __int64)v100 < v2 )
    {
      v84 = (__int64)&v5[48 * v100 + 8];
      do
      {
        *(_DWORD *)v84 = 0;
        *(_QWORD *)(v84 + 8) = 0;
        *(_QWORD *)(v84 + 16) = v84;
        *(_QWORD *)(v84 + 24) = v84;
        v84 += 48;
        *(_QWORD *)(v84 - 16) = 0;
      }
      while ( (char *)v84 != &v5[48 * v2 + 8] );
    }
    *(_QWORD *)&v100 = v2;
    sub_3DCA00(nullptr);
  }
  v101 = 0;
  v102 = nullptr;
  v103 = &v101;
  v104 = &v101;
  v105 = 0;
  v97 = 0;
  if ( *(int *)(v89 + 28) <= 0 )
    goto LABEL_93;
  do
  {
    v14 = switch_dbctx(*(int *)(v89 + 4 * v97 + 16));
    v90 = (char *)ptr + 48 * v97;
    v15 = *(_QWORD *)(v14 + 1560);
    v16 = *(_QWORD *)(v15 + 48);
    v85 = v90 + 1;
    v93 = v16 + 32LL * *(_QWORD *)(v15 + 56);
    if ( v16 != v93 )
    {
      while ( 1 )
      {
        v87 = *(_DWORD *)(v16 + 24);
        v17 = (_QWORD *)v90[2];
        if ( !v17 )
        {
          v19 = v90 + 1;
          goto LABEL_28;
        }
        v18 = *(_QWORD *)(v16 + 8);
        v19 = v90 + 1;
        while ( 1 )
        {
          v25 = v17[5];
          if ( !v18 )
            break;
          v20 = *(const char **)v16;
          v21 = v17;
          v22 = haystack;
          if ( v25 )
            goto LABEL_13;
LABEL_14:
          v23 = strcmp(v22, v20);
          v24 = (_QWORD *)v17[2];
          v17 = (_QWORD *)v17[3];
          if ( v23 >= 0 )
          {
            v19 = v21;
            v17 = v24;
          }
          if ( !v17 )
            goto LABEL_23;
        }
        if ( v25 )
          break;
        while ( 1 )
        {
          v26 = v17[2];
          if ( !v26 )
            break;
          v19 = v17;
          v17 = (_QWORD *)v17[2];
          if ( *(_QWORD *)(v26 + 40) )
            goto LABEL_21;
        }
        v19 = v17;
LABEL_23:
        if ( v85 == v19 )
          goto LABEL_28;
        if ( v19[5] )
        {
          v27 = (const char *)v19[4];
          v28 = haystack;
          if ( v18 )
            goto LABEL_26;
LABEL_27:
          if ( strcmp(v28, v27) < 0 )
          {
LABEL_28:
            v29 = operator new(0x40u);
            *(_QWORD *)(v29 + 32) = 0;
            v30 = v29;
            *(_OWORD *)(v29 + 40) = 0;
            v31 = *(_QWORD *)(v16 + 8);
            if ( v31 )
            {
              v59 = (void *)qalloc_or_throw(*(_QWORD *)(v16 + 8));
              *(_QWORD *)(v30 + 32) = v59;
              *(_QWORD *)(v30 + 48) = v31;
              memcpy(v59, *(const void **)v16, v31);
              *(_QWORD *)(v30 + 40) = v31;
            }
            *(_DWORD *)(v30 + 56) = 0;
            v32 = sub_3DE2D0(v90, v19, v30 + 32);
            v19 = v32;
            if ( v33 )
            {
              if ( v32 || v85 == (_QWORD *)v33 )
              {
                v34 = 1;
              }
              else
              {
                v63 = haystack;
                if ( *(_QWORD *)(v33 + 40) )
                  v63 = *(const char **)(v33 + 32);
                v64 = haystack;
                if ( *(_QWORD *)(v30 + 40) )
                  v64 = *(const char **)(v30 + 32);
                v98 = v33;
                v65 = strcmp(v64, v63);
                v33 = v98;
                v34 = v65 >> 31;
              }
              v19 = (_QWORD *)v30;
              std::_Rb_tree_insert_and_rebalance(v34, v30, v33, v85);
              ++v90[5];
            }
            else if ( v30 )
            {
              v57 = *(void **)(v30 + 32);
              if ( v57 )
              {
                *(_QWORD *)(v30 + 40) = 0;
                qfree(v57);
              }
              operator delete((void *)v30, 0x40u);
            }
          }
        }
        else
        {
          v27 = haystack;
          if ( v18 )
          {
LABEL_26:
            v28 = *(const char **)v16;
            goto LABEL_27;
          }
        }
        *((_DWORD *)v19 + 14) = v87;
        v35 = v102;
        if ( v102 )
        {
          v36 = *(_QWORD *)(v16 + 8);
          while ( 1 )
          {
            v42 = *((_QWORD *)v35 + 5);
            if ( !v42 )
              break;
            v37 = *((const char **)v35 + 4);
            v38 = v35;
            v39 = haystack;
            if ( v36 )
              goto LABEL_38;
LABEL_39:
            v40 = strcmp(v39, v37);
            v35 = *((int **)v38 + 3);
            if ( v40 < 0 )
              v35 = *((int **)v38 + 2);
            v41 = (v40 >> 31) & 1;
            if ( !v35 )
            {
              if ( !(_BYTE)v41 )
              {
                v35 = v38;
                goto LABEL_53;
              }
              if ( v38 != v103 )
                goto LABEL_52;
              v35 = v38;
              v46 = 1;
              if ( v38 != &v101 )
              {
LABEL_80:
                v60 = haystack;
                if ( *((_QWORD *)v35 + 5) )
                  v60 = *((const char **)v35 + 4);
                v61 = haystack;
                if ( *(_QWORD *)(v16 + 8) )
                  v61 = *(const char **)v16;
                v46 = strcmp(v61, v60) < 0;
              }
LABEL_58:
              v47 = operator new(0x38u);
              *(_QWORD *)(v47 + 32) = 0;
              v48 = (_QWORD *)v47;
              *(_OWORD *)(v47 + 40) = 0;
              v49 = *(_QWORD *)(v16 + 8);
              if ( v49 )
              {
                v58 = (void *)qalloc_or_throw(*(_QWORD *)(v16 + 8));
                v48[4] = v58;
                v48[6] = v49;
                memcpy(v58, *(const void **)v16, v49);
                v48[5] = v49;
              }
              std::_Rb_tree_insert_and_rebalance(v46, v48, v35, &v101);
              ++v105;
              goto LABEL_61;
            }
          }
          v37 = haystack;
          if ( !v36 )
          {
            v38 = *((int **)v35 + 3);
            if ( !v38 )
            {
LABEL_48:
              if ( !*(_QWORD *)(v16 + 8) )
                goto LABEL_61;
              v43 = *(const char **)v16;
              v44 = haystack;
              goto LABEL_56;
            }
            while ( 1 )
            {
              v42 = *((_QWORD *)v38 + 5);
              if ( v42 )
                break;
              v35 = v38;
              v38 = *((int **)v38 + 3);
              if ( !v38 )
                goto LABEL_48;
            }
            v37 = *((const char **)v38 + 4);
            v39 = haystack;
            goto LABEL_39;
          }
LABEL_38:
          v39 = *(const char **)v16;
          v38 = v35;
          goto LABEL_39;
        }
        v38 = &v101;
        if ( v103 == &v101 )
        {
          v35 = &v101;
          v46 = 1;
          goto LABEL_58;
        }
LABEL_52:
        v35 = v38;
        v45 = std::_Rb_tree_decrement(v38);
        v42 = *(_QWORD *)(v45 + 40);
        v38 = (int *)v45;
LABEL_53:
        if ( *(_QWORD *)(v16 + 8) )
        {
          v43 = *(const char **)v16;
          v44 = haystack;
          if ( v42 )
            goto LABEL_55;
        }
        else
        {
          v43 = haystack;
          if ( !v42 )
            goto LABEL_61;
LABEL_55:
          v44 = *((const char **)v38 + 4);
        }
LABEL_56:
        if ( strcmp(v44, v43) < 0 )
        {
          v46 = 1;
          if ( v35 != &v101 )
            goto LABEL_80;
          goto LABEL_58;
        }
LABEL_61:
        v16 += 32;
        if ( v93 == v16 )
          goto LABEL_62;
      }
LABEL_21:
      v20 = haystack;
LABEL_13:
      v22 = (const char *)v17[4];
      v21 = v17;
      goto LABEL_14;
    }
LABEL_62:
    ++v97;
  }
  while ( *(_DWORD *)(v89 + 28) > (int)v97 );
  v50 = (__int64)v103;
  if ( v103 == &v101 )
  {
LABEL_93:
    v54 = a1[23];
  }
  else
  {
    do
    {
      v55 = *(_QWORD *)(v50 + 40);
      v56 = nullptr;
      if ( v55 )
      {
        v56 = (void *)qalloc_or_throw(*(_QWORD *)(v50 + 40));
        memcpy(v56, *(const void **)(v50 + 32), v55);
      }
      v51 = a1[23];
      v52 = a1[22];
      if ( a1[24] < (unsigned __int64)(v51 + 1) )
      {
        v62 = qvector_reserve(a1 + 22, v52, v51 + 1, 24);
        a1[22] = v62;
        v51 = a1[23];
        v52 = v62;
      }
      v53 = v52 + 24 * v51;
      *(_QWORD *)v53 = v56;
      *(__m128i *)(v53 + 8) = _mm_unpacklo_epi64((__m128i)v55, (__m128i)v55);
      v54 = a1[23] + 1LL;
      a1[23] = v54;
      v50 = std::_Rb_tree_increment(v50);
    }
    while ( (int *)v50 != &v101 );
  }
  v66 = a1[22];
  v92 = *(_QWORD *)(a1[1] + 8LL) + 480LL;
  v96 = v66 + 24 * v54;
  if ( v96 != v66 )
  {
    v67 = *(_DWORD *)(v89 + 28);
    do
    {
      v91 = 0;
      v68 = v67 - 1;
      for ( i = 0; v67 - 1 > i; v91 += 48 )
      {
        while ( 1 )
        {
          v70 = (char *)ptr + v91;
          v94 = (char *)ptr;
          v71 = (char *)sub_3DDF90((__int64)ptr + v91, v66);
          v86 = i++;
          if ( v71 != v70 + 8 )
          {
            v88 = *((_DWORD *)v71 + 14);
            if ( i < v67 )
              break;
          }
          v91 += 48;
          if ( v68 <= i )
            goto LABEL_107;
        }
        v72 = v94;
        v73 = i;
        v74 = 48LL * i;
        while ( 1 )
        {
          v75 = &v72[v74];
          v76 = (char *)sub_3DDF90((__int64)&v72[v74], v66);
          if ( v76 != v75 + 8 )
          {
            sub_3DE620(v92, v86, v73, v88, *((_DWORD *)v76 + 14), 1);
            v67 = *(_DWORD *)(v89 + 28);
          }
          ++v73;
          v74 += 48;
          if ( v67 <= v73 )
            break;
          v72 = (char *)ptr;
        }
        v68 = v67 - 1;
      }
LABEL_107:
      v66 += 24;
    }
    while ( v96 != v66 );
  }
  sub_3DC740(v102);
  v77 = ptr;
  if ( ptr )
  {
    v78 = v100;
    if ( (_QWORD)v100 )
    {
      v79 = 0;
      do
      {
        v80 = v77[6 * v79 + 2];
        if ( v80 )
        {
          do
          {
            v81 = (_QWORD *)v80;
            sub_3DCA00(*(_QWORD **)(v80 + 24));
            v82 = *(void **)(v80 + 32);
            v80 = *(_QWORD *)(v80 + 16);
            if ( v82 )
            {
              v81[5] = 0;
              qfree(v82);
            }
            operator delete(v81, 0x40u);
          }
          while ( v80 );
          v77 = ptr;
        }
        ++v79;
      }
      while ( v78 != v79 );
    }
    *(_QWORD *)&v100 = 0;
    qfree(v77);
  }
  return v106 - __readfsqword(0x28u);
}
