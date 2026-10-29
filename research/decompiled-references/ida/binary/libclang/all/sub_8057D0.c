__int64 __fastcall sub_8057D0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        __int64 a5,
        char a6,
        int a7,
        _QWORD *a8,
        char a9)
{
  __int16 v13; // ax
  __int16 v14; // dx
  unsigned __int8 v15; // al
  __int64 result; // rax

  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 0x48;
  if ( byte_4AD234C )
    sub_AC4570(72);
  v13 = *(_WORD *)(a1 + 1);
  *(_QWORD *)(a1 + 8) = a5;
  *(_QWORD *)(a1 + 16) = a3;
  *(_WORD *)(a1 + 1) = v13 & 0xF801 | (2 * (a6 & 3));
  v14 = *(_WORD *)(a1 + 2) & 0xF007;
  *(_QWORD *)(a1 + 24) = *a8;
  *(_WORD *)(a1 + 2) = v14 | ((a4 << 7) | ((a9 & 3) << 9)) & 0xFF8;
  *(_DWORD *)(a1 + 4) = a7;
  v15 = sub_76BFA0(a1, a2);
  *(_BYTE *)(a1 + 1) = (v15 << 6) | *(_BYTE *)(a1 + 1) & 0x3F;
  result = *(_BYTE *)(a1 + 2) & 0xF8 | (v15 >> 2) & 7u;
  *(_BYTE *)(a1 + 2) = result;
  return result;
}

