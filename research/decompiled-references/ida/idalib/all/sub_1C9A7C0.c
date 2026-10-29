unsigned __int64 __fastcall sub_1C9A7C0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  unsigned __int8 v8; // al
  int *v9; // rsi
  __int64 v10; // rax
  __int16 v12; // ax

  v8 = *(_BYTE *)(a2 + 2);
  v9 = *(int **)(a2 + 16);
  if ( v8 >> 3 != 4 )
    goto LABEL_2;
  v12 = *(_WORD *)v9 & 0x1FF;
  if ( v12 == 69 )
  {
    v10 = sub_1C93520(a1, v9, 1u, nullptr, a6, a7);
  }
  else
  {
    if ( v12 != 24 )
    {
LABEL_2:
      v10 = (__int64)sub_1C7CFE0(a1, (unsigned __int64)v9, a6, a7, a3, a4, a5);
      goto LABEL_3;
    }
    v10 = sub_1C93920(a1, (__int64 *)v9, 1u, *(double *)a6.m128_u64, a7);
  }
LABEL_3:
  if ( v10 == 1 )
    return 1;
  else
    return sub_1925670(
             *a1,
             0,
             *(unsigned int *)(a2 + 4),
             *(_BYTE *)(a2 + 2) >> 3,
             (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFELL),
             0,
             a6,
             a7);
}
