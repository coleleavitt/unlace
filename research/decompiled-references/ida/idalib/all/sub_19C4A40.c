__int64 __fastcall sub_19C4A40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6, int a7, __int64 a8)
{
  char v10; // al
  unsigned __int8 v11; // al
  __int64 result; // rax
  char v13; // [rsp+8h] [rbp-30h]
  char v14; // [rsp+Ch] [rbp-2Ch]

  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 0x20;
  if ( unk_2CD7484 )
  {
    v14 = a6;
    v13 = a5;
    sub_EE9B50(32);
    a6 = v14;
    a5 = v13;
  }
  v10 = *(_BYTE *)(a1 + 1);
  *(_BYTE *)(a1 + 2) &= 0xF8u;
  *(_QWORD *)(a1 + 8) = a4;
  *(_QWORD *)(a1 + 16) = a2 | 4;
  *(_QWORD *)(a1 + 24) = a3 & 0xFFFFFFFFFFFFFFF9LL;
  *(_BYTE *)(a1 + 1) = (8 * (a6 & 7)) | (2 * (a5 & 3)) | v10 & 1;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 32) = a7;
  *(_QWORD *)(a1 + 40) = a8 & 0xFFFFFFFFFFFFFFF9LL;
  v11 = sub_B63A40(a1);
  *(_BYTE *)(a1 + 1) = (v11 << 6) | *(_BYTE *)(a1 + 1) & 0x3F;
  result = *(_BYTE *)(a1 + 2) & 0xF8 | (v11 >> 2) & 7u;
  *(_BYTE *)(a1 + 2) = result;
  return result;
}
