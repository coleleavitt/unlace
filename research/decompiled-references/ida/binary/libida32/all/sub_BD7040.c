__int64 __fastcall sub_BD7040(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5, int a6, unsigned __int64 a7)
{
  __int16 v9; // ax
  int v10; // eax
  __int64 result; // rax
  int v12; // [rsp+8h] [rbp-30h]
  int v13; // [rsp+Ch] [rbp-2Ch]

  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 0xB;
  if ( unk_2CAD564 )
  {
    v13 = a6;
    v12 = a5;
    sub_EC5E10(11);
    a6 = v13;
    a5 = v12;
  }
  v9 = *(_WORD *)(a1 + 1);
  *(_QWORD *)(a1 + 8) = a4;
  *(_DWORD *)(a1 + 16) = a5;
  v9 &= 0xF801u;
  *(_DWORD *)(a1 + 20) = a6;
  *(_WORD *)(a1 + 1) = v9;
  *(_QWORD *)(a1 + 24) = a7;
  *(_BYTE *)(a1 + 2) = (8 * (a3 & 7)) | HIBYTE(v9) & 0xC7;
  if ( a3 <= 6 && ((1LL << a3) & 0x43) != 0 && (unsigned __int8)sub_B6A440(a7) )
    v10 = 8;
  else
    v10 = 0;
  LOBYTE(v10) = (unsigned __int8)v10 >> 2;
  *(_BYTE *)(a1 + 1) &= 0x3Fu;
  result = v10 | *(_BYTE *)(a1 + 2) & 0xF8u;
  *(_BYTE *)(a1 + 2) = result;
  return result;
}

