void __fastcall CoinOslFactorization::makeNonSingular(CoinOslFactorization *this, int *a2, int a3)
{
  int v3; // r8d
  __int64 v4; // r12
  __int64 v5; // rbp
  __int64 v6; // r10
  int v7; // r9d
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r11
  __int64 v12; // rbx
  int v13; // ecx
  int v14; // ecx
  int v15; // eax

  v3 = *((_DWORD *)this + 9);
  v4 = *((_QWORD *)this + 37);
  v5 = *((_QWORD *)this + 38);
  if ( v3 <= 0 )
    return;
  v6 = 1;
  v7 = 0;
  while ( 1 )
  {
    if ( *(int *)(v5 + 8 * v6 - 4) < 0 && ~*(_DWORD *)(v5 + 8 * v6 - 4) != v3 )
      goto LABEL_4;
    if ( v3 <= v7 )
      return;
    v9 = 8LL * v7;
    if ( *(int *)(v4 + v9 + 4) < 0 && ~*(_DWORD *)(v4 + v9 + 4) != v3 )
      break;
LABEL_14:
    v15 = v7 + a3;
    ++v7;
    a2[v6 - 1] = v15;
    v3 = *((_DWORD *)this + 9);
LABEL_4:
    v8 = v6++;
    if ( v8 >= v3 )
      return;
  }
  v10 = v7 + 1;
  v11 = v10 + (unsigned int)(v3 - 1 - v7);
  v12 = v4 + v9 - 8LL * (unsigned int)(v7 + 1);
  while ( 1 )
  {
    v7 = v10;
    if ( v11 == v10 )
      break;
    v13 = *(_DWORD *)(v12 + 8 * v10++ + 12);
    v14 = ~v13;
    if ( v14 == v3 || v14 < 0 )
      goto LABEL_14;
  }
}

