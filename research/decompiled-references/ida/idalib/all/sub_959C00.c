__int64 __fastcall sub_959C00(_DWORD *a1, int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edx
  char v4; // cl
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // eax
  unsigned int v8; // ecx
  __int64 result; // rax
  unsigned int v10; // ebp
  unsigned int v11; // r8d
  unsigned int v12; // ebx
  unsigned int v13; // r8d
  unsigned int v14; // r11d
  unsigned int v15; // r9d
  char v16; // r10
  unsigned int v17; // r9d

  if ( a1[24] != 2 )
  {
    v2 = a1[12] + 1;
    _BitScanReverse(&v3, v2);
    v4 = 31 - (v3 ^ 0x1F);
    v5 = (31 - (v3 ^ 0x1F)) << 8;
    if ( a2 )
      v5 += v2 << 8 >> v4;
    a1[16] = v5;
  }
  v6 = a1[13] + 1;
  _BitScanReverse(&v7, v6);
  v8 = 31 - (v7 ^ 0x1F);
  result = (unsigned int)(a1[14] + 1);
  v10 = v8 << 8;
  _BitScanReverse(&v11, result);
  v12 = 31 - (v11 ^ 0x1F);
  v13 = a1[15] + 1;
  v14 = v12 << 8;
  _BitScanReverse(&v15, v13);
  v16 = 31 - (v15 ^ 0x1F);
  v17 = (31 - (v15 ^ 0x1F)) << 8;
  if ( a2 )
  {
    result = v14 + ((_DWORD)result << 8 >> v12);
    a1[17] = v10 + (v6 << 8 >> v8);
    v17 += v13 << 8 >> v16;
    a1[18] = result;
  }
  else
  {
    a1[17] = v10;
    a1[18] = v14;
  }
  a1[19] = v17;
  return result;
}
