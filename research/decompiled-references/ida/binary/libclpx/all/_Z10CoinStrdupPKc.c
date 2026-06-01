const char *__fastcall CoinStrdup(const char *a1)
{
  const char *v1; // rbx
  int v2; // ebp
  const char *result; // rax
  unsigned int v4; // esi
  __int64 v5; // rdx
  unsigned int v6; // ecx
  __int64 v7; // rdx
  const char *v8; // rcx
  char *v9; // rdx
  __int64 v10; // rcx
  char *v11; // rcx

  if ( a1 )
  {
    v1 = a1;
    v2 = strlen(a1);
    result = (const char *)malloc(v2 + 1);
    if ( !v2 || a1 == result )
    {
LABEL_19:
      result[v2] = 0;
      return result;
    }
    v4 = v2 >> 3;
    if ( v2 >> 3 <= 0 )
    {
      v11 = (char *)result;
LABEL_11:
      switch ( v2 % 8 )
      {
        case 1:
          goto LABEL_18;
        case 2:
          goto LABEL_17;
        case 3:
          goto LABEL_16;
        case 4:
          goto LABEL_15;
        case 5:
          goto LABEL_14;
        case 6:
          goto LABEL_13;
        case 7:
          v11[6] = v1[6];
LABEL_13:
          v11[5] = v1[5];
LABEL_14:
          v11[4] = v1[4];
LABEL_15:
          v11[3] = v1[3];
LABEL_16:
          v11[2] = v1[2];
LABEL_17:
          v11[1] = v1[1];
LABEL_18:
          *v11 = *v1;
          break;
        default:
          goto LABEL_19;
      }
      goto LABEL_19;
    }
    if ( v4 == 1 )
    {
      v9 = (char *)result;
      v8 = a1;
    }
    else
    {
      v5 = 0;
      v6 = 0;
      do
      {
        ++v6;
        *(__m128i *)&result[v5] = _mm_loadu_si128((const __m128i *)&a1[v5]);
        v5 += 16;
      }
      while ( v6 < v4 >> 1 );
      v7 = 8LL * (v4 & 0xFFFFFFFE);
      v8 = &a1[v7];
      v9 = (char *)&result[v7];
      if ( v4 == (v4 & 0xFFFFFFFE) )
        goto LABEL_10;
    }
    *v9 = *v8;
    v9[1] = v8[1];
    v9[2] = v8[2];
    v9[3] = v8[3];
    v9[4] = v8[4];
    v9[5] = v8[5];
    v9[6] = v8[6];
    v9[7] = v8[7];
LABEL_10:
    v10 = 8LL * (int)(v4 - 1) + 8;
    v1 = &a1[v10];
    v11 = (char *)&result[v10];
    goto LABEL_11;
  }
  return nullptr;
}

