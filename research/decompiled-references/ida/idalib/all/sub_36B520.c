__int64 __fastcall sub_36B520(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 8) = get_prev_fixup_ea(*(_QWORD *)(a1 + 8));
  return 0;
}
