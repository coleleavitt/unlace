__int64 __fastcall sub_4074F0(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  __int16 v4; // ax
  bool v5; // zf
  __int64 result; // rax

  v4 = *(_WORD *)(a1 + 48);
  if ( v4 == 153 )
  {
    result = 0;
    if ( *(_BYTE *)(a1 + 65) == 1 && *(_BYTE *)(a1 + 105) == 5 && *(_QWORD *)(a1 + 112) == 1 )
    {
      if ( !*(_BYTE *)(a2 + 16) && !(unsigned __int8)sub_3FACB0(a2, a3, a4) )
        sub_3EB430(a3, a2, a2);
      sub_407440(a1, *(_DWORD *)(a2 + 12));
      return 1;
    }
  }
  else if ( v4 == 588 )
  {
    return sub_3F7F00(a1, a1 + 24, 1);
  }
  else
  {
    v5 = v4 == 46;
    result = 0;
    if ( v5 && *(_BYTE *)(a1 + 65) == 5 && *(_QWORD *)(a1 + 72) == 128 )
      return sub_3F7F00(a1, a1 + 24, 0);
  }
  return result;
}
