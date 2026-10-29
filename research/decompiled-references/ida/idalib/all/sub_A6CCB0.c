unsigned __int64 __fastcall sub_A6CCB0(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !a2 )
    BUG();
  sub_F58860(
    a3,
    *(_QWORD *)(a1 + 16),
    (unsigned __int8)(*(_WORD *)(a2 - 6) >> 3),
    a2 + 8,
    a2 + 24,
    *(unsigned int *)(a2 - 4));
  return sub_985B10(*(_QWORD **)a3, *(_QWORD *)a3 + 4LL * *(unsigned int *)(a3 + 8));
}
