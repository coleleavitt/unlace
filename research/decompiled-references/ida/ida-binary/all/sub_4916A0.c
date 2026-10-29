__int64 __fastcall sub_4916A0(__int64 a1, __int64 *a2, _QWORD *a3, __int64 a4, const QT::QString *a5, __int64 a6)
{
  __int64 v9; // rax
  __int64 (__fastcall *v10)(const QT::QString *, void **, double); // r15
  double v12; // xmm0_8
  __int8 v13; // al
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  const char *v16; // rsi
  __m128i v17; // xmm0
  const char *v18; // rdi
  void *v19; // rax
  __int64 v20; // r13
  void *v21; // rdi
  const char *v22; // rdx
  __int64 v23; // rsi
  double v24; // xmm0_8
  __int8 i; // al
  __int64 v26; // rdx
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  __int64 v29; // rsi
  __int64 result; // rax
  __int64 v31; // rax
  __m128i v32; // [rsp+0h] [rbp-D8h] BYREF
  __m128i v33; // [rsp+10h] [rbp-C8h] BYREF
  char v34; // [rsp+2Fh] [rbp-A9h] BYREF
  __m128i v35; // [rsp+30h] [rbp-A8h] BYREF
  __m128i v36; // [rsp+40h] [rbp-98h] BYREF
  void *v37[4]; // [rsp+50h] [rbp-88h] BYREF
  void *ptr; // [rsp+70h] [rbp-68h] BYREF
  __m128i v39[2]; // [rsp+78h] [rbp-60h] BYREF
  unsigned __int64 v40; // [rsp+98h] [rbp-40h]

  v9 = *(_QWORD *)a5;
  v32.m128i_i64[0] = a1;
  v32.m128i_i64[1] = a4;
  v10 = *(__int64 (__fastcall **)(const QT::QString *, void **, double))(v9 + 96);
  v40 = __readfsqword(0x28u);
  v12 = QT::QString::fromUtf8(&ptr, 19, "treewidget/x-inodes");
  v13 = v10(a5, &ptr, v12);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
  {
    v33.m128i_i8[0] = v13;
    free(ptr);
    v13 = v33.m128i_i8[0];
  }
  if ( !v13 || *(int *)a6 < 0 || *(int *)(a6 + 4) < 0 || !*(_QWORD *)(a6 + 16) )
    return 0;
  v14 = *(_QWORD *)(a6 + 8);
  ptr = nullptr;
  v15 = HIDWORD(v14);
  if ( HIDWORD(v14) == 0xFFFFFFFF )
    v15 = -1;
  v36.m128i_i64[1] = (unsigned int)v14;
  v36.m128i_i64[0] = v15;
  *(__m128i *)v32.m128i_i64[1] = _mm_load_si128(&v36);
  v39[0] = 0;
  v16 = **(const char ***)(v32.m128i_i64[0] + 208);
  dirtree_get_abspath_by_cursor(&ptr, v16, &v36, 0);
  v17 = _mm_loadu_si128(v39);
  v18 = (const char *)*a3;
  v19 = ptr;
  v39[0] = 0;
  ptr = nullptr;
  v20 = v17.m128i_i64[0];
  if ( v18 )
  {
    a3[1] = 0;
    v32.m128i_i64[1] = (__int64)v19;
    v33 = v17;
    qfree(v18, v16);
    v17 = _mm_load_si128(&v33);
    v21 = ptr;
    *a3 = v32.m128i_i64[1];
    *(__m128i *)(a3 + 1) = v17;
    if ( v21 )
    {
      v39[0].m128i_i64[0] = 0;
      *(double *)v17.m128i_i64 = qfree(v21, v16);
      v20 = a3[1];
    }
  }
  else
  {
    *a3 = v19;
    *(__m128i *)(a3 + 1) = v17;
  }
  v22 = &s1;
  if ( v20 )
    v22 = (const char *)*a3;
  v23 = **(_QWORD **)(v32.m128i_i64[0] + 208);
  v39[0].m128i_i8[0] = 0;
  ptr = (void *)-1LL;
  dirtree_resolve_path(&ptr, v23, v22, *(double *)v17.m128i_i64);
  if ( ptr == (void *)-1LL || !v39[0].m128i_i8[0] )
    return 0;
  v24 = QT::QString::fromUtf8(&ptr, 19, "treewidget/x-inodes");
  QT::QMimeData::data((QT::QMimeData *)v37, a5);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  QT::QDataStream::QDataStream(&ptr, v37, 1, v24);
LABEL_21:
  for ( i = QT::QDataStream::atEnd((QT::QDataStream *)&ptr); !i; i = QT::QDataStream::atEnd((QT::QDataStream *)&ptr) )
  {
    QT::QDataStream::operator>>(&ptr, &v35);
    QT::QDataStream::operator>>(&ptr, &v35.m128i_u64[1]);
    QT::QDataStream::operator>>(&ptr, &v34);
    if ( (unsigned __int8)(v34 - 1) > 2u )
      goto LABEL_21;
    v26 = a2[1];
    v27 = _mm_loadl_epi64(&v35);
    v28 = _mm_loadl_epi64((const __m128i *)&v35.m128i_u64[1]);
    v29 = *a2;
    if ( a2[2] < (unsigned __int64)(v26 + 1) )
    {
      v32.m128i_i64[1] = v28.m128i_i64[0];
      v32.m128i_i64[0] = v27.m128i_i64[0];
      v31 = qvector_reserve(a2, v29, v26 + 1, 16);
      *a2 = v31;
      v26 = a2[1];
      v29 = v31;
      v28 = _mm_loadl_epi64((const __m128i *)&v32.m128i_u64[1]);
      v27 = _mm_loadl_epi64(&v32);
    }
    *(__m128i *)(v29 + 16 * v26) = _mm_unpacklo_epi64(v27, v28);
    ++a2[1];
  }
  v32.m128i_i8[0] = i;
  QT::QDataStream::~QDataStream((QT::QDataStream *)&ptr);
  result = v32.m128i_u8[0];
  if ( v37[0] && !_InterlockedSub((volatile signed __int32 *)v37[0], 1u) )
  {
    v32.m128i_i8[0] = result;
    free(v37[0]);
    return v32.m128i_u8[0];
  }
  return result;
}
