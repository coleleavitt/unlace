__int64 __fastcall sub_2134B20(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // r13
  unsigned int v7; // ebp
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // r14
  unsigned __int8 **v12; // rsi
  char v13; // dl
  signed __int64 v14; // r13
  __int64 v15; // r14
  __int64 v16; // rbp
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r13
  __int64 v21; // rbp
  __int64 v22; // [rsp+8h] [rbp-130h] BYREF
  __m128i v23; // [rsp+10h] [rbp-128h] BYREF
  __int16 v24; // [rsp+30h] [rbp-108h]
  __m128i v25[2]; // [rsp+40h] [rbp-F8h] BYREF
  __int16 v26; // [rsp+60h] [rbp-D8h]
  __m128i v27[3]; // [rsp+70h] [rbp-C8h] BYREF
  __m128i v28[2]; // [rsp+A0h] [rbp-98h] BYREF
  __int16 v29; // [rsp+C0h] [rbp-78h]
  __m128i v30[2]; // [rsp+D0h] [rbp-68h] BYREF
  __int16 v31; // [rsp+F0h] [rbp-48h]

  v6 = *(_QWORD *)(a1 + 184);
  if ( !*(_BYTE *)(a1 + 861) && (unsigned __int8)sub_2129170(a1) )
    return 1;
  v7 = sub_21335C0(a1, &v22);
  if ( (_BYTE)v7 )
    return 1;
  if ( v22 < 0 )
  {
    v23.m128i_i64[1] = a3;
    v24 = 261;
    v28[0].m128i_i64[0] = (__int64)"' directive with negative repeat count has no effect";
    v26 = 259;
    v29 = 259;
    v25[0].m128i_i64[0] = (__int64)"'";
    v23.m128i_i64[0] = a2;
    sub_A41580(v27, v25, &v23, 259, v8, v9);
    sub_A41580(v30, v27, v28, v17, v18, v19);
    sub_212CE20(a1, v6, (__int64)v30, nullptr, 0);
    return v7;
  }
  v31 = 259;
  v30[0].m128i_i64[0] = (__int64)"expected comma";
  if ( (unsigned __int8)sub_2154510(a1, 26, v30) )
    return 1;
  v11 = *(_QWORD *)(a1 + 184);
  v30[0].m128i_i64[0] = 0;
  if ( sub_2133530(a1, (unsigned __int64 *)v28, (__int64)v30) )
  {
    return 1;
  }
  else
  {
    v12 = (unsigned __int8 **)v28[0].m128i_i64[0];
    if ( *(_BYTE *)v28[0].m128i_i64[0] == 1 )
    {
      v13 = 8 * a4;
      v14 = *(_QWORD *)(v28[0].m128i_i64[0] + 16);
      if ( v14 > 0xFFFFFFFFFFFFFFFFLL >> (64 - 8 * (unsigned __int8)a4)
        && (v14 < -(1LL << (v13 - 1)) || v14 > (1LL << (v13 - 1)) - 1) )
      {
        v30[0].m128i_i64[0] = (__int64)"literal value out of range for directive";
        v31 = 259;
        return (unsigned int)sub_2153E90(a1, v11, v30, 0, 0);
      }
      v15 = v22;
      if ( v22 )
      {
        v16 = 0;
        do
        {
          ++v16;
          (*(void (__fastcall **)(_QWORD, signed __int64, _QWORD))(**(_QWORD **)(a1 + 24) + 536LL))(
            *(_QWORD *)(a1 + 24),
            v14,
            a4);
        }
        while ( v15 != v16 );
      }
    }
    else
    {
      v20 = v22;
      if ( v22 )
      {
        v21 = 0;
        while ( 1 )
        {
          ++v21;
          sub_211C660(*(_QWORD *)(a1 + 24), v12);
          if ( v20 == v21 )
            break;
          v12 = (unsigned __int8 **)v28[0].m128i_i64[0];
        }
      }
    }
    return (unsigned int)sub_21544B0(a1);
  }
}
