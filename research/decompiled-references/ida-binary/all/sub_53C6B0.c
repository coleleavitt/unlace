__m128i *__fastcall sub_53C6B0(__m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  unsigned __int64 v4; // r14
  __int64 v6; // rax
  __int64 v7; // rax
  volatile signed __int32 *v9; // rax

  v3 = *(_QWORD *)(a3 + 16);
  v4 = *(_QWORD *)(a3 + 8);
  if ( -v3 >= 0 && v3 != 0
    || v3 <= 0
    || (v6 = QT::QtPrivate::qustrchr((2 * v3) >> 1, v4, 58), v4 + 2 * v3 == v6)
    || (v7 = (__int64)(v6 - v4) >> 1, (_DWORD)v7 == -1) )
  {
    v9 = *(volatile signed __int32 **)a3;
    a1[1].m128i_i64[0] = v3;
    *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v9, (__m128i)v4);
    if ( v9 )
      _InterlockedAdd(v9, 1u);
  }
  else
  {
    QT::QString::mid(a1, a3, (int)v7 + 1, -1);
  }
  return a1;
}
