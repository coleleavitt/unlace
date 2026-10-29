__int64 __fastcall sub_1666B20(__int64 a1, int a2, unsigned int a3)
{
  unsigned int v3; // ebx
  int v4; // r12d
  __int64 result; // rax
  unsigned int v6[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  v3 = *(_DWORD *)(a1 + 1952);
  v4 = *(_DWORD *)(a1 + 1956);
  if ( *(_DWORD *)(a1 + 1944) == v3 && v4 == *(_DWORD *)(a1 + 1948) )
  {
    v4 = 0;
    v3 = 0;
    if ( a3 == 1 )
      goto LABEL_9;
  }
  else if ( a3 == 1 )
  {
LABEL_9:
    v4 |= 3u;
    v3 = v3 & 0xFFFFFFFC | 1;
    goto LABEL_6;
  }
  if ( a3 )
  {
    if ( a3 <= 3 )
    {
      v4 |= 3u;
      v3 = v3 & 0xFFFFFFFC | 2;
    }
  }
  else
  {
    v3 &= 0xFFFFFFFC;
    v4 |= 3u;
  }
LABEL_6:
  *(_DWORD *)(a1 + 1952) = v3;
  *(_DWORD *)(a1 + 1956) = v4;
  *(_DWORD *)(a1 + 1960) = a2;
  sub_BF6C80(v6, *(_QWORD *)(a1 + 232));
  result = v6[0];
  *(_DWORD *)(a1 + 224) = v6[0] ^ v4 & (v6[0] ^ v3);
  return result;
}
