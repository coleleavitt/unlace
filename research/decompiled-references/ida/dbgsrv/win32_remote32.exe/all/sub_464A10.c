/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_464A10
// Address: 0x00464A10

//----- (00464A10) --------------------------------------------------------
__m128i *__usercall sub_464A10@<eax>(__m128i a1@<xmm0>, const __m128i *a2, const __m128i *a3)
{
  const __m128i *v3; // ecx
  __m128i *result; // eax
  unsigned int v5; // edx
  __m128 v6; // xmm3
  __m128i v7; // xmm3
  int v8; // edi
  int v9; // ebx
  char v10; // dl
  __m128i v11; // xmm1
  unsigned int v12; // ebx
  __int8 v13; // bl
  const __m128i *v14; // edx
  unsigned int j; // ecx
  __m128i si128; // xmm2
  unsigned int v17; // ebx
  int v18; // ebx
  int v19; // esi
  char v20; // dl
  unsigned __int8 v21; // cf
  int v22; // ecx
  const __m128i *v23; // edx
  __m128i *i; // esi
  __m128i v25; // xmm1
  unsigned __int8 v26; // sf
  __int8 v27; // dl
  const __m128i *v28; // edi
  __int8 v29; // dh
  const __m128i *v30; // ecx
  __int8 *v31; // esi
  char v32; // al
  __int8 v33; // ah
  char v34; // al
  __int8 v35; // al

  v3 = a3;
  result = (__m128i *)a2;
  if ( dword_4B7844 )
  {
    if ( (unsigned int)dword_4B7844 > 1 )
    {
      if ( a3->m128i_i8[0] )
      {
        if ( ((unsigned __int16)a3 & 0xFFFu) > 0xFF0 )
        {
          v18 = 15;
LABEL_31:
          v19 = v3->m128i_u8[0];
          v3 = (const __m128i *)((char *)v3 + 1);
          while ( 1 )
          {
            a1 = _mm_srli_si128(_mm_insert_epi8(a1, v19, 15), 1);
            if ( !--v18 )
              break;
            if ( v19 )
              goto LABEL_31;
          }
        }
        else
        {
          a1 = _mm_loadu_si128(a3);
        }
        while ( 2 )
        {
          v20 = _mm_cvtsi128_si32(a1);
          do
          {
            while ( ((unsigned __int16)result & 0xFFFu) > 0xFF0 )
            {
              if ( !result->m128i_i8[0] )
                return nullptr;
              if ( v20 == result->m128i_i8[0] )
                goto LABEL_44;
              result = (__m128i *)((char *)result + 1);
            }
            ++result;
            v22 = _mm_cmpistri(a1, result[-1], 12);
            v21 = _mm_cmpistrc(a1, result[-1], 12);
          }
          while ( !(v21 | _mm_cmpistrz(a1, result[-1], 12)) );
          if ( v21 )
          {
            result = (__m128i *)((char *)result + v22 - 16);
LABEL_44:
            v23 = a3;
            for ( i = result; ; i = (__m128i *)((char *)i + 1) )
            {
              while ( ((unsigned __int16)i & 0xFFFu) <= 0xFF0 && ((unsigned __int16)v23 & 0xFFFu) <= 0xFF0 )
              {
                v25 = _mm_loadu_si128(v23);
                ++i;
                ++v23;
                v26 = _mm_cmpistrs(v25, i[-1], 12);
                if ( !_mm_cmpistro(v25, i[-1], 12) )
                  goto LABEL_35;
                if ( v26 )
                  return result;
              }
              if ( !v23->m128i_i8[0] )
                return result;
              if ( v23->m128i_i8[0] != i->m128i_i8[0] )
                break;
              v23 = (const __m128i *)((char *)v23 + 1);
            }
LABEL_35:
            result = (__m128i *)((char *)result + 1);
            continue;
          }
          return nullptr;
        }
      }
    }
    else
    {
      v5 = a3->m128i_u8[0] | (a3->m128i_u8[0] << 8);
      if ( v5 )
      {
        v6 = (__m128)_mm_shufflelo_epi16(_mm_cvtsi32_si128(v5), 0);
        v7 = (__m128i)_mm_movelh_ps(v6, v6);
        v8 = -1;
        do
        {
          v9 = v3->m128i_u8[0];
          v3 = (const __m128i *)((char *)v3 + 1);
          if ( !v9 )
            goto LABEL_9;
        }
        while ( ((unsigned __int8)v3 & 0xF) != 0 );
        if ( !_mm_movemask_epi8(_mm_cmpeq_epi8(_mm_load_si128(v3), (__m128i)0LL)) )
          v8 = 15;
LABEL_9:
        v10 = _mm_cvtsi128_si32(v7);
        while ( 1 )
        {
          while ( ((unsigned __int16)result & 0xFFFu) > 0xFF0 )
          {
LABEL_13:
            v13 = result->m128i_i8[0];
            if ( !result->m128i_i8[0] )
              return nullptr;
            result = (__m128i *)((char *)result + 1);
            if ( v10 == v13 )
            {
              v14 = result;
              for ( j = (unsigned int)a3->m128i_u32 + 1; ; ++j )
              {
                while ( 2 )
                {
                  if ( (j & v8) == 0 && ((unsigned __int16)v14 & 0xFFFu) <= 0xFF0 )
                  {
                    si128 = _mm_load_si128((const __m128i *)j);
                    v17 = _mm_movemask_epi8(
                            _mm_or_si128(
                              _mm_cmpeq_epi8(si128, (__m128i)0LL),
                              _mm_cmpeq_epi8(_mm_cmpeq_epi8(_mm_loadu_si128(v14), si128), (__m128i)0LL)));
                    if ( !v17 )
                    {
                      ++v14;
                      j += 16;
                      continue;
                    }
                    _BitScanForward(&v17, v17);
                    v14 = (const __m128i *)((char *)v14 + v17);
                    j += v17;
                  }
                  break;
                }
                if ( !*(_BYTE *)j )
                  return (__m128i *)((char *)result - 1);
                if ( *(_BYTE *)j != v14->m128i_i8[0] )
                  goto LABEL_9;
                v14 = (const __m128i *)((char *)v14 + 1);
              }
            }
          }
          v11 = _mm_loadu_si128(result);
          v12 = _mm_movemask_epi8(_mm_or_si128(_mm_cmpeq_epi8(v11, v7), _mm_cmpeq_epi8((__m128i)0LL, v11)));
          ++result;
          if ( v12 )
          {
            _BitScanForward(&v12, v12);
            result = (__m128i *)((char *)result + v12 - 16);
            goto LABEL_13;
          }
        }
      }
    }
  }
  else
  {
    v27 = a3->m128i_i8[0];
    v28 = a2;
    if ( a3->m128i_i8[0] )
    {
      v29 = a3->m128i_i8[1];
      if ( !v29 )
        JUMPOUT(0x464F7E);
LABEL_55:
      v30 = a3;
      v31 = &v28->m128i_i8[1];
      if ( v28->m128i_i8[0] == v27 )
        goto LABEL_61;
      if ( v28->m128i_i8[0] )
      {
        while ( 2 )
        {
          v32 = *v31++;
          while ( v32 == v27 )
          {
LABEL_61:
            v32 = *v31++;
            if ( v32 == v29 )
            {
              v28 = (const __m128i *)(v31 - 1);
              while ( 1 )
              {
                v33 = v30->m128i_i8[2];
                if ( !v33 )
                  break;
                v34 = *v31;
                v31 += 2;
                if ( v34 != v33 )
                  goto LABEL_55;
                v35 = v30->m128i_i8[3];
                if ( !v35 )
                  break;
                v30 = (const __m128i *)((char *)v30 + 2);
                if ( v35 != *(v31 - 1) )
                  goto LABEL_55;
              }
              return (__m128i *)((char *)&v28[-1].m128i_u64[1] + 7);
            }
          }
          if ( v32 )
            continue;
          break;
        }
      }
      return nullptr;
    }
  }
  return result;
}
// 464C69: control flows out of bounds to 464F7E
// 4B7844: using guessed type int dword_4B7844;
