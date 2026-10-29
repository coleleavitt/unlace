__int64 __fastcall sub_DA8300(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rax

  if ( !(unsigned __int8)sub_DA4680(a1, (__int64)a2, a3, 0) )
    return 0;
  if ( !*(_DWORD *)(a3 + 24) )
  {
    v5 = *(_QWORD *)(a3 + 32);
    if ( *(_BYTE *)(v5 + 24) )
    {
      if ( *(_BYTE *)(v5 + 20) && !(unsigned __int8)sub_DA4950(a1, a2, *(__int64 **)(v5 + 32)) )
        return 0;
    }
  }
  if ( !(unsigned __int8)sub_DA8150(a1, a2, a3, 0)
    || !(unsigned __int8)sub_DA4460(a1, a2, a3)
    || !(unsigned __int8)sub_DA4EC0(a1, (__int64)a2, a3, 0)
    || !(unsigned __int8)sub_DA4100(a1, (__int64)a2, a3, 0)
    || !(unsigned __int8)sub_D9E7F0(a1, (__int64)a2, a3, 0)
    || !(unsigned __int8)sub_DA5E00(a1, a2, a3, 0)
    || !(unsigned __int8)sub_D9D660(a1, (__int64)a2, a3, 0)
    || !(unsigned __int8)sub_D9D510(a1, (__int64)a2, a3) )
  {
    return 0;
  }
  return sub_DA5CE0(a1, (__int64)a2, a3);
}

