volatile signed __int32 **__fastcall sub_1E4C0(_QWORD *a1, __int64 a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v8; // rbp
  _QWORD *func; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  void *v13; // rax
  __m128i v14; // xmm1
  __int64 v15; // rdx
  __int64 v16; // rcx
  __m128i v17; // xmm1
  QT::QGraphicsScene *v18; // rax
  volatile signed __int32 **v19; // r13
  __int64 v20; // rsi
  volatile signed __int32 *v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  size_t v25; // rbx
  void *v26; // rbp
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __m128i *v35; // rdi
  __m128i *v36; // rdx
  __m128i *v37; // r15
  __int64 v38; // rsi
  __int64 v39; // rcx
  __int64 v40; // rax
  void *v41; // [rsp+0h] [rbp-90h]
  __m128i v42; // [rsp+8h] [rbp-88h] BYREF
  void *src; // [rsp+18h] [rbp-78h] BYREF
  size_t n[2]; // [rsp+20h] [rbp-70h]
  _QWORD *v45; // [rsp+38h] [rbp-58h] BYREF
  __m128i v46; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v47; // [rsp+50h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  *(_OWORD *)n = 0;
  src = nullptr;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(11, &v45, &callui, a4, a5, a6);
  v8 = v45;
  func = (_QWORD *)get_func(v45);
  if ( func )
    v8 = (_QWORD *)*func;
  get_nice_colored_name(&src, v8, 2);
  sub_1ACF0(&v45, a1, (__int64)&src, v10);
  v13 = v45;
  v45 = nullptr;
  v14 = _mm_loadu_si128(&v46);
  v46 = 0;
  if ( src )
  {
    v41 = v13;
    v42 = v14;
    n[0] = 0;
    qfree(src, a1, v11, v12);
    v17 = _mm_load_si128(&v42);
    src = v41;
    *(__m128i *)n = v17;
    if ( v45 )
    {
      v46.m128i_i64[0] = 0;
      qfree(v45, a1, v15, v16);
    }
  }
  else
  {
    src = v13;
    *(__m128i *)n = v14;
  }
  v18 = sub_1DD00((__int64)a1, (__int64)&src, 1);
  v19 = (volatile signed __int32 **)v18;
  if ( a3 )
  {
    sub_24740(v18);
  }
  else
  {
    v45 = nullptr;
    v46 = 0;
    v45 = (_QWORD *)qalloc_or_throw(8);
    v46.m128i_i64[1] = 1;
    *v45 = v8;
    v46.m128i_i64[0] = 1;
    sub_24830((QT::QGraphicsScene *)v19);
    if ( v45 )
    {
      v46.m128i_i64[0] = 0;
      qfree(v45, &v45, v33, v34);
    }
  }
  v20 = (__int64)v19[8];
  if ( v20 )
  {
    v21 = *(volatile signed __int32 **)(v20 + 24);
    if ( v21 )
    {
      v22 = v20 + 16;
      do
      {
        while ( 1 )
        {
          v23 = *((_QWORD *)v21 + 2);
          v24 = *((_QWORD *)v21 + 3);
          if ( *((_QWORD *)v21 + 4) < (unsigned __int64)v8 )
            break;
          v22 = (__int64)v21;
          v21 = *((volatile signed __int32 **)v21 + 2);
          if ( !v23 )
            goto LABEL_14;
        }
        v21 = *((volatile signed __int32 **)v21 + 3);
      }
      while ( v24 );
LABEL_14:
      if ( v20 + 16 != v22 && (unsigned __int64)v8 >= *(_QWORD *)(v22 + 32) )
      {
        if ( *(_DWORD *)v20 != 1 )
        {
          v21 = v19[8];
          if ( v21 )
            _InterlockedAdd(v21, 1u);
        }
        sub_1B620(v19 + 8);
        v35 = (__m128i *)v19[8];
        v36 = (__m128i *)v35[1].m128i_i64[1];
        if ( !v36 )
          goto LABEL_35;
        v37 = v35 + 1;
        do
        {
          while ( 1 )
          {
            v38 = v36[1].m128i_i64[0];
            v39 = v36[1].m128i_i64[1];
            if ( v36[2].m128i_i64[0] < (unsigned __int64)v8 )
              break;
            v37 = v36;
            v36 = (__m128i *)v36[1].m128i_i64[0];
            if ( !v38 )
              goto LABEL_33;
          }
          v36 = (__m128i *)v36[1].m128i_i64[1];
        }
        while ( v39 );
LABEL_33:
        if ( &v35[1] == v37 || (unsigned __int64)v8 < v37[2].m128i_i64[0] )
        {
LABEL_35:
          v45 = v8;
          v46.m128i_i64[0] = 0;
          v37 = sub_1B7C0(&v35->m128i_i64[1], (const __m128i *)&v45);
        }
        if ( v21 && !_InterlockedSub(v21, 1u) )
        {
          sub_1A3F0(*((_QWORD **)v21 + 3));
          operator delete((void *)v21, 0x38u);
        }
        v20 = 1;
        QT::QGraphicsItem::setSelected((QT::QGraphicsItem *)v37[2].m128i_i64[1], 1);
      }
    }
  }
  sub_265E0(v19, v20);
  sub_22680(v19);
  v25 = n[0];
  v26 = nullptr;
  if ( n[0] )
  {
    v26 = (void *)qalloc_or_throw(n[0]);
    memcpy(v26, src, v25);
  }
  v27 = a1[221];
  v28 = a1[220];
  if ( a1[222] < (unsigned __int64)(v27 + 1) )
  {
    v40 = qvector_reserve(a1 + 220, v28, v27 + 1, 24);
    a1[220] = v40;
    v27 = a1[221];
    v28 = v40;
  }
  v29 = v28 + 24 * v27;
  *(_QWORD *)v29 = v26;
  *(__m128i *)(v29 + 8) = _mm_unpacklo_epi64((__m128i)v25, (__m128i)v25);
  ++a1[221];
  sub_1A840((__int64)a1);
  if ( src )
  {
    n[0] = 0;
    qfree(src, v28, v30, v31);
  }
  return v19;
}
