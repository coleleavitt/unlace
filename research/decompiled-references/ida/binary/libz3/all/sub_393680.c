__int64 __fastcall sub_393680(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 36);
  *(_DWORD *)(a1 + 36) = v1 + 1;
  return 3 * (unsigned int)(v1 == 1) + 8;
}

