__int64 __fastcall sub_76B640(__int64 a1)
{
  int v1; // esi
  char v2; // dl
  unsigned __int16 v3; // cx

  v1 = (**(_DWORD **)(a1 + 16) >> 14) & 0x1B;
  v2 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFFFFF8LL) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v3 = v2 & 0x1F;
  LOBYTE(a1) = (unsigned __int8)v3 > 0xFu;
  return (2 * ((v3 >> 1) & 1)) | v1 | (16 * (_DWORD)a1) | v2 & 1 | (unsigned int)((v2 & 4) != 0 ? 0xC : 0);
}

