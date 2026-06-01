__int64 __fastcall sub_367E50(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 8) = get_prev_fixup_ea(*(unsigned int *)(a1 + 8));
  return 0;
}

