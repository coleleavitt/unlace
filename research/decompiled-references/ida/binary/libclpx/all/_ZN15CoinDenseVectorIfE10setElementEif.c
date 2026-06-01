__int64 __fastcall CoinDenseVector<float>::setElement(__int64 a1, int a2, float a3)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 8);
  *(float *)(result + 4LL * a2) = a3;
  return result;
}

