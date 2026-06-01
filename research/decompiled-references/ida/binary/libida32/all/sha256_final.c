__int64 __fastcall sha256_final(__int64 a1, unsigned int *a2)
{
  unsigned int v3; // edx
  unsigned int v4; // r8d
  char v5; // cl
  unsigned int v6; // esi
  unsigned int v7; // r9d
  char v8; // cl
  int v9; // r10d
  unsigned int v10; // eax
  int v12; // ecx
  unsigned int v13; // eax
  unsigned int *v14; // rcx
  unsigned int v15; // ecx
  __int64 result; // rax
  unsigned __int64 v17; // rsi
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // ecx
  __int64 v21; // r8

  v3 = *a2;
  v4 = *a2 & 0x3F;
  v5 = *(_BYTE *)a2 & 0x3F;
  v6 = (v4 + 3) >> 2;
  v7 = v4 >> 2;
  v8 = 8 * (~v5 & 3);
  v9 = 128 << v8;
  if ( v6 )
  {
    v10 = v6 - 1;
    do
      a2[v10 + 10] = _byteswap_ulong(a2[v10 + 10]);
    while ( v10-- != 0 );
    a2[v7 + 10] = v9 | a2[v7 + 10] & (-128 << v8);
    if ( v4 <= 0x37 )
    {
      v3 = *a2;
      v12 = v7 + 1;
      if ( v7 == 13 )
        goto LABEL_12;
    }
    else
    {
      if ( v4 <= 0x3B )
        a2[25] = 0;
      sub_829560((__int64)a2);
      v3 = *a2;
      v12 = 0;
    }
  }
  else
  {
    v12 = 1;
    a2[10] = v9 | a2[10] & 0x80000000;
  }
  v13 = 14 - v12;
  v14 = &a2[v12 + 10];
  if ( v13 >= 2 )
  {
    *(_QWORD *)v14 = 0;
    *(_QWORD *)&v14[v13 - 2] = 0;
    v17 = (unsigned __int64)(v14 + 2) & 0xFFFFFFFFFFFFFFF8LL;
    v18 = ((_DWORD)v14 - v17 + v13 * 4) & 0xFFFFFFF8;
    if ( v18 >= 8 )
    {
      v19 = v18 & 0xFFFFFFF8;
      v20 = 0;
      do
      {
        v21 = v20;
        v20 += 8;
        *(_QWORD *)(v17 + v21) = 0;
      }
      while ( v20 < v19 );
    }
  }
  else if ( ((v13 * 4) & 4) != 0 )
  {
    *v14 = 0;
    v14[v13 - 1] = 0;
  }
  else if ( v13 * 4 )
  {
    *(_BYTE *)v14 = 0;
  }
LABEL_12:
  v15 = a2[1];
  a2[25] = 8 * v3;
  a2[24] = __PAIR64__(v15, v3) >> 29;
  sub_829560((__int64)a2);
  for ( result = 0; result != 32; ++result )
    *(_BYTE *)(a1 + result) = a2[((unsigned int)result >> 2) + 2] >> (8 * (~(_BYTE)result & 3));
  return result;
}

