__int64 __fastcall sub_1AF2350(__int64 a1, int a2, __int64 a3, char a4, char a5, __int64 a6)
{
  char v8; // al
  unsigned __int8 v9; // al
  __int64 result; // rax
  char v11; // [rsp+4h] [rbp-34h]
  __int64 v12; // [rsp+8h] [rbp-30h]

  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 0x1A;
  if ( unk_2CD7484 )
  {
    v12 = a6;
    v11 = a5;
    sub_EE9B50(26);
    a6 = v12;
    a5 = v11;
  }
  v8 = *(_BYTE *)(a1 + 1);
  *(_BYTE *)(a1 + 2) &= 0xF0u;
  *(_QWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 4) = a2;
  *(_QWORD *)(a1 + 16) = a6;
  *(_BYTE *)(a1 + 1) = (8 * (a5 & 7)) | (2 * (a4 & 3)) | v8 & 1;
  v9 = sub_B62360(a1);
  *(_BYTE *)(a1 + 1) = (v9 << 6) | *(_BYTE *)(a1 + 1) & 0x3F;
  result = *(_BYTE *)(a1 + 2) & 0xF8 | (v9 >> 2) & 7u;
  *(_BYTE *)(a1 + 2) = result;
  return result;
}
