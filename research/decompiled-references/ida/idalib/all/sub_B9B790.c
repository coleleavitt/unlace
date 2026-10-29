__int64 __fastcall sub_B9B790(__int64 a1, char a2)
{
  __int64 result; // rax
  __int64 v3; // rax
  unsigned __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rax

  result = *(_QWORD *)(a1 + 64);
  if ( a2 )
  {
    if ( !result )
    {
      v3 = sub_B8C330(a1);
      v4 = sub_B9B750((__int64 *)(v3 + 2352), 56, 3u);
      *(_BYTE *)(v4 + 4) &= ~1u;
      v5 = v4;
      *(_DWORD *)v4 = 0;
      *(_QWORD *)(a1 + 64) = v4;
      v6 = sub_B8C330(a1);
      sub_A5F590(v6, (__int64)sub_B70CC0, v5);
      return *(_QWORD *)(a1 + 64);
    }
  }
  return result;
}
