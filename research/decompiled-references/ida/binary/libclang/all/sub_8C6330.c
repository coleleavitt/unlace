__int64 __fastcall sub_8C6330(__int64 a1, int a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v6; // rbx
  unsigned __int8 v7; // r13
  int v8; // eax
  unsigned __int8 v9; // al

  v6 = sub_AC40C0(16, a1, 8);
  v7 = *(_BYTE *)(*(_QWORD *)(a1 + 2160) + 89LL) & 1;
  *(_WORD *)v6 = *(_WORD *)v6 & 0xFE00 | 0x63;
  if ( byte_4AD234C )
    sub_AC4570(99);
  v8 = *(_DWORD *)v6;
  *(_QWORD *)(v6 + 8) = a3;
  *(_DWORD *)(v6 + 4) = a2;
  *(_DWORD *)v6 = v8 & 0xFFE001FF | ((v7 << 9) | (a4 << 19)) & 0x1FFE00;
  v9 = sub_76B950(v6, a1);
  *(_BYTE *)(v6 + 1) = (v9 << 6) | *(_BYTE *)(v6 + 1) & 0x3F;
  *(_BYTE *)(v6 + 2) = *(_BYTE *)(v6 + 2) & 0xF8 | (v9 >> 2) & 7;
  return v6;
}

