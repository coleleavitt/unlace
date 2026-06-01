const char *__fastcall CoinLpIO::setProblemName(void **this, const char *a2)
{
  const char *v3; // rbx
  int v4; // ebp
  const char *result; // rax
  unsigned int v6; // esi
  __int64 v7; // rdx
  unsigned int v8; // ecx
  __int64 v9; // rdx
  const char *v10; // rdi
  char *v11; // rdx
  __int64 v12; // rcx
  char *v13; // rcx

  v3 = a2;
  free(*this);
  if ( !a2 )
  {
    result = nullptr;
    goto LABEL_20;
  }
  v4 = strlen(a2);
  result = (const char *)malloc(v4 + 1);
  if ( v4 && a2 != result )
  {
    v6 = v4 >> 3;
    if ( v4 >> 3 <= 0 )
    {
      v13 = (char *)result;
LABEL_11:
      switch ( v4 % 8 )
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
          v13[6] = v3[6];
LABEL_13:
          v13[5] = v3[5];
LABEL_14:
          v13[4] = v3[4];
LABEL_15:
          v13[3] = v3[3];
LABEL_16:
          v13[2] = v3[2];
LABEL_17:
          v13[1] = v3[1];
LABEL_18:
          *v13 = *v3;
          break;
        default:
          goto LABEL_19;
      }
      goto LABEL_19;
    }
    if ( v6 == 1 )
    {
      v11 = (char *)result;
      v10 = v3;
    }
    else
    {
      v7 = 0;
      v8 = 0;
      do
      {
        ++v8;
        *(__m128i *)&result[v7] = _mm_loadu_si128((const __m128i *)&v3[v7]);
        v7 += 16;
      }
      while ( v8 < v6 >> 1 );
      v9 = 8LL * (v6 & 0xFFFFFFFE);
      v10 = &v3[v9];
      v11 = (char *)&result[v9];
      if ( v6 == (v6 & 0xFFFFFFFE) )
        goto LABEL_10;
    }
    *v11 = *v10;
    v11[1] = v10[1];
    v11[2] = v10[2];
    v11[3] = v10[3];
    v11[4] = v10[4];
    v11[5] = v10[5];
    v11[6] = v10[6];
    v11[7] = v10[7];
LABEL_10:
    v12 = 8LL * (int)(v6 - 1) + 8;
    v3 += v12;
    v13 = (char *)&result[v12];
    goto LABEL_11;
  }
LABEL_19:
  result[v4] = 0;
LABEL_20:
  *this = (void *)result;
  return result;
}

