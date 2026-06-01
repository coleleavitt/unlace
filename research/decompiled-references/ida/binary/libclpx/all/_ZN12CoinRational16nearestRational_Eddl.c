bool __fastcall CoinRational::nearestRational_(CoinRational *this, double a2, double a3, __int64 a4)
{
  double v6; // xmm5_8
  double v7; // xmm3_8
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rdi
  double v14; // xmm4_8
  double v15; // xmm8_8
  __int64 v16; // rax
  double iptr[4]; // [rsp+18h] [rbp-20h] BYREF

  v6 = fabs(modf(a2, iptr));
  if ( a4 <= 0 )
  {
    v14 = (double)(int)*((_QWORD *)this + 1);
    v15 = (double)(int)*(_QWORD *)this;
  }
  else
  {
    v7 = 0.5;
    if ( a3 > fabs(v6 - 0.5) )
    {
      v15 = 1.0;
      v12 = 2;
      v14 = 2.0;
      v13 = 1;
LABEL_18:
      *(_QWORD *)this = v13;
      *((_QWORD *)this + 1) = v12;
    }
    else
    {
      v8 = 1;
      v9 = 1;
      v10 = 1;
      v11 = 0;
      v12 = 2;
      v13 = 1;
      while ( 1 )
      {
        if ( v6 <= v7 )
        {
          v8 = v12;
          v9 = v13;
        }
        else
        {
          if ( a4 < v12 )
          {
            *((_QWORD *)this + 1) = v8;
            *(_QWORD *)this = v9;
            v14 = (double)(int)v8;
            v15 = (double)(int)v9;
            goto LABEL_7;
          }
          v10 = v12;
          v11 = v13;
        }
        *((_QWORD *)this + 1) = v10;
        *(_QWORD *)this = v11;
        if ( v10 > a4 || a4 < v8 )
          break;
        v13 = v11 + v9;
        v12 = v10 + v8;
        v15 = (double)((int)v11 + (int)v9);
        v14 = (double)((int)v10 + (int)v8);
        v7 = v15 / v14;
        if ( a3 > fabs(v6 - v15 / v14) )
        {
          if ( v12 <= 2 * a4 )
            goto LABEL_18;
          if ( v10 < v8 )
          {
            *(_QWORD *)this = v9;
            *((_QWORD *)this + 1) = v8;
            v14 = (double)(int)v8;
            v15 = (double)(int)v9;
            goto LABEL_7;
          }
          break;
        }
      }
      v14 = (double)(int)v10;
      v15 = (double)(int)v11;
    }
  }
LABEL_7:
  v16 = (unsigned int)(int)(COERCE_DOUBLE(*(_QWORD *)&iptr[0] & 0x7FFFFFFFFFFFFFFFLL) * v14 + v15);
  if ( a2 < 0.0 )
    v16 = -v16;
  *(_QWORD *)this = v16;
  return a3 >= fabs(a2 - (double)(int)v16 / v14);
}

