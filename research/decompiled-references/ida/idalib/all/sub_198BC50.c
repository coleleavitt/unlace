__int64 __fastcall sub_198BC50(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // r12
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  _QWORD *v10; // rax

  v4 = a2;
  v5 = *(_QWORD *)(a2 + 16);
  if ( (v5 & 4) == 0 )
  {
    v6 = *a1;
    sub_18C79E0(*a1, 0, 4);
    v7 = sub_190CCA0(a1, (unsigned __int16 *)(*(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFF8LL), *(double *)a3.m128_u64, a4);
    if ( v7 == 1 )
    {
      v4 = 1;
    }
    else
    {
      v8 = v7 & 0xFFFFFFFFFFFFFFFELL;
      if ( v8 != (*(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFF8LL) )
        v4 = sub_19BEAF0(*a1, *(_QWORD *)(v4 + 8), *(unsigned int *)(v4 + 32), v8, *(unsigned int *)(v4 + 36));
    }
    sub_190D5E0(v6, a3);
    return v4;
  }
  v10 = sub_1988430(a1, v5 & 0xFFFFFFFFFFFFFFF8LL, a3, a4);
  if ( !v10 )
    return 1;
  if ( v10 == (_QWORD *)(*(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFF8LL) )
    return v4;
  return sub_19BE8F0(*a1, *(_QWORD *)(v4 + 8), *(unsigned int *)(v4 + 32), v10, *(unsigned int *)(v4 + 36));
}
