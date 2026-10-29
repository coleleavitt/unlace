__int64 __fastcall sub_897460(__int64 a1, _DWORD *a2)
{
  int v2; // ebp
  int v3; // eax
  int v4; // edx
  unsigned int v5; // eax
  unsigned int v6; // esi
  int v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // edx
  int v10; // esi

  v2 = sub_182DB30(a2 + 2);
  v3 = (v2 + 3 * sub_182DB30(a2 + 6)) ^ (a2[10] + 1);
  v4 = (*a2 + 1640531527 - v3) ^ 0x4F1BB;
  v5 = (v3 + 1640531527 - v4) ^ (v4 << 8);
  v6 = (-1640531527 - v4 - v5) ^ (v5 >> 13);
  v7 = (v4 - v5 - v6) ^ (v6 >> 12);
  v8 = (v5 - v6 - v7) ^ (v7 << 16);
  v9 = (v6 - v7 - v8) ^ (v8 >> 5);
  v10 = (v7 - v8 - v9) ^ (v9 >> 3);
  return (v9 - v10 - ((v10 << 10) ^ (v8 - v9 - v10))) ^ (((v10 << 10) ^ (v8 - v9 - v10)) >> 15);
}

