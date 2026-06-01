__int64 __fastcall sub_B56F60(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int16 v3; // ax

  v2 = sub_B6C230(120, a1, a2, 0);
  *(_QWORD *)(v2 + 8) = 0;
  *(_QWORD *)(v2 + 16) = 0;
  *(_QWORD *)v2 = off_2BD8B30;
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(v2 + 24) & 0xFFFF000000000000LL | 0x601900000000LL;
  v3 = sub_B68380(25);
  *(_BYTE *)(v2 + 32) &= 0xF8u;
  *(_WORD *)(v2 + 30) = v3 & 0x3FFF | *(_WORD *)(v2 + 30) & 0xC000;
  if ( byte_2CAD3F0[0] )
    sub_B67B90(25);
  *(_QWORD *)(v2 + 40) = 0;
  *(_QWORD *)v2 = &off_2B206B0;
  sub_B6A340(v2 + 48, 25);
  *(_QWORD *)(v2 + 80) = 0;
  *(_DWORD *)(v2 + 88) = 0;
  *(_OWORD *)(v2 + 96) = 0;
  *(_QWORD *)v2 = &off_2B20598;
  *(_WORD *)(v2 + 92) = 0;
  *(_QWORD *)(v2 + 112) = 0;
  return v2;
}

