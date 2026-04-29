unsigned __int64 *__fastcall sub_871F0(__m128i *a1, unsigned __int64 *a2, unsigned __int64 a3, __int64 a4)
{
  _QWORD *exception; // rdi
  unsigned __int64 *v7; // rsi
  __int64 v8; // rax
  unsigned __int64 *v9; // rbp
  unsigned __int64 v11; // rdx
  unsigned __int64 j; // rcx
  char v13; // dl
  char v14; // dl
  char v15; // al
  unsigned __int64 v16; // rcx
  unsigned __int64 *v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 i; // rcx
  __int64 v20; // rax
  __m128i v21; // xmm0
  unsigned __int64 *v22; // rcx
  unsigned __int64 v23; // rdi
  unsigned __int64 *v24; // r8
  unsigned __int64 *v25; // rcx
  unsigned __int64 v26; // rdi
  unsigned __int64 *v27; // r8
  unsigned __int64 *v28; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 v29; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v30[8]; // [rsp+18h] [rbp-40h] BYREF

  v30[2] = __readfsqword(0x28u);
  v29 = a3;
  v30[0] = 0;
  copy_tinfo_t(v30, a4);
  v7 = (unsigned __int64 *)a1->m128i_i64[0];
  v28 = &v29;
  if ( !v7 )
  {
    v20 = qalloc(40);
    v21 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v20, (__m128i)(unsigned __int64)v20);
    if ( !v20 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v20 + 32) = 0;
    *(_OWORD *)(v20 + 16) = 0;
    *(__m128i *)(v20 + 8) = v21;
    *(_QWORD *)v20 = v20 & 0xFFFFFFFFFFFFFFFCLL | 2;
    a1->m128i_i64[0] = v20;
    *(_QWORD *)v20 = v20 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v20 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v7 = (unsigned __int64 *)a1->m128i_i64[0];
    goto LABEL_3;
  }
  if ( !a1->m128i_i64[1] )
  {
LABEL_3:
    v8 = sub_87070(a1, v7, 1, &v28);
LABEL_4:
    v9 = (unsigned __int64 *)v8;
    goto LABEL_5;
  }
  v9 = a2;
  if ( !a2 )
    goto LABEL_20;
  if ( v7 == a2 )
  {
    v9 = (unsigned __int64 *)a2[2];
    if ( (*(_BYTE *)v9 & 2) == 0 )
    {
      if ( v9[3] < v29 )
        goto LABEL_57;
      if ( v9[3] != v29 )
        goto LABEL_20;
      if ( v9 )
        goto LABEL_5;
    }
    v9 = v7;
    v13 = 1;
    goto LABEL_39;
  }
  if ( a2[3] >= v29 )
  {
    if ( a2[3] == v29 )
      goto LABEL_5;
    if ( (*a2 & 2) != 0 )
    {
      v18 = (unsigned __int64)a2;
    }
    else
    {
      v18 = a2[1];
      if ( (*(_BYTE *)v18 & 2) != 0 )
      {
        v25 = (unsigned __int64 *)(*a2 & 0xFFFFFFFFFFFFFFFCLL);
        v26 = *v25;
        if ( (*v25 & 2) != 0 )
        {
          v13 = 1;
          if ( v7 == v25 )
            goto LABEL_39;
          v13 = 1;
          if ( v25[3] < v29 )
            goto LABEL_39;
          goto LABEL_20;
        }
        if ( (unsigned __int64 *)v25[1] == a2 )
        {
          while ( 1 )
          {
            v27 = v25;
            v18 = v26 & 0xFFFFFFFFFFFFFFFCLL;
            v26 = *(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v26 & 2) != 0 )
              break;
            v25 = (unsigned __int64 *)v18;
            if ( *(unsigned __int64 **)(v18 + 8) != v27 )
              goto LABEL_62;
          }
        }
        else
        {
LABEL_62:
          v18 = (unsigned __int64)v25;
        }
        if ( v7 == (unsigned __int64 *)v18 )
          goto LABEL_64;
      }
      else
      {
        for ( i = *(_QWORD *)(v18 + 16); (*(_BYTE *)i & 2) == 0; i = *(_QWORD *)(i + 16) )
          v18 = i;
        if ( v7 == (unsigned __int64 *)v18 )
          goto LABEL_20;
      }
    }
    if ( *(_QWORD *)(v18 + 24) >= v29 )
      goto LABEL_20;
    if ( (*(_BYTE *)a2[1] & 2) == 0 )
    {
      if ( (**(_BYTE **)(v18 + 16) & 2) != 0 )
      {
        v9 = (unsigned __int64 *)v18;
        v13 = 0;
        goto LABEL_39;
      }
      goto LABEL_20;
    }
LABEL_64:
    v13 = 1;
    goto LABEL_39;
  }
  if ( (*a2 & 2) != 0 )
  {
    v11 = (unsigned __int64)a2;
  }
  else
  {
    v11 = a2[2];
    if ( (*(_BYTE *)v11 & 2) != 0 )
    {
      v22 = (unsigned __int64 *)(*a2 & 0xFFFFFFFFFFFFFFFCLL);
      v23 = *v22;
      if ( (*v22 & 2) != 0 )
      {
        v13 = 0;
        if ( v7 == v22 )
          goto LABEL_39;
        if ( v29 >= v22[3] )
          goto LABEL_20;
        goto LABEL_57;
      }
      if ( a2 == (unsigned __int64 *)v22[2] )
      {
        while ( 1 )
        {
          v24 = v22;
          v11 = v23 & 0xFFFFFFFFFFFFFFFCLL;
          v23 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v23 & 2) != 0 )
            break;
          v22 = (unsigned __int64 *)v11;
          if ( v24 != *(unsigned __int64 **)(v11 + 16) )
            goto LABEL_55;
        }
      }
      else
      {
LABEL_55:
        v11 = (unsigned __int64)v22;
      }
      if ( v7 == (unsigned __int64 *)v11 )
        goto LABEL_57;
    }
    else
    {
      for ( j = *(_QWORD *)(v11 + 8); (*(_BYTE *)j & 2) == 0; j = *(_QWORD *)(j + 8) )
        v11 = j;
      if ( v7 == (unsigned __int64 *)v11 )
        goto LABEL_20;
    }
  }
  if ( v29 < *(_QWORD *)(v11 + 24) )
  {
    if ( (*(_BYTE *)a2[2] & 2) == 0 )
    {
      if ( (**(_BYTE **)(v11 + 8) & 2) != 0 )
      {
        v9 = (unsigned __int64 *)v11;
        v13 = 1;
LABEL_39:
        v8 = sub_87070(a1, v9, v13, &v28);
        goto LABEL_4;
      }
      goto LABEL_20;
    }
LABEL_57:
    v13 = 0;
    goto LABEL_39;
  }
LABEL_20:
  v9 = (unsigned __int64 *)(*v7 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (*(_BYTE *)v9 & 2) != 0 )
  {
    v14 = 1;
LABEL_22:
    v8 = sub_87070(a1, v7, v14, &v28);
    goto LABEL_4;
  }
  v15 = 1;
  while ( 1 )
  {
    v16 = v9[3];
    if ( v29 >= v16 )
      break;
    v17 = (unsigned __int64 *)v9[1];
    v15 = 1;
LABEL_27:
    if ( (*(_BYTE *)v17 & 2) != 0 )
      goto LABEL_28;
    v9 = v17;
  }
  if ( v16 < v29 )
  {
    v17 = (unsigned __int64 *)v9[2];
    v15 = 0;
    goto LABEL_27;
  }
  if ( !v9 )
  {
LABEL_28:
    v14 = v15;
    v7 = v9;
    goto LABEL_22;
  }
LABEL_5:
  clear_tinfo_t(v30);
  return v9;
}
