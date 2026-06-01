__int64 __fastcall sub_C71CF0(__int64 a1, __int64 a2, char a3, int a4, __int64 a5, __int64 a6, __int16 a7, char a8)
{
  bool v10; // zf
  char v11; // dl
  int v12; // eax
  __int16 v13; // dx
  __int64 result; // rax
  __int64 v15; // [rsp+0h] [rbp-38h]
  __int64 v16; // [rsp+8h] [rbp-30h]

  v10 = unk_2CAD564 == 0;
  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 7;
  if ( !v10 )
  {
    v16 = a6;
    v15 = a5;
    sub_EC5E10(7);
    a6 = v16;
    a5 = v15;
  }
  v11 = *(_BYTE *)(a1 + 1);
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a6;
  *(_BYTE *)(a1 + 1) = (2 * (a3 & 3)) | v11 & 0xF9;
  *(_WORD *)(a1 + 1) &= 0xF807u;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a5 + 8);
  v12 = *(_DWORD *)(a5 + 4);
  *(_DWORD *)(a1 + 36) = a4;
  v13 = v12;
  LOWORD(v12) = *(_WORD *)(a1 + 32);
  *(_BYTE *)(a1 + 1) |= 0xC0u;
  LOWORD(v12) = v13 & 0x7FFF | v12 & 0x8000;
  *(_WORD *)(a1 + 32) = v12;
  *(_BYTE *)(a1 + 33) = (a8 << 7) | BYTE1(v12) & 0x7F;
  *(_WORD *)(a1 + 34) = a7;
  result = *(_BYTE *)(a1 + 2) & 0xF8 | 3u;
  *(_BYTE *)(a1 + 2) = *(_BYTE *)(a1 + 2) & 0xF8 | 3;
  return result;
}

