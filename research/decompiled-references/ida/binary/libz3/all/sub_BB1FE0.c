char __fastcall sub_BB1FE0(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v4; // rax
  char result; // al
  char v6[25]; // [rsp+Fh] [rbp-19h] BYREF

  v4 = *(_DWORD **)(sub_15D1F10(a2) + 24);
  if ( !v4 || *v4 != 5 || v4[1] != 1 )
  {
    sub_1872CE0("");
    sub_1873130(114, 2837);
  }
  v6[0] = 1;
  result = sub_BE51C0(a1 + 3856, a2, a3, v6);
  if ( result )
  {
    result = 0;
    if ( !v6[0] )
    {
      result = (*(_BYTE *)(a3 + 20) & 1) == 0;
      if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
        return *(_DWORD *)(a3 + 16) == 1;
    }
  }
  return result;
}

