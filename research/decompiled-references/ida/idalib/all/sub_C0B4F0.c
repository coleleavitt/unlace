__int64 __fastcall sub_C0B4F0(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  __int64 v8; // rbx
  bool v9; // zf
  __int64 v10; // rbx
  unsigned __int8 v11; // al
  __int64 result; // rax

  v8 = *(_QWORD *)(a4 + 8);
  v9 = unk_2CD7484 == 0;
  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 0x43;
  if ( !v9 )
    sub_EE9B50(67);
  *(_WORD *)(a1 + 1) &= 0xF801u;
  *(_QWORD *)(a1 + 8) = v8;
  *(_QWORD *)(a1 + 16) = a4;
  v10 = sub_EEE9A0(64, a2, 8);
  v9 = unk_2CD7484 == 0;
  *(_WORD *)v10 = *(_WORD *)v10 & 0xFE00 | 0x35;
  if ( !v9 )
    sub_EE9B50(53);
  *(_WORD *)(v10 + 1) &= 0xF001u;
  *(_DWORD *)(v10 + 40) = a3;
  *(_DWORD *)(v10 + 44) = a5;
  *(_QWORD *)(v10 + 8) = 0;
  *(_QWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 24) = 0;
  *(_QWORD *)(v10 + 32) = 0;
  *(_QWORD *)(v10 + 48) = 4;
  *(_QWORD *)(v10 + 56) = 0;
  v11 = sub_B647F0(v10);
  *(_BYTE *)(v10 + 1) = (v11 << 6) | *(_BYTE *)(v10 + 1) & 0x3F;
  *(_BYTE *)(v10 + 2) = *(_BYTE *)(v10 + 2) & 0xF8 | (v11 >> 2) & 7;
  result = *(_QWORD *)(a4 + 8);
  *(_QWORD *)(v10 + 8) = result;
  *(_QWORD *)(a1 + 24) = v10;
  *(_BYTE *)(a1 + 1) &= 0x3Fu;
  *(_BYTE *)(a1 + 2) &= 0xF8u;
  return result;
}
