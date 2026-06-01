__int64 __fastcall sub_177B140(__int64 *a1, __int64 a2, __m128 a3)
{
  unsigned __int8 v4; // al
  __int64 *v5; // rsi
  __int64 result; // rax
  unsigned __int64 v7; // r8
  __int16 v8; // ax

  v4 = *(_BYTE *)(a2 + 2);
  v5 = *(__int64 **)(a2 + 16);
  if ( v4 >> 3 == 4 )
  {
    v8 = *(_WORD *)v5 & 0x1FF;
    if ( v8 == 69 )
    {
      result = sub_1773260(a1, (__int64)v5, 1u, 0, a3);
      goto LABEL_3;
    }
    if ( v8 == 24 )
    {
      result = sub_1773700(a1, v5, 1u);
      goto LABEL_3;
    }
  }
  result = sub_175B800(a1, (unsigned __int16 *)v5);
LABEL_3:
  if ( result != 1 )
  {
    v7 = result & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(*a1 + 12632) )
      return sub_1925670(*a1, 0, *(unsigned int *)(a2 + 4), *(_BYTE *)(a2 + 2) >> 3, v7, 0);
    result = a2;
    if ( *(_QWORD *)(a2 + 16) != v7 )
      return sub_1925670(*a1, 0, *(unsigned int *)(a2 + 4), *(_BYTE *)(a2 + 2) >> 3, v7, 0);
  }
  return result;
}
