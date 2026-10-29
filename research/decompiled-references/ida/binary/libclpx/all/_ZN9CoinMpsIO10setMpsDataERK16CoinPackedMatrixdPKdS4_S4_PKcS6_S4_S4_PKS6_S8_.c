void __fastcall CoinMpsIO::setMpsData(
        CoinMpsIO *this,
        const CoinPackedMatrix *a2,
        double a3,
        const double *a4,
        const double *a5,
        const double *a6,
        const char *a7,
        double *a8,
        double *a9,
        char **a10,
        char **a11,
        char **a12)
{
  int v13; // r8d
  double *v14; // rbp
  const double *v15; // rax
  __int64 v16; // rdx
  double v17; // xmm1_8
  double v18; // xmm1_8
  double v19; // xmm2_8
  CoinMpsIO *v20; // [rsp+8h] [rbp-80h]
  __int64 v23; // [rsp+30h] [rbp-58h]
  int v24; // [rsp+3Ch] [rbp-4Ch]

  v13 = *((_DWORD *)a2 + 16);
  if ( *((_BYTE *)a2 + 8) )
    v13 = *((_DWORD *)a2 + 17);
  if ( v13 )
  {
    v24 = v13;
    if ( (unsigned __int64)v13 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v23 = 8LL * v13;
    v14 = (double *)operator new[](v23);
    v15 = (const double *)operator new[](v23);
    if ( v24 > 0 )
    {
      v16 = 0;
      do
      {
        v17 = a9[v16];
        switch ( *((_BYTE *)a8 + v16) )
        {
          case 'E':
            v15[v16] = v17;
            v14[v16] = v17;
            break;
          case 'G':
            v14[v16] = v17;
            v15[v16] = *((const double *)this + 26);
            break;
          case 'L':
            v19 = *((double *)this + 26);
            v15[v16] = v17;
            v14[v16] = -v19;
            break;
          case 'N':
            v18 = *((double *)this + 26);
            v15[v16] = v18;
            v14[v16] = -v18;
            break;
          case 'R':
            v15[v16] = v17;
            v14[v16] = v17 - *(double *)&a10[v16];
            break;
          default:
            break;
        }
        ++v16;
      }
      while ( (unsigned int)(v24 - 1) + 1LL != v16 );
    }
    v20 = (CoinMpsIO *)v15;
    CoinMpsIO::setMpsData(this, a2, a3, a4, a5, a6, a7, v14, v15, (const char *const *)a11, (const char *const *)a12);
    operator delete[](v14);
    operator delete[](v20);
  }
  else
  {
    CoinMpsIO::setMpsData(
      this,
      a2,
      a3,
      a4,
      a5,
      a6,
      a7,
      nullptr,
      nullptr,
      (const char *const *)a11,
      (const char *const *)a12);
  }
}

