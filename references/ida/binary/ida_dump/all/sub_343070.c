unsigned __int64 __fastcall sub_343070(__m128i *a1, unsigned __int64 a2, int a3)
{
  _QWORD *exception; // rdi
  _QWORD *v4; // rdi
  _QWORD *v5; // rdi
  __int64 v7; // r12
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rax
  _QWORD *v10; // rbx
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __m128i v14; // xmm0
  __int64 *v15; // rdx
  const char *v16; // rbx
  unsigned __int64 v18; // rcx
  __int64 v19; // rsi
  int v20; // edx
  char i; // r15
  __int64 v22; // rax
  __m128i v23; // xmm0
  unsigned __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __m128i v28; // xmm0
  unsigned __int64 v29; // [rsp+18h] [rbp-40h]

  v7 = a3;
  v29 = __readfsqword(0x28u);
  v8 = a1->m128i_i64[0];
  if ( !a1->m128i_i64[0] )
  {
    v27 = qalloc();
    v28 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v27, (__m128i)(unsigned __int64)v27);
    if ( !v27 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v27 + 32) = 0;
    *(_OWORD *)(v27 + 16) = 0;
    *(__m128i *)(v27 + 8) = v28;
    *(_QWORD *)v27 = v27 & 0xFFFFFFFFFFFFFFFCLL | 2;
    a1->m128i_i64[0] = v27;
    *(_QWORD *)v27 = v27 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v27 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v8 = a1->m128i_i64[0];
    goto LABEL_5;
  }
  v9 = *(_QWORD *)v8 & 0xFFFFFFFFFFFFFFFCLL;
  v10 = (_QWORD *)v9;
  if ( v9 )
  {
    v11 = *(_QWORD *)v8 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v9 & 2) != 0 )
      goto LABEL_4;
    while ( 1 )
    {
      v18 = *(_QWORD *)(v11 + 24);
      v19 = v11 + 24;
      if ( a2 >= v18 )
      {
        if ( v18 >= a2 )
        {
          if ( v8 != v11 )
            goto LABEL_19;
LABEL_4:
          if ( !a1->m128i_i64[1] )
          {
LABEL_5:
            v12 = qalloc();
            v13 = v12;
            if ( !v12 )
            {
              v5 = __cxa_allocate_exception(8u);
              *v5 = (char *)&`vtable for'std::bad_alloc + 16;
              __cxa_throw(
                v5,
                (struct type_info *)&`typeinfo for'std::bad_alloc,
                (void (*)(void *))&std::bad_alloc::~bad_alloc);
            }
            *(_QWORD *)(v12 + 32) = 0;
            *(_OWORD *)(v12 + 16) = 0;
            *(_OWORD *)v12 = 0;
            *(_QWORD *)(v12 + 24) = a2;
            *(_QWORD *)v12 = v8 & 0xFFFFFFFFFFFFFFFCLL;
            v14 = _mm_loadl_epi64(a1);
            *(_QWORD *)v12 = v8 & 0xFFFFFFFFFFFFFFFCLL | 1;
            *(__m128i *)(v12 + 8) = _mm_unpacklo_epi64(v14, v14);
            if ( a1->m128i_i64[0] != v8 )
            {
LABEL_7:
              *(_QWORD *)(v8 + 8) = v13;
              if ( *(_QWORD *)(a1->m128i_i64[0] + 8) == v8 )
                *(_QWORD *)(a1->m128i_i64[0] + 8) = v13;
              goto LABEL_9;
            }
LABEL_34:
            *(_QWORD *)v8 = v13 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v8 & 3LL;
            *(_QWORD *)(a1->m128i_i64[0] + 8) = v13;
            *(_QWORD *)(a1->m128i_i64[0] + 16) = v13;
            v26 = *(_QWORD *)v13 & 2LL;
            *(_QWORD *)v13 &= ~1uLL;
            *(_QWORD *)v13 = v26 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
            goto LABEL_10;
          }
LABEL_21:
          i = 1;
          if ( (*(_BYTE *)v9 & 2) == 0 )
          {
            v24 = *(_QWORD *)(v9 + 24);
            v15 = v10 + 3;
            if ( a2 >= v24 )
              goto LABEL_31;
LABEL_28:
            v25 = (_QWORD *)v10[1];
            for ( i = 1; ; i = 0 )
            {
              if ( (*(_BYTE *)v25 & 2) != 0 )
              {
                v8 = (unsigned __int64)v10;
                goto LABEL_22;
              }
              v10 = v25;
              v24 = v25[3];
              v15 = v10 + 3;
              if ( a2 < v24 )
                goto LABEL_28;
LABEL_31:
              if ( v24 >= a2 )
                break;
              v25 = (_QWORD *)v10[2];
            }
            if ( v10 )
              goto LABEL_11;
            v8 = 0;
          }
LABEL_22:
          v22 = qalloc();
          v13 = v22;
          if ( !v22 )
          {
            v4 = __cxa_allocate_exception(8u);
            *v4 = (char *)&`vtable for'std::bad_alloc + 16;
            __cxa_throw(
              v4,
              (struct type_info *)&`typeinfo for'std::bad_alloc,
              (void (*)(void *))&std::bad_alloc::~bad_alloc);
          }
          *(_QWORD *)(v22 + 32) = 0;
          *(_OWORD *)(v22 + 16) = 0;
          *(_OWORD *)v22 = 0;
          *(_QWORD *)(v22 + 24) = a2;
          *(_QWORD *)v22 = v8 & 0xFFFFFFFFFFFFFFFCLL;
          v23 = _mm_loadl_epi64(a1);
          *(_QWORD *)v22 = v8 & 0xFFFFFFFFFFFFFFFCLL | 1;
          *(__m128i *)(v22 + 8) = _mm_unpacklo_epi64(v23, v23);
          if ( a1->m128i_i64[0] == v8 )
            goto LABEL_34;
          if ( i )
            goto LABEL_7;
          *(_QWORD *)(v8 + 16) = v22;
          if ( *(_QWORD *)(a1->m128i_i64[0] + 16) == v8 )
            *(_QWORD *)(a1->m128i_i64[0] + 16) = v22;
LABEL_9:
          sub_342C90(a1, (__int64 *)v13);
LABEL_10:
          ++a1->m128i_i64[1];
          v15 = (__int64 *)(v13 + 24);
LABEL_11:
          *((_DWORD *)v15 + 2) |= 1 << v7;
          v16 = off_4E5A00[v7];
          getseg();
          get_segm_name();
          sub_33C190(
            (__int64)"AUTOHIDE REGISTRY\n"
                     "The decompiler assumes that the segment '%s' is read-only because of its %s.\n"
                     "All data references to the segment will be replaced by constant values.\n"
                     "This may lead to drastic changes in the decompiler output.\n"
                     "If the segment is not read-only, please change the segment %s.\n"
                     "\n"
                     "In general, the decompiler checks the segment permissions, class, and name\n"
                     "to determine if it is read-only.\n",
            s1,
            v16,
            v16);
          return v29 - __readfsqword(0x28u);
        }
        v11 = *(_QWORD *)(v11 + 16);
      }
      else
      {
        v11 = *(_QWORD *)(v11 + 8);
      }
      if ( (*(_BYTE *)v11 & 2) != 0 )
        goto LABEL_4;
    }
  }
  v19 = 24;
LABEL_19:
  v20 = *(_DWORD *)(v19 + 8);
  if ( !_bittest(&v20, v7) )
  {
    if ( !a1->m128i_i64[1] )
      goto LABEL_5;
    goto LABEL_21;
  }
  return v29 - __readfsqword(0x28u);
}
