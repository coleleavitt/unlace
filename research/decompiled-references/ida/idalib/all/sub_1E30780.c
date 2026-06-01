__int64 __fastcall sub_1E30780(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  unsigned __int8 v8; // al
  unsigned __int16 *v9; // rsi
  __int64 result; // rax
  _QWORD *v11; // r8
  __int16 v12; // ax

  v8 = *(_BYTE *)(a2 + 2);
  v9 = *(unsigned __int16 **)(a2 + 16);
  if ( v8 >> 3 == 4 )
  {
    v12 = *v9 & 0x1FF;
    if ( v12 == 69 )
    {
      result = sub_1E261B0(a1, (__int64)v9, 1u, nullptr, a6, a7);
      goto LABEL_3;
    }
    if ( v12 == 24 )
    {
      result = sub_1E26650(a1, (__int64)v9, 1u, *(double *)a6.m128_u64, a7);
      goto LABEL_3;
    }
  }
  result = sub_1E11560(a1, v9, a6, a7, a3, a4, a5);
LABEL_3:
  if ( result != 1 )
  {
    v11 = (_QWORD *)(result & 0xFFFFFFFFFFFFFFFELL);
    if ( *(_DWORD *)(*a1 + 12632) )
      return sub_1925670(*a1, 0, *(unsigned int *)(a2 + 4), *(_BYTE *)(a2 + 2) >> 3, v11, 0, a6, a7);
    result = a2;
    if ( *(_QWORD **)(a2 + 16) != v11 )
      return sub_1925670(*a1, 0, *(unsigned int *)(a2 + 4), *(_BYTE *)(a2 + 2) >> 3, v11, 0, a6, a7);
  }
  return result;
}
