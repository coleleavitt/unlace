__int64 __fastcall CoinFactorization::deleteLink(CoinFactorization *this, int a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rsi
  int *v6; // r9
  int *v7; // rsi
  int v8; // edi
  __int64 result; // rax

  v2 = *((_QWORD *)this + 38);
  v3 = *((_QWORD *)this + 35);
  v4 = *((_QWORD *)this + 41);
  if ( *((int *)this + 78) <= -2 )
    v2 = 0;
  if ( *((int *)this + 72) <= -2 )
    v3 = 0;
  if ( *((int *)this + 84) <= -2 )
    v4 = 0;
  v5 = 4LL * a2;
  v6 = (int *)(v2 + v5);
  v7 = (int *)(v4 + v5);
  v8 = *v7;
  result = *v6;
  if ( *v7 < 0 )
    *(_DWORD *)(v3 + 4LL * (-2 - v8)) = result;
  else
    *(_DWORD *)(v2 + 4LL * v8) = result;
  if ( (int)result >= 0 )
    *(_DWORD *)(v4 + 4 * result) = v8;
  *v6 = -2;
  *v7 = -2;
  return result;
}

