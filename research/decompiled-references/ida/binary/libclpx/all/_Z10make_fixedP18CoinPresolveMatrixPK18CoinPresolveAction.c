const CoinPresolveAction *__fastcall make_fixed(CoinPresolveMatrix *a1, const CoinPresolveAction *a2)
{
  __int64 v2; // r11
  CoinPresolveMatrix *v3; // r12
  __int64 v4; // rbp
  __int64 v5; // rbx
  const CoinPresolveAction *v6; // rcx
  const CoinPresolveAction *v7; // r9
  int *v8; // rdx
  __int64 v9; // r13

  v2 = *((_QWORD *)a1 + 6);
  v3 = *((CoinPresolveMatrix **)a1 + 58);
  v4 = *((_QWORD *)a1 + 12);
  v5 = *((_QWORD *)a1 + 11);
  if ( *(int *)a1 <= 0 )
    return a2;
  v6 = nullptr;
  v7 = (const CoinPresolveAction *)((unsigned int)(*(_DWORD *)a1 - 1) + 1LL);
  v8 = nullptr;
  do
  {
    if ( *(int *)(v2 + 4LL * (_QWORD)v6) > 0
      && fabs(*(double *)(v4 + 8LL * (_QWORD)v6) - *(double *)(v5 + 8LL * (_QWORD)v6)) < 1.0e-12
      && (!*((_BYTE *)a1 + 440) || (*((_BYTE *)v6 + *((_QWORD *)a1 + 45)) & 2) == 0) )
    {
      v9 = (int)v8;
      v8 = (int *)(unsigned int)((_DWORD)v8 + 1);
      *((_DWORD *)v3 + v9) = (_DWORD)v6;
    }
    v6 = (const CoinPresolveAction *)((char *)v6 + 1);
  }
  while ( v6 != v7 );
  if ( (_DWORD)v8 )
    return (const CoinPresolveAction *)make_fixed_action::presolve(a1, v3, v8, 1, (bool)a2, v7);
  else
    return a2;
}

