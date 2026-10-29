__int64 __fastcall sub_4C3AE0(QT::QObject *a1, const char *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  unsigned int v5; // ebx
  __int64 v7; // rbp
  __int64 v8; // r9
  unsigned __int64 v9; // r12
  void *v10; // rax
  const char *v11; // rsi
  void *v12; // r13
  __m128i v13; // xmm2
  __m128i v14; // [rsp+0h] [rbp-88h] BYREF
  void *src; // [rsp+10h] [rbp-78h] BYREF
  __int128 v16; // [rsp+18h] [rbp-70h]
  void *v17; // [rsp+30h] [rbp-58h] BYREF
  __m128i v18; // [rsp+38h] [rbp-50h]
  __m128i v19; // [rsp+48h] [rbp-40h]
  unsigned __int64 v20; // [rsp+58h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  v16 = 0;
  src = nullptr;
  v3 = QT::QAbstractItemView::model(a1);
  v4 = *(_QWORD *)(v3 + 216);
  if ( !v4 )
    v4 = *(_QWORD *)(v3 + 208);
  v5 = sub_4C2AD0(v4, (__int64)a2, (__int64)&src);
  if ( v5 == 1 )
  {
    a2 = (const char *)a1;
    v7 = QT::QMetaObject::cast((QT::QMetaObject *)&off_89D580, a1);
    if ( v7 )
    {
      v9 = v16;
      v17 = nullptr;
      v18 = 0;
      v19 = (__m128i)-1LL;
      if ( (_QWORD)v16 )
      {
        v10 = (void *)qalloc_or_throw(16 * v16);
        v11 = (const char *)src;
        v12 = v10;
        v14 = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v9);
        memcpy(v10, src, 16 * v9);
        if ( v17 )
        {
          v18.m128i_i64[0] = 0;
          qfree(v17, v11);
        }
        v13 = _mm_load_si128(&v14);
        v17 = v12;
        v18 = v13;
        v19 = _mm_loadu_si128((const __m128i *)src);
      }
      a2 = (const char *)&v17;
      (*(void (__fastcall **)(__int64, void **, _QWORD, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v7 + 792LL))(
        v7,
        &v17,
        0,
        7,
        1,
        v8,
        v14.m128i_i64[0],
        v14.m128i_i64[1]);
      if ( v17 )
      {
        v18.m128i_i64[0] = 0;
        qfree(v17, (const char *)&v17);
      }
    }
  }
  if ( src )
  {
    *(_QWORD *)&v16 = 0;
    qfree(src, a2);
  }
  return v5;
}
