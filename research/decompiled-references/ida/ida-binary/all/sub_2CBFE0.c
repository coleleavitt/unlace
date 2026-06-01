QT::QAbstractScrollArea *__fastcall sub_2CBFE0(const char *src, __int64 a2, char a3)
{
  int i; // ebx
  __m128i si128; // xmm0
  const char *v7; // rsi
  __m128i v8; // xmm0
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  QT::QAbstractScrollArea *v12; // rax
  QT::QAbstractScrollArea *v13; // rbp
  char *v14; // rsi
  double v15; // xmm0_8
  double v16; // xmm0_8
  void *v18; // rsi
  size_t v19; // rax
  size_t v20; // rbp
  size_t v21; // r15
  void *v22; // [rsp+0h] [rbp-158h] BYREF
  __int128 v23; // [rsp+8h] [rbp-150h]
  char s[16]; // [rsp+20h] [rbp-138h] BYREF
  __m128i v25; // [rsp+30h] [rbp-128h] BYREF
  int v26; // [rsp+40h] [rbp-118h]
  __int64 v27; // [rsp+50h] [rbp-108h] BYREF
  __int128 v28; // [rsp+58h] [rbp-100h]
  __int128 v29; // [rsp+68h] [rbp-F0h]
  __int128 v30; // [rsp+78h] [rbp-E0h]
  __int64 v31; // [rsp+88h] [rbp-D0h]
  __m128i v32; // [rsp+90h] [rbp-C8h]
  __m128i v33; // [rsp+A0h] [rbp-B8h]
  __int64 v34; // [rsp+B0h] [rbp-A8h]
  __int128 v35; // [rsp+B8h] [rbp-A0h]
  __int64 v36; // [rsp+C8h] [rbp-90h]
  __int64 v37; // [rsp+D0h] [rbp-88h]
  char v38; // [rsp+D8h] [rbp-80h]
  __int64 v39; // [rsp+E0h] [rbp-78h]
  char v40[40]; // [rsp+F0h] [rbp-68h] BYREF
  unsigned __int64 v41; // [rsp+118h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  v22 = nullptr;
  v23 = 0;
  if ( src && *src )
  {
    v19 = strlen(src);
    v20 = v19;
    if ( !v19 )
    {
      if ( !a3 )
        goto LABEL_8;
      v18 = nullptr;
      goto LABEL_25;
    }
    v21 = v19 + 1;
    v22 = (void *)qvector_reserve(&v22, 0, v19 + 1, 1);
    *(_QWORD *)&v23 = v21;
    memmove(v22, src, v20);
    *((_BYTE *)v22 + v20) = 0;
  }
  else
  {
    for ( i = 1; ; ++i )
    {
      qsnprintf(v40, 32, "%d", i);
      if ( !sub_2CBEC0(v40) )
        break;
    }
    qsnprintf(v40, 32, "%d", i);
    sub_2CBDD0((__int64 *)&v22, v40);
  }
  if ( a3 )
  {
    v18 = v22;
    if ( *((_QWORD *)&v23 + 1) > 0xAu )
    {
LABEL_19:
      *(_QWORD *)&v23 = 11;
      qmemcpy(v18, "Stack view", 10);
      *((_BYTE *)v22 + 10) = 0;
      goto LABEL_8;
    }
LABEL_25:
    v22 = (void *)qvector_reserve(&v22, v18, 11, 1);
    v18 = v22;
    goto LABEL_19;
  }
LABEL_8:
  v27 = 0;
  v31 = 0;
  v33.m128i_i64[0] = 0;
  v33.m128i_i64[1] = -1;
  v34 = 0;
  v36 = 0;
  v37 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v32 = 0;
  v35 = 0;
  sub_1E8870((__int64)s, 1);
  si128 = _mm_load_si128((const __m128i *)s);
  v7 = nullptr;
  v38 = 0;
  v32 = si128;
  v8 = _mm_load_si128(&v25);
  LODWORD(v34) = v26;
  v39 = 0;
  v33 = v8;
  sub_1E8790((__int64)&v27, 0, 0, 0, *(double *)v8.m128i_i64);
  v9 = operator new(0x48u);
  *(_QWORD *)v9 = hv_hexplace_gen_t___vtable;
  *(_QWORD *)(v9 + 8) = 0;
  *(_QWORD *)(v9 + 24) = 0x1000000001LL;
  *(_QWORD *)(v9 + 16) = 0;
  *(_BYTE *)(v9 + 32) = 0;
  *(_QWORD *)(v9 + 36) = 1;
  *(_BYTE *)(v9 + 44) = 1;
  *(_QWORD *)(v9 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v9 + 56) = 16;
  *(_DWORD *)(v9 + 64) = 5;
  *(_BYTE *)(v9 + 68) = 1;
  sub_209330(v9 + 56);
  v10 = getinf(19);
  *(_DWORD *)&s[8] = 0;
  *(_QWORD *)s = &hexplace_t___vtable;
  v25 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v10, (__m128i)(unsigned __int64)v10);
  *((_QWORD *)&v35 + 1) = hexplace_t__clone(s);
  v11 = getinf(20);
  *(_QWORD *)s = &hexplace_t___vtable;
  *(_DWORD *)&s[8] = 0x7FFFFFFF;
  v25 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v11, (__m128i)(unsigned __int64)v11);
  v36 = hexplace_t__clone(s);
  *(_DWORD *)&s[8] = -1;
  *(_QWORD *)s = &hexplace_t___vtable;
  v25 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a2, (__m128i)(unsigned __int64)a2);
  if ( a2 == -1 )
  {
    v25.m128i_i64[0] = getinf(19);
    if ( v25.m128i_i64[0] != -1 )
    {
      v7 = (const char *)v9;
      hexplace_t__adjust(s, v9);
    }
  }
  if ( (_QWORD)v35 )
  {
    qfree(v35, v7);
    *(_QWORD *)&v35 = 0;
  }
  *(_QWORD *)&v35 = hexplace_t__clone(s);
  v12 = (QT::QAbstractScrollArea *)operator new(0x4A8u);
  v13 = v12;
  v14 = (char *)&s1;
  if ( (_QWORD)v23 )
    v14 = (char *)v22;
  sub_2C9EA0(v12, v14, (__int64)&v27, v9, a2, a3);
  v15 = qfree(*((_QWORD *)&v35 + 1), v14);
  *((_QWORD *)&v35 + 1) = 0;
  v16 = qfree(v36, v14, v15);
  v36 = 0;
  if ( (_QWORD)v35 )
    v16 = qfree(v35, v14, v16);
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22, v14, v16);
  }
  return v13;
}
