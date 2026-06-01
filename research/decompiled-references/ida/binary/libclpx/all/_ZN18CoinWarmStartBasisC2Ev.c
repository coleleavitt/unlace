void __fastcall CoinWarmStartBasis::CoinWarmStartBasis(CoinWarmStartBasis *this, __int64 *a2)
{
  __int64 v2; // rax

  v2 = *a2;
  *(_QWORD *)this = *a2;
  *(_QWORD *)((char *)this + *(_QWORD *)(v2 - 56)) = a2[1];
  *((_QWORD *)this + 1) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = 0;
}

