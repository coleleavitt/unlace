unsigned __int64 __fastcall sub_439B80(__int64 *a1, __int64 a2, _QWORD *a3)
{
  char *v4; // r8
  __int64 v5; // rax
  char *v6; // r14
  char v7; // r15
  unsigned __int64 v8; // r12
  __int64 **v9; // r10
  unsigned __int64 v10; // r13
  __int64 *v11; // rax
  char v12; // cl
  _BYTE *v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  _QWORD *v16; // rbp
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 *v20; // r15
  __int64 v21; // r13
  void ***v22; // rax
  _QWORD *v23; // rdx
  __int64 v24; // r13
  __int64 v25; // rsi
  unsigned __int64 v26; // rbp
  char v27; // cl
  _BYTE *v28; // rax
  _QWORD *v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // r12
  __m128i *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rdx
  _QWORD *v36; // rax
  unsigned __int64 v37; // rbp
  unsigned __int64 v38; // r9
  size_t v39; // r13
  char *v40; // rsi
  unsigned __int64 v41; // rdi
  char *v42; // rcx
  unsigned __int64 v43; // rdx
  void ***v44; // rax
  char *v45; // rdx
  __int64 v46; // rax
  _QWORD *v47; // rbx
  void *v48; // rdi
  __int64 **v50; // r9
  __int64 *v51; // rax
  char v52; // di
  char *v53; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v55; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v56; // [rsp+28h] [rbp-A0h]
  void *ptr; // [rsp+30h] [rbp-98h] BYREF
  __int128 v58; // [rsp+38h] [rbp-90h]
  void *s; // [rsp+50h] [rbp-78h]
  unsigned __int64 v60; // [rsp+58h] [rbp-70h]
  void *i; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v62; // [rsp+68h] [rbp-60h]
  int v63; // [rsp+70h] [rbp-58h] BYREF
  __int64 v64; // [rsp+78h] [rbp-50h]
  __int64 v65; // [rsp+80h] [rbp-48h] BYREF
  unsigned __int64 v66; // [rsp+88h] [rbp-40h]

  v4 = *(char **)a2;
  v66 = __readfsqword(0x28u);
  v63 = 1065353216;
  s = &v65;
  v5 = *(_QWORD *)(a2 + 8);
  ptr = nullptr;
  v58 = 0;
  v60 = 1;
  i = nullptr;
  v62 = 0;
  v64 = 0;
  v65 = 0;
  v53 = &v4[v5];
  if ( &v4[v5] != v4 )
  {
    v6 = v4;
    v7 = *v4;
LABEL_12:
    v13 = i;
    if ( i )
    {
      while ( v7 != v13[8] )
      {
        v13 = *(_BYTE **)v13;
        if ( !v13 )
          goto LABEL_15;
      }
      while ( v53 != ++v6 )
      {
LABEL_11:
        v7 = *v6;
        if ( !v62 )
          goto LABEL_12;
        v8 = v7;
        v9 = *((__int64 ***)s + v7 % v60);
        v10 = v7 % v60;
        if ( !v9 )
          goto LABEL_16;
        v11 = *v9;
        if ( v7 != *((_BYTE *)*v9 + 8) )
        {
          while ( *v11 )
          {
            v12 = *(_BYTE *)(*v11 + 8);
            v9 = (__int64 **)v11;
            if ( v12 % v60 != v7 % v60 )
              break;
            v11 = (__int64 *)*v11;
            if ( v7 == v12 )
              goto LABEL_8;
          }
          goto LABEL_16;
        }
LABEL_8:
        if ( !v9 || !*v9 )
          goto LABEL_16;
      }
      goto LABEL_20;
    }
LABEL_15:
    v8 = v7;
    v10 = v7 % v60;
LABEL_16:
    v14 = operator new(0x10u);
    *(_BYTE *)(v14 + 8) = v7;
    v15 = v62;
    v16 = (_QWORD *)v14;
    *(_QWORD *)v14 = 0;
    if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                            (std::__detail::_Prime_rehash_policy *)&v63,
                            v60,
                            v15,
                            1u) )
    {
      v38 = v17;
      if ( v17 == 1 )
      {
        v65 = 0;
        v20 = &v65;
      }
      else
      {
        if ( v17 > 0xFFFFFFFFFFFFFFFLL )
        {
          if ( v17 >> 61 )
            sub_2EBC5E(&v63, v60, v17, v18, v19);
          std::__throw_bad_alloc();
        }
        v39 = 8 * v17;
        v55 = v17;
        v20 = (__int64 *)operator new(8 * v17);
        memset(v20, 0, v39);
        v38 = v55;
      }
      v40 = (char *)i;
      v41 = 0;
      for ( i = nullptr; v40; v41 = v43 )
      {
        while ( 1 )
        {
          v42 = v40;
          v40 = *(char **)v40;
          v43 = v42[8] % v38;
          v44 = (void ***)&v20[v43];
          if ( !*v44 )
            break;
          *(_QWORD *)v42 = **v44;
          **v44 = v42;
          if ( !v40 )
            goto LABEL_50;
        }
        *(_QWORD *)v42 = i;
        i = v42;
        *v44 = &i;
        if ( *(_QWORD *)v42 )
          v20[v41] = (__int64)v42;
      }
LABEL_50:
      if ( s != &v65 )
      {
        v56 = v38;
        operator delete(s, 8 * v60);
        v38 = v56;
      }
      v60 = v38;
      s = v20;
      v21 = v8 % v38;
      v22 = (void ***)&v20[v21];
      v23 = (_QWORD *)v20[v21];
      if ( v23 )
        goto LABEL_18;
    }
    else
    {
      v20 = (__int64 *)s;
      v21 = v10;
      v22 = (void ***)((char *)s + v21 * 8);
      v23 = *(_QWORD **)((char *)s + v21 * 8);
      if ( v23 )
      {
LABEL_18:
        *v16 = *v23;
        **v22 = v16;
        goto LABEL_19;
      }
    }
    v45 = (char *)i;
    i = v16;
    *v16 = v45;
    if ( v45 )
    {
      v20[v45[8] % v60] = (__int64)v16;
      v22 = (void ***)((char *)s + v21 * 8);
    }
    *v22 = &i;
LABEL_19:
    ++v62;
    if ( v53 != ++v6 )
      goto LABEL_11;
LABEL_20:
    v24 = v58;
    v25 = a3[1];
    if ( v25 )
    {
LABEL_21:
      v26 = 0;
      while ( 1 )
      {
        if ( v26 >= v25 - 1 )
          goto LABEL_31;
        v27 = *(_BYTE *)(*a3 + v26);
        if ( !v62 )
          break;
        v50 = *((__int64 ***)s + v27 % v60);
        if ( v50 )
        {
          v51 = *v50;
          if ( v27 != *((_BYTE *)*v50 + 8) )
          {
            while ( *v51 )
            {
              v52 = *(_BYTE *)(*v51 + 8);
              v50 = (__int64 **)v51;
              if ( v27 % v60 != v52 % v60 )
                break;
              v51 = (__int64 *)*v51;
              if ( v27 == v52 )
                goto LABEL_69;
            }
            goto LABEL_30;
          }
LABEL_69:
          if ( v50 && *v50 )
          {
            v29 = ptr;
            v30 = v24 + 1;
            if ( *((_QWORD *)&v58 + 1) < (unsigned __int64)(v24 + 1) )
              goto LABEL_72;
            goto LABEL_29;
          }
        }
LABEL_30:
        ++v26;
        if ( !v25 )
          goto LABEL_31;
      }
      v28 = i;
      if ( !i )
        goto LABEL_30;
      while ( v27 != v28[8] )
      {
        v28 = *(_BYTE **)v28;
        if ( !v28 )
          goto LABEL_30;
      }
      v29 = ptr;
      v30 = v24 + 1;
      if ( *((_QWORD *)&v58 + 1) < (unsigned __int64)(v24 + 1) )
      {
LABEL_72:
        ptr = (void *)qvector_reserve(&ptr, v29, v30, 8);
        v24 = v58;
        v29 = ptr;
      }
LABEL_29:
      v29[v24] = v26;
      v24 = v58 + 1;
      *(_QWORD *)&v58 = v58 + 1;
      v25 = a3[1];
      goto LABEL_30;
    }
LABEL_31:
    if ( v24 )
    {
      v31 = 0;
      v32 = nullptr;
      do
      {
        v36 = ptr;
        v37 = *((_QWORD *)ptr + v31);
        if ( v32 )
        {
          while ( v32->m128i_i64[1] == v37 )
          {
            ++v31;
            v32->m128i_i64[1] = v37 + 1;
            if ( v31 == v24 )
              goto LABEL_56;
            v37 = v36[v31];
          }
        }
        v33 = a1[1];
        v34 = *a1;
        v35 = v33 + 1;
        if ( a1[2] < (unsigned __int64)(v33 + 1) )
        {
          v46 = qvector_reserve(a1, v34, v35, 16);
          *a1 = v46;
          v34 = v46;
          v33 = a1[1];
          v35 = v33 + 1;
        }
        ++v31;
        a1[1] = v35;
        v32 = (__m128i *)(16 * v33 + v34);
        *v32 = _mm_unpacklo_epi64((__m128i)v37, (__m128i)(v37 + 1));
      }
      while ( v31 != v24 );
    }
LABEL_56:
    v47 = i;
    while ( v47 )
    {
      v48 = v47;
      v47 = (_QWORD *)*v47;
      operator delete(v48, 0x10u);
    }
    goto LABEL_59;
  }
  v25 = a3[1];
  if ( v25 )
  {
    v24 = 0;
    goto LABEL_21;
  }
LABEL_59:
  memset(s, 0, 8 * v60);
  v62 = 0;
  i = nullptr;
  if ( s != &v65 )
    operator delete(s, 8 * v60);
  if ( ptr )
  {
    *(_QWORD *)&v58 = 0;
    qfree(ptr);
  }
  return v66 - __readfsqword(0x28u);
}
