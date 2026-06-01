__int64 __fastcall sub_1666C60(__int64 a1, int a2, int a3)
{
  int v3; // eax
  int v4; // ebx
  int v5; // r12d
  __int64 v6; // rsi
  int v7; // ebx
  __int64 result; // rax
  unsigned int v9[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  v3 = *(_DWORD *)(a1 + 1952);
  v4 = *(_DWORD *)(a1 + 1956);
  if ( *(_DWORD *)(a1 + 1944) == v3 && v4 == *(_DWORD *)(a1 + 1948) )
  {
    v5 = 192;
    v3 = 0;
  }
  else
  {
    LOBYTE(v4) = v4 | 0xC0;
    LOBYTE(v3) = v3 & 0x3F;
    v5 = v4;
  }
  *(_DWORD *)(a1 + 1960) = a2;
  v6 = *(_QWORD *)(a1 + 232);
  *(_DWORD *)(a1 + 1956) = v5;
  v7 = v3 | (a3 << 6);
  *(_DWORD *)(a1 + 1952) = v7;
  result = sub_BF6C80(v9, v6);
  *(_DWORD *)(a1 + 224) = v9[0] ^ v5 & (v9[0] ^ v7);
  return result;
}
