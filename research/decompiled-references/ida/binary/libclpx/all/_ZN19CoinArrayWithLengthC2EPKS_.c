// Alternative name is '_ZN19CoinArrayWithLengthC1EPKS_'
void __fastcall CoinArrayWithLength::CoinArrayWithLength(CoinArrayWithLength *this, const CoinArrayWithLength *a2)
{
  int v4; // esi
  int v5; // r8d
  _BYTE *v6; // rsi
  _BYTE *v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // rax
  unsigned int v10; // edx
  __int64 v11; // rax
  _BYTE *v12; // rdx
  _BYTE *v13; // rax
  signed int v14; // edi
  __int64 v15; // rax
  __int64 v16; // rdx
  char *v17; // rax
  char v18; // r9

  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  v4 = *((_DWORD *)a2 + 2);
  if ( v4 < -1 )
    v4 = -2 - v4;
  CoinArrayWithLength::getArray(this, v4);
  v5 = *((_DWORD *)this + 2);
  if ( v5 > 0 )
  {
    v6 = *(_BYTE **)this;
    v7 = *(_BYTE **)a2;
    if ( *(_QWORD *)this != *(_QWORD *)a2 )
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
          v16 = *(_QWORD *)this;
          v17 = *(char **)a2;
          do
          {
            v18 = *v17;
            v17 += 8;
            v16 += 8;
            *(_BYTE *)(v16 - 8) = v18;
            *(_BYTE *)(v16 - 7) = *(v17 - 7);
            *(_BYTE *)(v16 - 6) = *(v17 - 6);
            *(_BYTE *)(v16 - 5) = *(v17 - 5);
            *(_BYTE *)(v16 - 4) = *(v17 - 4);
            *(_BYTE *)(v16 - 3) = *(v17 - 3);
            *(_BYTE *)(v16 - 2) = *(v17 - 2);
            *(_BYTE *)(v16 - 1) = *(v17 - 1);
          }
          while ( &v7[8 * v14 + 8] != v17 );
        }
        v15 = 8LL * v14 + 8;
        v7 += v15;
        v6 += v15;
      }
      switch ( v5 & 7 )
      {
        case 0:
          return;
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
}

