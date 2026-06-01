__int64 __fastcall sub_B8F5E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp

  sub_971800(*(_QWORD *)a1, "static_assert(");
  sub_EE3EC0(
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
    sub_971800(*(_QWORD *)a1, ", ");
    sub_EE3EC0(v2, *(_QWORD *)a1, 0, a1 + 8, *(_DWORD *)(a1 + 32), *(_QWORD *)(a1 + 24), (__int64)"\n", 1);
  }
  return sub_971800(*(_QWORD *)a1, ")");
}

