__int64 __fastcall sub_1666CF0(__int64 a1, unsigned int a2, unsigned __int8 a3)
{
  int v5; // eax
  int v6; // ebx
  int v7; // ebp
  __int64 v8; // rsi
  unsigned int v9; // ebx
  __int64 result; // rax
  int v11; // [rsp+Ch] [rbp-CCh]
  unsigned int v12[50]; // [rsp+10h] [rbp-C8h] BYREF

  v5 = *(_DWORD *)(a1 + 1952);
  v6 = *(_DWORD *)(a1 + 1956);
  if ( *(_DWORD *)(a1 + 1944) == v5 && *(_DWORD *)(a1 + 1948) == v6 )
  {
    v5 = 0;
    v7 = 260;
  }
  else
  {
    BYTE1(v5) &= ~1u;
    v7 = v6 | 0x104;
  }
  if ( a3 && (*(_DWORD *)(a1 + 224) & 0x7200) != 0 )
  {
    v11 = v5;
    sub_168B9F0(v12, a1 + 8, a2, 4825, 0);
    sub_15F7200(v12);
    v5 = v11;
  }
  *(_DWORD *)(a1 + 1956) = v7;
  v8 = *(_QWORD *)(a1 + 232);
  *(_DWORD *)(a1 + 1960) = a2;
  v9 = (4 * a3) | v5 & 0xFFFFFFFB | (a3 << 8);
  *(_DWORD *)(a1 + 1952) = v9;
  sub_BF6C80(v12, v8);
  result = v12[0];
  *(_DWORD *)(a1 + 224) = v12[0] ^ v7 & (v12[0] ^ v9);
  return result;
}
