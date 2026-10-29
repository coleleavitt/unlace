_QWORD *__fastcall sub_34350(
        __int64 a1,
        __int64 *a2,
        const char *a3,
        const char *a4,
        __int64 a5,
        const char *a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  __int64 v18; // rax
  _QWORD *v19; // rbx

  v18 = sub_33980(a1, a2, (__int64)a3, (__int64)a4, a5, (__int64)a6, a7, a8, a9, a10, a11, a12, a13, a14);
  if ( !v18 )
    return nullptr;
  v19 = (_QWORD *)v18;
  if ( !(unsigned __int8)sub_31210(v18, a2, a3, a4, a6) )
  {
    (*(void (__fastcall **)(_QWORD *))(*v19 + 8LL))(v19);
    return nullptr;
  }
  v19[19] = a5;
  return v19;
}

