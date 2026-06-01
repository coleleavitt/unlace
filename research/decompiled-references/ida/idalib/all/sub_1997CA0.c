unsigned __int64 __fastcall sub_1997CA0(__int64 *a1, unsigned __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int8 v5; // al
  unsigned __int16 *v6; // rsi
  unsigned __int64 result; // rax
  _QWORD *v8; // r8
  __int16 v9; // ax

  v5 = *(_BYTE *)(a2 + 2);
  v6 = *(unsigned __int16 **)(a2 + 16);
  if ( v5 >> 3 != 4 )
    goto LABEL_2;
  v9 = *v6 & 0x1FF;
  if ( v9 == 69 )
  {
    result = sub_1990C90(a1, (__int64)v6, 1u, nullptr, a3, a4);
  }
  else
  {
    if ( v9 != 24 )
    {
LABEL_2:
      result = sub_190CCA0(a1, v6, *(double *)a3.m128_u64, a4);
      goto LABEL_3;
    }
    result = sub_1990F40(a1, (__int64)v6, 1u, *(double *)a3.m128_u64, a4);
  }
LABEL_3:
  if ( result != 1 )
  {
    v8 = (_QWORD *)(result & 0xFFFFFFFFFFFFFFFELL);
    result = a2;
    if ( v8 != *(_QWORD **)(a2 + 16) )
      return sub_1925670(*a1, 0, *(unsigned int *)(a2 + 4), *(_BYTE *)(a2 + 2) >> 3, v8, 0, a3, a4);
  }
  return result;
}
