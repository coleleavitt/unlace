__int64 __fastcall CoinArrayWithLength::copy(
        CoinArrayWithLength *this,
        const CoinArrayWithLength *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v6; // eax
  __int64 result; // rax
  int v8; // ebp
  unsigned __int8 *v11; // rcx
  unsigned __int8 *v12; // rsi
  unsigned int v13; // edi
  __int64 v14; // rax
  unsigned int v15; // edx
  __int64 v16; // rax
  unsigned __int8 *v17; // rdx
  unsigned __int8 *v18; // rax
  signed int v19; // edi
  unsigned __int8 *v20; // rdx
  unsigned __int8 *v21; // rax
  unsigned __int8 v22; // r8

  if ( (_DWORD)a3 == -1 )
    return CoinArrayWithLength::operator=(this, a2, a3, a4, a5, a6);
  v6 = *((_DWORD *)a2 + 2);
  if ( v6 < -1 )
  {
    a4 = (unsigned int)(-2 - v6);
    v6 = -2 - v6;
  }
  if ( (int)a3 <= v6 )
    return CoinArrayWithLength::operator=(this, a2, a3, a4, a5, a6);
  v8 = a3;
  result = CoinArrayWithLength::getCapacity(this, a3, -1);
  v11 = *(unsigned __int8 **)a2;
  if ( *(_QWORD *)a2 )
  {
    v12 = *(unsigned __int8 **)this;
    if ( v8 )
    {
      if ( v11 != v12 )
      {
        v13 = v8 >> 3;
        if ( v8 >> 3 )
        {
          if ( (v12 >= v11 + 16 || v11 >= v12 + 16) && v13 > 1 )
          {
            v14 = 0;
            v15 = 0;
            do
            {
              ++v15;
              *(__m128i *)&v12[v14] = _mm_loadu_si128((const __m128i *)&v11[v14]);
              v14 += 16;
            }
            while ( v15 < v13 >> 1 );
            v16 = 8LL * (v13 & 0xFFFFFFFE);
            v17 = &v11[v16];
            v18 = &v12[v16];
            if ( v13 != (v13 & 0xFFFFFFFE) )
            {
              *v18 = *v17;
              v18[1] = v17[1];
              v18[2] = v17[2];
              v18[3] = v17[3];
              v18[4] = v17[4];
              v18[5] = v17[5];
              v18[6] = v17[6];
              v18[7] = v17[7];
            }
            v19 = v13 - 1;
          }
          else
          {
            v19 = v13 - 1;
            v20 = *(unsigned __int8 **)a2;
            v21 = *(unsigned __int8 **)this;
            do
            {
              v22 = *v20;
              v21 += 8;
              v20 += 8;
              *(v21 - 8) = v22;
              *(v21 - 7) = *(v20 - 7);
              *(v21 - 6) = *(v20 - 6);
              *(v21 - 5) = *(v20 - 5);
              *(v21 - 4) = *(v20 - 4);
              *(v21 - 3) = *(v20 - 3);
              *(v21 - 2) = *(v20 - 2);
              *(v21 - 1) = *(v20 - 1);
            }
            while ( &v12[8 * v19 + 8] != v21 );
          }
          result = 8LL * v19 + 8;
          v11 += result;
          v12 += result;
        }
        switch ( v8 & 7 )
        {
          case 0:
            return result;
          case 1:
            goto LABEL_25;
          case 2:
            goto LABEL_24;
          case 3:
            goto LABEL_23;
          case 4:
            goto LABEL_22;
          case 5:
            goto LABEL_21;
          case 6:
            goto LABEL_20;
          case 7:
            v12[6] = v11[6];
LABEL_20:
            v12[5] = v11[5];
LABEL_21:
            v12[4] = v11[4];
LABEL_22:
            v12[3] = v11[3];
LABEL_23:
            v12[2] = v11[2];
LABEL_24:
            v12[1] = v11[1];
LABEL_25:
            result = *v11;
            *v12 = result;
            break;
        }
      }
    }
  }
  return result;
}

