_BYTE *__fastcall sub_1A3DDB0(
        __int64 a1,
        __m128i *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8)
{
  _BYTE *result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  _BYTE *v36; // rax

  result = (_BYTE *)a2[8].m128i_i64[0];
  if ( result
    || (sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], a3, a4, a5, a6),
        (result = (_BYTE *)a2[8].m128i_i64[0]) != nullptr) )
  {
    if ( *((_QWORD *)result + 11) )
    {
      result = (_BYTE *)sub_B8E180((unsigned __int64)&a2[4]);
      if ( !(_BYTE)result && (a2[4].m128i_i8[10] & 2) == 0 )
      {
        sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v10, v11, v12, v13);
        if ( (*(_BYTE *)a2[8].m128i_i64[0] & 1) == 0
          && (sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v14, v15, v16, v17),
              v18 = a2[8].m128i_i64[0],
              (*(_BYTE *)(v18 + 9) & 1) == 0)
          && ((*(_BYTE *)(v18 + 10) & 0x20) == 0 || (unsigned __int8)sub_B96D80((__int64)a2))
          || (sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v14, v15, v16, v17),
              (*(_BYTE *)(a2[8].m128i_i64[0] + 3) & 8) != 0)
          && (sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v19, v20, v21, v22),
              (*(_BYTE *)(a2[8].m128i_i64[0] + 9) & 1) == 0) )
        {
          sub_1889700(a1, (__int64)a2, a7, a8);
        }
        sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v19, v20, v21, v22);
        if ( (*(_BYTE *)(a2[8].m128i_i64[0] + 9) & 2) == 0 )
          sub_188B1F0(a1, a2, a7, a8);
        v27 = a2[6].m128i_i64[1];
        sub_7052B0((__int64 *)(v27 + 96), v27, v23, v24, v25, v26);
        if ( (*(_BYTE *)(a2[8].m128i_i64[0] + 9) & 8) == 0 )
        {
          v27 = (__int64)a2;
          sub_188BD60(a1, a2, a7, a8);
        }
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x10) != 0 )
        {
          if ( (unsigned __int8)sub_B9C060((__int64)a2, v27, v28, v29, v30, v31) )
            sub_188ABF0(a1, a2, a7, a8);
          sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v32, v33, v34, v35);
          if ( (*(_BYTE *)(a2[8].m128i_i64[0] + 9) & 0x10) == 0 )
          {
            sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v28, v29, v30, v31);
            if ( (*(_BYTE *)a2[8].m128i_i64[0] & 4) == 0 )
            {
              sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v28, v29, v30, v31);
              if ( (*(_BYTE *)a2[8].m128i_i64[0] & 0x10) == 0 )
              {
                sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v28, v29, v30, v31);
                if ( (*(_BYTE *)a2[8].m128i_i64[0] & 8) == 0 )
                {
                  sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v28, v29, v30, v31);
                  v36 = (_BYTE *)a2[8].m128i_i64[0];
                  if ( (*v36 & 0x40) == 0 && ((v36[10] & 0x20) == 0 || (unsigned __int8)sub_B96D80((__int64)a2)) )
                    sub_188B8A0(a1, a2, a7, a8);
                }
              }
            }
          }
        }
        sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v28, v29, v30, v31);
        result = (_BYTE *)a2[8].m128i_i64[0];
        if ( (result[9] & 0x20) == 0 )
          return sub_18892E0(a1, a2, a7, a8);
      }
    }
  }
  return result;
}
