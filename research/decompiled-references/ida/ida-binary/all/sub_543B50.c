__int64 __fastcall sub_543B50(__int64 *a1, int a2)
{
  __int64 v2; // rax
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v9; // rax

  v2 = a1[1];
  v4 = *a1;
  if ( !v2 || (v5 = v4 + 56 * v2 - 56, *(_DWORD *)(v5 + 48) != a2) )
  {
    if ( a1[2] < (unsigned __int64)(v2 + 1) )
    {
      v9 = qvector_reserve(a1, v4, v2 + 1, 56);
      *a1 = v9;
      v4 = v9;
      v2 = a1[1];
    }
    v6 = v4 + 56 * v2;
    *(_QWORD *)v6 = 0;
    *(_QWORD *)(v6 + 24) = 0;
    *(_DWORD *)(v6 + 48) = a2;
    *(_OWORD *)(v6 + 8) = 0;
    *(_OWORD *)(v6 + 32) = 0;
    v7 = a1[1] + 1;
    a1[1] = v7;
    return *a1 + 56 * v7 - 56;
  }
  return v5;
}
