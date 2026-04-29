unsigned __int64 __fastcall sub_2A2D70(__int64 a1, unsigned __int64 a2, _QWORD *a3, char a4)
{
  __int64 v4; // rax
  __int64 v5; // r13
  unsigned __int64 *v7; // rsi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rax
  __m128i *v10; // rbx
  unsigned __int64 v11; // rax
  __int64 v13; // rax
  __m128i v14; // xmm0
  char v15; // cl
  unsigned __int64 v16; // rdx
  _BYTE *v17; // rdx
  char v18; // dl
  _QWORD *exception; // rdi
  unsigned __int64 v20; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 *v21; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v22; // [rsp+18h] [rbp-30h]

  v4 = *(_QWORD *)(a1 + 8);
  v20 = a2;
  v5 = *(_QWORD *)(v4 + 8);
  v22 = __readfsqword(0x28u);
  v7 = *(unsigned __int64 **)(v5 + 1376);
  if ( !v7 )
  {
    v10 = (__m128i *)(v5 + 1376);
    v21 = &v20;
    goto LABEL_16;
  }
  v8 = *v7 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v8 )
    goto LABEL_13;
  if ( (*(_BYTE *)v8 & 2) != 0 )
    goto LABEL_7;
  while ( 1 )
  {
    v9 = *(_QWORD *)(v8 + 24);
    if ( v20 >= v9 )
      break;
    v8 = *(_QWORD *)(v8 + 8);
LABEL_6:
    if ( (*(_BYTE *)v8 & 2) != 0 )
      goto LABEL_7;
  }
  if ( v9 < v20 )
  {
    v8 = *(_QWORD *)(v8 + 16);
    goto LABEL_6;
  }
  if ( v7 == (unsigned __int64 *)v8 )
  {
LABEL_7:
    v10 = (__m128i *)(v5 + 1376);
    v21 = &v20;
    goto LABEL_8;
  }
LABEL_13:
  if ( (!a4 || !(unsigned int)lexcompare_tinfo(*a3, *(_QWORD *)(v8 + 32), 0))
    && !(unsigned __int8)sub_296720(*(_QWORD *)a1, v8 + 32, (__int64)a3, 0) )
  {
    return v22 - __readfsqword(0x28u);
  }
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  v7 = *(unsigned __int64 **)(v5 + 1376);
  v10 = (__m128i *)(v5 + 1376);
  v21 = &v20;
  if ( !v7 )
  {
LABEL_16:
    v13 = qalloc(40);
    v14 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v13, (__m128i)(unsigned __int64)v13);
    if ( !v13 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v13 + 32) = 0;
    *(_OWORD *)(v13 + 16) = 0;
    *(__m128i *)(v13 + 8) = v14;
    *(_QWORD *)v13 = v13 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(_QWORD *)(v5 + 1376) = v13;
    *(_QWORD *)v13 = v13 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v13 & 3LL;
    *(__m128i *)(*(_QWORD *)(v5 + 1376) + 8LL) = _mm_unpacklo_epi64(
                                                   (__m128i)*(unsigned __int64 *)(v5 + 1376),
                                                   (__m128i)*(unsigned __int64 *)(v5 + 1376));
    **(_QWORD **)(v5 + 1376) &= ~1uLL;
    **(_QWORD **)(v5 + 1376) |= 2uLL;
    v7 = *(unsigned __int64 **)(v5 + 1376);
    goto LABEL_9;
  }
LABEL_8:
  if ( !*(_QWORD *)(v5 + 1384) )
  {
LABEL_9:
    v11 = sub_C4370(v10, v7, 1, &v21);
    goto LABEL_10;
  }
  v11 = *v7 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v11 & 2) != 0 )
  {
    v18 = 1;
LABEL_30:
    v11 = sub_C4370(v10, v7, v18, &v21);
    goto LABEL_10;
  }
  v15 = 1;
  while ( 2 )
  {
    v16 = *(_QWORD *)(v11 + 24);
    if ( v20 < v16 )
    {
      v17 = *(_BYTE **)(v11 + 8);
      v15 = 1;
LABEL_26:
      if ( (*v17 & 2) != 0 )
        goto LABEL_27;
      v11 = (unsigned __int64)v17;
      continue;
    }
    break;
  }
  if ( v16 < v20 )
  {
    v17 = *(_BYTE **)(v11 + 16);
    v15 = 0;
    goto LABEL_26;
  }
  if ( !v11 )
  {
LABEL_27:
    v18 = v15;
    v7 = (unsigned __int64 *)v11;
    goto LABEL_30;
  }
LABEL_10:
  copy_tinfo_t(v11 + 32, a3);
  ++*(_DWORD *)(a1 + 76);
  return v22 - __readfsqword(0x28u);
}
