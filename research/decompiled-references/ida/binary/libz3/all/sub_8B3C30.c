__int64 __fastcall sub_8B3C30(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 result; // rax

  if ( (*(_BYTE *)(a2 + 20) & 1) != 0
    || *(_DWORD *)(a2 + 16) != 1
    || (*(_BYTE *)(a3 + 20) & 1) != 0
    || *(_DWORD *)(a3 + 16) != 1 )
  {
    sub_1854300(a1, a2, a3, a4);
  }
  else
  {
    sub_183A580(a1, a2, a3, a4);
    sub_182EF00(a1, a4 + 16);
    *(_BYTE *)(a4 + 20) &= ~1u;
    *(_DWORD *)(a4 + 16) = 1;
  }
  v7 = a4 + 32;
  v8 = a3 + 32;
  v9 = a2 + 32;
  if ( (*(_BYTE *)(a2 + 52) & 1) != 0
    || *(_DWORD *)(a2 + 48) != 1
    || (*(_BYTE *)(a3 + 52) & 1) != 0
    || *(_DWORD *)(a3 + 48) != 1 )
  {
    return sub_1854300(a1, v9, v8, v7);
  }
  sub_183A580(a1, v9, v8, v7);
  result = sub_182EF00(a1, a4 + 48);
  *(_BYTE *)(a4 + 52) &= ~1u;
  *(_DWORD *)(a4 + 48) = 1;
  return result;
}

