__int64 __fastcall sub_1539E00(const __m128i *a1, char a2)
{
  __m128i v3; // xmm0
  __int32 v4; // eax
  __int64 v5; // rax
  __int64 v6; // rbp
  __int16 v7; // ax
  __int64 result; // rax
  __int64 v9; // rdi
  __int64 *v10; // rax
  int v11; // edx
  __int64 *m128i_i64; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *v17; // rdi
  size_t v18; // rax
  __int64 v19; // r8
  __m128i v20; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v21; // [rsp+10h] [rbp-C8h]
  _DWORD v22[6]; // [rsp+20h] [rbp-B8h] BYREF
  void *v23; // [rsp+38h] [rbp-A0h]
  __int64 v24; // [rsp+48h] [rbp-90h] BYREF
  __int64 v25[15]; // [rsp+60h] [rbp-78h] BYREF

  v3 = _mm_loadu_si128(a1 + 1);
  v21 = a1[2].m128i_i64[0];
  v4 = a1[1].m128i_i32[0];
  v20 = v3;
  a1[127].m128i_i32[1] = v4;
  v5 = sub_14BFC10(a1, 0, v3);
  if ( v5 == 1 )
  {
    m128i_i64 = v25;
    LOWORD(v25[0]) = 25;
    sub_15680D0(a1, v25, 1, 3);
    if ( a1[2].m128i_i16[0] == 63 )
    {
      v17 = (__int64 *)a1->m128i_i64[1];
      m128i_i64 = a1[1].m128i_i64;
      a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
      sub_14634E0(v17, a1[1].m128i_i32);
    }
    return sub_1C361F0(a1[6].m128i_i64[0], m128i_i64, v13, v14, v15, v16, v20.m128i_i64[0], v20.m128i_i64[1], v21);
  }
  else
  {
    v6 = v5;
    v7 = a1[2].m128i_i16[0];
    if ( v7 != 62 )
      goto LABEL_3;
    v9 = a1[6].m128i_i64[0];
    v10 = *(__int64 **)(v9 + 608);
    if ( !v10 )
      goto LABEL_7;
    while ( 1 )
    {
      v11 = *((_DWORD *)v10 + 2);
      if ( (v11 & 0x1000) != 0 )
        break;
      if ( (v11 & 0xDE1) == 0 )
      {
        v10 = (__int64 *)*v10;
        if ( v10 )
          continue;
      }
      goto LABEL_7;
    }
    if ( !(unsigned __int8)sub_18C4270(v9, v6 & 0xFFFFFFFFFFFFFFFELL) )
    {
      v7 = a1[2].m128i_i16[0];
LABEL_3:
      if ( v7 == 460 )
      {
        result = sub_1534210((__int64)a1, v6, a2);
        if ( result != 1 )
          a1[1].m128i_i64[1] = result & 0xFFFFFFFFFFFFFFFELL;
        return result;
      }
LABEL_7:
      sub_156A150(a1, 1642, &byte_22F0C30, 0);
      return sub_1534210((__int64)a1, v6, a2);
    }
    sub_1564840(v25, a1, &v20, 1604);
    v18 = j__strlen("case ");
    sub_9EC740((__int64)v22, v20.m128i_i32[0], "case ", v18, 0);
    if ( v22[0] && v22[1] )
      sub_1535AC0(v25, (unsigned __int64)v22);
    if ( v23 != &v24 )
      operator delete(v23);
    sub_AEA040((__int64)v25);
    return sub_1537F40(a1, a2, 1, v6, v19, v3);
  }
}
