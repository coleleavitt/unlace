__int64 __fastcall sub_2578B0(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  int v10; // eax

  if ( !dbg
    || !(unsigned __int8)sub_257390(0, a2, a3, a4, a5, a6, a7, a8, a9)
    || dword_8CC5F0 > 0 && (*(_BYTE *)(dbg + 32) & 0x40) != 0 )
  {
    return -1;
  }
  v10 = sub_20CEA0(dbg, 2, a1, 0);
  if ( v10 <= 0 )
  {
    if ( v10 >= -1 )
      return -1;
LABEL_10:
    byte_8CC55A = 1;
    return -1;
  }
  if ( v10 != 1 )
    goto LABEL_10;
  return *(_QWORD *)(a1 + 8);
}
