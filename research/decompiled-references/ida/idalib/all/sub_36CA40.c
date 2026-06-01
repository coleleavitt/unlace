__int64 __fastcall sub_36CA40(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp

  v4 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = get_item_end(v4, a2, a3, a4) - v4;
  return 0;
}
