__int64 __fastcall sub_367E70(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 8) = get_next_fixup_ea(*(unsigned int *)(a1 + 8));
  return 0;
}

