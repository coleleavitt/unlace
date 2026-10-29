unsigned __int64 __fastcall sub_190AE20(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __m128i a6,
        __m128 a7)
{
  unsigned __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // [rsp+8h] [rbp-10h] BYREF

  v11 = a1;
  result = sub_18E4C90(&v11, a2, a3, a4, a5, *(double *)a6.m128i_i64);
  if ( result != 1 )
    return sub_190ABA0(a1, (_QWORD *)(result & 0xFFFFFFFFFFFFFFFELL), 1, v8, v9, v10, a6, a7);
  return result;
}
