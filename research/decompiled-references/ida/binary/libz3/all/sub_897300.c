__int64 __fastcall sub_897300(_DWORD *a1)
{
  int v1; // ebp
  int v2; // eax
  int v3; // edx
  unsigned int v4; // eax
  unsigned int v5; // esi
  int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // edx
  int v9; // esi

  v1 = sub_182DB30(a1 + 2);
  v2 = (v1 + 3 * sub_182DB30(a1 + 6)) ^ (a1[10] + 1);
  v3 = (*a1 + 1640531527 - v2) ^ 0x4F1BB;
  v4 = (v2 + 1640531527 - v3) ^ (v3 << 8);
  v5 = (-1640531527 - v3 - v4) ^ (v4 >> 13);
  v6 = (v3 - v4 - v5) ^ (v5 >> 12);
  v7 = (v4 - v5 - v6) ^ (v6 << 16);
  v8 = (v5 - v6 - v7) ^ (v7 >> 5);
  v9 = (v6 - v7 - v8) ^ (v8 >> 3);
  return (v8 - v9 - ((v9 << 10) ^ (v7 - v8 - v9))) ^ (((v9 << 10) ^ (v7 - v8 - v9)) >> 15);
}

