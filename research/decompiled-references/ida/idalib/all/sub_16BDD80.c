__int64 __fastcall sub_16BDD80(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  __int64 v5; // rbp
  __int64 v6; // r14

  if ( *(_DWORD *)a1 == 3 )
    return sub_16BDC30((_QWORD *)(a1 + 8), a2, a3);
  if ( *(_DWORD *)a1 == 8 )
  {
    v4 = *(_DWORD *)(a1 + 16);
    if ( !v4 )
      return 1;
    v5 = 0;
    v6 = 56 * ((unsigned int)(v4 - 1) + 1LL);
    while ( (unsigned __int8)sub_16BDD80(v5 + *(_QWORD *)(a1 + 8), a2, a3) )
    {
      v5 += 56;
      if ( v6 == v5 )
        return 1;
    }
    return 0;
  }
  if ( !(unsigned __int8)sub_16BDC30((_QWORD *)(a1 + 8), a2, a3) )
    return 0;
  return sub_16BDC30((_QWORD *)(a1 + 32), a2, a3);
}
