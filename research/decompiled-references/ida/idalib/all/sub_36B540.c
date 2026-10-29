__int64 __fastcall sub_36B540(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 8) = get_next_fixup_ea(*(_QWORD *)(a1 + 8));
  return 0;
}
