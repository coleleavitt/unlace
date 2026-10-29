unsigned __int64 __fastcall sub_ECF780(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // r8
  unsigned __int64 *v7; // rax
  unsigned __int64 *v8; // r9
  unsigned __int64 *v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  unsigned __int64 *v13; // r8
  unsigned __int64 v14; // rdx
  char v15; // cl
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdx

  v1 = a1[624];
  v2 = v1 + 1;
  if ( v1 > 0x26F )
  {
    v6 = *a1;
    v7 = a1;
    v8 = a1 + 227;
    v9 = a1;
    do
    {
      while ( 1 )
      {
        v10 = v6;
        v6 = v9[1];
        v11 = v9[397] ^ ((v10 & 0xFFFFFFFF80000000LL | v6 & 0x7FFFFFFF) >> 1);
        if ( (v6 & 1) == 0 )
          break;
        *v9++ = v11 ^ 0x9908B0DF;
        if ( v8 == v9 )
          goto LABEL_6;
      }
      *v9++ = v11;
    }
    while ( v9 != v8 );
LABEL_6:
    v12 = a1[227];
    v13 = a1 + 396;
    do
    {
      while ( 1 )
      {
        v14 = v12 & 0xFFFFFFFF80000000LL;
        v12 = v7[228];
        v15 = v14 | v12;
        v16 = *v7 ^ ((v14 | v12 & 0x7FFFFFFF) >> 1);
        if ( (v15 & 1) == 0 )
          break;
        ++v7;
        v7[226] = v16 ^ 0x9908B0DF;
        if ( v13 == v7 )
          goto LABEL_9;
      }
      v7[227] = v16;
      ++v7;
    }
    while ( v7 != v13 );
LABEL_9:
    v17 = a1[396] ^ ((*a1 & 0x7FFFFFFF | a1[623] & 0xFFFFFFFF80000000LL) >> 1);
    if ( (*(_BYTE *)a1 & 1) != 0 )
      v17 ^= 0x9908B0DF;
    a1[623] = v17;
    v1 = 0;
    v2 = 1;
  }
  v3 = a1[v1];
  a1[624] = v2;
  v4 = (((unsigned int)v3 ^ (unsigned int)(v3 >> 11)) << 7)
     & 0x9D2C5680
     ^ v3
     ^ (unsigned int)(v3 >> 11)
     ^ (((((unsigned int)v3 ^ (unsigned int)(v3 >> 11)) << 7) & 0x9D2C5680 ^ (unsigned int)v3 ^ (unsigned int)(v3 >> 11)) << 15)
     & 0xEFC60000;
  return (v4 >> 18) ^ v4;
}
