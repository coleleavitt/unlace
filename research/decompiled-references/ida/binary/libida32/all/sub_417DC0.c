__int64 __fastcall sub_417DC0(_QWORD *a1, int a2)
{
  __int64 v2; // rax
  __int64 v4; // rsi
  __int64 v6; // rax

  v2 = a1[5];
  v4 = a1[4];
  if ( !v2 || *(_DWORD *)(v4 + 4 * v2 - 4) != a2 )
  {
    if ( a1[6] < (unsigned __int64)(v2 + 1) )
    {
      v6 = qvector_reserve(a1 + 4, v4, v2 + 1, 4);
      a1[4] = v6;
      v4 = v6;
      v2 = a1[5];
    }
    *(_DWORD *)(v4 + 4 * v2) = a2;
    ++a1[5];
  }
  return 0;
}

