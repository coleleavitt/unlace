unsigned __int64 __fastcall sub_1E8CA0(__int64 a1, __int64 a2)
{
  _QWORD *exception; // rdi
  _QWORD *v3; // r14
  _QWORD *v4; // rbx
  _QWORD *v6; // rbp
  _QWORD *v7; // rdx
  int v9; // r15d
  unsigned __int64 v10; // rax
  unsigned __int64 *v11; // r15
  __m128i *v12; // r10
  _QWORD *v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  char v16; // al
  char v17; // dl
  unsigned __int64 v18; // rax
  unsigned __int8 v19; // cl
  unsigned __int8 v20; // si
  __int64 v21; // rdi
  __int64 v22; // rax
  __m128i v23; // xmm1
  _BYTE *v24; // rsi
  char v25; // [rsp+1Bh] [rbp-5Dh] BYREF
  int v26; // [rsp+1Ch] [rbp-5Ch] BYREF
  const __m128i *v27; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 *v28; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v29; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v30; // [rsp+38h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v3 = *(_QWORD **)(a2 + 8);
  if ( !v3 )
    return v30 - __readfsqword(0x28u);
  if ( !*(_QWORD *)(a2 + 16) )
    return v30 - __readfsqword(0x28u);
  v4 = (_QWORD *)v3[1];
  if ( v3 == v4 )
    return v30 - __readfsqword(0x28u);
  do
  {
LABEL_4:
    while ( 2 )
    {
      v6 = v4 + 3;
      if ( *((_DWORD *)v4 + 10) != 8 )
        goto LABEL_5;
      v9 = *((_DWORD *)v4 + 11);
      v10 = sub_1E1BA0(a1, &v26, (__int64)(v4 + 3), v9);
      if ( v26 )
      {
        sub_1E47E0(a1, v10, (const __m128i *)(v4 + 3), v9);
        goto LABEL_5;
      }
      v11 = *(unsigned __int64 **)(a1 + 8);
      v27 = (const __m128i *)(v4 + 3);
      v12 = (__m128i *)(a1 + 8);
      if ( !v11 )
      {
        v22 = qalloc(72);
        v23 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v22, (__m128i)(unsigned __int64)v22);
        if ( !v22 )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        v12 = (__m128i *)(a1 + 8);
        *(_QWORD *)(v22 + 64) = 0;
        *(_OWORD *)(v22 + 16) = 0;
        *(_OWORD *)(v22 + 32) = 0;
        *(_OWORD *)(v22 + 48) = 0;
        *(_QWORD *)v22 = v22 & 0xFFFFFFFFFFFFFFFCLL | 2;
        *(__m128i *)(v22 + 8) = v23;
        *(_QWORD *)(a1 + 8) = v22;
        *(_QWORD *)v22 = v22 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v22 & 3LL;
        *(__m128i *)(*(_QWORD *)(a1 + 8) + 8LL) = _mm_unpacklo_epi64(
                                                    (__m128i)*(unsigned __int64 *)(a1 + 8),
                                                    (__m128i)*(unsigned __int64 *)(a1 + 8));
        **(_QWORD **)(a1 + 8) &= ~1uLL;
        **(_QWORD **)(a1 + 8) |= 2uLL;
        v11 = *(unsigned __int64 **)(a1 + 8);
LABEL_13:
        sub_1E8B00(v12, v11, 1, &v27);
        goto LABEL_5;
      }
      if ( !*(_QWORD *)(a1 + 16) )
        goto LABEL_13;
      v28 = v11;
      v25 = 1;
      v29 = 0;
      if ( v10 )
      {
        v16 = sub_88E40((unsigned __int64 *)(a1 + 8), (__int64)(v4 + 3), v10, (unsigned __int64 *)&v28, &v25, &v29);
        v12 = (__m128i *)(a1 + 8);
        if ( v16 )
        {
          if ( !v29 )
            sub_1E8B00((__m128i *)(a1 + 8), v28, v25, &v27);
          goto LABEL_5;
        }
      }
      v17 = 1;
      v18 = *v11 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v18 & 2) != 0 )
        goto LABEL_28;
      v19 = *((_BYTE *)v4 + 32);
      while ( 1 )
      {
        v20 = *(_BYTE *)(v18 + 32);
        if ( v19 < v20 )
        {
LABEL_38:
          v24 = *(_BYTE **)(v18 + 8);
          v17 = 1;
          goto LABEL_39;
        }
        if ( v20 >= v19 )
        {
          v21 = *(_QWORD *)(v18 + 24);
          if ( *v6 < v21 )
            goto LABEL_38;
          if ( *v6 <= v21 )
            break;
        }
        v24 = *(_BYTE **)(v18 + 16);
        v17 = 0;
LABEL_39:
        if ( (*v24 & 2) != 0 )
          goto LABEL_35;
        v18 = (unsigned __int64)v24;
      }
      if ( v18 )
        goto LABEL_5;
LABEL_35:
      v11 = (unsigned __int64 *)v18;
LABEL_28:
      sub_1E8B00(v12, v11, v17, &v27);
LABEL_5:
      if ( (*v4 & 2) != 0 )
      {
LABEL_8:
        if ( v3 == v4 )
          return v30 - __readfsqword(0x28u);
        continue;
      }
      break;
    }
    v7 = (_QWORD *)v4[2];
    if ( (*(_BYTE *)v7 & 2) == 0 )
    {
      do
      {
        v4 = v7;
        v7 = (_QWORD *)v7[1];
      }
      while ( (*(_BYTE *)v7 & 2) == 0 );
      goto LABEL_8;
    }
    v13 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFCLL);
    v14 = *v13;
    if ( (*v13 & 2) == 0 )
    {
      while ( (_QWORD *)v13[2] == v4 )
      {
        v4 = v13;
        v15 = v14 & 0xFFFFFFFFFFFFFFFCLL;
        v14 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v14 & 2) != 0 )
        {
          v4 = (_QWORD *)v15;
          if ( v3 != (_QWORD *)v15 )
            goto LABEL_4;
          return v30 - __readfsqword(0x28u);
        }
        v13 = (_QWORD *)v15;
      }
    }
    v4 = v13;
  }
  while ( v3 != v13 );
  return v30 - __readfsqword(0x28u);
}
