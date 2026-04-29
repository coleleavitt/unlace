unsigned __int64 __fastcall sub_33E170(__m128i *a1, unsigned __int64 a2, int a3)
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
  __int64 v17; // rax
  const char *v18; // rsi
  unsigned __int64 v20; // rcx
  __int64 v21; // rsi
  int v22; // edx
  char i; // r15
  __int64 v24; // rax
  __m128i v25; // xmm0
  unsigned __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __m128i v30; // xmm0
  const char *v31; // [rsp+0h] [rbp-58h] BYREF
  __int128 v32; // [rsp+8h] [rbp-50h]
  unsigned __int64 v33; // [rsp+18h] [rbp-40h]

  v7 = a3;
  v33 = __readfsqword(0x28u);
  v8 = a1->m128i_i64[0];
  if ( !a1->m128i_i64[0] )
  {
    v29 = qalloc(40);
    v30 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v29, (__m128i)(unsigned __int64)v29);
    if ( !v29 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v29 + 32) = 0;
    *(_OWORD *)(v29 + 16) = 0;
    *(__m128i *)(v29 + 8) = v30;
    *(_QWORD *)v29 = v29 & 0xFFFFFFFFFFFFFFFCLL | 2;
    a1->m128i_i64[0] = v29;
    *(_QWORD *)v29 = v29 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v29 & 3LL;
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
      v20 = *(_QWORD *)(v11 + 24);
      v21 = v11 + 24;
      if ( a2 >= v20 )
      {
        if ( v20 >= a2 )
        {
          if ( v8 != v11 )
            goto LABEL_23;
LABEL_4:
          if ( !a1->m128i_i64[1] )
          {
LABEL_5:
            v12 = qalloc(40);
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
LABEL_40:
            *(_QWORD *)v8 = v13 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v8 & 3LL;
            *(_QWORD *)(a1->m128i_i64[0] + 8) = v13;
            *(_QWORD *)(a1->m128i_i64[0] + 16) = v13;
            v28 = *(_QWORD *)v13 & 2LL;
            *(_QWORD *)v13 &= ~1uLL;
            *(_QWORD *)v13 = v28 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
            goto LABEL_10;
          }
LABEL_25:
          i = 1;
          if ( (*(_BYTE *)v9 & 2) == 0 )
          {
            v26 = *(_QWORD *)(v9 + 24);
            v15 = v10 + 3;
            if ( a2 >= v26 )
              goto LABEL_35;
LABEL_32:
            v27 = (_QWORD *)v10[1];
            for ( i = 1; ; i = 0 )
            {
              if ( (*(_BYTE *)v27 & 2) != 0 )
              {
                v8 = (unsigned __int64)v10;
                goto LABEL_26;
              }
              v10 = v27;
              v26 = v27[3];
              v15 = v10 + 3;
              if ( a2 < v26 )
                goto LABEL_32;
LABEL_35:
              if ( v26 >= a2 )
                break;
              v27 = (_QWORD *)v10[2];
            }
            if ( v10 )
              goto LABEL_11;
            v8 = 0;
          }
LABEL_26:
          v24 = qalloc(40);
          v13 = v24;
          if ( !v24 )
          {
            v4 = __cxa_allocate_exception(8u);
            *v4 = (char *)&`vtable for'std::bad_alloc + 16;
            __cxa_throw(
              v4,
              (struct type_info *)&`typeinfo for'std::bad_alloc,
              (void (*)(void *))&std::bad_alloc::~bad_alloc);
          }
          *(_QWORD *)(v24 + 32) = 0;
          *(_OWORD *)(v24 + 16) = 0;
          *(_OWORD *)v24 = 0;
          *(_QWORD *)(v24 + 24) = a2;
          *(_QWORD *)v24 = v8 & 0xFFFFFFFFFFFFFFFCLL;
          v25 = _mm_loadl_epi64(a1);
          *(_QWORD *)v24 = v8 & 0xFFFFFFFFFFFFFFFCLL | 1;
          *(__m128i *)(v24 + 8) = _mm_unpacklo_epi64(v25, v25);
          if ( a1->m128i_i64[0] == v8 )
            goto LABEL_40;
          if ( i )
            goto LABEL_7;
          *(_QWORD *)(v8 + 16) = v24;
          if ( *(_QWORD *)(a1->m128i_i64[0] + 16) == v8 )
            *(_QWORD *)(a1->m128i_i64[0] + 16) = v24;
LABEL_9:
          sub_33DD90(a1, (__int64 *)v13);
LABEL_10:
          ++a1->m128i_i64[1];
          v15 = (__int64 *)(v13 + 24);
LABEL_11:
          *((_DWORD *)v15 + 2) |= 1 << v7;
          v31 = nullptr;
          v16 = off_4C6120[v7];
          v32 = 0;
          v17 = getseg(a2);
          if ( get_segm_name(&v31, v17, 0) <= 0 && v31 )
          {
            *(_QWORD *)&v32 = 0;
            qfree(v31);
            v31 = nullptr;
            *((_QWORD *)&v32 + 1) = 0;
          }
          v18 = s1;
          if ( (_QWORD)v32 )
            v18 = v31;
          sub_337280(
            (__int64)"AUTOHIDE REGISTRY\n"
                     "The decompiler assumes that the segment '%s' is read-only because of its %s.\n"
                     "All data references to the segment will be replaced by constant values.\n"
                     "This may lead to drastic changes in the decompiler output.\n"
                     "If the segment is not read-only, please change the segment %s.\n"
                     "\n"
                     "In general, the decompiler checks the segment permissions, class, and name\n"
                     "to determine if it is read-only.\n",
            v18,
            v16,
            v16);
          if ( v31 )
          {
            *(_QWORD *)&v32 = 0;
            qfree(v31);
          }
          return v33 - __readfsqword(0x28u);
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
  v21 = 24;
LABEL_23:
  v22 = *(_DWORD *)(v21 + 8);
  if ( !_bittest(&v22, v7) )
  {
    if ( !a1->m128i_i64[1] )
      goto LABEL_5;
    goto LABEL_25;
  }
  return v33 - __readfsqword(0x28u);
}
