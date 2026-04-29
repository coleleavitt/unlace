unsigned __int64 __fastcall sub_2A0470(__int64 a1, unsigned int *a2, int a3)
{
  _QWORD *exception; // rdi
  int v4; // r13d
  unsigned __int64 *v6; // rsi
  __int64 v7; // r14
  unsigned __int64 v8; // r12
  __m128i *v9; // r14
  unsigned __int64 v10; // rbx
  int v11; // eax
  int v12; // eax
  __int64 v14; // rax
  __m128i v15; // xmm1
  char v16; // r15
  unsigned __int64 v17; // r12
  char v18; // dl
  int v19; // eax
  _BYTE *v20; // rax
  int v21; // eax
  unsigned int *v22; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v23; // [rsp+8h] [rbp-40h]

  v4 = a3 + 1;
  v23 = __readfsqword(0x28u);
  v6 = *(unsigned __int64 **)(a1 + 16);
  if ( !v6 )
  {
    v22 = a2;
    v9 = (__m128i *)(a1 + 16);
    goto LABEL_26;
  }
  v7 = 24;
  v8 = *v6 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v8 )
  {
LABEL_21:
    *(_DWORD *)(v7 + 40) += v4;
    return v23 - __readfsqword(0x28u);
  }
  if ( (*(_BYTE *)(*v6 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
  {
    v22 = a2;
    v9 = (__m128i *)(a1 + 16);
    goto LABEL_5;
  }
  while ( 1 )
  {
    v7 = v8 + 24;
    v11 = sub_297370((__int64)a2, v8 + 24);
    if ( !v11 )
    {
      v11 = sub_297370((__int64)(a2 + 4), v8 + 40);
      if ( !v11 )
        break;
    }
    if ( v11 >= 0 )
      goto LABEL_17;
LABEL_10:
    v8 = *(_QWORD *)(v8 + 8);
LABEL_11:
    if ( (*(_BYTE *)v8 & 2) != 0 )
    {
      v8 = *(_QWORD *)(a1 + 16);
      goto LABEL_13;
    }
  }
  if ( (signed int)a2[8] < *(_DWORD *)(v8 + 56) )
    goto LABEL_10;
LABEL_17:
  v12 = sub_297370(v8 + 24, (__int64)a2);
  if ( !v12 )
  {
    v12 = sub_297370(v8 + 40, (__int64)(a2 + 4));
    if ( !v12 )
    {
      if ( *(_DWORD *)(v8 + 56) >= (signed int)a2[8] )
        goto LABEL_20;
      goto LABEL_24;
    }
  }
  if ( v12 < 0 )
  {
LABEL_24:
    v8 = *(_QWORD *)(v8 + 16);
    goto LABEL_11;
  }
LABEL_20:
  if ( *(_QWORD *)(a1 + 16) != v8 )
    goto LABEL_21;
LABEL_13:
  v22 = a2;
  v9 = (__m128i *)(a1 + 16);
  if ( !v8 )
  {
LABEL_26:
    v14 = qalloc(72);
    v15 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v14, (__m128i)(unsigned __int64)v14);
    if ( !v14 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v14 + 64) = 0;
    *(_OWORD *)(v14 + 16) = 0;
    *(_OWORD *)(v14 + 32) = 0;
    *(_OWORD *)(v14 + 48) = 0;
    *(_QWORD *)v14 = v14 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(__m128i *)(v14 + 8) = v15;
    *(_QWORD *)(a1 + 16) = v14;
    *(_QWORD *)v14 = v14 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v14 & 3LL;
    *(__m128i *)(*(_QWORD *)(a1 + 16) + 8LL) = _mm_unpacklo_epi64(
                                                 (__m128i)*(unsigned __int64 *)(a1 + 16),
                                                 (__m128i)*(unsigned __int64 *)(a1 + 16));
    **(_QWORD **)(a1 + 16) &= ~1uLL;
    **(_QWORD **)(a1 + 16) |= 2uLL;
    goto LABEL_6;
  }
  v6 = (unsigned __int64 *)v8;
LABEL_5:
  if ( !*(_QWORD *)(a1 + 24) )
  {
LABEL_6:
    v10 = sub_2A02A0(v9, *(unsigned __int64 **)(a1 + 16), 1, &v22) + 24;
    goto LABEL_7;
  }
  v16 = 1;
  v17 = *v6 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v17 & 2) != 0 )
  {
    v18 = 1;
LABEL_30:
    v10 = sub_2A02A0(v9, v6, v18, &v22) + 24;
    goto LABEL_7;
  }
  while ( 2 )
  {
    v10 = v17 + 24;
    v19 = sub_297370((__int64)a2, v17 + 24);
    if ( !v19 )
    {
      v19 = sub_297370((__int64)(a2 + 4), v17 + 40);
      if ( !v19 )
      {
        if ( (signed int)a2[8] >= *(_DWORD *)(v17 + 56) )
          goto LABEL_39;
LABEL_34:
        v20 = *(_BYTE **)(v17 + 8);
        v16 = 1;
LABEL_35:
        if ( (*v20 & 2) != 0 )
          goto LABEL_36;
        v17 = (unsigned __int64)v20;
        continue;
      }
    }
    break;
  }
  if ( v19 < 0 )
    goto LABEL_34;
LABEL_39:
  v21 = sub_297370(v17 + 24, (__int64)a2);
  if ( v21 || (v21 = sub_297370(v17 + 40, (__int64)(a2 + 4))) != 0 )
  {
    if ( v21 >= 0 )
      goto LABEL_44;
    goto LABEL_41;
  }
  if ( *(_DWORD *)(v17 + 56) < (signed int)a2[8] )
  {
LABEL_41:
    v20 = *(_BYTE **)(v17 + 16);
    v16 = 0;
    goto LABEL_35;
  }
LABEL_44:
  if ( !v17 )
  {
LABEL_36:
    v18 = v16;
    v6 = (unsigned __int64 *)v17;
    goto LABEL_30;
  }
LABEL_7:
  *(_DWORD *)(v10 + 40) = v4;
  return v23 - __readfsqword(0x28u);
}
