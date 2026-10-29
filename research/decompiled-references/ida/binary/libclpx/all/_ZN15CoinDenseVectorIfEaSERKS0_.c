unsigned int *__fastcall CoinDenseVector<float>::operator=(unsigned int *a1, unsigned int *a2)
{
  if ( a1 != a2 )
    CoinDenseVector<float>::setVector(a1, *a2, *((_QWORD *)a2 + 1));
  return a1;
}

