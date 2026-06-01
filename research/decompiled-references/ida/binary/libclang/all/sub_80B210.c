__int64 __fastcall sub_80B210(__int64 a1, unsigned int a2, char a3, int a4, char a5)
{
  char v8; // al
  char v9; // al
  __int64 result; // rax

  *(_WORD *)a1 = a2 & 0x1FF | *(_WORD *)a1 & 0xFE00;
  if ( byte_4AD234C )
    sub_AC4570(a2);
  v8 = *(_BYTE *)(a1 + 2);
  *(_DWORD *)(a1 + 16) = a4;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_BYTE *)(a1 + 2) = (8 * (a3 & 1)) | v8 & 0xF7;
  v9 = 24;
  if ( a2 <= 0x5C )
    v9 = a2 < 0x5B ? 24 : 32;
  *(_BYTE *)(a1 + 3) = v9;
  result = *(_BYTE *)(a1 + 2) & 0x9F;
  *(_BYTE *)(a1 + 2) = *(_BYTE *)(a1 + 2) & 0x9F | (32 * a5) & 0x60;
  return result;
}

