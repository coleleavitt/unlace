__int64 __fastcall sub_896910(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rsi
  bool v8; // cf
  __int64 v9; // rsi
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx

  v5 = 4LL * a3;
  v6 = *(_QWORD *)(a1 + 24);
  if ( v6 )
  {
    v11 = *(_QWORD *)(a1 + 16);
    v12 = v11 + 16 * v6;
    v13 = v12 - 16;
    if ( v11 == v12 )
      v13 = *(_QWORD *)(a1 + 80);
    v7 = *(_QWORD *)(v13 + 8) + 4LL * (unsigned int)(*(_DWORD *)(v13 + 4) - *(_DWORD *)v13);
  }
  else
  {
    v7 = **(_QWORD **)a1;
  }
  v8 = __CFADD__(v5, v7);
  v9 = v5 + v7;
  if ( v8 || (unsigned int)sub_8962A0(a1, v9) )
    return 4;
  sub_895F60((__int64 **)a1, a2, *(_QWORD *)(a1 + 80), a3, a3);
  return 0;
}

