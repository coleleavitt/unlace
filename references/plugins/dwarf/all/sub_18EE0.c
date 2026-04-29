_BOOL8 __fastcall sub_18EE0(__int64 a1, __int64 a2)
{
  return (int)sub_182A0(a1, a2, 4, 1) >= 0
      && (!*(_BYTE *)(a1 + 617) || (int)sub_182A0(a1, a2 + 4, 4, 1) >= 0)
      && (int)sub_182A0(a1, a2 + 8, *(int *)(a1 + 432), 1) >= 0
      && (int)sub_182A0(a1, a2 + 16, *(int *)(a1 + 432), 1) >= 0;
}
