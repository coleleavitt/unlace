__int64 __fastcall sub_6A81D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  if ( !a2 )
    BUG();
  sub_B08C60(
    a5,
    *(_QWORD *)(a1 + 16),
    (unsigned __int8)(*(_WORD *)(a2 - 6) >> 3),
    *(_QWORD *)(a2 + 8),
    *(_QWORD *)(a2 + 16),
    *(_QWORD *)(a1 + 16),
    a2 + 24,
    *(unsigned int *)(a2 - 4));
  return sub_25ABE00(a5, a3);
}

