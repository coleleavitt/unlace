unsigned __int64 __fastcall sub_10FB320(__int128 a1)
{
  __int64 v1; // rax
  __int64 v2; // r8
  __int64 v3; // rcx
  unsigned __int128 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rcx
  double v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // rsi
  double v11[3]; // [rsp+0h] [rbp-18h] BYREF

  v2 = *((_QWORD *)&a1 + 1);
  v1 = a1;
  if ( (a1 & 0x1C0) != 0 )
  {
    BYTE1(v1) = BYTE1(a1) | 2;
    *(_QWORD *)&a1 = v1;
  }
  if ( (a1 & 0x1C0000000LL) != 0 )
    *(_QWORD *)&a1 = a1 | 0x200000000LL;
  if ( (a1 & 0xC000000000LL) != 0 )
    *(_QWORD *)&a1 = a1 | 0x10000000000LL;
  if ( (a1 & 0x7E000000000000LL) != 0 )
    *(_QWORD *)&a1 = a1 | 0x80000000000000LL;
  if ( (a1 & 0xEFC3DF80000LL) != 0 )
    *(_QWORD *)&a1 = a1 | 0x1800000000000000LL;
  if ( (a1 & 0x6000000000000000LL) != 0 )
  {
    v3 = BYTE8(a1) & 1;
    v4 = a1 | __PAIR128__(4, 0x8000000000000000LL);
    v5 = *((_QWORD *)&a1 + 1) | 6LL;
    if ( v3 | a1 & 0x4000000000000000LL )
      *((_QWORD *)&v4 + 1) = v5;
    v2 = *((_QWORD *)&v4 + 1);
LABEL_15:
    *((_QWORD *)&v4 + 1) = v2 | 0x10;
    v6 = v2 & 1;
    goto LABEL_16;
  }
  BYTE8(v4) = BYTE8(a1);
  *(_QWORD *)&v4 = BYTE8(a1) & 1;
  v6 = v4 | a1 & 0x4000000000000000LL;
  if ( v6 )
  {
    *((_QWORD *)&v4 + 1) = *((_QWORD *)&a1 + 1) | 2LL;
    v10 = *((_QWORD *)&a1 + 1) | 6LL;
    v6 = v4;
    if ( !(_QWORD)v4 )
      v10 = *((_QWORD *)&v4 + 1);
    v2 = v10;
  }
  *(_QWORD *)&v4 = a1;
  if ( (BYTE8(v4) & 9) != 0 )
    goto LABEL_15;
  *((_QWORD *)&v4 + 1) = v2;
LABEL_16:
  if ( v6 | v4 & 0x600062C008000000LL )
  {
    v8 = *((_QWORD *)&v4 + 1) | 0x20LL;
    if ( !(v4 & 0x100000 | BYTE8(v4) & 0x80) )
    {
      *((_QWORD *)&v4 + 1) |= 0x20uLL;
      goto LABEL_22;
    }
LABEL_21:
    *((_QWORD *)&v4 + 1) = v8;
    BYTE9(v4) = BYTE1(v8) | 1;
LABEL_22:
    BYTE9(v4) |= 4u;
    v7 = *((double *)&v4 + 1);
    goto LABEL_23;
  }
  if ( v4 & 0x100000 | BYTE8(v4) & 0x80 )
  {
    v8 = *((_QWORD *)&v4 + 1);
    goto LABEL_21;
  }
  *(_QWORD *)&v7 = *((_QWORD *)&v4 + 1) | v4;
  if ( v4 != 0 )
    goto LABEL_22;
LABEL_23:
  v11[0] = v7;
  return _mm_loadh_ps(v11).m128_u64[0];
}

