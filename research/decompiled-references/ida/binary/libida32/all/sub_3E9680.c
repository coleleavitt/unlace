char __fastcall sub_3E9680(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 792);
  if ( v1 > 0 || !*(_QWORD *)(a1 + 768) || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 536LL) + 34LL) & 0x20) != 0 )
    return *(_BYTE *)(a1 + 796) & (v1 > 0);
  else
    return 1;
}

