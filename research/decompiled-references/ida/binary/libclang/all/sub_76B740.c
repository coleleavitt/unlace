__int64 __fastcall sub_76B740(__int64 a1, int a2)
{
  char v2; // dl

  v2 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  return ((v2 & 4) != 0 ? 0xC : 0)
       | (16 * ((v2 & 0x1Fu) > 0xF)) & 0x1E
       | v2 & 2
       | a2
       | (2 * (unsigned int)sub_79B8A0(*(_QWORD *)(a1 + 16) + 40LL));
}

