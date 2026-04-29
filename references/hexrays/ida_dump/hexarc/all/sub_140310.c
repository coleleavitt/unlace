unsigned __int64 __fastcall sub_140310(__m128i *a1, unsigned __int64 **a2, __int64 a3, __int64 *a4, char a5)
{
  _QWORD *exception; // rdi
  unsigned __int64 v6; // rax
  unsigned __int64 *v7; // rsi
  unsigned __int64 v12; // r12
  __int64 v13; // rdx
  __int64 v15; // rax
  _QWORD *v17; // r15
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 i; // rax
  __int64 *v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 j; // rdx
  __int64 *v27; // rax
  __int64 v28; // rdi
  unsigned __int64 v29; // rax
  __int64 v30; // rcx
  __int64 *v31; // rax
  __int64 *v32; // rsi
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  _BYTE *v36; // rcx
  char v37; // al
  unsigned __int64 v38; // rbx
  __int64 v39; // rax
  __m128i v40; // xmm0
  const void *v41; // r13
  void *v42; // rax
  __int64 v43; // [rsp+8h] [rbp-60h]
  __int64 v44; // [rsp+8h] [rbp-60h]
  unsigned __int64 v45; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 *v46; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v47; // [rsp+28h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  if ( !*a2 )
  {
    if ( !under_debugger )
      sub_37B760(52682);
    BUG();
  }
  v6 = **a2;
  v7 = (unsigned __int64 *)a1->m128i_i64[0];
  v46 = &v45;
  v45 = v6;
  if ( !v7 )
  {
    v39 = qalloc(88);
    v40 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v39, (__m128i)(unsigned __int64)v39);
    if ( !v39 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    memset((void *)v39, 0, 0x58u);
    *(__m128i *)(v39 + 8) = v40;
    *(_QWORD *)v39 = v39 & 0xFFFFFFFFFFFFFFFCLL | 2;
    a1->m128i_i64[0] = v39;
    *(_QWORD *)v39 = v39 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v39 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v7 = (unsigned __int64 *)a1->m128i_i64[0];
    goto LABEL_4;
  }
  if ( !a1->m128i_i64[1] )
  {
LABEL_4:
    v12 = sub_13ED10(a1, v7, 1, (__int64 **)&v46) + 24;
    goto LABEL_5;
  }
  v34 = *v7 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v34 & 2) != 0 )
  {
    v37 = 1;
LABEL_45:
    v12 = sub_13ED10(a1, v7, v37, (__int64 **)&v46) + 24;
    goto LABEL_5;
  }
  v7 = (_QWORD *)&byte_1;
  while ( 1 )
  {
    v35 = *(_QWORD *)(v34 + 24);
    v12 = v34 + 24;
    if ( v6 < v35 )
    {
      v36 = *(_BYTE **)(v34 + 8);
      v7 = (_QWORD *)&byte_1;
      if ( (*v36 & 2) != 0 )
        goto LABEL_43;
      goto LABEL_51;
    }
    if ( v35 >= v6 )
      break;
    v36 = *(_BYTE **)(v34 + 16);
    v7 = nullptr;
    if ( (*v36 & 2) != 0 )
      goto LABEL_43;
LABEL_51:
    v34 = (unsigned __int64)v36;
  }
  if ( !v34 )
  {
LABEL_43:
    v37 = (char)v7;
    v7 = (unsigned __int64 *)v34;
    goto LABEL_45;
  }
LABEL_5:
  v13 = *(_QWORD *)(v12 + 8);
  if ( v13 )
  {
    if ( (*(_DWORD *)(v13 + 104))-- == 1 )
    {
      v17 = *(_QWORD **)(v12 + 8);
      if ( v17 )
      {
        sub_2515F0(*(_QWORD *)(v12 + 8), v7);
        v18 = v17[23];
        if ( v18 )
        {
          v19 = v17[24];
          if ( v19 )
          {
            for ( i = 0; i != v19; ++i )
            {
              v21 = (__int64 *)(v18 + 24 * i);
              v22 = *v21;
              if ( *v21 )
              {
                v21[1] = 0;
                v43 = i;
                qfree(v22);
                v18 = v17[23];
                i = v43;
              }
            }
          }
          v17[24] = 0;
          qfree(v18);
        }
        v23 = v17[20];
        if ( v23 )
        {
          v17[21] = 0;
          qfree(v23);
        }
        v24 = v17[16];
        if ( v24 )
        {
          v25 = v17[17];
          if ( v25 )
          {
            for ( j = 0; j != v25; ++j )
            {
              v27 = (__int64 *)(v24 + 32 * j);
              v28 = *v27;
              if ( *v27 )
              {
                v27[1] = 0;
                v44 = j;
                qfree(v28);
                v24 = v17[16];
                j = v44;
              }
            }
          }
          v17[17] = 0;
          qfree(v24);
        }
        sub_24DCD0(v17 + 2);
        j__qfree(v17);
      }
    }
  }
  v15 = *a4;
  *(_QWORD *)(v12 + 8) = *a4;
  if ( v15 )
    ++*(_DWORD *)(v15 + 104);
  *(_BYTE *)(v12 + 56) = a5;
  if ( !*a4 )
  {
    v29 = (unsigned int)(*(_DWORD *)a3 + 34);
    if ( (unsigned int)v29 > 0x10 || (v30 = 67585, !_bittest64(&v30, v29)) )
    {
      *(_DWORD *)(v12 + 16) = *(_DWORD *)a3;
      *(_QWORD *)(v12 + 24) = *(_QWORD *)(a3 + 8);
      if ( v12 + 32 != a3 + 16 )
      {
        v38 = *(_QWORD *)(a3 + 24);
        if ( v38 > 1 )
        {
          v41 = *(const void **)(a3 + 16);
          v42 = *(void **)(v12 + 32);
          if ( *(_QWORD *)(v12 + 48) < v38 )
          {
            v42 = (void *)qvector_reserve(v12 + 32, *(_QWORD *)(v12 + 32), *(_QWORD *)(a3 + 24), 1);
            *(_QWORD *)(v12 + 32) = v42;
          }
          *(_QWORD *)(v12 + 40) = v38;
          memmove(v42, v41, v38 - 1);
          *(_BYTE *)(*(_QWORD *)(v12 + 32) + v38 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(v12 + 40) = 0;
        }
      }
      return v47 - __readfsqword(0x28u);
    }
    sub_140080(a1[2].m128i_i64[0], v45);
    v31 = (__int64 *)a1->m128i_i64[0];
    if ( a1->m128i_i64[0] )
    {
      v32 = (__int64 *)(*v31 & 0xFFFFFFFFFFFFFFFCLL);
      if ( !v32 )
        goto LABEL_57;
      while ( (*(_BYTE *)v32 & 2) == 0 )
      {
        v33 = v32[3];
        if ( v45 < v33 )
        {
          v32 = (__int64 *)v32[1];
        }
        else
        {
          if ( v33 >= v45 )
          {
            if ( v32 != v31 )
LABEL_57:
              sub_13F360((unsigned __int64 **)a1, v32);
            return v47 - __readfsqword(0x28u);
          }
          v32 = (__int64 *)v32[2];
        }
      }
    }
  }
  return v47 - __readfsqword(0x28u);
}
