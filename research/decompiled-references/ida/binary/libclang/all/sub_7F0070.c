__int64 __fastcall sub_7F0070(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r12
  __int64 v9; // r14
  __m128i v10; // rax
  __int64 v11; // rdx
  __m128i v13; // [rsp+0h] [rbp-78h] BYREF
  __int64 v14; // [rsp+10h] [rbp-68h]
  __m128i v15; // [rsp+20h] [rbp-58h] BYREF
  __int64 v16; // [rsp+30h] [rbp-48h]
  __int64 v17; // [rsp+38h] [rbp-40h]
  __int64 v18; // [rsp+40h] [rbp-38h]

  v4 = *(_QWORD *)(a2 + 16);
  if ( (v4 & 4) == 0
    || (unsigned __int8)sub_7EEDC0((__int64)a1, *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF8LL), (v4 & 0xFFFFFFFFFFFFFFF8LL) + 8) )
  {
    sub_AC4830(&v15);
    v8 = v17;
    v9 = v18;
    v14 = v16;
    v10 = _mm_load_si128(&v15);
    v13 = v10;
LABEL_4:
    if ( v8 == v10.m128i_i64[0] )
    {
LABEL_10:
      if ( v9 == v10.m128i_i64[1] )
        return 1;
    }
    v11 = v10.m128i_i8[8] & 3;
    if ( (_DWORD)v11 )
      v10.m128i_i64[0] = sub_ACE280(&v13, a2, v11, v5, v6, v7);
    while ( 1 )
    {
      a2 = *(_QWORD *)v10.m128i_i64[0];
      if ( !(unsigned __int8)sub_7E3C00(a1, *(_QWORD *)v10.m128i_i64[0], a3) )
        break;
      v10.m128i_i64[1] = v13.m128i_i64[1];
      if ( (v13.m128i_i8[8] & 3) != 0 )
      {
        if ( v13.m128i_i64[1] <= 3uLL )
        {
          a2 = 1;
          sub_ACE0F0(&v13, 1);
        }
        else
        {
          sub_ACE150(&v13);
        }
        v10 = v13;
        goto LABEL_4;
      }
      v10.m128i_i64[0] = v13.m128i_i64[0] + 8;
      v13.m128i_i64[0] = v10.m128i_i64[0];
      if ( v10.m128i_i64[0] == v8 )
        goto LABEL_10;
    }
  }
  return 0;
}

