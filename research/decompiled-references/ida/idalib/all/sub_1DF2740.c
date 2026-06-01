unsigned __int64 __fastcall sub_1DF2740(
        __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int8 v9; // al
  _WORD *v10; // rsi
  unsigned __int64 result; // rax
  _QWORD *v12; // r8
  __int16 v13; // ax

  v9 = *(_BYTE *)(a2 + 2);
  v10 = *(_WORD **)(a2 + 16);
  if ( v9 >> 3 == 4 )
  {
    v13 = *v10 & 0x1FF;
    if ( v13 == 69 )
    {
      result = sub_1DE85A0(a1, (__int64)v10, 1u, nullptr, a7, a8);
      goto LABEL_3;
    }
    if ( v13 == 24 )
    {
      result = sub_1DE8A40(a1, (unsigned __int64)v10, 1u, *(double *)a7.m128_u64, a8);
      goto LABEL_3;
    }
  }
  result = (unsigned __int64)sub_1DC71F0(a1, (unsigned __int64)v10, a3, a4, a5, a6, a7, a8);
LABEL_3:
  if ( result != 1 )
  {
    v12 = (_QWORD *)(result & 0xFFFFFFFFFFFFFFFELL);
    if ( *(_DWORD *)(*a1 + 12632) )
      return sub_1925670(*a1, 0, *(unsigned int *)(a2 + 4), *(_BYTE *)(a2 + 2) >> 3, v12, 0, a7, a8);
    result = a2;
    if ( *(_QWORD **)(a2 + 16) != v12 )
      return sub_1925670(*a1, 0, *(unsigned int *)(a2 + 4), *(_BYTE *)(a2 + 2) >> 3, v12, 0, a7, a8);
  }
  return result;
}
