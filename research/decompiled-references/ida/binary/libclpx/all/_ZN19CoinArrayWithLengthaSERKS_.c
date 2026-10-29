CoinArrayWithLength *__fastcall CoinArrayWithLength::operator=(CoinArrayWithLength *a1, CoinArrayWithLength *a2)
{
  int v4; // esi
  int v5; // r8d
  char *v6; // rcx
  char *v7; // rdx
  unsigned int v8; // esi
  __int64 v9; // rax
  unsigned int v10; // edi
  __int64 v11; // rax
  char *v12; // r9
  char *v13; // rax
  signed int v14; // esi
  __int64 v15; // rax
  char *v17; // rdi
  char *v18; // rax
  char v19; // r9

  if ( a1 == a2 )
    return a1;
  v4 = *((_DWORD *)a2 + 2);
  if ( v4 != -1 )
  {
    CoinArrayWithLength::getCapacity(a1, v4, -1);
    v5 = *((_DWORD *)a1 + 2);
    if ( v5 > 0 )
    {
      v6 = *(char **)a1;
      v7 = *(char **)a2;
      if ( *(_QWORD *)a1 != *(_QWORD *)a2 )
      {
        v8 = v5 >> 3;
        if ( v5 >> 3 )
        {
          if ( (v6 >= v7 + 16 || v7 >= v6 + 16) && v8 > 1 )
          {
            v9 = 0;
            v10 = 0;
            do
            {
              ++v10;
              *(__m128i *)&v6[v9] = _mm_loadu_si128((const __m128i *)&v7[v9]);
              v9 += 16;
            }
            while ( v10 < v8 >> 1 );
            v11 = 8LL * (v8 & 0xFFFFFFFE);
            v12 = &v7[v11];
            v13 = &v6[v11];
            if ( v8 != (v8 & 0xFFFFFFFE) )
            {
              *v13 = *v12;
              v13[1] = v12[1];
              v13[2] = v12[2];
              v13[3] = v12[3];
              v13[4] = v12[4];
              v13[5] = v12[5];
              v13[6] = v12[6];
              v13[7] = v12[7];
            }
            v14 = v8 - 1;
          }
          else
          {
            v14 = v8 - 1;
            v17 = *(char **)a1;
            v18 = *(char **)a2;
            do
            {
              v19 = *v18;
              v18 += 8;
              v17 += 8;
              *(v17 - 8) = v19;
              *(v17 - 7) = *(v18 - 7);
              *(v17 - 6) = *(v18 - 6);
              *(v17 - 5) = *(v18 - 5);
              *(v17 - 4) = *(v18 - 4);
              *(v17 - 3) = *(v18 - 3);
              *(v17 - 2) = *(v18 - 2);
              *(v17 - 1) = *(v18 - 1);
            }
            while ( &v7[8 * v14 + 8] != v18 );
          }
          v15 = 8LL * v14 + 8;
          v7 += v15;
          v6 += v15;
        }
        switch ( v5 & 7 )
        {
          case 0:
            return a1;
          case 1:
            goto LABEL_21;
          case 2:
            goto LABEL_20;
          case 3:
            goto LABEL_19;
          case 4:
            goto LABEL_18;
          case 5:
            goto LABEL_17;
          case 6:
            goto LABEL_16;
          case 7:
            v6[6] = v7[6];
LABEL_16:
            v6[5] = v7[5];
LABEL_17:
            v6[4] = v7[4];
LABEL_18:
            v6[3] = v7[3];
LABEL_19:
            v6[2] = v7[2];
LABEL_20:
            v6[1] = v7[1];
LABEL_21:
            *v6 = *v7;
            break;
        }
      }
    }
    return a1;
  }
  CoinArrayWithLength::reallyFreeArray(a1);
  return a1;
}

