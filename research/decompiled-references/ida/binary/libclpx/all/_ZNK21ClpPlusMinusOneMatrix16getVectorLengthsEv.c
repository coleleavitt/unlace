_DWORD *__fastcall ClpPlusMinusOneMatrix::getVectorLengths(ClpPlusMinusOneMatrix *this)
{
  _DWORD *result; // rax
  int v2; // ebp
  _DWORD *v3; // rcx
  int v4; // r8d
  unsigned int v5; // edx
  unsigned int v6; // esi
  unsigned int v7; // ebx
  __int64 v8; // rdi
  unsigned int v9; // r11d
  __int64 v10; // rdx
  unsigned int v11; // r11d
  char *v12; // r10
  char *v13; // r9
  char *v14; // rdi
  signed int v15; // r8d
  __int64 v16; // rsi
  __int64 v17; // rdx
  unsigned __int64 v18; // rdx

  result = *((_DWORD **)this + 12);
  if ( !result )
  {
    v2 = *((_DWORD *)this + 33);
    if ( !*((_BYTE *)this + 136) )
      v2 = *((_DWORD *)this + 32);
    if ( (unsigned __int64)v2 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    result = (_DWORD *)operator new[](4LL * v2);
    *((_QWORD *)this + 12) = result;
    if ( v2 > 0 )
    {
      v3 = *((_DWORD **)this + 13);
      if ( (result >= v3 + 5 || v3 >= result + 4) && (unsigned int)v2 > 8 )
      {
        v4 = 0;
        v5 = -(int)((unsigned __int64)(v3 + 1) >> 2) & 3;
        if ( v5 )
        {
          v4 = 1;
          *result = v3[1] - *v3;
          if ( v5 != 1 )
          {
            v4 = 2;
            result[1] = v3[2] - v3[1];
            if ( v5 != 2 )
            {
              v4 = 3;
              result[2] = v3[3] - v3[2];
            }
          }
        }
        v6 = 0;
        v7 = v2 - v5;
        v8 = 4LL * v5 + 4;
        v9 = v2 - v5;
        v10 = 0;
        v11 = v9 >> 2;
        v12 = (char *)v3 + v8;
        v8 -= 4;
        v13 = (char *)v3 + v8;
        v14 = (char *)result + v8;
        do
        {
          ++v6;
          *(__m128i *)&v14[v10] = _mm_sub_epi32(
                                    _mm_load_si128((const __m128i *)&v12[v10]),
                                    _mm_loadu_si128((const __m128i *)&v13[v10]));
          v10 += 16;
        }
        while ( v11 > v6 );
        v15 = (v7 & 0xFFFFFFFC) + v4;
        if ( v7 != (v7 & 0xFFFFFFFC) )
        {
          v16 = v15 + 1LL;
          v17 = v16;
          result[v16 - 1] = v3[v16] - v3[v16 - 1];
          if ( v2 > v15 + 1 )
          {
            result[v16] = v3[v16 + 1] - v3[v16];
            if ( v2 > v15 + 2 )
            {
              result[v17 + 1] = v3[v17 + 2] - v3[v17 + 1];
              if ( v2 > v15 + 3 )
              {
                result[v17 + 2] = v3[v17 + 3] - v3[v17 + 2];
                if ( v2 > v15 + 4 )
                {
                  result[v17 + 3] = v3[v17 + 4] - v3[v17 + 3];
                  if ( v2 > v15 + 5 )
                    result[v17 + 4] = v3[v17 + 5] - v3[v17 + 4];
                }
              }
            }
          }
        }
      }
      else
      {
        v18 = 0;
        do
        {
          result[v18 / 4] = v3[v18 / 4 + 1] - v3[v18 / 4];
          v18 += 4LL;
        }
        while ( v18 != 4LL * (unsigned int)(v2 - 1) + 4 );
      }
    }
  }
  return result;
}

