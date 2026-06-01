__int64 __fastcall sub_DCBF60(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 result; // rax
  _BOOL4 v5; // r12d
  int v6; // eax

  if ( !(unsigned __int8)sub_DC83C0(a1, (__int64)a2, a3, 2) )
    return 0;
  if ( !(unsigned __int8)sub_DCBE90(a1, a2, a3, 2) )
    return 0;
  if ( !(unsigned __int8)sub_DC2530(a1, (__int64)a2, a3, 2) )
    return 0;
  if ( !(unsigned __int8)sub_DC81A0(a1, a2, a3) )
    return 0;
  if ( !(unsigned __int8)sub_DC8C00(a1, (__int64)a2, a3, 2) )
    return 0;
  if ( !(unsigned __int8)sub_DB0510(a1, (__int64)a2, a3) )
    return 0;
  v5 = sub_DC9820(a1, (__int64)a2, a3);
  if ( !v5 )
    return 0;
  result = sub_E21C70(a1);
  if ( !(_BYTE)result )
  {
    result = v5;
    if ( !*(_DWORD *)(a3 + 24) )
    {
      LOBYTE(v6) = sub_DB0AB0(a3);
      return v6 ^ 1u;
    }
  }
  return result;
}
