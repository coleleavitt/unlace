__int64 __fastcall sub_A56AE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  if ( !a2 )
    BUG();
  sub_F58860(
    a5,
    *(_QWORD *)(a1 + 16),
    (unsigned __int8)(*(_WORD *)(a2 - 6) >> 3),
    a2 + 8,
    a2 + 24,
    *(unsigned int *)(a2 - 4));
  return sub_2222ED0(a5, a3);
}
