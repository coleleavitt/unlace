__int64 __fastcall sub_BB3320(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp

  sub_995540(*(_QWORD *)a1, "static_assert(");
  sub_F07C00(
    *(_DWORD *)(a2 + 40) & 0xFFFFFFFC,
    *(_QWORD *)a1,
    0,
    a1 + 8,
    *(_DWORD *)(a1 + 32),
    *(_QWORD *)(a1 + 24),
    (__int64)"\n",
    1);
  v2 = *(_QWORD *)(a2 + 48);
  if ( v2 )
  {
    sub_995540(*(_QWORD *)a1, ", ");
    sub_F07C00(v2, *(_QWORD *)a1, 0, a1 + 8, *(_DWORD *)(a1 + 32), *(_QWORD *)(a1 + 24), (__int64)"\n", 1);
  }
  return sub_995540(*(_QWORD *)a1, ")");
}
