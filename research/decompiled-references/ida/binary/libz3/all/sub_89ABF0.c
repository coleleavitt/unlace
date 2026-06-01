__int64 __fastcall sub_89ABF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(a2 + 20) & 1) != 0
    || *(_DWORD *)(a2 + 16) != 1
    || (*(_BYTE *)(a3 + 20) & 1) != 0
    || *(_DWORD *)(a3 + 16) != 1 )
  {
    return sub_1852000(a1, a2, a3);
  }
  sub_1832A70(a1, a2, a3);
  result = sub_182CBA0(a1, a4 + 16);
  *(_BYTE *)(a4 + 20) &= ~1u;
  *(_DWORD *)(a4 + 16) = 1;
  return result;
}

