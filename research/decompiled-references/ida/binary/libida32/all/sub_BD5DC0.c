__int64 __fastcall sub_BD5DC0(__int64 a1, char a2, __int64 a3, __int64 a4, int a5, int a6)
{
  unsigned __int8 v8; // al
  __int64 result; // rax
  int v10; // [rsp+8h] [rbp-30h]
  int v11; // [rsp+Ch] [rbp-2Ch]

  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 5;
  if ( unk_2CAD564 )
  {
    v11 = a6;
    v10 = a5;
    sub_EC5E10(5);
    a6 = v11;
    a5 = v10;
  }
  *(_WORD *)(a1 + 1) &= 0xF801u;
  *(_QWORD *)(a1 + 8) = a4;
  *(_BYTE *)(a1 + 2) = 8 * (a2 & 0xF);
  *(_QWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 24) = a5;
  *(_DWORD *)(a1 + 28) = a6;
  v8 = sub_B3E9D0(a1);
  *(_BYTE *)(a1 + 1) = (v8 << 6) | *(_BYTE *)(a1 + 1) & 0x3F;
  result = *(_BYTE *)(a1 + 2) & 0xF8 | (v8 >> 2) & 7u;
  *(_BYTE *)(a1 + 2) = result;
  return result;
}

