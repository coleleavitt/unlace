CoinWarmStartBasis *__fastcall CoinPrePostsolveMatrix::getStatus(CoinPrePostsolveMatrix *this)
{
  int v1; // r13d
  int v2; // r12d
  CoinWarmStartBasis *v3; // rbx
  __int64 v4; // rsi
  char v5; // cl
  _BYTE *v6; // rdx
  char v7; // al
  __int64 v8; // rsi
  char v9; // cl
  _BYTE *v10; // rdx
  char v11; // al

  v1 = *(_DWORD *)this;
  v2 = *((_DWORD *)this + 1);
  v3 = (CoinWarmStartBasis *)operator new(0x28u);
  CoinWarmStartBasis::CoinWarmStartBasis(v3);
  CoinWarmStartBasis::setSize(v3, v1, v2);
  if ( v1 > 0 )
  {
    v4 = 0;
    do
    {
      v5 = (2 * v4) & 6;
      v6 = (_BYTE *)(*((_QWORD *)v3 + 3) + ((int)v4 >> 2));
      v7 = *(_BYTE *)(*((_QWORD *)this + 24) + v4++);
      *v6 = ((v7 & 7) << v5) | *v6 & ~(3 << v5);
    }
    while ( (unsigned int)(v1 - 1) + 1LL != v4 );
  }
  if ( v2 > 0 )
  {
    v8 = 0;
    do
    {
      v9 = (2 * v8) & 6;
      v10 = (_BYTE *)(*((_QWORD *)v3 + 4) + ((int)v8 >> 2));
      v11 = *(_BYTE *)(*((_QWORD *)this + 25) + v8++);
      *v10 = ((v11 & 7) << v9) | *v10 & ~(3 << v9);
    }
    while ( v8 != (unsigned int)(v2 - 1) + 1LL );
  }
  return v3;
}

