__int64 __fastcall sub_3D7220(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rbp

  v3 = 24 * a3;
  switch_dbctx(*(int *)(a1 + 8));
  v4 = sub_3D7180(*(_QWORD *)(a1 + 40), v3 + **(_QWORD **)(a1 + 48), 0);
  return (v4 != 0) ^ (unsigned __int8)(sub_3D7180(*(_QWORD *)(a2 + 40), **(_QWORD **)(a2 + 48) + v3, 0) != 0);
}

