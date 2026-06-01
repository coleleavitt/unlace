__int64 __fastcall CoinOslFactorization::updateColumn(
        CoinOslFactorization *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3)
{
  int v4; // eax

  v4 = c_ekkftrn(
         (char *)this + 104,
         *((_QWORD *)a3 + 1) - 8LL,
         *((_QWORD *)a2 + 1),
         *(_QWORD *)a3,
         *((unsigned int *)a3 + 4));
  *((_DWORD *)a3 + 4) = v4;
  if ( !v4 )
    *((_BYTE *)a3 + 28) = 0;
  return 0;
}

