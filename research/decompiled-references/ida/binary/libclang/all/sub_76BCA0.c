__int64 __fastcall sub_76BCA0(__int64 a1, int a2)
{
  char v2; // cl
  unsigned __int16 v3; // dx

  v2 = *(_BYTE *)(*(_QWORD *)(**(_QWORD **)(a1 + 16) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v3 = v2 & 0x1F;
  LOBYTE(a2) = (unsigned __int8)v3 > 0xFu;
  return (2 * ((v3 >> 1) & 1)) | (16 * a2) | v2 & 1 | (unsigned int)((v2 & 4) != 0 ? 0xC : 0);
}

