unsigned __int64 __fastcall sub_EABBD0(__int64 a1, unsigned __int64 *a2, _QWORD *a3)
{
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 *v10; // r11
  unsigned __int64 *v11; // r10
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rbp
  unsigned __int64 *v19; // rcx
  unsigned __int64 *v20; // rsi
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // r15
  __int64 v28; // rbp
  unsigned __int64 v29; // rax
  bool v30; // cf
  unsigned __int64 v31; // rax
  _QWORD v33[9]; // [rsp+10h] [rbp-48h] BYREF

  v5 = a3[1] - *a3;
  v6 = v5;
  if ( v5 > 0xFFFFFFFE )
  {
    if ( v5 == 0xFFFFFFFF )
    {
      v31 = sub_EABA40(a2);
    }
    else
    {
      v27 = HIDWORD(v5);
      do
      {
        do
        {
          v33[1] = v27;
          v33[0] = 0;
          v28 = sub_EABBD0(a1, a2, v33);
          v29 = sub_EABA40(a2);
          v28 <<= 32;
          v30 = __CFADD__(v28, v29);
          v31 = v28 + v29;
        }
        while ( v6 < v31 );
      }
      while ( v30 );
    }
  }
  else
  {
    v7 = v5 + 1;
    v8 = 0xFFFFFFFF / (v5 + 1);
    v9 = a2[624];
    v10 = a2 + 227;
    v11 = a2 + 396;
    v12 = v8;
    v13 = v8 * v7;
    do
    {
      if ( v9 <= 0x26F )
      {
        v14 = v9++;
      }
      else
      {
        v18 = *a2;
        v19 = a2;
        v20 = a2;
        do
        {
          while ( 1 )
          {
            v21 = v18;
            v18 = v20[1];
            v22 = v20[397] ^ ((v21 & 0xFFFFFFFF80000000LL | v18 & 0x7FFFFFFF) >> 1);
            if ( (v18 & 1) == 0 )
              break;
            *v20++ = v22 ^ 0x9908B0DF;
            if ( v10 == v20 )
              goto LABEL_9;
          }
          *v20++ = v22;
        }
        while ( v10 != v20 );
LABEL_9:
        v23 = a2[227];
        do
        {
          while ( 1 )
          {
            v24 = v23;
            v23 = v19[228];
            v25 = *v19 ^ ((v24 & 0xFFFFFFFF80000000LL | v23 & 0x7FFFFFFF) >> 1);
            if ( (v23 & 1) == 0 )
              break;
            ++v19;
            v19[226] = v25 ^ 0x9908B0DF;
            if ( v11 == v19 )
              goto LABEL_12;
          }
          v19[227] = v25;
          ++v19;
        }
        while ( v19 != v11 );
LABEL_12:
        v26 = a2[396] ^ ((*a2 & 0x7FFFFFFF | a2[623] & 0xFFFFFFFF80000000LL) >> 1);
        if ( (*(_BYTE *)a2 & 1) != 0 )
          v26 ^= 0x9908B0DF;
        a2[623] = v26;
        v9 = 1;
        v14 = 0;
      }
      v15 = a2[v14];
      a2[624] = v9;
      v16 = (((unsigned int)(v15 >> 11) ^ (unsigned int)v15) << 7) & 0x9D2C5680 ^ (unsigned int)(v15 >> 11) ^ v15;
      v17 = ((((_DWORD)v16 << 15) & 0xEFC60000 ^ v16) >> 18) ^ ((_DWORD)v16 << 15) & 0xEFC60000 ^ v16;
    }
    while ( v13 <= v17 );
    v31 = v17 / v12;
  }
  return *a3 + v31;
}

