__int64 __fastcall sub_2219280(__int16 *src, signed __int64 a2, __int64 *a3)
{
  __int16 *v3; // r14
  __m128i *v4; // r13
  __m128i *v6; // rdx
  __int16 v7; // ax
  _BYTE *v8; // rax
  __int64 result; // rax
  __int64 v10; // rbp
  _BYTE *v11; // rax
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rdx
  _BYTE *v14; // rax
  __int64 v15; // rax
  __m128i *v16; // rax
  unsigned __int64 v17; // rcx
  __m128i v18; // xmm0
  unsigned __int8 v19; // [rsp+1h] [rbp-39h]
  __m128i *v20; // [rsp+2h] [rbp-38h] BYREF
  __int64 v21[6]; // [rsp+Ah] [rbp-30h] BYREF

  if ( (a2 & 1) != 0 )
    return 0;
  if ( !a2 )
    return 1;
  v3 = (__int16 *)((char *)src + a2);
  v4 = nullptr;
  v6 = (__m128i *)src;
  v7 = *src;
  v20 = (__m128i *)src;
  if ( v7 == -2 )
  {
    if ( v3 == src )
    {
      v3 = nullptr;
    }
    else
    {
      if ( a2 < 0 )
        std::__throw_length_error("vector::_M_range_insert");
      v4 = (__m128i *)operator new(a2);
      memcpy(v4, src, a2);
      v3 = (__int16 *)((char *)v4->m128i_i16 + a2);
      if ( &v4->m128i_i8[a2] != (__int8 *)v4 )
      {
        v16 = v4;
        v17 = ((unsigned __int64)(a2 - 2) >> 1) + 1;
        if ( (unsigned __int64)(a2 - 2) <= 0xC )
          goto LABEL_37;
        do
        {
          v18 = _mm_loadu_si128(v16++);
          v16[-1] = _mm_or_si128(_mm_srli_epi16(v18, 8u), _mm_slli_epi16(v18, 8u));
        }
        while ( v16 != &v4[v17 >> 3] );
        v16 = (__m128i *)((char *)v4 + 2 * (v17 & 0xFFFFFFFFFFFFFFF8LL));
        if ( (v17 & 0xFFFFFFFFFFFFFFF8LL) != v17 )
        {
LABEL_37:
          v16->m128i_i16[0] = __ROL2__(v16->m128i_i16[0], 8);
          if ( v3 != &v16->m128i_i16[1] )
          {
            v16->m128i_i16[1] = __ROL2__(v16->m128i_i16[1], 8);
            if ( v3 != (__int16 *)((char *)v16->m128i_i64 + 4) )
            {
              v16->m128i_i16[2] = __ROL2__(v16->m128i_i16[2], 8);
              if ( v3 != (__int16 *)&v16->m128i_u16[3] )
              {
                v16->m128i_i16[3] = __ROL2__(v16->m128i_i16[3], 8);
                if ( v3 != (__int16 *)&v16->m128i_u64[1] )
                {
                  v16->m128i_i16[4] = __ROL2__(v16->m128i_i16[4], 8);
                  if ( v3 != (__int16 *)((char *)&v16->m128i_u64[1] + 2) )
                  {
                    v16->m128i_i16[5] = __ROL2__(v16->m128i_i16[5], 8);
                    if ( v3 != (__int16 *)((char *)&v16->m128i_u64[1] + 4) )
                      v16->m128i_i16[6] = __ROL2__(v16->m128i_i16[6], 8);
                  }
                }
              }
            }
          }
        }
      }
    }
    v20 = v4;
    v7 = v4->m128i_i16[0];
    v6 = v4;
  }
  if ( v7 == -257 )
    v20 = (__m128i *)&v6->m128i_i16[1];
  sub_C05030(a3, 4 * a2 + 1, 0);
  v21[0] = *a3;
  if ( (unsigned int)sub_2218430((unsigned __int64 *)&v20, (unsigned __int64)v3, v21, a3[1] + v21[0], 0) )
  {
    v8 = (_BYTE *)*a3;
    a3[1] = 0;
    *v8 = 0;
    result = 0;
  }
  else
  {
    sub_C05030(a3, v21[0] - *a3, 0);
    v10 = a3[1];
    v11 = (_BYTE *)*a3;
    v12 = v10 + 1;
    if ( (__int64 *)*a3 == a3 + 2 )
      v13 = 15;
    else
      v13 = a3[2];
    if ( v12 > v13 )
    {
      sub_998B30((__int64)a3, a3[1], 0, nullptr, 1u);
      v11 = (_BYTE *)*a3;
    }
    v11[v10] = 0;
    v14 = (_BYTE *)*a3;
    a3[1] = v12;
    v14[v10 + 1] = 0;
    v15 = a3[1];
    a3[1] = v15 - 1;
    *(_BYTE *)(*a3 + v15 - 1) = 0;
    result = 1;
  }
  if ( v4 )
  {
    v19 = result;
    operator delete(v4);
    return v19;
  }
  return result;
}
