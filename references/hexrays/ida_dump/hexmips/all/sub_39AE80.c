__int64 __fastcall sub_39AE80(__int64 a1, __int64 a2, unsigned int a3, __m128 a4)
{
  _QWORD *exception; // rdi
  int v7; // eax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 *v11; // rdx
  __m128i *v12; // r15
  unsigned __int64 *v13; // rsi
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  size_t v22; // r8
  const void *v23; // r9
  void *v24; // rdi
  int v25; // eax
  _BYTE *v26; // rax
  char v27; // dl
  __int64 v28; // rax
  __m128i v29; // xmm1
  __int64 v30; // rax
  __int64 v31; // [rsp+0h] [rbp-78h]
  char v32; // [rsp+8h] [rbp-70h]
  const void *v33; // [rsp+8h] [rbp-70h]
  const __m128i *v34; // [rsp+18h] [rbp-60h] BYREF
  __int64 v35; // [rsp+20h] [rbp-58h] BYREF
  int v36; // [rsp+28h] [rbp-50h]
  unsigned __int64 v37; // [rsp+38h] [rbp-40h]

  v7 = *(char *)(a2 + 12);
  v37 = __readfsqword(0x28u);
  v9 = **(_QWORD **)(a1 + 88);
  v36 = v7;
  v10 = *(_QWORD *)(a1 + 32);
  v35 = v9;
  v11 = &v35;
  v12 = *(__m128i **)(v10 + 80);
  v34 = (const __m128i *)&v35;
  v13 = (unsigned __int64 *)v12->m128i_i64[0];
  if ( !v12->m128i_i64[0] )
  {
    v28 = qalloc(80);
    v29 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v28, (__m128i)(unsigned __int64)v28);
    if ( !v28 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)(v28 + 16) = 0;
    *(_OWORD *)(v28 + 32) = 0;
    *(_OWORD *)(v28 + 48) = 0;
    *(_QWORD *)v28 = v28 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(_OWORD *)(v28 + 64) = 0;
    *(__m128i *)(v28 + 8) = v29;
    v12->m128i_i64[0] = v28;
    *(_QWORD *)v28 = v28 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v28 & 3LL;
    a4 = (__m128)_mm_unpacklo_epi64((__m128i)v12->m128i_u64[0], (__m128i)v12->m128i_u64[0]);
    *(__m128 *)(v12->m128i_i64[0] + 8) = a4;
    *(_QWORD *)v12->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)v12->m128i_i64[0] |= 2uLL;
    v13 = (unsigned __int64 *)v12->m128i_i64[0];
    goto LABEL_3;
  }
  if ( !v12->m128i_i64[1] )
  {
LABEL_3:
    v14 = sub_307D00(v12, v13, 1, &v34);
    v15 = v14 + 24;
    goto LABEL_4;
  }
  v14 = *v13 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v14 & 2) != 0 )
  {
    v27 = 1;
LABEL_19:
    v14 = sub_307D00(v12, v13, v27, &v34);
    v15 = v14 + 24;
    goto LABEL_4;
  }
  v32 = 1;
  while ( 1 )
  {
    v15 = v14 + 24;
    v31 = (__int64)v11;
    v25 = sub_2533C0((__int64)v11, v14 + 24);
    v11 = (__int64 *)v31;
    if ( v25 < 0 )
    {
      v32 = 1;
      v26 = *(_BYTE **)(v14 + 8);
      goto LABEL_16;
    }
    if ( (int)sub_2533C0(v14 + 24, v31) >= 0 )
      break;
    v26 = *(_BYTE **)(v14 + 16);
    v11 = (__int64 *)v31;
    v32 = 0;
LABEL_16:
    if ( (*v26 & 2) != 0 )
      goto LABEL_17;
    v14 = (unsigned __int64)v26;
  }
  if ( !v14 )
  {
LABEL_17:
    v27 = v32;
    v13 = (unsigned __int64 *)v14;
    goto LABEL_19;
  }
LABEL_4:
  v16 = v14 + 48;
  *(_DWORD *)(v15 + 16) = *(_DWORD *)(a2 + 8);
  *(_BYTE *)(v15 + 20) = *(_BYTE *)(a2 + 12);
  *(_BYTE *)(v15 + 21) = *(_BYTE *)(a2 + 13);
  *(_BYTE *)(v15 + 22) = *(_BYTE *)(a2 + 14);
  *(_BYTE *)(v15 + 23) = *(_BYTE *)(a2 + 15);
  if ( v16 != a2 + 16 )
  {
    v17 = *(_QWORD *)(a2 + 24);
    if ( !v17 || (v22 = v17 - 1, v17 == 1) )
    {
      *(_QWORD *)(v15 + 32) = 0;
    }
    else
    {
      v23 = *(const void **)(a2 + 16);
      v24 = *(void **)(v15 + 24);
      if ( *(_QWORD *)(v15 + 40) < v17 )
      {
        v33 = *(const void **)(a2 + 16);
        v30 = qvector_reserve(v16, *(_QWORD *)(v15 + 24), *(_QWORD *)(a2 + 24), 1);
        v23 = v33;
        v22 = v17 - 1;
        *(_QWORD *)(v15 + 24) = v30;
        v24 = (void *)v30;
      }
      *(_QWORD *)(v15 + 32) = v17;
      memmove(v24, v23, v22);
      *(_BYTE *)(*(_QWORD *)(v15 + 24) + v17 - 1) = 0;
    }
  }
  *(_QWORD *)(v15 + 48) = *(_QWORD *)(a2 + 40);
  sub_2B1E90(
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 216LL) + 112LL),
    **(_QWORD **)(a1 + 32),
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 80LL));
  sub_390B90(a1, a3, *(double *)a4.m128_u64, v18, v19, v20);
  return 1;
}
