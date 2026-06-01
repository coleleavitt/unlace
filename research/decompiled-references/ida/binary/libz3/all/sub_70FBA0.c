__int64 __fastcall sub_70FBA0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 result; // rax
  __int64 v9; // rsi
  __int64 v10; // rdi

  v6 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(a3 + 4) & 1) != 0
    || *(_DWORD *)a3 != 1
    || (*(_BYTE *)(a3 + 20) & 1) != 0
    || *(_DWORD *)(a3 + 16) != 1 )
  {
    v7 = *(_QWORD *)(v6 + 864);
  }
  else
  {
    v7 = *(_QWORD *)(v6 + 856);
  }
  result = sub_14EC390(a1 + 32, *a2, v7, a4);
  if ( a5 )
  {
    if ( v7 )
      ++*(_DWORD *)(v7 + 8);
    v9 = *a5;
    if ( *a5 )
    {
      v10 = a5[1];
      if ( (*(_DWORD *)(v9 + 8))-- == 1 )
        result = sub_15D7BC0(v10, v9);
    }
    *a5 = v7;
  }
  return result;
}

