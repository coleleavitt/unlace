unsigned __int64 __fastcall sub_3D2AB0(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 *v7; // r13
  __int64 v8; // rax
  __int64 *v9; // rsi
  __m128i v10; // xmm0
  __int64 v11; // rax
  _QWORD *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rsi
  char v16; // dl
  unsigned __int64 v17; // rax
  char v18; // dl
  unsigned __int64 v19; // rcx
  _BYTE *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __m128i v24; // xmm0
  _QWORD *exception; // rdi
  const __m128i *v26; // [rsp+8h] [rbp-50h] BYREF
  __m128i v27; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v28; // [rsp+28h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 104);
  v28 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(v3 + 144);
  if ( a3 == -1 )
    v6 = -1;
  else
    v6 = a3 & 7 | (unsigned __int64)(8 * v5);
  v7 = *(unsigned __int64 **)(a1 + 88);
  v27.m128i_i64[1] = v6;
  v27.m128i_i64[0] = a2;
  v26 = &v27;
  if ( !v7 )
  {
    v23 = qalloc();
    v24 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v23, (__m128i)(unsigned __int64)v23);
    if ( !v23 )
      goto LABEL_31;
    *(_QWORD *)(v23 + 32) = 0;
    *(_OWORD *)(v23 + 16) = 0;
    *(__m128i *)(v23 + 8) = v24;
    *(_QWORD *)v23 = v23 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(_QWORD *)(a1 + 88) = v23;
    *(_QWORD *)v23 = v23 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v23 & 3LL;
    *(__m128i *)(*(_QWORD *)(a1 + 88) + 8LL) = _mm_unpacklo_epi64(
                                                 (__m128i)*(unsigned __int64 *)(a1 + 88),
                                                 (__m128i)*(unsigned __int64 *)(a1 + 88));
    **(_QWORD **)(a1 + 88) &= ~1uLL;
    **(_QWORD **)(a1 + 88) |= 2uLL;
    v7 = *(unsigned __int64 **)(a1 + 88);
LABEL_5:
    v8 = qalloc();
    v9 = (__int64 *)v8;
    if ( v8 )
    {
      *(_OWORD *)(v8 + 16) = 0;
      *(_OWORD *)v8 = 0;
      *(__m128i *)(v8 + 24) = _mm_load_si128(&v27);
      *(_QWORD *)v8 = (unsigned __int64)v7 & 0xFFFFFFFFFFFFFFFCLL;
      v10 = _mm_loadl_epi64((const __m128i *)(a1 + 88));
      *(_QWORD *)v8 = (unsigned __int64)v7 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v8 + 8) = _mm_unpacklo_epi64(v10, v10);
      if ( *(unsigned __int64 **)(a1 + 88) == v7 )
      {
        *v7 = v8 & 0xFFFFFFFFFFFFFFFCLL | *v7 & 3;
        *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL) = v8;
        *(_QWORD *)(*(_QWORD *)(a1 + 88) + 16LL) = v8;
        v22 = *(_QWORD *)v8 & 2LL;
        *(_QWORD *)v8 &= ~1uLL;
        *(_QWORD *)v8 = v22 | *(_QWORD *)(a1 + 88) & 0xFFFFFFFFFFFFFFFCLL;
      }
      else
      {
        v7[1] = v8;
        v11 = *(_QWORD *)(a1 + 88);
        if ( *(unsigned __int64 **)(v11 + 8) == v7 )
          *(_QWORD *)(v11 + 8) = v9;
        sub_3D2730((_QWORD *)(a1 + 88), v9);
      }
      ++*(_QWORD *)(a1 + 96);
LABEL_11:
      v12 = *(_QWORD **)(a1 + 104);
      v13 = v12[18];
      v14 = v12[17];
      if ( v12[19] < (unsigned __int64)(v13 + 1) )
      {
        v21 = qvector_reserve();
        v12[17] = v21;
        v14 = v21;
        v13 = v12[18];
      }
      *(_QWORD *)(v14 + 8 * v13) = a2;
      ++v12[18];
      return v28 - __readfsqword(0x28u);
    }
LABEL_31:
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  if ( !*(_QWORD *)(a1 + 96) )
    goto LABEL_5;
  v16 = 1;
  v17 = *v7 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v17 & 2) != 0 )
  {
LABEL_16:
    sub_3D2970((__m128i *)(a1 + 88), v7, v16, &v26);
    if ( !v18 )
      return v28 - __readfsqword(0x28u);
    goto LABEL_11;
  }
  while ( 1 )
  {
    v19 = *(_QWORD *)(v17 + 24);
    if ( a2 >= v19 )
      break;
    v20 = *(_BYTE **)(v17 + 8);
    v16 = 1;
LABEL_22:
    if ( (*v20 & 2) != 0 )
      goto LABEL_23;
    v17 = (unsigned __int64)v20;
  }
  if ( v19 < a2 )
  {
    v20 = *(_BYTE **)(v17 + 16);
    v16 = 0;
    goto LABEL_22;
  }
  if ( !v17 )
  {
LABEL_23:
    v7 = (unsigned __int64 *)v17;
    goto LABEL_16;
  }
  return v28 - __readfsqword(0x28u);
}
