__int64 __fastcall sub_5CD2F0(__m128i *a1, const char *a2)
{
  unsigned int v2; // ebp
  __int16 v3; // ax
  unsigned int v5; // r12d
  __int64 v6; // rax
  unsigned int v7; // edx
  __int8 *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int8 *v11; // rdx
  bool v12; // zf
  __int64 v13; // rax
  __int16 v14; // ax

  if ( (unsigned int)sub_5CCDC0(a1, a2) )
    return (unsigned int)-1;
  v2 = 0;
  v3 = a1[4].m128i_i16[0];
  if ( v3 != 41 )
  {
    if ( v3 != 40 )
      return set_qerrno(47, a2);
    if ( !(unsigned int)sub_5CCDC0(a1, a2) )
    {
      if ( a1[4].m128i_i16[0] != 3 )
        return set_qerrno(47, a2);
      v5 = a1[4].m128i_u32[1];
      if ( !(unsigned int)sub_5CCDC0(a1, a2) )
      {
        if ( a1[4].m128i_i16[0] != 41 )
          return set_qerrno(47, a2);
        v6 = a1[7].m128i_i64[1];
        v7 = v5;
        if ( !v6 )
        {
          v6 = a1[8].m128i_i64[0];
          if ( !v6 )
            v6 = a1[6].m128i_i64[1];
        }
        v8 = &a1[46].m128i_i8[1];
        if ( (*(_BYTE *)(v6 + 41) & 8) != 0 )
          v8 = (__int8 *)(v6 + 185);
        if ( !v5 || (v5 & (v5 - 1)) != 0 )
          return set_qerrno(1506, a2);
        goto LABEL_33;
      }
    }
    return (unsigned int)-1;
  }
  sub_5CAA70(a1);
  v9 = a1[7].m128i_i64[1];
  if ( v9 )
  {
    if ( (*(_BYTE *)(v9 + 41) & 8) != 0 )
      v8 = (__int8 *)(v9 + 185);
    else
      v8 = &a1[46].m128i_i8[1];
    LOBYTE(v10) = 5;
    goto LABEL_18;
  }
  v10 = a1[8].m128i_i64[0];
  if ( v10 )
  {
    v11 = (__int8 *)(v10 + 185);
    v8 = &a1[46].m128i_i8[1];
    v12 = (*(_BYTE *)(v10 + 41) & 8) == 0;
    LOBYTE(v10) = 5;
    if ( !v12 )
      v8 = v11;
    goto LABEL_18;
  }
  v13 = a1[6].m128i_i64[1];
  v8 = &a1[46].m128i_i8[1];
  if ( (*(_BYTE *)(v13 + 41) & 8) != 0 )
    v8 = (__int8 *)(v13 + 185);
  v7 = 16;
LABEL_33:
  _BitScanReverse((unsigned int *)&v10, v7);
  LOWORD(v10) = v14 + 1;
  if ( (unsigned __int16)v10 <= 0xFu )
  {
LABEL_18:
    *v8 = v10;
    return v2;
  }
  return set_qerrno(83, a2);
}

