__int64 __fastcall sub_1666DF0(__int64 a1, int a2, int a3)
{
  int v3; // eax
  int v4; // ebx
  unsigned int v5; // eax
  int v6; // r12d
  __int64 v7; // rsi
  int v8; // ebx
  __int64 result; // rax
  unsigned int v10[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  v3 = *(_DWORD *)(a1 + 1952);
  v4 = *(_DWORD *)(a1 + 1956);
  if ( *(_DWORD *)(a1 + 1944) == v3 && v4 == *(_DWORD *)(a1 + 1948) )
  {
    v6 = 29360128;
    v5 = 0;
  }
  else
  {
    v5 = v3 & 0xFE3FFFFF;
    v6 = v4 | 0x1C00000;
  }
  *(_DWORD *)(a1 + 1960) = a2;
  v7 = *(_QWORD *)(a1 + 232);
  *(_DWORD *)(a1 + 1956) = v6;
  v8 = v5 | (a3 << 22);
  *(_DWORD *)(a1 + 1952) = v8;
  result = sub_BF6C80(v10, v7);
  *(_DWORD *)(a1 + 224) = v10[0] ^ v6 & (v10[0] ^ v8);
  return result;
}
