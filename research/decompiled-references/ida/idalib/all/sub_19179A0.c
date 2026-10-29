unsigned __int64 __fastcall sub_19179A0(
        __int64 a1,
        _QWORD *a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 result; // rax

  v8 = sub_190ABA0(a1, a2, a3, a4, a5, a6, (__m128i)a7, a8);
  if ( v8 == 1 )
    return 1;
  result = sub_19146F0(a1, (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFELL), v9, v10, v11, v12, a7, a8);
  if ( result == 1 )
    return 1;
  return result;
}
