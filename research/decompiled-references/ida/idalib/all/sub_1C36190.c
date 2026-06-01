unsigned __int64 __fastcall sub_1C36190(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  unsigned __int64 result; // rax
  unsigned __int8 v8; // bp
  unsigned int v9; // eax
  __int64 v10; // rsi

  if ( a2 == 1 )
    return 1;
  v8 = a3;
  v9 = sub_C00A40(a2 & 0xFFFFFFFFFFFFFFFELL, a2, a3, a4, a5);
  v10 = sub_19B4A30(a1, a2 & 0xFFFFFFFFFFFFFFFELL, v9, v8, 0, 0, a6, a7);
  result = 1;
  if ( v10 != 1 )
    return v10 & 0xFFFFFFFFFFFFFFFELL;
  return result;
}
