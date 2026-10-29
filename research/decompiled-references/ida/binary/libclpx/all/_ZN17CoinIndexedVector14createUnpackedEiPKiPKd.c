void __fastcall CoinIndexedVector::createUnpacked(CoinIndexedVector *this, int a2, const int *a3, const double *a4)
{
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rsi
  double v8; // xmm0_8

  *((_DWORD *)this + 4) = a2;
  *((_BYTE *)this + 28) = 0;
  if ( a2 > 0 )
  {
    v4 = *(_QWORD *)this;
    v5 = *((_QWORD *)this + 1);
    v6 = 1;
    do
    {
      v7 = a3[v6 - 1];
      v8 = a4[v6 - 1];
      *(_DWORD *)(v4 + 4 * v6 - 4) = v7;
      *(double *)(v5 + 8 * v7) = v8;
      LODWORD(v7) = v6++;
    }
    while ( *((_DWORD *)this + 4) > (int)v7 );
  }
}

