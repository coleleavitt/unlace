unsigned __int64 __fastcall sub_19749F0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int8 v5; // al
  int *v6; // rsi
  __int64 v7; // rax
  __int16 v9; // ax

  v5 = *(_BYTE *)(a2 + 2);
  v6 = *(int **)(a2 + 16);
  if ( v5 >> 3 != 4 )
    goto LABEL_2;
  v9 = *(_WORD *)v6 & 0x1FF;
  if ( v9 == 69 )
  {
    v7 = sub_196DA10(a1, v6, 1u, nullptr, a3, a4);
  }
  else
  {
    if ( v9 != 24 )
    {
LABEL_2:
      v7 = sub_1933BC0(a1, (unsigned __int64)v6, *(double *)a3.m128_u64, a4);
      goto LABEL_3;
    }
    v7 = sub_196DE30(a1, (__int64)v6, 1u, *(double *)a3.m128_u64, a4);
  }
LABEL_3:
  if ( v7 == 1 )
    return 1;
  else
    return sub_1925670(
             *a1,
             0,
             *(unsigned int *)(a2 + 4),
             *(_BYTE *)(a2 + 2) >> 3,
             (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFELL),
             0,
             a3,
             a4);
}
