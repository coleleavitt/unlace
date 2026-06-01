__int64 __fastcall sub_76B8F0(__int64 a1)
{
  _DWORD *v1; // rdx
  char v3; // cl

  v1 = (_DWORD *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a1 + 16) & 4) == 0 )
    return (*v1 >> 14) & 0x1B;
  v3 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v1 & 0xFFFFFFFFFFFFFFF0LL) + 17LL);
  return (2 * ((v3 & 2) != 0)) & 0x1B | (16 * ((v3 & 0x1Fu) > 0xF)) & 0x1B | v3 & 1u | ((v3 & 4) != 0 ? 8 : 0);
}

