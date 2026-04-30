__int64 __fastcall sub_3FEC60(__m128i *this, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128i v6; // xmm0
  __int64 v7; // rdx
  void *v8; // r13
  void **v9; // rbx
  __int64 v10; // r12
  void **i; // r12

  v6 = _mm_loadu_si128(a2);
  v7 = a2[1].m128i_i64[0];
  if ( v6.m128i_i64[0] )
    _InterlockedAdd((volatile signed __int32 *)v6.m128i_i64[0], 1u);
  v8 = *((void **)this + 2);
  v9 = *((void ***)this + 3);
  *(this + 1) = v6;
  v10 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = v7;
  if ( v8 && !_InterlockedSub((volatile signed __int32 *)v8, 1u) )
  {
    for ( i = &v9[4 * v10]; i != v9; v9 += 4 )
    {
      if ( *v9 && !_InterlockedSub((volatile signed __int32 *)*v9, 1u) )
        free(*v9);
    }
    free(v8);
  }
  sub_3FE8B0(this, (__int64)a2, v7, a4, a5, a6);
  return QT::QSortFilterProxyModel::invalidateFilter((QT::QSortFilterProxyModel *)this);
}
