__int64 __fastcall sub_DA8220(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 result; // rax
  _BOOL4 v5; // r12d
  int v6; // eax

  if ( !(unsigned __int8)sub_DA4680(a1, (__int64)a2, a3, 2) )
    return 0;
  if ( !(unsigned __int8)sub_DA8150(a1, a2, a3, 2) )
    return 0;
  if ( !(unsigned __int8)sub_D9E7F0(a1, (__int64)a2, a3, 2) )
    return 0;
  if ( !(unsigned __int8)sub_DA4460(a1, a2, a3) )
    return 0;
  if ( !(unsigned __int8)sub_DA4EC0(a1, (__int64)a2, a3, 2) )
    return 0;
  if ( !(unsigned __int8)sub_D8C7D0(a1, (__int64)a2, a3) )
    return 0;
  v5 = sub_DA5AE0(a1, (__int64)a2, a3);
  if ( !v5 )
    return 0;
  result = sub_DFDF30(a1);
  if ( !(_BYTE)result )
  {
    result = v5;
    if ( !*(_DWORD *)(a3 + 24) )
    {
      LOBYTE(v6) = sub_D8CD70(a3);
      return v6 ^ 1u;
    }
  }
  return result;
}

