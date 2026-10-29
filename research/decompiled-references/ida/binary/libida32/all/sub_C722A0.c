__int64 __fastcall sub_C722A0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        int a10)
{
  unsigned __int8 v12; // al
  __int64 result; // rax
  __int64 v14; // [rsp+0h] [rbp-38h]
  int v15; // [rsp+Ch] [rbp-2Ch]

  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 0x6C;
  if ( unk_2CAD564 )
  {
    v15 = a6;
    v14 = a5;
    sub_EC5E10(108);
    a6 = v15;
    a5 = v14;
  }
  *(_WORD *)(a1 + 1) &= 0xF801u;
  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 20) = a7;
  *(_DWORD *)(a1 + 16) = a4;
  *(_DWORD *)(a1 + 24) = a9;
  *(_QWORD *)(a1 + 32) = a3;
  *(_DWORD *)(a1 + 28) = a10;
  *(_DWORD *)(a1 + 4) = a6;
  *(_QWORD *)(a1 + 40) = a5;
  *(_QWORD *)(a1 + 48) = a8;
  v12 = sub_B41C40(a1);
  *(_BYTE *)(a1 + 1) = (v12 << 6) | *(_BYTE *)(a1 + 1) & 0x3F;
  result = *(_BYTE *)(a1 + 2) & 0xF8 | (v12 >> 2) & 7u;
  *(_BYTE *)(a1 + 2) = result;
  return result;
}

