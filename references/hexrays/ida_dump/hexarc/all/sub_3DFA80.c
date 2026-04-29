__int64 *__fastcall sub_3DFA80(__m128i *a1, char *a2)
{
  _QWORD *v2; // rdi
  _DWORD *v3; // rax
  _QWORD *exception; // rdi
  _DWORD *v5; // rax
  _DWORD *v6; // rax
  __int64 *v8; // r13
  unsigned __int64 v9; // rdx
  __int64 i; // rax
  int v11; // r8d
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rbx
  __int64 v14; // r12
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r12
  void *v17; // rax
  __int16 v18; // bx
  __int64 v19; // r12
  __int16 v20; // ax
  int v21; // ebx
  __int16 v22; // ax
  __int16 v23; // ax
  __int64 v24; // r12
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  int *v29; // r15
  int *v30; // rax
  __int64 v31; // rdi
  __int64 v32; // r12
  __int64 v33; // rbp
  __int64 j; // rbx
  __int64 *v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rsi
  void *v44; // rdi
  unsigned __int64 v45; // r12
  __int64 *v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rax
  __int64 v49; // r12
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdi
  __int64 v54; // r12
  __int64 v55; // rbp
  __int64 m; // rbx
  __int64 *v57; // rax
  __int64 v58; // rdi
  __int64 v59; // rdi
  __int64 v60; // r12
  __int64 v61; // rbp
  __int64 jj; // rbx
  __int64 *v63; // rax
  __int64 v64; // rdi
  __int64 v65; // rdi
  __int64 v66; // r12
  __int64 v67; // rbp
  __int64 ii; // rbx
  __int64 *v69; // rax
  __int64 v70; // rdi
  __int64 v71; // rdi
  __int64 v72; // rbp
  __int64 k; // rbx
  __int64 *v74; // rax
  __int64 v75; // rdi
  __int64 v77; // [rsp+8h] [rbp-B0h]
  bool v78; // [rsp+8h] [rbp-B0h]
  char v79; // [rsp+17h] [rbp-A1h]
  __int64 n; // [rsp+18h] [rbp-A0h]
  void *src; // [rsp+20h] [rbp-98h] BYREF
  __int128 v82; // [rsp+28h] [rbp-90h]
  int v83; // [rsp+48h] [rbp-70h] BYREF
  int *v84; // [rsp+50h] [rbp-68h]
  int *v85; // [rsp+58h] [rbp-60h]
  int *v86; // [rsp+60h] [rbp-58h]
  __int64 v87; // [rsp+68h] [rbp-50h]
  unsigned __int64 v88; // [rsp+78h] [rbp-40h]

  v88 = __readfsqword(0x28u);
  v83 = 0;
  v84 = nullptr;
  v85 = &v83;
  v86 = &v83;
  v87 = 0;
  v79 = 0;
  v8 = (__int64 *)j__qalloc_or_throw(48);
  v9 = 0;
  *v8 = 0;
  v8[3] = 0;
  *(_OWORD *)(v8 + 1) = 0;
  *((_OWORD *)v8 + 2) = 0;
  for ( i = 0; ; i = v8[1] )
  {
    v11 = v9 + 1;
    v12 = (int)v9 + 1;
    if ( v12 == i )
      goto LABEL_13;
    src = nullptr;
    v82 = 0;
    v13 = v8[1];
    if ( v11 < v13 )
    {
      v45 = v11;
      do
      {
        v46 = (__int64 *)(*v8 + 24 * v45);
        v47 = *v46;
        if ( *v46 )
        {
          v46[1] = 0;
          qfree(v47);
        }
        ++v45;
      }
      while ( v45 < v13 );
      v8[1] = v12;
      v9 = v8[4];
    }
    else
    {
      if ( v13 >= v11 )
        goto LABEL_13;
      v14 = *v8;
      v15 = v8[2];
      if ( (unsigned __int64)&src < *v8 || (unsigned __int64)&src >= v14 + 24 * v15 )
      {
        if ( v15 >= v11
          || (a2 = (char *)*v8, v51 = qvector_reserve(v8, *v8, v11, 24), v13 = v8[1], *v8 = v51, v14 = v51, v13 < v12) )
        {
          while ( 1 )
          {
            v16 = v14 + 24 * v13;
            *(_QWORD *)v16 = 0;
            *(_OWORD *)(v16 + 8) = 0;
            if ( (_QWORD)v82 )
            {
              v77 = v82;
              n = 8 * v82;
              v17 = (void *)qalloc_or_throw(8 * v82);
              *(_QWORD *)v16 = v17;
              ++v13;
              *(_QWORD *)(v16 + 16) = v77;
              a2 = (char *)src;
              memcpy(v17, src, n);
              *(_QWORD *)(v16 + 8) = v77;
              if ( v13 >= v12 )
                break;
            }
            else if ( ++v13 >= v12 )
            {
              break;
            }
            v14 = *v8;
          }
        }
LABEL_12:
        v8[1] = v12;
        v9 = v8[4];
        goto LABEL_13;
      }
      if ( v15 < v11 )
      {
        a2 = (char *)*v8;
        v52 = qvector_reserve(v8, *v8, v11, 24);
        v13 = v8[1];
        *v8 = v52;
        v14 = v52;
        if ( v13 >= v12 )
          goto LABEL_12;
      }
      v48 = 24 * v13;
      while ( 1 )
      {
        v49 = v48 + v14;
        ++v13;
        v48 += 24;
        *(_QWORD *)v49 = 0;
        *(_OWORD *)(v49 + 8) = 0;
        if ( v12 == v13 )
          break;
        v14 = *v8;
      }
      v8[1] = v12;
      v9 = v8[4];
    }
LABEL_13:
    if ( v9 < v12 )
    {
      v43 = v8[3];
      if ( v8[5] < v12 )
      {
        v50 = qvector_reserve(v8 + 3, v43, v12, 4);
        v8[3] = v50;
        v9 = v8[4];
        v43 = v50;
      }
      v44 = (void *)(v43 + 4 * v9);
      a2 = nullptr;
      memset(v44, 0, 4 * (v12 - v9));
      v8[4] = v12;
    }
    else if ( v12 != v9 )
    {
      v8[4] = v12;
    }
    v18 = a1[67].m128i_i16[2];
    v19 = *v8;
    if ( v18 != 2 || (a2 = "def", strcmp(a1[2].m128i_i8, "def")) )
    {
      v24 = v19 + 24 * v8[1] - 24;
      if ( v18 != 45 )
      {
LABEL_28:
        if ( v18 == 3 )
        {
          v25 = a1[66].m128i_i64[0];
          goto LABEL_30;
        }
LABEL_139:
        sub_59D4C(0.0);
      }
      while ( 1 )
      {
        sub_3DECE0(a1);
        if ( a1[67].m128i_i16[2] != 3 )
          goto LABEL_139;
        v25 = -a1[66].m128i_i64[0];
LABEL_30:
        sub_3DECE0(a1);
        v29 = v84;
        if ( !v84 )
          break;
        while ( 1 )
        {
          v27 = (unsigned int)v29[8];
          v30 = *((int **)v29 + 3);
          if ( (int)v25 < (int)v27 )
            v30 = *((int **)v29 + 2);
          LOBYTE(a2) = (int)v25 < (int)v27;
          if ( !v30 )
            break;
          v29 = v30;
        }
        if ( (int)v25 >= (int)v27 )
          goto LABEL_37;
        if ( v85 != v29 )
          goto LABEL_62;
LABEL_49:
        v78 = 1;
        if ( v29 != &v83 )
          v78 = (int)v25 < v29[8];
LABEL_51:
        v37 = operator new(0x28u);
        *(_DWORD *)(v37 + 32) = v25;
        v25 = (int)v25;
        std::_Rb_tree_insert_and_rebalance(v78, v37, v29, &v83);
        ++v87;
        src = (void *)(int)v25;
        v38 = *(_QWORD *)(v24 + 8);
        a2 = *(char **)v24;
        v39 = *(_QWORD *)(v24 + 16);
        v40 = v38 + 1;
        if ( (unsigned __int64)&src < *(_QWORD *)v24 || &src >= (void **)&a2[8 * v39] )
        {
          if ( v39 < v40 )
          {
            v41 = qvector_reserve(v24, a2, v38 + 1, 8);
            *(_QWORD *)v24 = v41;
            a2 = (char *)v41;
            v25 = (__int64)src;
            v38 = *(_QWORD *)(v24 + 8);
          }
        }
        else if ( v39 < v40 )
        {
          v42 = qvector_reserve(v24, a2, v38 + 1, 8);
          *(_QWORD *)v24 = v42;
          a2 = (char *)v42;
          v38 = *(_QWORD *)(v24 + 8);
        }
        *(_QWORD *)&a2[8 * v38] = v25;
        ++*(_QWORD *)(v24 + 8);
        v20 = a1[67].m128i_i16[2];
        if ( v20 != 44 )
          goto LABEL_20;
        sub_3DECE0(a1);
        v18 = a1[67].m128i_i16[2];
        if ( v18 != 45 )
          goto LABEL_28;
      }
      v29 = v85;
      if ( v85 == &v83 )
      {
        v78 = 1;
        goto LABEL_51;
      }
      v29 = &v83;
LABEL_62:
      LODWORD(v27) = *(_DWORD *)(std::_Rb_tree_decrement(v29, a2, v26, v27, v28) + 32);
LABEL_37:
      if ( (int)v25 <= (int)v27 )
      {
        if ( v8 )
        {
          v31 = v8[3];
          if ( v31 )
          {
            v8[4] = 0;
            qfree(v31);
          }
          v32 = *v8;
          if ( *v8 )
          {
            v33 = v8[1];
            if ( v33 )
            {
              for ( j = 0; j != v33; ++j )
              {
                v35 = (__int64 *)(v32 + 24 * j);
                v36 = *v35;
                if ( *v35 )
                {
                  v35[1] = 0;
                  qfree(v36);
                  v32 = *v8;
                }
              }
            }
            v8[1] = 0;
            qfree(v32);
          }
          j__qfree(v8);
        }
        exception = __cxa_allocate_exception(8u);
        *exception = "Duplicate case number";
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'char const*, nullptr);
      }
      goto LABEL_49;
    }
    if ( v79 )
    {
      if ( v8 )
      {
        v71 = v8[3];
        if ( v71 )
        {
          v8[4] = 0;
          qfree(v71);
          v19 = *v8;
        }
        if ( v19 )
        {
          v72 = v8[1];
          if ( v72 )
          {
            for ( k = 0; k != v72; ++k )
            {
              v74 = (__int64 *)(v19 + 24 * k);
              v75 = *v74;
              if ( *v74 )
              {
                v74[1] = 0;
                qfree(v75);
                v19 = *v8;
              }
            }
          }
          v8[1] = 0;
          qfree(v19);
        }
        j__qfree(v8);
      }
      JUMPOUT(0x5A346);
    }
    sub_3DECE0(a1);
    v79 = 1;
    v20 = a1[67].m128i_i16[2];
LABEL_20:
    if ( v20 != 15933 )
    {
      if ( v8 )
      {
        v53 = v8[3];
        if ( v53 )
        {
          v8[4] = 0;
          qfree(v53);
        }
        v54 = *v8;
        if ( *v8 )
        {
          v55 = v8[1];
          if ( v55 )
          {
            for ( m = 0; m != v55; ++m )
            {
              v57 = (__int64 *)(v54 + 24 * m);
              v58 = *v57;
              if ( *v57 )
              {
                v57[1] = 0;
                qfree(v58);
                v54 = *v8;
              }
            }
          }
          v8[1] = 0;
          qfree(v54);
        }
        j__qfree(v8);
      }
      v5 = __cxa_allocate_exception(4u);
      *v5 = 47;
      __cxa_throw(v5, (struct type_info *)&`typeinfo for'int, nullptr);
    }
    v21 = sub_3DE840(a1);
    if ( v21 )
    {
      v6 = __cxa_allocate_exception(4u);
      *v6 = v21;
      __cxa_throw(v6, (struct type_info *)&`typeinfo for'int, nullptr);
    }
    v22 = a1[67].m128i_i16[2];
    if ( v22 == 4 )
    {
      a1[67].m128i_i16[2] = 2;
LABEL_137:
      sub_59D4C(0.0);
    }
    if ( v22 != 3 )
      goto LABEL_137;
    *(_DWORD *)(v8[3] + 4 * v8[4] - 4) = a1[66].m128i_i64[0];
    sub_3DECE0(a1);
    v23 = a1[67].m128i_i16[2];
    if ( v23 == 125 )
      break;
    if ( v23 != 44 )
    {
      if ( v8 )
      {
        v65 = v8[3];
        if ( v65 )
        {
          v8[4] = 0;
          qfree(v65);
        }
        v66 = *v8;
        if ( *v8 )
        {
          v67 = v8[1];
          if ( v67 )
          {
            for ( ii = 0; ii != v67; ++ii )
            {
              v69 = (__int64 *)(v66 + 24 * ii);
              v70 = *v69;
              if ( *v69 )
              {
                v69[1] = 0;
                qfree(v70);
                v66 = *v8;
              }
            }
          }
          v8[1] = 0;
          qfree(v66);
        }
        j__qfree(v8);
      }
      v3 = __cxa_allocate_exception(4u);
      *v3 = 47;
      __cxa_throw(v3, (struct type_info *)&`typeinfo for'int, nullptr);
    }
    sub_3DECE0(a1);
    v9 = v8[4];
  }
  if ( (unsigned __int64)v8[4] <= 2 )
  {
    if ( v8 )
    {
      v59 = v8[3];
      if ( v59 )
      {
        v8[4] = 0;
        qfree(v59);
      }
      v60 = *v8;
      if ( *v8 )
      {
        v61 = v8[1];
        if ( v61 )
        {
          for ( jj = 0; jj != v61; ++jj )
          {
            v63 = (__int64 *)(v60 + 24 * jj);
            v64 = *v63;
            if ( *v63 )
            {
              v63[1] = 0;
              qfree(v64);
              v60 = *v8;
            }
          }
        }
        v8[1] = 0;
        qfree(v60);
      }
      j__qfree(v8);
    }
    v2 = __cxa_allocate_exception(8u);
    *v2 = "Too few jump cases (must be > 2)";
    __cxa_throw(v2, (struct type_info *)&`typeinfo for'char const*, nullptr);
  }
  sub_3DECE0(a1);
  sub_3DE5C0(v84);
  return v8;
}
