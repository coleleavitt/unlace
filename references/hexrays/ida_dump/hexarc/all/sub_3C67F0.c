unsigned __int64 __fastcall sub_3C67F0(__int64 a1, double a2)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi
  _QWORD *v4; // rdi
  _QWORD *v5; // rdi
  _QWORD *exception; // rdi
  _QWORD *v7; // rdi
  int func_qty; // eax
  __int64 v9; // r14
  __int64 i; // rbx
  __int64 *v11; // rax
  __int64 v12; // r13
  unsigned __int64 v13; // rbp
  __int64 v14; // rax
  unsigned __int64 *v15; // rdx
  __int64 v16; // rax
  unsigned __int64 *v17; // rdx
  __m128i v18; // xmm0
  __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned __int64 v21; // r13
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  __m128i v26; // xmm0
  char v27; // si
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  __m128i v31; // xmm0
  __int64 v32; // rcx
  unsigned __int64 v33; // rbp
  __int64 v34; // rax
  unsigned __int64 v35; // rbx
  __m128i v36; // xmm0
  __int64 v37; // rax
  __int64 *v38; // rax
  __int64 v39; // rcx
  char j; // r15
  unsigned __int64 v41; // rbx
  __int64 v42; // rax
  __m128i v43; // xmm0
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  __m128i v49; // xmm0
  unsigned __int64 *v50; // [rsp+8h] [rbp-60h]
  __int64 v51; // [rsp+8h] [rbp-60h]
  unsigned __int64 *v52; // [rsp+8h] [rbp-60h]
  unsigned __int64 v53; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v54; // [rsp+28h] [rbp-40h]

  v54 = __readfsqword(0x28u);
  func_qty = get_func_qty(a2);
  if ( func_qty > 0 )
  {
    v9 = (unsigned int)(func_qty - 1);
    for ( i = 0; ; ++i )
    {
      v11 = (__int64 *)getn_func(i);
      if ( v11 )
      {
        v12 = *v11;
        v13 = sub_2AED00(*v11, 0);
        if ( v13 != -1 )
          break;
      }
LABEL_16:
      if ( v9 == i )
        goto LABEL_17;
    }
    v14 = ea2node(v12);
    v53 = v13 + 1;
    netnode_supset(v14, 2, &v53, 8, 65);
    if ( netnode_valobj(v13, 0, 0) >= 0 )
    {
      v53 = 0;
      v23 = netnode_valobj(v13, &v53, 8);
      v24 = -1;
      if ( v23 > 0 )
        v24 = v53;
      v53 = v24;
      netnode_set(v13, &v53, 8);
      v15 = *(unsigned __int64 **)(a1 + 1432);
      if ( v15 )
      {
LABEL_8:
        if ( *(_QWORD *)(a1 + 1440) )
        {
          v27 = 1;
          v28 = *v15 & 0xFFFFFFFFFFFFFFFCLL;
          if ( (*(_BYTE *)v28 & 2) == 0 )
          {
            v29 = *(_QWORD *)(v28 + 24);
            v20 = v28 + 24;
            if ( v13 >= v29 )
              goto LABEL_28;
LABEL_26:
            v30 = *(_QWORD *)(v28 + 8);
            v27 = 1;
            if ( (*(_BYTE *)v30 & 2) != 0 )
            {
LABEL_30:
              v15 = (unsigned __int64 *)v28;
            }
            else
            {
              while ( 1 )
              {
                v28 = v30;
                v29 = *(_QWORD *)(v30 + 24);
                v20 = v30 + 24;
                if ( v13 < v29 )
                  goto LABEL_26;
LABEL_28:
                if ( v29 >= v13 )
                  break;
                v30 = *(_QWORD *)(v28 + 16);
                v27 = 0;
                if ( (*(_BYTE *)v30 & 2) != 0 )
                  goto LABEL_30;
              }
              if ( v28 )
              {
LABEL_15:
                *(_QWORD *)(v20 + 8) = v12;
                goto LABEL_16;
              }
              v15 = nullptr;
            }
          }
          v52 = v15;
          v16 = qalloc(40);
          if ( !v16 )
          {
            exception = __cxa_allocate_exception(8u);
            *exception = (char *)&`vtable for'std::bad_alloc + 16;
            __cxa_throw(
              exception,
              (struct type_info *)&`typeinfo for'std::bad_alloc,
              (void (*)(void *))&std::bad_alloc::~bad_alloc);
          }
          v17 = v52;
          *(_QWORD *)(v16 + 32) = 0;
          *(_OWORD *)v16 = 0;
          *(_OWORD *)(v16 + 16) = 0;
          *(_QWORD *)(v16 + 24) = v13;
          *(_QWORD *)v16 = (unsigned __int64)v52 & 0xFFFFFFFFFFFFFFFCLL;
          v31 = _mm_loadl_epi64((const __m128i *)(a1 + 1432));
          *(_QWORD *)v16 = (unsigned __int64)v52 & 0xFFFFFFFFFFFFFFFCLL | 1;
          *(__m128i *)(v16 + 8) = _mm_unpacklo_epi64(v31, v31);
          if ( *(unsigned __int64 **)(a1 + 1432) != v52 )
          {
            if ( !v27 )
            {
              v52[2] = v16;
              v32 = *(_QWORD *)(a1 + 1432);
              if ( *(unsigned __int64 **)(v32 + 16) == v52 )
                *(_QWORD *)(v32 + 16) = v16;
              goto LABEL_13;
            }
LABEL_11:
            v17[1] = v16;
            v19 = *(_QWORD *)(a1 + 1432);
            if ( *(unsigned __int64 **)(v19 + 8) == v17 )
              *(_QWORD *)(v19 + 8) = v16;
LABEL_13:
            v51 = v16;
            sub_83A50((_QWORD *)(a1 + 1432), (__int64 *)v16);
            v16 = v51;
LABEL_14:
            ++*(_QWORD *)(a1 + 1440);
            v20 = v16 + 24;
            goto LABEL_15;
          }
LABEL_45:
          *v17 = v16 & 0xFFFFFFFFFFFFFFFCLL | *v17 & 3;
          *(_QWORD *)(*(_QWORD *)(a1 + 1432) + 8LL) = v16;
          *(_QWORD *)(*(_QWORD *)(a1 + 1432) + 16LL) = v16;
          v39 = *(_QWORD *)v16 & 2LL;
          *(_QWORD *)v16 &= ~1uLL;
          *(_QWORD *)v16 = v39 | *(_QWORD *)(a1 + 1432) & 0xFFFFFFFFFFFFFFFCLL;
          goto LABEL_14;
        }
LABEL_9:
        v50 = v15;
        v16 = qalloc(40);
        if ( !v16 )
        {
          v3 = __cxa_allocate_exception(8u);
          *v3 = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            v3,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        v17 = v50;
        *(_QWORD *)(v16 + 32) = 0;
        *(_OWORD *)v16 = 0;
        *(_OWORD *)(v16 + 16) = 0;
        *(_QWORD *)(v16 + 24) = v13;
        *(_QWORD *)v16 = (unsigned __int64)v50 & 0xFFFFFFFFFFFFFFFCLL;
        v18 = _mm_loadl_epi64((const __m128i *)(a1 + 1432));
        *(_QWORD *)v16 = (unsigned __int64)v50 & 0xFFFFFFFFFFFFFFFCLL | 1;
        *(__m128i *)(v16 + 8) = _mm_unpacklo_epi64(v18, v18);
        if ( *(unsigned __int64 **)(a1 + 1432) != v50 )
          goto LABEL_11;
        goto LABEL_45;
      }
    }
    else
    {
      v15 = *(unsigned __int64 **)(a1 + 1432);
      if ( v15 )
        goto LABEL_8;
    }
    v25 = qalloc(40);
    v26 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v25, (__m128i)(unsigned __int64)v25);
    if ( !v25 )
    {
      v7 = __cxa_allocate_exception(8u);
      *v7 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v7, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v25 + 32) = 0;
    *(_OWORD *)(v25 + 16) = 0;
    *(__m128i *)(v25 + 8) = v26;
    *(_QWORD *)v25 = v25 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(_QWORD *)(a1 + 1432) = v25;
    *(_QWORD *)v25 = v25 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v25 & 3LL;
    *(__m128i *)(*(_QWORD *)(a1 + 1432) + 8LL) = _mm_unpacklo_epi64(
                                                   (__m128i)*(unsigned __int64 *)(a1 + 1432),
                                                   (__m128i)*(unsigned __int64 *)(a1 + 1432));
    **(_QWORD **)(a1 + 1432) &= ~1uLL;
    **(_QWORD **)(a1 + 1432) |= 2uLL;
    v15 = *(unsigned __int64 **)(a1 + 1432);
    goto LABEL_9;
  }
LABEL_17:
  netnode_check(&v53, "$ vd interr", 0, 0);
  v21 = v53;
  if ( v53 != -1 )
  {
    v33 = *(_QWORD *)(a1 + 1432);
    if ( v33 )
    {
      if ( *(_QWORD *)(a1 + 1440) )
      {
        j = 1;
        v41 = *(_QWORD *)v33 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (*(_BYTE *)v41 & 2) == 0 )
        {
          v45 = *(_QWORD *)(v41 + 24);
          v38 = (__int64 *)(v41 + 24);
          if ( v53 >= v45 )
            goto LABEL_58;
LABEL_55:
          v46 = *(_QWORD *)(v41 + 8);
          for ( j = 1; ; j = 0 )
          {
            if ( (*(_BYTE *)v46 & 2) != 0 )
            {
              v33 = v41;
              goto LABEL_49;
            }
            v41 = v46;
            v45 = *(_QWORD *)(v46 + 24);
            v38 = (__int64 *)(v46 + 24);
            if ( v53 < v45 )
              goto LABEL_55;
LABEL_58:
            if ( v45 >= v53 )
              break;
            v46 = *(_QWORD *)(v41 + 16);
          }
          if ( v41 )
            goto LABEL_44;
          v33 = 0;
        }
LABEL_49:
        v42 = qalloc(40);
        v35 = v42;
        if ( !v42 )
        {
          v4 = __cxa_allocate_exception(8u);
          *v4 = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            v4,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_QWORD *)(v42 + 32) = 0;
        *(_OWORD *)(v42 + 16) = 0;
        *(_OWORD *)v42 = 0;
        *(_QWORD *)(v42 + 24) = v21;
        *(_QWORD *)v42 = v33 & 0xFFFFFFFFFFFFFFFCLL;
        v43 = _mm_loadl_epi64((const __m128i *)(a1 + 1432));
        *(_QWORD *)v42 = v33 & 0xFFFFFFFFFFFFFFFCLL | 1;
        *(__m128i *)(v42 + 8) = _mm_unpacklo_epi64(v43, v43);
        if ( *(_QWORD *)(a1 + 1432) != v33 )
        {
          if ( !j )
          {
            *(_QWORD *)(v33 + 16) = v42;
            v44 = *(_QWORD *)(a1 + 1432);
            if ( *(_QWORD *)(v44 + 16) == v33 )
              *(_QWORD *)(v44 + 16) = v35;
            goto LABEL_42;
          }
LABEL_40:
          *(_QWORD *)(v33 + 8) = v35;
          v37 = *(_QWORD *)(a1 + 1432);
          if ( *(_QWORD *)(v37 + 8) == v33 )
            *(_QWORD *)(v37 + 8) = v35;
LABEL_42:
          sub_83A50((_QWORD *)(a1 + 1432), (__int64 *)v35);
LABEL_43:
          ++*(_QWORD *)(a1 + 1440);
          v38 = (__int64 *)(v35 + 24);
LABEL_44:
          v38[1] = -1;
          return v54 - __readfsqword(0x28u);
        }
LABEL_61:
        *(_QWORD *)v33 = v35 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v33 & 3LL;
        *(_QWORD *)(*(_QWORD *)(a1 + 1432) + 8LL) = v35;
        *(_QWORD *)(*(_QWORD *)(a1 + 1432) + 16LL) = v35;
        v47 = *(_QWORD *)v35 & 2LL;
        *(_QWORD *)v35 &= ~1uLL;
        *(_QWORD *)v35 = v47 | *(_QWORD *)(a1 + 1432) & 0xFFFFFFFFFFFFFFFCLL;
        goto LABEL_43;
      }
    }
    else
    {
      v48 = qalloc(40);
      v49 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v48, (__m128i)(unsigned __int64)v48);
      if ( !v48 )
      {
        v5 = __cxa_allocate_exception(8u);
        *v5 = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          v5,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_QWORD *)(v48 + 32) = 0;
      *(_OWORD *)(v48 + 16) = 0;
      *(__m128i *)(v48 + 8) = v49;
      *(_QWORD *)v48 = v48 & 0xFFFFFFFFFFFFFFFCLL | 2;
      *(_QWORD *)(a1 + 1432) = v48;
      *(_QWORD *)v48 = v48 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v48 & 3LL;
      *(__m128i *)(*(_QWORD *)(a1 + 1432) + 8LL) = _mm_unpacklo_epi64(
                                                     (__m128i)*(unsigned __int64 *)(a1 + 1432),
                                                     (__m128i)*(unsigned __int64 *)(a1 + 1432));
      **(_QWORD **)(a1 + 1432) &= ~1uLL;
      **(_QWORD **)(a1 + 1432) |= 2uLL;
      v33 = *(_QWORD *)(a1 + 1432);
    }
    v34 = qalloc(40);
    v35 = v34;
    if ( !v34 )
    {
      v2 = __cxa_allocate_exception(8u);
      *v2 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v2, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v34 + 32) = 0;
    *(_OWORD *)(v34 + 16) = 0;
    *(_OWORD *)v34 = 0;
    *(_QWORD *)(v34 + 24) = v21;
    *(_QWORD *)v34 = v33 & 0xFFFFFFFFFFFFFFFCLL;
    v36 = _mm_loadl_epi64((const __m128i *)(a1 + 1432));
    *(_QWORD *)v34 = v33 & 0xFFFFFFFFFFFFFFFCLL | 1;
    *(__m128i *)(v34 + 8) = _mm_unpacklo_epi64(v36, v36);
    if ( *(_QWORD *)(a1 + 1432) != v33 )
      goto LABEL_40;
    goto LABEL_61;
  }
  return v54 - __readfsqword(0x28u);
}
