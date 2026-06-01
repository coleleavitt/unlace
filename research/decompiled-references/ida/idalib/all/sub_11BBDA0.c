__int64 __fastcall sub_11BBDA0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 *v6; // rbx
  __int64 v7; // rbp
  __m128i v8; // xmm1
  __int64 v9; // r13
  __m128i *p_si128; // r14
  __int64 v11; // rsi
  __m128i v12; // xmm1
  char v13; // r13
  char v14; // r15
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 *v17; // rbx
  __int64 v18; // r9
  __m128i *v19; // r14
  __int64 v20; // rsi
  __m128i v21; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+18h] [rbp-90h]
  __m128i v23; // [rsp+20h] [rbp-88h]
  __int64 v24; // [rsp+30h] [rbp-78h]
  __m128i si128; // [rsp+40h] [rbp-68h] BYREF
  __m128i v26; // [rsp+50h] [rbp-58h] BYREF
  __int64 v27; // [rsp+60h] [rbp-48h]

  v22 = a2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A9AF0);
  v26.m128i_i64[0] = 0x5CC000007A3LL;
  v2 = sub_21B6DA0(a1, &si128, 6);
  v3 = *(_QWORD *)(a1 + 8);
  v24 = 0x5CC000007A3LL;
  v4 = (unsigned int)v2;
  result = HIDWORD(v2);
  v27 = 0x5CC000007A3LL;
  v6 = (__int64 *)(v3 + 8 * v4);
  v7 = v3 + 8 * result;
  v21.m128i_i64[0] = v7;
  v23 = _mm_load_si128((const __m128i *)&xmmword_23A9AF0);
  v26 = v23;
  v8 = (__m128i)_mm_loadh_ps((const double *)v21.m128i_i64);
  si128 = v8;
  if ( v6 != (__int64 *)v7 )
  {
    do
    {
      v9 = *v6;
      p_si128 = &si128;
      if ( *v6 )
      {
        do
        {
          v11 = p_si128[1].m128i_u32[0];
          if ( !(_DWORD)v11 )
            break;
          result = sub_21B9810(v9, v11);
          if ( (_BYTE)result )
          {
            v21.m128i_i64[0] = v7;
            v8 = (__m128i)_mm_loadh_ps((const double *)v21.m128i_i64);
            goto LABEL_8;
          }
          p_si128 = (__m128i *)((char *)p_si128 + 4);
        }
        while ( p_si128 != (__m128i *)&v26.m128i_u64[1] );
      }
      si128.m128i_i64[0] = (__int64)++v6;
    }
    while ( (__int64 *)v7 != v6 );
    v21.m128i_i64[0] = v7;
    v12 = _mm_loadl_epi64(&v21);
    v8 = _mm_unpacklo_epi64(v12, v12);
  }
LABEL_8:
  si128 = v8;
  if ( (__int64 *)v7 != v6 )
  {
    v13 = 0;
    v14 = 0;
LABEL_10:
    v15 = *v6;
    v16 = *(_QWORD *)(*v6 + 16);
    if ( !v16 )
      v16 = *v6;
    *(_BYTE *)(v16 + 44) |= 1u;
    result = *(unsigned int *)(*(_QWORD *)v15 + 40LL);
    if ( (_DWORD)result == 1485 )
    {
      v14 = 0;
    }
    else if ( (unsigned int)result <= 0x5CD )
    {
      if ( (_DWORD)result == 1426 )
      {
        v13 = 1;
        v14 = 1;
      }
      else if ( (_DWORD)result == 1484 )
      {
        v13 = 0;
      }
    }
    else
    {
      switch ( (_DWORD)result )
      {
        case 0x7A3:
          v13 = 1;
          break;
        case 0x7A4:
          v14 = 1;
          break;
        case 0x72C:
          v13 = 0;
          v14 = 0;
          break;
      }
    }
    v17 = v6 + 1;
    si128.m128i_i64[0] = (__int64)v17;
    if ( v17 != (__int64 *)v7 )
    {
      result = (__int64)&v26.m128i_i64[1];
      v21.m128i_i64[1] = (__int64)&v26.m128i_i64[1];
      do
      {
        v18 = *v17;
        v19 = &si128;
        if ( *v17 )
        {
          do
          {
            v20 = v19[1].m128i_u32[0];
            if ( !(_DWORD)v20 )
              break;
            v21.m128i_i64[0] = v18;
            result = sub_21B9810(v18, v20);
            v18 = v21.m128i_i64[0];
            if ( (_BYTE)result )
            {
              v6 = (__int64 *)si128.m128i_i64[0];
              if ( v7 != si128.m128i_i64[0] )
                goto LABEL_10;
              goto LABEL_25;
            }
            v19 = (__m128i *)((char *)v19 + 4);
          }
          while ( v19 != (__m128i *)v21.m128i_i64[1] );
        }
        si128.m128i_i64[0] = (__int64)++v17;
      }
      while ( (__int64 *)v7 != v17 );
    }
LABEL_25:
    if ( v14 )
      result = sub_10DC5D0(v22, (__int64)"-fwrapv");
    if ( v13 )
      return sub_10DC5D0(v22, (__int64)"-fwrapv-pointer");
  }
  return result;
}
