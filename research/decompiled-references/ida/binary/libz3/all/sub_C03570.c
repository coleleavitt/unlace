__int64 __fastcall sub_C03570(__m128 *a1, double a2)
{
  __int64 v2; // r13
  __int64 v3; // r13
  __int64 v4; // r12
  _DWORD *v5; // rbp
  __int64 v6; // r12
  __int64 v7; // r12
  __int64 v8; // rbp
  unsigned __int64 v9; // rax
  int v10; // r15d
  int v11; // r12d
  int i; // r12d
  unsigned __int64 v13; // rax
  unsigned __int32 v14; // r13d
  unsigned int v15; // ebp
  unsigned int v16; // ebp
  unsigned __int32 v17; // r14d

  v2 = a1[15].m128_u32[0];
  if ( !(_DWORD)v2 )
    goto LABEL_10;
  v3 = 4 * v2;
  v4 = 0;
  do
  {
    v5 = (_DWORD *)(a1[16].m128_u64[0] + 48LL * *(unsigned int *)(a1[17].m128_u64[0] + v4));
    if ( (unsigned __int8)sub_BF7B00((__int64)a1, v5) || (unsigned __int8)sub_BF8680((__int64)a1, v5) )
      return 1;
    v4 += 4;
  }
  while ( v4 != v3 );
  v6 = a1[15].m128_u32[0];
  if ( !(_DWORD)v6 )
  {
LABEL_10:
    v9 = a1[1].m128_u64[0];
    v10 = 2;
    v11 = 214013 * *(_DWORD *)(v9 + 7504) + 2531011;
    *(_DWORD *)(v9 + 7504) = v11;
    for ( i = (v11 & 0x10000) == 0; ; i ^= 1u )
    {
      if ( (_BYTE)i )
      {
        if ( (unsigned __int8)sub_C02900((__int64)a1, a2) )
          return 1;
      }
      else
      {
        v13 = a1[1].m128_u64[0];
        v14 = a1[15].m128_u32[0];
        v15 = 214013 * *(_DWORD *)(v13 + 7504) + 2531011;
        *(_DWORD *)(v13 + 7504) = v15;
        v16 = HIWORD(v15) & 0x7FFF;
        v17 = v14 + v16;
        if ( v14 )
        {
          while ( !(unsigned __int8)sub_BFDDE0(
                                      (__int64)a1,
                                      a1[16].m128_u64[0]
                                    + 48LL * *(unsigned int *)(a1[17].m128_u64[0] + 4LL * (v16 % v14)),
                                      a2) )
          {
            if ( ++v16 == v17 )
            {
              v13 = a1[1].m128_u64[0];
              goto LABEL_22;
            }
          }
          return 1;
        }
LABEL_22:
        if ( *(_QWORD *)(v13 + 8984) != qword_1C7EDB0 || *(_BYTE *)(v13 + 2416) )
          return 1;
      }
      if ( v10 == 1 )
        return 0;
      v10 = 1;
    }
  }
  v7 = 4 * v6;
  v8 = 0;
  while ( !(unsigned __int8)sub_BF9BD0(a1, a1[16].m128_u64[0] + 48LL * *(unsigned int *)(a1[17].m128_u64[0] + v8)) )
  {
    v8 += 4;
    if ( v8 == v7 )
      goto LABEL_10;
  }
  return 1;
}

