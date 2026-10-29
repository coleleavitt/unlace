__int64 __fastcall sub_7F09B0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r12
  __int64 v11; // r14
  __m128i v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  __m128i v18; // [rsp+0h] [rbp-78h] BYREF
  __int64 v19; // [rsp+10h] [rbp-68h]
  __m128i v20; // [rsp+20h] [rbp-58h] BYREF
  __int64 v21; // [rsp+30h] [rbp-48h]
  __int64 v22; // [rsp+38h] [rbp-40h]
  __int64 v23; // [rsp+40h] [rbp-38h]

  v5 = *(_QWORD *)(a2 + 40);
  if ( (v5 & 6) != 4
    || (v15 = v5 & 0xFFFFFFFFFFFFFFF8LL,
        v16 = sub_798D40(v15),
        v17 = sub_6C9720(v16, v15, 0),
        v20.m128i_i32[0] = *(_DWORD *)(a2 + 36),
        v20.m128i_i32[1] = v20.m128i_i32[0],
        (unsigned __int8)sub_7EEDC0((__int64)a1, v17, (__int64)&v20)) )
  {
    v6 = a2;
    sub_AC4830(&v20);
    v10 = v22;
    v11 = v23;
    v19 = v21;
    v12 = _mm_load_si128(&v20);
    v18 = v12;
LABEL_3:
    if ( v10 == v12.m128i_i64[0] )
    {
LABEL_9:
      if ( v11 == v12.m128i_i64[1] )
        return 1;
    }
    v13 = v12.m128i_i8[8] & 3;
    if ( (_DWORD)v13 )
      v12.m128i_i64[0] = sub_ACE280(&v18, v6, v13, v7, v8, v9);
    while ( 1 )
    {
      v6 = *(_QWORD *)v12.m128i_i64[0];
      if ( !(unsigned __int8)sub_7E3C00(a1, *(_QWORD *)v12.m128i_i64[0], a3) )
        break;
      v12.m128i_i64[1] = v18.m128i_i64[1];
      if ( (v18.m128i_i8[8] & 3) != 0 )
      {
        if ( v18.m128i_i64[1] <= 3uLL )
        {
          v6 = 1;
          sub_ACE0F0(&v18, 1);
        }
        else
        {
          sub_ACE150(&v18);
        }
        v12 = v18;
        goto LABEL_3;
      }
      v12.m128i_i64[0] = v18.m128i_i64[0] + 8;
      v18.m128i_i64[0] = v12.m128i_i64[0];
      if ( v10 == v12.m128i_i64[0] )
        goto LABEL_9;
    }
  }
  return 0;
}

