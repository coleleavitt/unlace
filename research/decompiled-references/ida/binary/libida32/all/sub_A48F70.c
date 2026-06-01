unsigned __int64 __fastcall sub_A48F70(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !a2 )
    BUG();
  sub_F34B20(
    a3,
    *(_QWORD *)(a1 + 16),
    (unsigned __int8)(*(_WORD *)(a2 - 6) >> 3),
    a2 + 8,
    a2 + 24,
    *(unsigned int *)(a2 - 4));
  return sub_961DD0(*(_QWORD **)a3, *(_QWORD *)a3 + 4LL * *(unsigned int *)(a3 + 8));
}

