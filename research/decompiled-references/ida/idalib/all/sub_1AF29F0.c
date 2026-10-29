__int64 __fastcall sub_1AF29F0(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  unsigned int v7; // ebx
  __int64 v8; // rdx

  v7 = a3;
  v8 = 0;
  if ( a2 )
    v8 = (unsigned int)sub_C00A40(a2, a2, 0, a4, a5);
  return sub_19B4A30(a1, a2, v8, v7, 0, 0, a6, a7);
}
