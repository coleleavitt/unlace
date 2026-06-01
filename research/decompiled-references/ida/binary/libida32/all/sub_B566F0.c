__int64 __fastcall sub_B566F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int16 v3; // ax

  v2 = sub_B6C230(72, a1, a2, 0);
  *(_QWORD *)(v2 + 8) = 0;
  *(_QWORD *)(v2 + 16) = 0;
  *(_QWORD *)v2 = off_2BD8B30;
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(v2 + 24) & 0xFFFF000000000000LL | 0x602000000000LL;
  v3 = sub_B68380(32);
  *(_BYTE *)(v2 + 32) &= 0xF8u;
  *(_WORD *)(v2 + 30) = v3 & 0x3FFF | *(_WORD *)(v2 + 30) & 0xC000;
  if ( byte_2CAD3F0[0] )
    sub_B67B90(32);
  *(_QWORD *)(v2 + 56) = 0;
  *(_OWORD *)(v2 + 40) = 0;
  *(_DWORD *)(v2 + 64) = 0;
  *(_QWORD *)v2 = &off_2B20F18;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 2320) + 1LL) & 8) != 0 )
    *(_WORD *)(v2 + 30) |= 2u;
  return v2;
}

