__int64 __fastcall sub_76B820(__int64 a1)
{
  int v1; // esi
  char v2; // al
  unsigned __int16 v3; // dx

  v1 = (**(_DWORD **)(a1 + 16) >> 14) & 0x1B;
  v2 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v3 = v2 & 0x1F;
  LOBYTE(a1) = (unsigned __int8)v3 > 0xFu;
  return (2 * ((v3 >> 1) & 1))
       | ((v2 & 4) != 0 ? 4 : 0)
       | v1
       | (16 * (_DWORD)a1)
       | (unsigned int)((v2 & 4) != 0 ? 8 : 0);
}

