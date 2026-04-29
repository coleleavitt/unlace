__int64 __fastcall sub_3FC970(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  bool v3; // zf
  __int64 result; // rax
  __int64 v5; // rdx

  v2 = *(_WORD *)(a1 + 48);
  if ( v2 == 153 )
  {
    result = 0;
    if ( *(_BYTE *)(a1 + 65) == 1 && *(_BYTE *)(a1 + 105) == 5 && *(_QWORD *)(a1 + 112) == 1 )
    {
      if ( !*(_BYTE *)(a2 + 16) && !(unsigned __int8)sub_3F0150(a2) )
        sub_3E07C0(a2, a2, v5);
      sub_3FC8C0(a1, *(_DWORD *)(a2 + 12));
      return 1;
    }
  }
  else if ( v2 == 588 )
  {
    return sub_3ED340(a1, a1 + 24, 1);
  }
  else
  {
    v3 = v2 == 46;
    result = 0;
    if ( v3 && *(_BYTE *)(a1 + 65) == 5 && *(_QWORD *)(a1 + 72) == 128 )
      return sub_3ED340(a1, a1 + 24, 0);
  }
  return result;
}
