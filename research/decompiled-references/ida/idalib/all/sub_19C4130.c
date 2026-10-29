__int64 __fastcall sub_19C4130(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v8; // rdx
  __int64 result; // rax

  v8 = sub_19A6720(*(_QWORD *)(a1 + 16), **(_QWORD **)(a1 + 8), a5, a6, a7, a8, a2, a3);
  result = 1;
  if ( v8 != 1 )
  {
    **(_QWORD **)(a1 + 8) = v8 & 0xFFFFFFFFFFFFFFFELL;
    return 0;
  }
  return result;
}
