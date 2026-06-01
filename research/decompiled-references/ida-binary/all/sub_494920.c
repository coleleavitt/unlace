unsigned __int64 __fastcall sub_494920(
        double a1,
        double a2,
        __m128 a3,
        __int64 a4,
        __int64 *a5,
        QT::QAbstractItemView *a6)
{
  unsigned __int64 v8; // rdx
  const __m128i *v9; // r13
  const __m128i *i; // r15
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  const char *v14; // rsi
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rbx
  __int128 v20; // kr00_16
  __int64 v21; // rax
  char *v22; // rax
  __int64 v24; // rax
  __int128 v25; // [rsp+8h] [rbp-C0h]
  __m128i v26; // [rsp+20h] [rbp-A8h] BYREF
  void *ptr; // [rsp+30h] [rbp-98h] BYREF
  const __m128i *v28; // [rsp+38h] [rbp-90h]
  unsigned __int64 v29; // [rsp+40h] [rbp-88h]
  __int64 v30; // [rsp+50h] [rbp-78h] BYREF
  __int128 v31; // [rsp+58h] [rbp-70h]
  __int128 v32; // [rsp+68h] [rbp-60h]
  __int128 v33; // [rsp+78h] [rbp-50h]
  unsigned __int64 v34; // [rsp+88h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  QT::QAbstractItemModel::persistentIndexList((QT::QAbstractItemModel *)&ptr);
  v8 = v29;
  if ( a5[2] < v29 )
  {
    *a5 = qvector_reserve(a5, *a5, v29, 48);
    v8 = v29;
  }
  v9 = (const __m128i *)((char *)v28 + 24 * v8);
  for ( i = v28; v9 != i; i = (const __m128i *)((char *)i + 24) )
  {
    v32 = -1;
    v33 = -1;
    QT::QAbstractItemView::model(a6);
    if ( i->m128i_i32[0] >= 0 && i->m128i_i32[1] >= 0 && i[1].m128i_i64[0] )
    {
      v11 = i->m128i_u64[1];
      v12 = (unsigned int)v11;
      v13 = HIDWORD(v11);
      if ( v13 == 0xFFFFFFFFLL )
        v13 = -1;
    }
    else
    {
      v12 = -1;
      v13 = -1;
    }
    v26.m128i_i64[0] = v13;
    v14 = (const char *)&v30;
    v26.m128i_i64[1] = v12;
    v30 = 0;
    v31 = 0;
    v15 = sub_48DE20(a6, &v30, &v26, 1, 0.0, NAN, a3);
    v19 = v30;
    v20 = v31;
    if ( v15 )
    {
      v21 = a5[1];
      v14 = (const char *)*a5;
      if ( a5[2] < (unsigned __int64)(v21 + 1) )
      {
        v25 = v31;
        v24 = qvector_reserve(a5, v14, v21 + 1, 48);
        *a5 = v24;
        v14 = (const char *)v24;
        v21 = a5[1];
        v20 = v25;
      }
      v17 = -1;
      a3 = (__m128)*((unsigned __int64 *)&v20 + 1);
      v22 = (char *)&v14[48 * v21];
      *(_QWORD *)v22 = 0;
      *((_QWORD *)v22 + 3) = -1;
      *((_QWORD *)v22 + 4) = 0;
      *((_QWORD *)v22 + 5) = 0;
      *(_OWORD *)(v22 + 8) = 0;
      ++a5[1];
      *(__m128i *)(v22 + 24) = _mm_loadu_si128(i);
      *((_QWORD *)v22 + 5) = i[1].m128i_i64[0];
      v16 = *(_QWORD *)v22;
      *(__m128i *)(v22 + 8) = _mm_unpacklo_epi64(
                                (__m128i)(unsigned __int64)v20,
                                (__m128i)*((unsigned __int64 *)&v20 + 1));
      *(_QWORD *)v22 = v19;
      v19 = v16;
    }
    if ( v19 )
      qfree(v19, v14, v16, v17, v18, (_QWORD)v20);
  }
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  return v34 - __readfsqword(0x28u);
}
