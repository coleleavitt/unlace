unsigned __int64 __fastcall sub_3D8E50(_QWORD *a1, const char *a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // r12
  char *v6; // r15
  char *v7; // rbx
  __int64 v8; // r13
  __int64 v9; // rbp
  _QWORD *v10; // rdi
  __m128 v11; // xmm0
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  char *v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rbp
  char *v20; // r15
  __int64 v21; // r14
  char *v22; // rbx
  char *v23; // r13
  const char *v24; // rdi
  int v25; // eax
  __int64 v26; // rax
  const char *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r13
  size_t v34; // r14
  char *v35; // rax
  int *v36; // rbx
  __int64 v37; // r13
  int *v38; // r14
  const char *v39; // rdi
  int v40; // eax
  int v41; // eax
  __int64 v42; // r15
  const char *v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  const char *v50; // r13
  size_t v51; // r14
  __int64 v52; // rcx
  __int64 v53; // rbp
  __int64 v54; // rdx
  char *v55; // rax
  __int64 v56; // rbx
  size_t v57; // r12
  void *v58; // rbx
  void *v59; // rdi
  void *v60; // rax
  void *v61; // rax
  const char *v62; // rdi
  __int64 v63; // rax
  const char *v64; // rsi
  const char *v65; // rdi
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
  char *v85; // [rsp+0h] [rbp-E0h]
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
  void *ptr; // [rsp+48h] [rbp-98h] BYREF
  __int128 v99; // [rsp+50h] [rbp-90h]
  int v100; // [rsp+70h] [rbp-70h] BYREF
  int *v101; // [rsp+78h] [rbp-68h]
  int *v102; // [rsp+80h] [rbp-60h]
  int *v103; // [rsp+88h] [rbp-58h]
  __int64 v104; // [rsp+90h] [rbp-50h]
  unsigned __int64 v105; // [rsp+A0h] [rbp-40h]

  v105 = __readfsqword(0x28u);
  v2 = a1[1];
  v99 = 0;
  ptr = nullptr;
  v3 = *(int *)(v2 + 28);
  v89 = v2;
  if ( *(_DWORD *)(v2 + 28) )
  {
    a2 = nullptr;
    v100 = 0;
    v101 = nullptr;
    v102 = &v100;
    v103 = &v100;
    v104 = 0;
    v4 = qvector_reserve(&ptr, 0, v3, 48);
    v5 = *((_QWORD *)&v99 + 1);
    v6 = (char *)v4;
    *((_QWORD *)&v99 + 1) = 0;
    v7 = (char *)ptr;
    v8 = v99 - 1;
    if ( (__int64)v99 - 1 >= 0 )
    {
      v9 = v4 + 8;
      do
      {
        v14 = *((_QWORD *)v7 + 2);
        if ( v14 )
        {
          v10 = nullptr;
          v11 = _mm_loadh_ps((const double *)v7 + 3);
          *(_DWORD *)v9 = *((_DWORD *)v7 + 2);
          v12 = *((_QWORD *)v7 + 4);
          *(__m128 *)(v9 + 8) = v11;
          *(_QWORD *)(v9 + 24) = v12;
          *(_QWORD *)(v14 + 8) = v9;
          v13 = *((_QWORD *)v7 + 5);
          *((_QWORD *)v7 + 2) = 0;
          *(_QWORD *)(v9 + 32) = v13;
          *((_QWORD *)v7 + 3) = v7 + 8;
          *((_QWORD *)v7 + 4) = v7 + 8;
          *((_QWORD *)v7 + 5) = 0;
        }
        else
        {
          *(_DWORD *)v9 = 0;
          *(_QWORD *)(v9 + 8) = 0;
          *(_QWORD *)(v9 + 16) = v9;
          *(_QWORD *)(v9 + 24) = v9;
          *(_QWORD *)(v9 + 32) = 0;
          v10 = *((_QWORD **)v7 + 2);
        }
        --v8;
        v7 += 48;
        v9 += 48;
        sub_3D6B40(v10);
      }
      while ( v8 != -1 );
      v7 = (char *)ptr;
    }
    qfree(v7);
    ptr = v6;
    *((_QWORD *)&v99 + 1) = v5;
    if ( (unsigned __int64)v99 < v3 )
    {
      v84 = (__int64)&v6[48 * v99 + 8];
      do
      {
        *(_DWORD *)v84 = 0;
        *(_QWORD *)(v84 + 8) = 0;
        *(_QWORD *)(v84 + 16) = v84;
        *(_QWORD *)(v84 + 24) = v84;
        v84 += 48;
        *(_QWORD *)(v84 - 16) = 0;
      }
      while ( (char *)v84 != &v6[48 * v3 + 8] );
    }
    *(_QWORD *)&v99 = v3;
    sub_3D6B40(nullptr);
  }
  v100 = 0;
  v101 = nullptr;
  v102 = &v100;
  v103 = &v100;
  v104 = 0;
  v97 = 0;
  if ( *(int *)(v89 + 28) <= 0 )
    goto LABEL_92;
  do
  {
    v15 = (char *)switch_dbctx(*(int *)(v89 + 4 * v97 + 16));
    v90 = (char *)ptr + 48 * v97;
    v18 = *((_QWORD *)v15 + 171);
    v19 = *(_QWORD *)(v18 + 48);
    v85 = (char *)(v90 + 1);
    v93 = v19 + 32LL * *(_QWORD *)(v18 + 56);
    if ( v19 != v93 )
    {
      while ( 1 )
      {
        v87 = *(_DWORD *)(v19 + 24);
        v20 = (char *)v90[2];
        if ( !v20 )
        {
          v22 = (char *)(v90 + 1);
          goto LABEL_28;
        }
        v21 = *(_QWORD *)(v19 + 8);
        v22 = (char *)(v90 + 1);
        while ( 1 )
        {
          v26 = *((_QWORD *)v20 + 5);
          if ( !v21 )
            break;
          a2 = *(const char **)v19;
          v23 = v20;
          v24 = haystack;
          if ( v26 )
            goto LABEL_13;
LABEL_14:
          v25 = strcmp(v24, a2);
          v15 = *((char **)v20 + 2);
          v20 = *((char **)v20 + 3);
          if ( v25 >= 0 )
          {
            v22 = v23;
            v20 = v15;
          }
          if ( !v20 )
            goto LABEL_23;
        }
        if ( v26 )
          break;
        while ( 1 )
        {
          v15 = *((char **)v20 + 2);
          if ( !v15 )
            break;
          v22 = v20;
          v20 = *((char **)v20 + 2);
          if ( *((_QWORD *)v15 + 5) )
            goto LABEL_21;
        }
        v22 = v20;
LABEL_23:
        if ( v85 == v22 )
          goto LABEL_28;
        if ( *((_QWORD *)v22 + 5) )
        {
          a2 = *((const char **)v22 + 4);
          v27 = haystack;
          if ( v21 )
            goto LABEL_26;
LABEL_27:
          if ( strcmp(v27, a2) < 0 )
          {
LABEL_28:
            v28 = operator new(0x40u);
            *(_QWORD *)(v28 + 32) = 0;
            v33 = v28;
            *(_OWORD *)(v28 + 40) = 0;
            v34 = *(_QWORD *)(v19 + 8);
            if ( v34 )
            {
              v61 = (void *)qalloc_or_throw(*(_QWORD *)(v19 + 8), a2, v29, v30, v31, v32);
              *(_QWORD *)(v33 + 32) = v61;
              *(_QWORD *)(v33 + 48) = v34;
              memcpy(v61, *(const void **)v19, v34);
              *(_QWORD *)(v33 + 40) = v34;
            }
            *(_DWORD *)(v33 + 56) = 0;
            a2 = v22;
            v35 = (char *)sub_3D8410(v90, v22, v33 + 32);
            v22 = v35;
            if ( v15 )
            {
              if ( !v35 && v85 != v15 )
              {
                v64 = haystack;
                if ( *((_QWORD *)v15 + 5) )
                  v64 = *((const char **)v15 + 4);
                v65 = haystack;
                if ( *(_QWORD *)(v33 + 40) )
                  v65 = *(const char **)(v33 + 32);
                strcmp(v65, v64);
              }
              a2 = (const char *)v33;
              v22 = (char *)v33;
              std::_Rb_tree_insert_and_rebalance();
              ++v90[5];
            }
            else if ( v33 )
            {
              v59 = *(void **)(v33 + 32);
              if ( v59 )
              {
                *(_QWORD *)(v33 + 40) = 0;
                qfree(v59);
              }
              a2 = (const char *)&dword_40;
              operator delete((void *)v33, 0x40u);
            }
          }
        }
        else
        {
          a2 = haystack;
          if ( v21 )
          {
LABEL_26:
            v27 = *(const char **)v19;
            goto LABEL_27;
          }
        }
        *((_DWORD *)v22 + 14) = v87;
        v36 = v101;
        if ( v101 )
        {
          v37 = *(_QWORD *)(v19 + 8);
          while ( 1 )
          {
            v42 = *((_QWORD *)v36 + 5);
            if ( !v42 )
              break;
            a2 = *((const char **)v36 + 4);
            v38 = v36;
            v39 = haystack;
            if ( v37 )
              goto LABEL_37;
LABEL_38:
            v40 = strcmp(v39, a2);
            v36 = *((int **)v38 + 3);
            if ( v40 < 0 )
              v36 = *((int **)v38 + 2);
            v41 = (v40 >> 31) & 1;
            if ( !v36 )
            {
              if ( !(_BYTE)v41 )
              {
                v36 = v38;
                goto LABEL_52;
              }
              if ( v38 != v102 )
                goto LABEL_51;
              v36 = v38;
              if ( v38 != &v100 )
              {
LABEL_79:
                a2 = haystack;
                if ( *((_QWORD *)v36 + 5) )
                  a2 = *((const char **)v36 + 4);
                v62 = haystack;
                if ( *(_QWORD *)(v19 + 8) )
                  v62 = *(const char **)v19;
                strcmp(v62, a2);
              }
LABEL_57:
              v45 = operator new(0x38u);
              *(_QWORD *)(v45 + 32) = 0;
              v50 = (const char *)v45;
              *(_OWORD *)(v45 + 40) = 0;
              v51 = *(_QWORD *)(v19 + 8);
              if ( v51 )
              {
                v60 = (void *)qalloc_or_throw(*(_QWORD *)(v19 + 8), a2, v46, v47, v48, v49);
                *((_QWORD *)v50 + 4) = v60;
                *((_QWORD *)v50 + 6) = v51;
                memcpy(v60, *(const void **)v19, v51);
                *((_QWORD *)v50 + 5) = v51;
              }
              a2 = v50;
              std::_Rb_tree_insert_and_rebalance();
              ++v104;
              goto LABEL_60;
            }
          }
          a2 = haystack;
          if ( !v37 )
          {
            v38 = *((int **)v36 + 3);
            if ( !v38 )
            {
LABEL_47:
              if ( !*(_QWORD *)(v19 + 8) )
                goto LABEL_60;
              a2 = *(const char **)v19;
              v43 = haystack;
              goto LABEL_55;
            }
            while ( 1 )
            {
              v42 = *((_QWORD *)v38 + 5);
              if ( v42 )
                break;
              v36 = v38;
              v38 = *((int **)v38 + 3);
              if ( !v38 )
                goto LABEL_47;
            }
            a2 = *((const char **)v38 + 4);
            v39 = haystack;
            goto LABEL_38;
          }
LABEL_37:
          v39 = *(const char **)v19;
          v38 = v36;
          goto LABEL_38;
        }
        v38 = &v100;
        if ( v102 == &v100 )
          goto LABEL_57;
LABEL_51:
        v36 = v38;
        v44 = std::_Rb_tree_decrement();
        v42 = *(_QWORD *)(v44 + 40);
        v38 = (int *)v44;
LABEL_52:
        if ( *(_QWORD *)(v19 + 8) )
        {
          a2 = *(const char **)v19;
          v43 = haystack;
          if ( v42 )
            goto LABEL_54;
        }
        else
        {
          a2 = haystack;
          if ( !v42 )
            goto LABEL_60;
LABEL_54:
          v43 = *((const char **)v38 + 4);
        }
LABEL_55:
        if ( strcmp(v43, a2) < 0 )
        {
          if ( v36 != &v100 )
            goto LABEL_79;
          goto LABEL_57;
        }
LABEL_60:
        v19 += 32;
        if ( v93 == v19 )
          goto LABEL_61;
      }
LABEL_21:
      a2 = haystack;
LABEL_13:
      v24 = *((const char **)v20 + 4);
      v23 = v20;
      goto LABEL_14;
    }
LABEL_61:
    v52 = v89;
    ++v97;
  }
  while ( *(_DWORD *)(v89 + 28) > (int)v97 );
  v53 = (__int64)v102;
  if ( v102 == &v100 )
  {
LABEL_92:
    v56 = a1[23];
  }
  else
  {
    do
    {
      v57 = *(_QWORD *)(v53 + 40);
      v58 = nullptr;
      if ( v57 )
      {
        v58 = (void *)qalloc_or_throw(*(_QWORD *)(v53 + 40), a2, v15, v52, v16, v17);
        memcpy(v58, *(const void **)(v53 + 32), v57);
      }
      v54 = a1[23];
      a2 = (const char *)a1[22];
      if ( a1[24] < (unsigned __int64)(v54 + 1) )
      {
        v63 = qvector_reserve(a1 + 22, a2, v54 + 1, 24);
        a1[22] = v63;
        v54 = a1[23];
        a2 = (const char *)v63;
      }
      v55 = (char *)&a2[24 * v54];
      *(_QWORD *)v55 = v58;
      *(__m128i *)(v55 + 8) = _mm_unpacklo_epi64((__m128i)v57, (__m128i)v57);
      v56 = a1[23] + 1LL;
      a1[23] = v56;
      v53 = std::_Rb_tree_increment();
    }
    while ( (int *)v53 != &v100 );
  }
  v66 = a1[22];
  v92 = *(_QWORD *)(a1[1] + 8LL) + 480LL;
  v96 = v66 + 24 * v56;
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
          v71 = (char *)sub_3D80D0((__int64)ptr + v91, v66);
          v86 = i++;
          if ( v71 != v70 + 8 )
          {
            v88 = *((_DWORD *)v71 + 14);
            if ( i < v67 )
              break;
          }
          v91 += 48;
          if ( v68 <= i )
            goto LABEL_106;
        }
        v72 = v94;
        v73 = i;
        v74 = 48LL * i;
        while ( 1 )
        {
          v75 = &v72[v74];
          v76 = (char *)sub_3D80D0((__int64)&v72[v74], v66);
          if ( v76 != v75 + 8 )
          {
            sub_3D8760(v92, v86, v73, v88, *((_DWORD *)v76 + 14), 1);
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
LABEL_106:
      v66 += 24;
    }
    while ( v96 != v66 );
  }
  sub_3D6880(v101);
  v77 = ptr;
  if ( ptr )
  {
    v78 = v99;
    if ( (_QWORD)v99 )
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
            sub_3D6B40(*(_QWORD **)(v80 + 24));
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
    *(_QWORD *)&v99 = 0;
    qfree(v77);
  }
  return v105 - __readfsqword(0x28u);
}

