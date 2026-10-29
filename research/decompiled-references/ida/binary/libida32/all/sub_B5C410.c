__int64 __fastcall sub_B5C410(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = sub_B6C230(160, a1, a2, 0);
  sub_B5C270(v2, 0x3Eu, 4, a1, 0, 0, 0, 0, 0);
  *(_DWORD *)(v2 + 74) &= 0xF800007F;
  *(_QWORD *)(v2 + 128) = 0;
  *(_QWORD *)(v2 + 136) = 0;
  *(_QWORD *)v2 = &off_2B209F8;
  *(_QWORD *)(v2 + 144) = 0;
  *(_DWORD *)(v2 + 152) = 0;
  *(_BYTE *)(v2 + 74) = (8 * *(_BYTE *)(*(_QWORD *)(a1 + 2320) + 21LL)) & 0x10 | *(_BYTE *)(v2 + 74) & 0xEF;
  return v2;
}

