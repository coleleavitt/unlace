unsigned __int64 __fastcall sub_6E15E0(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !a2 )
    BUG();
  sub_B08C60(
    a3,
    *(_QWORD *)(a1 + 16),
    (unsigned __int8)(*(_WORD *)(a2 - 6) >> 3),
    *(_QWORD *)(a2 + 8),
    *(_QWORD *)(a2 + 16),
    *(_DWORD *)(a2 - 4),
    a2 + 24,
    *(unsigned int *)(a2 - 4));
  return sub_6999F0(*(_QWORD **)a3, *(_QWORD *)a3 + 4LL * *(unsigned int *)(a3 + 8));
}

