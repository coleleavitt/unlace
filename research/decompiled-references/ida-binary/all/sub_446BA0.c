__int64 __fastcall sub_446BA0(__int64 (__fastcall ***a1)(_QWORD, __int64), __int64 *a2, __int64 a3)
{
  QT::QAbstractItemView *v3; // rbp
  __int64 *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r15
  int v8; // ecx
  __int64 **v9; // r10
  unsigned __int64 v10; // r14
  __int64 *v11; // rax
  int v12; // esi
  __int64 v13; // rax
  _QWORD *v14; // rbx
  __int64 v15; // r14
  unsigned int v16; // r13d
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // r15
  int v20; // ecx
  _DWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rax
  void *v25; // rdx
  __int64 v26; // rax
  __m128i v27; // xmm0
  __m128i v28; // xmm0
  _QWORD *v29; // rbx
  void *v30; // rdi
  _DWORD *v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // r13
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r9
  _QWORD *v39; // r15
  __int64 v40; // r14
  void ***v41; // rax
  _QWORD *v42; // rdx
  unsigned __int64 v43; // r8
  size_t v44; // r14
  int *v45; // rsi
  unsigned __int64 v46; // r9
  int *v47; // rcx
  unsigned __int64 v48; // rdx
  void ***v49; // rax
  int *v50; // rdx
  __int64 **v51; // r10
  __int64 *v52; // rax
  int v53; // esi
  __int64 v54; // rax
  size_t n; // [rsp+8h] [rbp-110h]
  __int64 nc; // [rsp+8h] [rbp-110h]
  __int64 nb; // [rsp+8h] [rbp-110h]
  __int64 na; // [rsp+8h] [rbp-110h]
  unsigned __int64 v59; // [rsp+10h] [rbp-108h]
  unsigned __int64 v61; // [rsp+30h] [rbp-E8h]
  unsigned __int64 v62; // [rsp+30h] [rbp-E8h]
  _QWORD *s; // [rsp+40h] [rbp-D8h]
  unsigned __int64 v65; // [rsp+48h] [rbp-D0h]
  void *v66; // [rsp+50h] [rbp-C8h] BYREF
  unsigned __int64 v67; // [rsp+58h] [rbp-C0h]
  int v68; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v69; // [rsp+68h] [rbp-B0h]
  _QWORD v70[2]; // [rsp+70h] [rbp-A8h] BYREF
  void *v71; // [rsp+80h] [rbp-98h]
  __m128i v72; // [rsp+88h] [rbp-90h] BYREF
  void *v73; // [rsp+98h] [rbp-80h]
  __m128i v74; // [rsp+A0h] [rbp-78h] BYREF
  void *v75; // [rsp+B0h] [rbp-68h]
  __m128i v76; // [rsp+B8h] [rbp-60h] BYREF
  __int64 v77; // [rsp+C8h] [rbp-50h]
  int v78; // [rsp+D0h] [rbp-48h]
  char v79; // [rsp+D4h] [rbp-44h]
  unsigned __int64 v80; // [rsp+D8h] [rbp-40h]

  v3 = *(QT::QAbstractItemView **)a3;
  v80 = __readfsqword(0x28u);
  v68 = 1065353216;
  v65 = 1;
  v66 = nullptr;
  v67 = 0;
  v69 = 0;
  v70[0] = 0;
  s = v70;
  v4 = *(__int64 **)(a3 + 200);
  v5 = *v4;
  n = *v4 + 16 * v4[1];
  if ( *v4 == n )
  {
    v16 = 0;
    goto LABEL_34;
  }
  do
  {
    v6 = sub_443320(v3, v5);
    v7 = v6;
    if ( !v6 )
      goto LABEL_11;
    v8 = *(_DWORD *)(v6 + 84);
    if ( v67 )
    {
      v59 = v8;
      v9 = (__int64 **)s[v8 % v65];
      v10 = v8 % v65;
      if ( !v9 )
        goto LABEL_41;
      v11 = *v9;
      if ( *((_DWORD *)*v9 + 2) != v8 )
      {
        while ( *v11 )
        {
          v12 = *(_DWORD *)(*v11 + 8);
          v9 = (__int64 **)v11;
          if ( v12 % v65 != v8 % v65 )
            break;
          v11 = (__int64 *)*v11;
          if ( v12 == v8 )
            goto LABEL_9;
        }
LABEL_41:
        v33 = operator new(0x10u);
        *(_QWORD *)v33 = 0;
        v34 = (_QWORD *)v33;
        v35 = v67;
        *(_DWORD *)(v33 + 8) = *(_DWORD *)(v7 + 84);
        if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                                (std::__detail::_Prime_rehash_policy *)&v68,
                                v65,
                                v35,
                                1u) )
        {
          v43 = v36;
          if ( v36 == 1 )
          {
            v70[0] = 0;
            v39 = v70;
          }
          else
          {
            if ( v36 >> 60 )
            {
              if ( v36 >> 61 )
                sub_162118(&v68, v65, v36, v37, v36 >> 61, v38);
              std::__throw_bad_alloc();
            }
            v44 = 8 * v36;
            v61 = v36;
            v39 = (_QWORD *)operator new(8 * v36);
            memset(v39, 0, v44);
            v43 = v61;
          }
          v45 = (int *)v66;
          v46 = 0;
          v66 = nullptr;
          while ( v45 )
          {
            while ( 1 )
            {
              v47 = v45;
              v45 = *(int **)v45;
              v48 = v47[2] % v43;
              v49 = (void ***)&v39[v48];
              if ( !*v49 )
                break;
              *(_QWORD *)v47 = **v49;
              **v49 = v47;
              if ( !v45 )
                goto LABEL_52;
            }
            *(_QWORD *)v47 = v66;
            v66 = v47;
            *v49 = &v66;
            if ( *(_QWORD *)v47 )
              v39[v46] = v47;
            v46 = v48;
          }
LABEL_52:
          if ( s != v70 )
          {
            v62 = v43;
            operator delete(s, 8 * v65);
            v43 = v62;
          }
          v65 = v43;
          s = v39;
          v40 = v59 % v43;
          v41 = (void ***)&v39[v40];
          v42 = (_QWORD *)v39[v40];
          if ( !v42 )
            goto LABEL_55;
LABEL_43:
          *v34 = *v42;
          **v41 = v34;
        }
        else
        {
          v39 = s;
          v40 = v10;
          v41 = (void ***)&s[v40];
          v42 = (_QWORD *)s[v40];
          if ( v42 )
            goto LABEL_43;
LABEL_55:
          v50 = (int *)v66;
          v66 = v34;
          *v34 = v50;
          if ( v50 )
          {
            v39[v50[2] % v65] = v34;
            v41 = (void ***)&s[v40];
          }
          *v41 = &v66;
        }
        ++v67;
        goto LABEL_11;
      }
LABEL_9:
      if ( !v9 || !*v9 )
        goto LABEL_41;
    }
    else
    {
      v32 = v66;
      if ( !v66 )
      {
LABEL_40:
        v59 = v8;
        v10 = v8 % v65;
        goto LABEL_41;
      }
      while ( v32[2] != v8 )
      {
        v32 = *(_DWORD **)v32;
        if ( !v32 )
          goto LABEL_40;
      }
    }
LABEL_11:
    v5 += 16;
  }
  while ( n != v5 );
  v13 = *(_QWORD *)(a3 + 200);
  v14 = *(_QWORD **)v13;
  v15 = *(_QWORD *)v13 + 16LL * *(_QWORD *)(v13 + 8);
  if ( v15 == *(_QWORD *)v13 )
  {
    v29 = v66;
    v16 = 0;
    goto LABEL_33;
  }
  v16 = 0;
  while ( 2 )
  {
    while ( 2 )
    {
      v17 = sub_443320(v3, (__int64)v14);
      if ( v17 )
      {
        v16 |= (**a1)(a1, v17);
        goto LABEL_15;
      }
      v18 = sub_446AE0(v3, v14);
      v19 = v18;
      if ( !v18 )
      {
LABEL_15:
        v14 += 2;
        if ( (_QWORD *)v15 == v14 )
          goto LABEL_31;
        continue;
      }
      break;
    }
    v20 = *(_DWORD *)(v18 + 80);
    if ( !v67 )
    {
      v21 = v66;
      if ( !v66 )
        goto LABEL_22;
      while ( v20 != v21[2] )
      {
        v21 = *(_DWORD **)v21;
        if ( !v21 )
          goto LABEL_22;
      }
      goto LABEL_15;
    }
    v51 = (__int64 **)s[v20 % v65];
    if ( !v51 )
      goto LABEL_22;
    v52 = *v51;
    if ( v20 == *((_DWORD *)*v51 + 2) )
    {
LABEL_66:
      if ( !v51 || !*v51 )
        goto LABEL_22;
      goto LABEL_15;
    }
    while ( *v52 )
    {
      v53 = *(_DWORD *)(*v52 + 8);
      v51 = (__int64 **)v52;
      if ( v20 % v65 != v53 % v65 )
        break;
      v52 = (__int64 *)*v52;
      if ( v20 == v53 )
        goto LABEL_66;
    }
LABEL_22:
    v71 = nullptr;
    v72 = 0;
    if ( *(_QWORD *)(v19 + 8) )
    {
      na = *(_QWORD *)(v19 + 8);
      v71 = (void *)qalloc_or_throw(na);
      v72.m128i_i64[1] = na;
      memcpy(v71, *(const void **)v19, na);
      v72.m128i_i64[0] = na;
    }
    v73 = nullptr;
    v74 = 0;
    if ( *(_QWORD *)(v19 + 32) )
    {
      nb = *(_QWORD *)(v19 + 32);
      v73 = (void *)qalloc_or_throw(nb);
      v74.m128i_i64[1] = nb;
      memcpy(v73, *(const void **)(v19 + 24), nb);
      v74.m128i_i64[0] = nb;
    }
    v75 = nullptr;
    v76 = 0;
    if ( *(_QWORD *)(v19 + 56) )
    {
      nc = *(_QWORD *)(v19 + 56);
      v75 = (void *)qalloc_or_throw(nc);
      v76.m128i_i64[1] = nc;
      memcpy(v75, *(const void **)(v19 + 48), nc);
      v76.m128i_i64[0] = nc;
    }
    v22 = a2[1];
    v23 = *a2;
    v77 = *(_QWORD *)(v19 + 72);
    v78 = *(_DWORD *)(v19 + 80);
    v79 = *(_BYTE *)(v19 + 84);
    if ( a2[2] < (unsigned __int64)(v22 + 1) )
    {
      v54 = qvector_reserve(a2, v23, v22 + 1, 88);
      *a2 = v54;
      v22 = a2[1];
      v23 = v54;
    }
    v14 += 2;
    v24 = 11 * v22;
    v25 = v71;
    v26 = v23 + 8 * v24;
    *(__m128i *)(v26 + 8) = _mm_loadu_si128(&v72);
    *(_QWORD *)v26 = v25;
    v27 = _mm_load_si128(&v74);
    *(_QWORD *)(v26 + 24) = v73;
    *(__m128i *)(v26 + 32) = v27;
    v28 = _mm_loadu_si128(&v76);
    *(_QWORD *)(v26 + 48) = v75;
    *(__m128i *)(v26 + 56) = v28;
    *(_QWORD *)(v26 + 72) = v77;
    *(_DWORD *)(v26 + 80) = v78;
    *(_BYTE *)(v26 + 84) = v79;
    ++a2[1];
    if ( (_QWORD *)v15 != v14 )
      continue;
    break;
  }
LABEL_31:
  v29 = v66;
LABEL_33:
  while ( v29 )
  {
    v30 = v29;
    v29 = (_QWORD *)*v29;
    operator delete(v30, 0x10u);
  }
LABEL_34:
  memset(s, 0, 8 * v65);
  v67 = 0;
  v66 = nullptr;
  if ( s != v70 )
    operator delete(s, 8 * v65);
  return v16;
}
