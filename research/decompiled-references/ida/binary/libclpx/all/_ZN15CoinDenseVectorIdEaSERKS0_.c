unsigned int *__fastcall CoinDenseVector<double>::operator=(unsigned int *a1, unsigned int *a2)
{
  if ( a1 != a2 )
    CoinDenseVector<double>::setVector(a1, *a2, *((_QWORD *)a2 + 1));
  return a1;
}

