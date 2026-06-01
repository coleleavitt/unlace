bool __fastcall sub_B74820(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 96);
  return (BYTE1(v1) & 6) == 2 || (BYTE1(v1) & 6) == 4 || (*(_QWORD *)(a1 + 88) & 0xFFFFFFFFFFFFFFF8LL) != 0;
}
