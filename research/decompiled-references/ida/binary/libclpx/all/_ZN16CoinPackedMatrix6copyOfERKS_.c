__int64 __fastcall CoinPackedMatrix::copyOf(CoinPackedMatrix *this, const CoinPackedMatrix *a2)
{
  __int64 result; // rax

  if ( this != a2 )
  {
    CoinPackedMatrix::gutsOfDestructor(this);
    return CoinPackedMatrix::gutsOfCopyOf(
             this,
             *((_BYTE *)a2 + 8),
             *((_DWORD *)a2 + 17),
             *((_DWORD *)a2 + 16),
             *((_DWORD *)a2 + 18),
             *((const double **)a2 + 4),
             *((double *)a2 + 3),
             *((double *)a2 + 2),
             *((const int **)a2 + 5),
             *((const int **)a2 + 6),
             *((const int **)a2 + 7));
  }
  return result;
}

