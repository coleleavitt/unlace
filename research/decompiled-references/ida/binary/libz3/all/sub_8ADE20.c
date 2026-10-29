__int64 __fastcall sub_8ADE20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(a2 + 20) & 1) != 0
    || *(_DWORD *)(a2 + 16) != 1
    || (*(_BYTE *)(a3 + 20) & 1) != 0
    || *(_DWORD *)(a3 + 16) != 1 )
  {
    return sub_184C880(a1, a2, a3, a4);
  }
  sub_1839230(a1, a2, a3, a4);
  result = sub_182EF00(a1, a4 + 16);
  *(_BYTE *)(a4 + 20) &= ~1u;
  *(_DWORD *)(a4 + 16) = 1;
  return result;
}

