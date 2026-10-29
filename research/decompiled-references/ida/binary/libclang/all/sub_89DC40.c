char __fastcall sub_89DC40(__int64 *a1, __int64 a2)
{
  __int16 v3; // ax
  unsigned __int64 v4; // rdx
  __int64 v5; // rsi
  char v6; // bp
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __m128i v11; // [rsp+0h] [rbp-108h] BYREF
  char v12; // [rsp+10h] [rbp-F8h]
  _QWORD v13[3]; // [rsp+40h] [rbp-C8h] BYREF
  char v14; // [rsp+58h] [rbp-B0h]
  __int64 v15; // [rsp+68h] [rbp-A0h]
  void *ptr; // [rsp+70h] [rbp-98h]
  __int64 v17; // [rsp+78h] [rbp-90h]
  _BYTE v18[136]; // [rsp+80h] [rbp-88h] BYREF

  v3 = (*(_WORD *)(a2 + 2) >> 3) & 0x7F;
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x7F) == 0x13 )
    return sub_89CD60(a1, *(_QWORD *)(a2 + 16));
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x7Fu) > 0x13 )
  {
    if ( (_BYTE)v3 != 58 && (_BYTE)v3 != 63 )
    {
LABEL_28:
      v6 = 0;
      sub_826230(*a1, a2, 110);
      return v6;
    }
    BYTE4(v13[0]) &= ~1u;
    LODWORD(v13[0]) = 0;
    v6 = sub_856400((__int64)v13, *a1, *(_QWORD *)(a2 + 16));
    if ( v6 )
    {
      sub_824D00(a1[1], *(_QWORD **)(*a1 + 16), (__int64)v13);
      if ( LODWORD(v13[0]) <= 1 )
        return v6;
    }
    else if ( LODWORD(v13[0]) <= 1 )
    {
      return v6;
    }
    sub_69F740((__int64)v13);
    return v6;
  }
  if ( (_BYTE)v3 == 4 )
  {
    v8 = *(_QWORD *)(a2 + 16);
    v14 |= 1u;
    v17 = 0x800000000LL;
    v9 = *a1;
    memset(v13, 0, sizeof(v13));
    v15 = 0;
    ptr = v18;
    v18[65] = 0;
    v11.m128i_i64[0] = v9;
    v11.m128i_i64[1] = (__int64)v13;
    v12 = 0;
    v6 = sub_869D30(&v11, v8);
    if ( v6 )
    {
      v10 = *(_QWORD *)(a2 + 16);
      v11.m128i_i8[4] &= ~1u;
      v11.m128i_i32[0] = 0;
      v6 = sub_85F440(*a1, (_DWORD *)a2, *(_QWORD *)(v10 + 8), (__int64)v13, (__int64)&v11, 0);
      if ( v6 )
        sub_824D00(a1[1], *(_QWORD **)(*a1 + 16), (__int64)&v11);
      if ( v11.m128i_i32[0] > 1u )
        sub_69F740((__int64)&v11);
    }
    if ( ptr != v18 )
      free(ptr);
    return v6;
  }
  if ( (_BYTE)v3 != 5 )
  {
    if ( (_BYTE)v3 == 3 )
    {
      v4 = *(_QWORD *)(a2 + 16);
      v5 = *a1;
      v11.m128i_i32[0] = 0;
      v11.m128i_i8[4] &= ~1u;
      BYTE4(v13[0]) &= ~1u;
      LODWORD(v13[0]) = 0;
      if ( (unsigned __int8)sub_856400((__int64)v13, v5, v4)
        && (v6 = sub_867E00(*a1, (__int64)&v11, (__int64)v13, a2)) != 0 )
      {
        sub_824D00(a1[1], *(_QWORD **)(*a1 + 16), (__int64)&v11);
      }
      else
      {
        v6 = 0;
      }
      if ( LODWORD(v13[0]) > 1 )
        sub_69F740((__int64)v13);
      if ( v11.m128i_i32[0] > 1u )
        sub_69F740((__int64)&v11);
      return v6;
    }
    goto LABEL_28;
  }
  return sub_89CD60(a1, *(_QWORD *)(a2 + 16));
}

