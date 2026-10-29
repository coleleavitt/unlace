__int64 __fastcall sub_7D4680(__int64 a1)
{
  __int64 v1; // rbx

  v1 = operator new(0x70u);
  sub_7C2540(v1, 1, -1, 0, 0);
  *(_QWORD *)(v1 + 96) = a1;
  *(_BYTE *)(v1 + 104) = 1;
  *(_DWORD *)(v1 + 108) = 6;
  *(_QWORD *)v1 = &off_2BFBD68;
  sub_7C25A0((_QWORD *)v1, byte_2B3BDA0, 0x28u);
  *(_QWORD *)v1 = &off_2BFBEF8;
  return v1;
}
