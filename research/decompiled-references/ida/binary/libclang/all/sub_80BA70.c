__int64 __fastcall sub_80BA70(__int64 a1, char a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int16 v10; // ax
  unsigned __int8 v11; // al
  __int64 result; // rax

  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 5;
  if ( byte_4AD234C )
    sub_AC4570(5);
  v10 = *(_WORD *)(a1 + 1);
  *(_QWORD *)(a1 + 8) = a4;
  *(_DWORD *)(a1 + 24) = a5;
  *(_DWORD *)(a1 + 28) = a6;
  *(_QWORD *)(a1 + 16) = a3;
  *(_WORD *)(a1 + 1) = v10 & 0x8001 | ((a2 & 7) << 11);
  v11 = sub_76AFE0(a1);
  *(_BYTE *)(a1 + 1) = (v11 << 6) | *(_BYTE *)(a1 + 1) & 0x3F;
  result = *(_BYTE *)(a1 + 2) & 0xF8 | (v11 >> 2) & 7u;
  *(_BYTE *)(a1 + 2) = result;
  return result;
}

