__int64 __fastcall sub_39820(__int64 a1, __int64 a2)
{
  if ( *(_BYTE *)(a1 + 617) )
  {
    if ( (int)sub_396B0(a1, a2, 4, 1) >= 0
      && (int)sub_396B0(a1, a2 + 4, 1, 1) >= 0
      && (int)sub_396B0(a1, a2 + 5, 1, 1) >= 0
      && (int)sub_396B0(a1, a2 + 6, 2, 1) >= 0
      && (int)sub_396B0(a1, a2 + 8, *(int *)(a1 + 424), 1) >= 0 )
    {
      return (unsigned int)((int)sub_396B0(a1, a2 + 16, *(int *)(a1 + 432), 1) >> 31);
    }
  }
  else if ( (int)sub_396B0(a1, a2, 4, 1) >= 0
         && (int)sub_396B0(a1, a2 + 8, *(int *)(a1 + 424), 1) >= 0
         && (int)sub_396B0(a1, a2 + 16, 4, 1) >= 0
         && (int)sub_396B0(a1, a2 + 4, 1, 1) >= 0
         && (int)sub_396B0(a1, a2 + 5, 1, 1) >= 0 )
  {
    return (unsigned int)((int)sub_396B0(a1, a2 + 6, 2, 1) >> 31);
  }
  return 0xFFFFFFFFLL;
}
