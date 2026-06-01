__int64 __fastcall CoinModelHash::addHash(CoinModelHash *this, int a2, const char *a3)
{
  int v6; // eax
  const char **v7; // r15
  int v8; // ebp
  const char *v9; // rax
  unsigned int v10; // esi
  __int64 v11; // rdx
  unsigned int v12; // ecx
  __int64 v13; // rdx
  const char *v14; // rcx
  char *v15; // rdx
  __int64 v16; // rcx
  const char *v17; // rdi
  char *v18; // rcx
  int v19; // edx
  __int64 v20; // r13
  __int64 result; // rax
  int *v22; // rsi
  __int64 v23; // rdx
  int *v24; // r15
  __int64 v25; // rbp
  __int64 v26; // rdx
  int v27; // [rsp+4h] [rbp-44h]

  v6 = *((_DWORD *)this + 4);
  if ( v6 >= *((_DWORD *)this + 5) )
    CoinModelHash::resize(this, 3 * v6 / 2 + 1000, 0);
  v7 = (const char **)(*(_QWORD *)this + 8LL * a2);
  if ( a3 )
  {
    v8 = strlen(a3);
    v9 = (const char *)malloc(v8 + 1);
    if ( !v8 || a3 == v9 )
    {
LABEL_21:
      v9[v8] = 0;
      goto LABEL_22;
    }
    v10 = v8 >> 3;
    if ( v8 >> 3 <= 0 )
    {
      v18 = (char *)v9;
      v17 = a3;
LABEL_13:
      switch ( v8 % 8 )
      {
        case 1:
          goto LABEL_20;
        case 2:
          goto LABEL_19;
        case 3:
          goto LABEL_18;
        case 4:
          goto LABEL_17;
        case 5:
          goto LABEL_16;
        case 6:
          goto LABEL_15;
        case 7:
          v18[6] = v17[6];
LABEL_15:
          v18[5] = v17[5];
LABEL_16:
          v18[4] = v17[4];
LABEL_17:
          v18[3] = v17[3];
LABEL_18:
          v18[2] = v17[2];
LABEL_19:
          v18[1] = v17[1];
LABEL_20:
          *v18 = *v17;
          break;
        default:
          goto LABEL_21;
      }
      goto LABEL_21;
    }
    if ( v10 == 1 )
    {
      v15 = (char *)v9;
      v14 = a3;
    }
    else
    {
      v11 = 0;
      v12 = 0;
      do
      {
        ++v12;
        *(__m128i *)&v9[v11] = _mm_loadu_si128((const __m128i *)&a3[v11]);
        v11 += 16;
      }
      while ( v12 < v10 >> 1 );
      v13 = 8LL * (v10 & 0xFFFFFFFE);
      v14 = &a3[v13];
      v15 = (char *)&v9[v13];
      if ( v10 == (v10 & 0xFFFFFFFE) )
        goto LABEL_12;
    }
    *v15 = *v14;
    v15[1] = v14[1];
    v15[2] = v14[2];
    v15[3] = v14[3];
    v15[4] = v14[4];
    v15[5] = v14[5];
    v15[6] = v14[6];
    v15[7] = v14[7];
LABEL_12:
    v16 = 8LL * (int)(v10 - 1) + 8;
    v17 = &a3[v16];
    v18 = (char *)&v9[v16];
    goto LABEL_13;
  }
  v9 = nullptr;
LABEL_22:
  *v7 = v9;
  LODWORD(result) = CoinModelHash::hashValue(this, a3);
  v19 = *((_DWORD *)this + 4);
  v20 = *((_QWORD *)this + 1);
  result = (int)result;
  v22 = (int *)(v20 + 8LL * (int)result);
  if ( a2 + 1 >= v19 )
    v19 = a2 + 1;
  v27 = v19;
  *((_DWORD *)this + 4) = v19;
  v23 = *v22;
  if ( (int)v23 < 0 )
  {
    *v22 = a2;
  }
  else
  {
LABEL_25:
    v24 = (int *)(v20 + 8 * result);
    if ( a2 != (_DWORD)v23 )
    {
      while ( 1 )
      {
        if ( (int)v23 < 0 )
        {
          *v24 = a2;
          v23 = a2;
          goto LABEL_25;
        }
        v25 = *(_QWORD *)this;
        if ( !strcmp(a3, *(const char **)(*(_QWORD *)this + 8 * v23)) )
        {
          printf("** duplicate name %s\n", *(const char **)(v25 + 8LL * a2));
          abort();
        }
        result = v24[1];
        if ( (_DWORD)result == -1 )
          break;
        v23 = *(int *)(v20 + 8 * result);
        v24 = (int *)(v20 + 8 * result);
        if ( a2 == (_DWORD)v23 )
          return result;
      }
      v26 = *((int *)this + 6);
      for ( result = v20 + 8 * v26 + 8; ; result += 8 )
      {
        LODWORD(v26) = v26 + 1;
        if ( (int)v26 > v27 )
        {
          *((_DWORD *)this + 6) = v26;
          puts("** too many names");
          abort();
        }
        if ( *(int *)result < 0 && *(int *)(result + 4) < 0 )
          break;
      }
      *((_DWORD *)this + 6) = v26;
      v24[1] = v26;
      *(_DWORD *)result = a2;
      *(_DWORD *)(result + 4) = -1;
    }
  }
  return result;
}

