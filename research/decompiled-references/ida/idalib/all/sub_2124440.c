void __fastcall sub_2124440(__int64 a1)
{
  _QWORD *v2; // rbp
  __m128i *v3; // r14
  __m128i *v4; // rbx
  unsigned __int64 v5; // r13
  __m128i *v6; // rsi
  const char *v7; // rdi
  size_t v8; // rax
  __int64 v9; // rsi
  _BYTE *v10; // rax
  __int64 v11; // rdx
  const void **v12; // rbp
  const void **v13; // r14
  _DWORD *v14; // rdx
  __int64 v15; // rax
  void *v16; // rdi
  __int64 v17; // r15
  unsigned __int64 v18; // rbx
  const void *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rbx
  const void *v23; // rax
  const void *v24; // r15
  size_t v25; // rax
  _BYTE *v26; // rdi
  size_t v27; // rcx
  unsigned __int64 v28; // rax
  void *v29; // rdi
  __m128i si128; // xmm0
  size_t v31; // [rsp+0h] [rbp-80h]
  void *base[2]; // [rsp+8h] [rbp-78h] BYREF
  __m128i *v33; // [rsp+18h] [rbp-68h]
  __m128i v34; // [rsp+28h] [rbp-58h] BYREF
  _QWORD *v35; // [rsp+38h] [rbp-48h]

  v2 = (_QWORD *)qword_2CFEF38;
  *(_OWORD *)base = 0;
  v33 = nullptr;
  if ( !qword_2CFEF38 )
  {
    LODWORD(v5) = 0;
    goto LABEL_15;
  }
  v3 = nullptr;
  v4 = nullptr;
  v5 = 0;
  while ( 1 )
  {
    v7 = (const char *)v2[2];
    v8 = 0;
    v34.m128i_i64[0] = (__int64)v7;
    if ( v7 )
      v8 = strlen(v7);
    v34.m128i_i64[1] = v8;
    v35 = v2;
    if ( v4 != v3 )
      break;
    sub_21242B0((__int64)base, v4, &v34);
    v6 = (__m128i *)base[1];
    v2 = (_QWORD *)*v2;
    if ( v5 < *((_QWORD *)base[1] - 2) )
      v5 = *((_QWORD *)base[1] - 2);
    if ( !v2 )
      goto LABEL_13;
LABEL_6:
    v3 = v33;
    v4 = v6;
  }
  v6 = (__m128i *)((char *)v4 + 24);
  *v4 = _mm_load_si128(&v34);
  base[1] = &v4[1].m128i_u64[1];
  v4[1].m128i_i64[0] = (__int64)v35;
  v2 = (_QWORD *)*v2;
  if ( v5 < v4->m128i_i64[1] )
    v5 = v4->m128i_u64[1];
  if ( v2 )
    goto LABEL_6;
LABEL_13:
  v9 = (char *)v6 - (char *)base[0];
  if ( v9 > 24 )
    qsort(base[0], 0xAAAAAAAAAAAAAAABLL * (v9 >> 3), 0x18u, (__compar_fn_t)sub_21238F0);
LABEL_15:
  v10 = *(_BYTE **)(a1 + 32);
  if ( *(_BYTE **)(a1 + 24) == v10 )
  {
    sub_227BF10(a1, "\n", 1);
    v11 = *(_QWORD *)(a1 + 32);
  }
  else
  {
    *v10 = 10;
    v11 = *(_QWORD *)(a1 + 32) + 1LL;
    *(_QWORD *)(a1 + 32) = v11;
  }
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) - v11) <= 0x15 )
  {
    sub_227BF10(a1, "  Registered Targets:\n", 22);
    v12 = (const void **)base[0];
    v13 = (const void **)base[1];
    v14 = *(_DWORD **)(a1 + 32);
    if ( base[1] != base[0] )
      goto LABEL_33;
    goto LABEL_45;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AB3D0);
  *(_DWORD *)(v11 + 16) = 1937007975;
  *(_WORD *)(v11 + 20) = 2618;
  *(__m128i *)v11 = si128;
  v12 = (const void **)base[0];
  v13 = (const void **)base[1];
  v14 = (_DWORD *)(*(_QWORD *)(a1 + 32) + 22LL);
  *(_QWORD *)(a1 + 32) = v14;
  if ( v13 != v12 )
  {
    while ( 1 )
    {
LABEL_33:
      if ( *(_QWORD *)(a1 + 24) - (_QWORD)v14 <= 3u )
      {
        v15 = sub_227BF10(a1, "    ", 4);
        v16 = *(void **)(v15 + 32);
        v17 = v15;
      }
      else
      {
        *v14 = 538976288;
        v17 = a1;
        v16 = (void *)(*(_QWORD *)(a1 + 32) + 4LL);
        *(_QWORD *)(a1 + 32) = v16;
      }
      v18 = (unsigned __int64)v12[1];
      v19 = *v12;
      if ( v18 > *(_QWORD *)(v17 + 24) - (_QWORD)v16 )
      {
        sub_227BF10(v17, v19, v12[1]);
        v18 = (unsigned __int64)v12[1];
      }
      else if ( v18 )
      {
        memcpy(v16, v19, (size_t)v12[1]);
        *(_QWORD *)(v17 + 32) += v18;
        v18 = (unsigned __int64)v12[1];
      }
      v20 = sub_227D090(a1, (unsigned int)(v5 - v18));
      v21 = *(_QWORD *)(v20 + 32);
      v22 = v20;
      if ( (unsigned __int64)(*(_QWORD *)(v20 + 24) - v21) > 2 )
      {
        *(_BYTE *)(v21 + 2) = 32;
        *(_WORD *)v21 = 11552;
        *(_QWORD *)(v20 + 32) += 3LL;
      }
      else
      {
        v22 = sub_227BF10(v20, " - ", 3);
      }
      v23 = v12[2];
      v24 = *((const void **)v23 + 3);
      if ( !v24 )
        goto LABEL_29;
      v25 = strlen(*((const char **)v23 + 3));
      v26 = *(_BYTE **)(v22 + 32);
      v27 = v25;
      v28 = *(_QWORD *)(v22 + 24);
      if ( v27 > v28 - (unsigned __int64)v26 )
        break;
      if ( v27 )
      {
        v31 = v27;
        memcpy(v26, v24, v27);
        v26 = (_BYTE *)(*(_QWORD *)(v22 + 32) + v31);
        *(_QWORD *)(v22 + 32) = v26;
        v28 = *(_QWORD *)(v22 + 24);
      }
LABEL_30:
      if ( (unsigned __int64)v26 >= v28 )
      {
        v12 += 3;
        sub_227BA10(v22, 10);
        if ( v13 == v12 )
        {
LABEL_36:
          v29 = base[0];
          if ( base[1] != base[0] )
            goto LABEL_37;
          v14 = *(_DWORD **)(a1 + 32);
          goto LABEL_45;
        }
      }
      else
      {
        v12 += 3;
        *(_QWORD *)(v22 + 32) = v26 + 1;
        *v26 = 10;
        if ( v13 == v12 )
          goto LABEL_36;
      }
      v14 = *(_DWORD **)(a1 + 32);
    }
    v22 = sub_227BF10(v22, v24, v27);
LABEL_29:
    v26 = *(_BYTE **)(v22 + 32);
    v28 = *(_QWORD *)(v22 + 24);
    goto LABEL_30;
  }
LABEL_45:
  if ( *(_QWORD *)(a1 + 24) - (_QWORD)v14 > 0xAu )
  {
    qmemcpy(v14, "    (none)\n", 11);
    *(_QWORD *)(a1 + 32) += 11LL;
  }
  else
  {
    sub_227BF10(a1, "    (none)\n", 11);
  }
  v29 = base[0];
LABEL_37:
  if ( v29 )
    operator delete(v29);
}
