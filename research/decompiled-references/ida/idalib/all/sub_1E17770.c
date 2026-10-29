unsigned __int64 __fastcall sub_1E17770(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v7; // rax

  v7 = sub_1E11560(a1, *(unsigned __int16 **)(a2 + 16), a6, a7, a3, a4, a5);
  if ( v7 == 1 )
    return 0;
  else
    return sub_1B00B90(
             *(__int64 **)(*a1 + 760),
             (_DWORD *)(v7 & 0xFFFFFFFFFFFFFFFELL),
             *(_DWORD *)a2,
             *(_DWORD *)(a2 + 12),
             *(_DWORD *)(a2 + 4),
             a6,
             a7);
}
