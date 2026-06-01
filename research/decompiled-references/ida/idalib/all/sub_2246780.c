unsigned __int64 *__fastcall sub_2246780(unsigned __int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rbx
  __int64 v4; // rbp
  char *v5; // r12
  __int64 v6; // rdx
  __m128i si128; // xmm6
  __m128i v8; // xmm5
  __m128i v9; // xmm4
  __m128i v10; // xmm2
  __m128i v11; // xmm0
  char *v12; // rdx
  _BYTE *v13; // rax
  char v14; // cl
  char v15; // cl
  char v16; // cl
  char v17; // cl
  char v18; // cl
  char v19; // cl
  char v20; // cl
  char v21; // cl
  char v22; // cl
  char v23; // cl
  char v24; // cl
  char v25; // cl
  char v26; // cl
  char v27; // cl
  char v28; // dl
  __int64 v30; // rdx
  char v31; // cl

  v2 = (unsigned __int64)(a1 + 2);
  v3 = *a2;
  v4 = a2[1];
  *a1 = (unsigned __int64)(a1 + 2);
  v5 = (char *)(v3 + v4);
  if ( (unsigned __int64)v4 > 0xF )
  {
    if ( v4 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v2 = operator new(v4 + 1);
    a1[2] = v4;
    *a1 = v2;
  }
  if ( (char *)v3 != v5 )
  {
    if ( (v3 >= v2 + 16 || v2 >= v3 + 16) && (unsigned __int64)(v4 - 1) > 0xE )
    {
      v6 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23ABBE0);
      v8 = _mm_load_si128((const __m128i *)&xmmword_23ABBD0);
      v9 = _mm_load_si128((const __m128i *)&xmmword_23ABBF0);
      do
      {
        v10 = _mm_loadu_si128((const __m128i *)(v3 + v6));
        v11 = _mm_cmpeq_epi8(_mm_subs_epu8(_mm_add_epi8(v10, si128), v8), (__m128i)0LL);
        *(__m128i *)(v2 + v6) = _mm_or_si128(_mm_andnot_si128(v11, v10), _mm_and_si128(_mm_add_epi8(v10, v9), v11));
        v6 += 16;
      }
      while ( v6 != (v4 & 0xFFFFFFFFFFFFFFF0LL) );
      v12 = (char *)(v3 + (v4 & 0xFFFFFFFFFFFFFFF0LL));
      v13 = (_BYTE *)((v4 & 0xFFFFFFFFFFFFFFF0LL) + v2);
      if ( v4 != (v4 & 0xFFFFFFFFFFFFFFF0LL) )
      {
        v14 = *v12;
        if ( (unsigned __int8)(*v12 - 97) < 0x1Au )
          v14 = *v12 - 32;
        *v13 = v14;
        if ( v5 != v12 + 1 )
        {
          v15 = v12[1];
          if ( (unsigned __int8)(v15 - 97) < 0x1Au )
            v15 -= 32;
          v13[1] = v15;
          if ( v5 != v12 + 2 )
          {
            v16 = v12[2];
            if ( (unsigned __int8)(v16 - 97) < 0x1Au )
              v16 -= 32;
            v13[2] = v16;
            if ( v5 != v12 + 3 )
            {
              v17 = v12[3];
              if ( (unsigned __int8)(v17 - 97) < 0x1Au )
                v17 -= 32;
              v13[3] = v17;
              if ( v5 != v12 + 4 )
              {
                v18 = v12[4];
                if ( (unsigned __int8)(v18 - 97) < 0x1Au )
                  v18 -= 32;
                v13[4] = v18;
                if ( v5 != v12 + 5 )
                {
                  v19 = v12[5];
                  if ( (unsigned __int8)(v19 - 97) < 0x1Au )
                    v19 -= 32;
                  v13[5] = v19;
                  if ( v5 != v12 + 6 )
                  {
                    v20 = v12[6];
                    if ( (unsigned __int8)(v20 - 97) < 0x1Au )
                      v20 -= 32;
                    v13[6] = v20;
                    if ( v5 != v12 + 7 )
                    {
                      v21 = v12[7];
                      if ( (unsigned __int8)(v21 - 97) < 0x1Au )
                        v21 -= 32;
                      v13[7] = v21;
                      if ( v5 != v12 + 8 )
                      {
                        v22 = v12[8];
                        if ( (unsigned __int8)(v22 - 97) < 0x1Au )
                          v22 -= 32;
                        v13[8] = v22;
                        if ( v5 != v12 + 9 )
                        {
                          v23 = v12[9];
                          if ( (unsigned __int8)(v23 - 97) < 0x1Au )
                            v23 -= 32;
                          v13[9] = v23;
                          if ( v5 != v12 + 10 )
                          {
                            v24 = v12[10];
                            if ( (unsigned __int8)(v24 - 97) < 0x1Au )
                              v24 -= 32;
                            v13[10] = v24;
                            if ( v5 != v12 + 11 )
                            {
                              v25 = v12[11];
                              if ( (unsigned __int8)(v25 - 97) < 0x1Au )
                                v25 -= 32;
                              v13[11] = v25;
                              if ( v5 != v12 + 12 )
                              {
                                v26 = v12[12];
                                if ( (unsigned __int8)(v26 - 97) < 0x1Au )
                                  v26 -= 32;
                                v13[12] = v26;
                                if ( v5 != v12 + 13 )
                                {
                                  v27 = v12[13];
                                  if ( (unsigned __int8)(v27 - 97) < 0x1Au )
                                    v27 -= 32;
                                  v13[13] = v27;
                                  if ( v5 != v12 + 14 )
                                  {
                                    v28 = v12[14];
                                    if ( (unsigned __int8)(v28 - 97) < 0x1Au )
                                      v28 -= 32;
                                    v13[14] = v28;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      v30 = 0;
      while ( 1 )
      {
        v31 = *(_BYTE *)(v3 + v30);
        if ( (unsigned __int8)(v31 - 97) > 0x19u )
          break;
LABEL_61:
        *(_BYTE *)(v2 + v30++) = v31 - 32;
        if ( v4 == v30 )
          goto LABEL_53;
      }
      while ( 1 )
      {
        *(_BYTE *)(v2 + v30++) = v31;
        if ( v4 == v30 )
          break;
        v31 = *(_BYTE *)(v3 + v30);
        if ( (unsigned __int8)(v31 - 97) <= 0x19u )
          goto LABEL_61;
      }
    }
LABEL_53:
    v2 = *a1;
  }
  a1[1] = v4;
  *(_BYTE *)(v2 + v4) = 0;
  return a1;
}
