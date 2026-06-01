__int64 __fastcall sub_B556D0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  __int16 v4; // ax

  v3 = sub_B6C230(48, a1, a2, (unsigned int)(a3 + 1));
  *(_QWORD *)(v3 + 8) = 0;
  *(_QWORD *)(v3 + 16) = 0;
  *(_QWORD *)v3 = off_2BD8B30;
  *(_QWORD *)(v3 + 24) = *(_QWORD *)(v3 + 24) & 0xFFFF000000000000LL | 0x600A00000000LL;
  v4 = sub_B68380(10);
  *(_BYTE *)(v3 + 32) &= 0xF8u;
  *(_WORD *)(v3 + 30) = v4 & 0x3FFF | *(_WORD *)(v3 + 30) & 0xC000;
  if ( byte_2CAD3F0[0] )
    sub_B67B90(10);
  *(_QWORD *)(v3 + 40) = 0;
  *(_QWORD *)v3 = &off_2B20C20;
  return v3;
}

