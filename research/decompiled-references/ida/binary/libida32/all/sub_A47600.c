unsigned __int64 __fastcall sub_A47600(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !a2 )
    BUG();
  sub_F3C500(
    a3,
    *(_QWORD *)(a1 + 16),
    *(_QWORD *)(a2 + 8),
    (*(_WORD *)(a2 - 6) >> 6) & 7,
    (*(_BYTE *)(a2 - 6) >> 3) & 7,
    *(_QWORD *)(a2 + 16));
  return sub_961DD0(*(_QWORD **)a3, *(_QWORD *)a3 + 4LL * *(unsigned int *)(a3 + 8));
}

