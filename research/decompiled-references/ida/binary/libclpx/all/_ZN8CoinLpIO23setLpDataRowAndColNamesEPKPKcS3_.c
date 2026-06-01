char *__fastcall CoinLpIO::setLpDataRowAndColNames(
        CoinMessageHandler **this,
        const char *const *a2,
        const char *const *a3,
        __m128 a4)
{
  __int64 NumRows; // r14
  char *result; // rax
  int v8; // r13d
  CoinMessageHandler *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  const char *v15; // rbp
  int v16; // r14d
  const char *v17; // rax
  unsigned int v18; // esi
  __int64 v19; // rdx
  unsigned int v20; // ecx
  __int64 v21; // rdx
  const char *v22; // rcx
  char *v23; // rdx
  unsigned int v24; // esi
  __int64 v25; // rcx
  char *v26; // rcx
  CoinMessageHandler *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  const char *v33; // rcx
  const char *v34; // rdx
  char v35; // di
  __int64 v36; // [rsp+0h] [rbp-38h]

  NumRows = (int)CoinLpIO::getNumRows((CoinLpIO *)this);
  result = (char *)CoinLpIO::getNumCols((CoinLpIO *)this);
  v8 = (int)result;
  if ( !a2 )
  {
    if ( !*(this + 30) )
    {
      result = (char *)malloc(4u);
      if ( result != "obj" )
      {
        result[2] = 106;
        *(_WORD *)result = 25199;
      }
      result[3] = 0;
      *(this + 30) = (CoinMessageHandler *)result;
    }
LABEL_4:
    if ( !a3 )
      return result;
    goto LABEL_5;
  }
  if ( (unsigned int)CoinLpIO::are_invalid_names((CoinLpIO *)this, a2, (int)NumRows + 1, 1) )
  {
    CoinLpIO::setDefaultRowNames((CoinLpIO *)this);
    v9 = (CoinMessageHandler *)CoinMessageHandler::message(*(this + 1), 30, (const CoinMessages *)(this + 3));
    v14 = CoinMessageHandler::operator<<(
            v9,
            (__int64)"### CoinLpIO::setLpDataRowAndColNames(): Invalid row names\n"
                     "Use getPreviousNames() to get the old row names.\n"
                     "Now using default row names.",
            v10,
            v11,
            v12,
            v13,
            v36);
    result = (char *)CoinMessageHandler::operator<<(v14, 0, *(double *)a4.m128_u64);
    goto LABEL_4;
  }
  CoinLpIO::stopHash((CoinLpIO *)this, 0);
  CoinLpIO::startHash((CoinLpIO *)this, a2, NumRows + 1, 0);
  v15 = a2[NumRows];
  if ( v15 )
  {
    v16 = strlen(v15);
    v17 = (const char *)malloc(v16 + 1);
    if ( v16 && v15 != v17 )
    {
      v18 = v16 >> 3;
      if ( v16 >> 3 <= 0 )
      {
        v26 = (char *)v17;
      }
      else
      {
        if ( (v15 >= v17 + 16 || v17 >= v15 + 16) && v18 > 1 )
        {
          v19 = 0;
          v20 = 0;
          do
          {
            a4 = (__m128)_mm_loadu_si128((const __m128i *)&v15[v19]);
            ++v20;
            *(__m128 *)&v17[v19] = a4;
            v19 += 16;
          }
          while ( v20 < v18 >> 1 );
          v21 = 8LL * (v18 & 0xFFFFFFFE);
          v22 = &v15[v21];
          v23 = (char *)&v17[v21];
          if ( v18 != (v18 & 0xFFFFFFFE) )
          {
            *v23 = *v22;
            v23[1] = v22[1];
            v23[2] = v22[2];
            v23[3] = v22[3];
            v23[4] = v22[4];
            v23[5] = v22[5];
            v23[6] = v22[6];
            v23[7] = v22[7];
          }
          v24 = v18 - 1;
        }
        else
        {
          v24 = v18 - 1;
          v33 = v15;
          v34 = v17;
          do
          {
            v35 = *v33;
            v34 += 8;
            v33 += 8;
            *((_BYTE *)v34 - 8) = v35;
            *((_BYTE *)v34 - 7) = *(v33 - 7);
            *((_BYTE *)v34 - 6) = *(v33 - 6);
            *((_BYTE *)v34 - 5) = *(v33 - 5);
            *((_BYTE *)v34 - 4) = *(v33 - 4);
            *((_BYTE *)v34 - 3) = *(v33 - 3);
            *((_BYTE *)v34 - 2) = *(v33 - 2);
            *((_BYTE *)v34 - 1) = *(v33 - 1);
          }
          while ( v34 != &v17[8 * v24 + 8] );
        }
        v25 = 8LL * (int)v24 + 8;
        v15 += v25;
        v26 = (char *)&v17[v25];
      }
      switch ( v16 % 8 )
      {
        case 1:
          goto LABEL_26;
        case 2:
          goto LABEL_25;
        case 3:
          goto LABEL_24;
        case 4:
          goto LABEL_23;
        case 5:
          goto LABEL_22;
        case 6:
          goto LABEL_21;
        case 7:
          v26[6] = v15[6];
LABEL_21:
          v26[5] = v15[5];
LABEL_22:
          v26[4] = v15[4];
LABEL_23:
          v26[3] = v15[3];
LABEL_24:
          v26[2] = v15[2];
LABEL_25:
          v26[1] = v15[1];
LABEL_26:
          *v26 = *v15;
          break;
        default:
          break;
      }
    }
    v17[v16] = 0;
  }
  else
  {
    v17 = nullptr;
  }
  *(this + 30) = (CoinMessageHandler *)v17;
  result = (char *)CoinLpIO::checkRowNames((CoinLpIO *)this);
  if ( a3 )
  {
LABEL_5:
    if ( (unsigned int)CoinLpIO::are_invalid_names((CoinLpIO *)this, a3, v8, 0) )
    {
      CoinLpIO::setDefaultColNames((CoinLpIO *)this);
      v27 = (CoinMessageHandler *)CoinMessageHandler::message(*(this + 1), 30, (const CoinMessages *)(this + 3));
      v32 = CoinMessageHandler::operator<<(
              v27,
              (__int64)"### CoinLpIO::setLpDataRowAndColNames(): Invalid column names\nNow using default row names.",
              v28,
              v29,
              v30,
              v31,
              v36);
      return (char *)CoinMessageHandler::operator<<(v32, 0, *(double *)a4.m128_u64);
    }
    else
    {
      CoinLpIO::stopHash((CoinLpIO *)this, 1);
      CoinLpIO::startHash((CoinLpIO *)this, a3, v8, 1);
      return (char *)CoinLpIO::checkColNames((CoinLpIO *)this);
    }
  }
  return result;
}

