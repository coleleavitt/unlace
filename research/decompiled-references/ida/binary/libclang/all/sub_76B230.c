__int64 __fastcall sub_76B230(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // r10d
  unsigned __int16 v5; // ax
  char v6; // dl
  unsigned __int16 v7; // si

  v5 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 0x1F;
  LOBYTE(a4) = (unsigned __int8)v5 > 0xFu;
  v6 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFFFFF8LL) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  v7 = v6 & 0x1F;
  LOBYTE(v4) = (unsigned __int8)v7 > 0xFu;
  return (2 * ((v7 >> 1) & 1))
       | (2 * ((v5 >> 1) & 1))
       | ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 ? 4 : 0)
       | (**(_DWORD **)(a1 + 32) >> 14) & 0x1B
       | ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 ? 8 : 0)
       | (16 * a4)
       | (16 * v4)
       | v6 & 1
       | (unsigned int)((v6 & 4) != 0 ? 0xC : 0);
}

