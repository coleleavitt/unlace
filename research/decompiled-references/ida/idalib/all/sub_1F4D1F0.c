__int64 __fastcall sub_1F4D1F0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // eax
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // [rsp+0h] [rbp-38h] BYREF

  sub_1F4CB60((__int64)&v10, a1, a2);
  v3 = a1[2];
  v4 = *(_QWORD *)(v3 + 32);
  v5 = *(_DWORD *)(v3 + 24);
  v6 = *(_QWORD *)(v4 + 8LL * v5);
  v7 = *(_QWORD *)(v4 + 8LL * (v5 + 1));
  *(_DWORD *)(v3 + 24) = v5 + 2;
  if ( (v7 & 1) != 0 )
  {
    *(_BYTE *)(a2 + 97) |= 0x10u;
    if ( (unsigned int)v6 > 0xFE )
      sub_B74850(a2, v6);
    else
      *(_WORD *)(a2 + 98) = *(_WORD *)(a2 + 98) & 0xF00F | (16 * (unsigned __int8)v6);
    *(_DWORD *)(a2 + 96) = (32 * v7) & 0xFE000 | *(_DWORD *)(a2 + 96) & 0xFFF01FFF;
  }
  else
  {
    *(_DWORD *)(a2 + 96) = ((_DWORD)v7 << 12) & 0xFE000 | *(_DWORD *)(a2 + 96) & 0xFFF01FFF;
    if ( (unsigned int)v6 > 0xFE )
      sub_B74850(a2, v6);
    else
      *(_WORD *)(a2 + 98) = *(_WORD *)(a2 + 98) & 0xF00F | (16 * (unsigned __int8)v6);
  }
  result = WORD1(v7) & 1 | (8 * (((unsigned int)v7 >> 15) & 1)) | *(_BYTE *)(a2 + 97) & 0xF6;
  *(_BYTE *)(a2 + 97) = BYTE2(v7) & 1 | (8 * ((v7 & 0x8000) != 0)) | *(_BYTE *)(a2 + 97) & 0xF6;
  if ( (v7 & 0x20000) != 0 )
  {
    v9 = sub_1F6A0A0(*(_QWORD *)(a1[2] + 8), *(_QWORD *)(a1[2] + 16));
    result = sub_B747F0(a2, v9);
  }
  if ( (v7 & 0x40000) != 0 )
  {
    result = sub_1EE7490(a1[2]);
    *(_DWORD *)(a2 + 100) = result;
  }
  return result;
}
