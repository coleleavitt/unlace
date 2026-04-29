void __fastcall sub_25DCD0(__int64 a1, const __m128i *a2, int a3)
{
  _QWORD *exception; // rdi
  __int64 *v4; // rbp
  unsigned __int64 *v6; // rax
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int32 v10; // ecx
  unsigned __int64 v11; // r14
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // r8
  __int64 v17; // rbx
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  __m128i v22; // xmm1
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rdx
  char v25; // si
  unsigned __int64 v26; // rcx
  __int32 v27; // ecx
  _BYTE *v28; // rax
  char v29; // dl
  __int64 v30; // rdx
  const __m128i *v31[7]; // [rsp+0h] [rbp-38h] BYREF

  v4 = *(__int64 **)(a1 + 88);
  v31[1] = (const __m128i *)__readfsqword(0x28u);
  if ( !a3 )
  {
    v6 = (unsigned __int64 *)*v4;
    if ( !*v4 )
      return;
    v7 = *v6 & 0xFFFFFFFFFFFFFFFCLL;
    if ( v7 )
    {
      if ( (*(_BYTE *)v7 & 2) != 0 )
        return;
      v8 = a2->m128i_i64[0];
      v9 = *(_QWORD *)(v7 + 24);
      if ( a2->m128i_i64[0] < v9 )
        goto LABEL_26;
LABEL_6:
      if ( v9 < v8 )
        goto LABEL_23;
      v10 = *(_DWORD *)(v7 + 32);
      if ( a2->m128i_i32[2] < v10 )
      {
LABEL_26:
        while ( 1 )
        {
          v7 = *(_QWORD *)(v7 + 8);
LABEL_24:
          if ( (*(_BYTE *)v7 & 2) != 0 )
            return;
          v9 = *(_QWORD *)(v7 + 24);
          if ( v8 >= v9 )
            goto LABEL_6;
        }
      }
      if ( a2->m128i_i32[2] > v10 )
      {
LABEL_23:
        v7 = *(_QWORD *)(v7 + 16);
        goto LABEL_24;
      }
      if ( v6 == (unsigned __int64 *)v7 )
        return;
    }
    sub_25D5A0((unsigned __int64 **)v4, (__int64 *)v7);
    return;
  }
  v31[0] = a2;
  v11 = *v4;
  if ( !*v4 )
  {
    v21 = qalloc(48);
    v22 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v21, (__m128i)(unsigned __int64)v21);
    if ( !v21 )
      goto LABEL_43;
    *(_OWORD *)(v21 + 16) = 0;
    *(_OWORD *)(v21 + 32) = 0;
    *(__m128i *)(v21 + 8) = v22;
    *(_QWORD *)v21 = v21 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *v4 = v21;
    *(_QWORD *)v21 = v21 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v21 & 3LL;
    *(__m128i *)(*v4 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v4, (__m128i)(unsigned __int64)*v4);
    *(_QWORD *)*v4 &= ~1uLL;
    *(_QWORD *)*v4 |= 2uLL;
    v11 = *v4;
LABEL_13:
    v13 = qalloc(48);
    v17 = v13;
    if ( v13 )
    {
      *(_OWORD *)(v13 + 32) = 0;
      *(_OWORD *)(v13 + 16) = 0;
      *(_OWORD *)v13 = 0;
      v18 = _mm_loadu_si128(a2);
      *(_DWORD *)(v13 + 40) = 0;
      *(__m128i *)(v13 + 24) = v18;
      *(_QWORD *)v13 = v11 & 0xFFFFFFFFFFFFFFFCLL;
      v19 = _mm_loadl_epi64((const __m128i *)v4);
      *(_QWORD *)v13 = v11 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v13 + 8) = _mm_unpacklo_epi64(v19, v19);
      if ( *v4 == v11 )
      {
        *(_QWORD *)v11 = v13 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v11 & 3LL;
        *(_QWORD *)(*v4 + 8) = v13;
        *(_QWORD *)(*v4 + 16) = v13;
        v30 = *(_QWORD *)v13 & 2LL;
        *(_QWORD *)v13 &= ~1uLL;
        *(_QWORD *)v13 = v30 | *v4 & 0xFFFFFFFFFFFFFFFCLL;
      }
      else
      {
        *(_QWORD *)(v11 + 8) = v13;
        if ( *(_QWORD *)(*v4 + 8) == v11 )
          *(_QWORD *)(*v4 + 8) = v13;
        sub_25D940(v4, (__int64 *)v13, v14, v15, v16);
      }
      ++v4[1];
      v20 = v17 + 24;
      goto LABEL_19;
    }
LABEL_43:
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  if ( !v4[1] )
    goto LABEL_13;
  v23 = *(_QWORD *)v11 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v23 & 2) != 0 )
  {
    v29 = 1;
    goto LABEL_39;
  }
  v24 = a2->m128i_i64[0];
  v25 = 1;
  while ( 1 )
  {
    v26 = *(_QWORD *)(v23 + 24);
    v20 = v23 + 24;
    if ( v24 >= v26 )
    {
      if ( v26 < v24 )
        goto LABEL_35;
      v27 = *(_DWORD *)(v23 + 32);
      if ( a2->m128i_i32[2] >= v27 )
        break;
    }
    v28 = *(_BYTE **)(v23 + 8);
    v25 = 1;
LABEL_36:
    if ( (*v28 & 2) != 0 )
      goto LABEL_37;
    v23 = (unsigned __int64)v28;
  }
  if ( a2->m128i_i32[2] > v27 )
  {
LABEL_35:
    v28 = *(_BYTE **)(v23 + 16);
    v25 = 0;
    goto LABEL_36;
  }
  if ( v23 )
    goto LABEL_19;
LABEL_37:
  v29 = v25;
  v11 = v23;
LABEL_39:
  v20 = sub_25DB80((__m128i *)v4, (unsigned __int64 *)v11, v29, v31) + 24;
LABEL_19:
  *(_DWORD *)(v20 + 16) = a3;
}
