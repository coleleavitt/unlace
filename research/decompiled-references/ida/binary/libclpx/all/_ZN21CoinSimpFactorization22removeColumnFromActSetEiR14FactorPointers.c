__int64 __fastcall CoinSimpFactorization::removeColumnFromActSet(
        CoinSimpFactorization *this,
        int a2,
        FactorPointers *a3)
{
  __int64 v3; // r8
  __int64 v4; // r10
  __int64 v5; // rax
  int *v6; // r9
  int *v7; // rax
  int v8; // r11d
  __int64 v9; // rcx
  __int64 result; // rax

  v3 = *((_QWORD *)a3 + 5);
  v4 = *((_QWORD *)a3 + 6);
  v5 = 4LL * a2;
  v6 = (int *)(v3 + v5);
  v7 = (int *)(v4 + v5);
  v8 = *v7;
  v9 = *v6;
  if ( (_DWORD)v9 == -1 )
    *(_DWORD *)(*((_QWORD *)a3 + 4) + 4LL * *(int *)(*((_QWORD *)this + 42) + 4LL * a2)) = v8;
  else
    *(_DWORD *)(v4 + 4 * v9) = v8;
  result = *v7;
  if ( (_DWORD)result != -1 )
    *(_DWORD *)(v3 + 4 * result) = *v6;
  return result;
}

