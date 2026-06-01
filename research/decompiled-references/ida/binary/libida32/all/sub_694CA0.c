char __fastcall sub_694CA0(
        __int64 *a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        __m128 a9)
{
  __int64 v10; // r13
  __int64 v11; // rdi
  char result; // al
  unsigned int v13; // r12d
  double v14; // xmm4_8
  double v15; // xmm5_8
  int i; // ebp
  unsigned int v17; // esi

  switch_dbctx(*(int *)(*(_QWORD *)*a1 + 88LL));
  v10 = a1[2];
  sub_694670(a1);
  v11 = *a1;
  if ( (*(_BYTE *)(*(_QWORD *)*a1 + 769LL) & 0x10) != 0 )
  {
    v13 = sub_630AA0(v11, *(_QWORD *)(v11 + 8));
    if ( v13 > 1 )
    {
      for ( i = 1; i != v13; ++i )
      {
        v17 = i;
        sub_6947D0(a1, v17, a2, a3, a4, a5, v14, v15, a8, a9);
      }
    }
  }
  result = *((_BYTE *)a1 + 40);
  if ( !result )
    return a1[2] == v10;
  return result;
}

