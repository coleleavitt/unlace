__int64 __fastcall sub_369220(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp

  v4 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a2 + 8) = get_item_end(v4, a2, a3, a4) - v4;
  return 0;
}

