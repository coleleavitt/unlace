__int64 __fastcall sub_DCC040(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rax

  if ( !(unsigned __int8)sub_DC83C0(a1, (__int64)a2, a3, 0) )
    return 0;
  if ( !*(_DWORD *)(a3 + 24) )
  {
    v5 = *(_QWORD *)(a3 + 32);
    if ( *(_BYTE *)(v5 + 24) )
    {
      if ( *(_BYTE *)(v5 + 20) && !(unsigned __int8)sub_DC8690(a1, a2, *(__int64 **)(v5 + 32)) )
        return 0;
    }
  }
  if ( !(unsigned __int8)sub_DCBE90(a1, a2, a3, 0)
    || !(unsigned __int8)sub_DC81A0(a1, a2, a3)
    || !(unsigned __int8)sub_DC8C00(a1, (__int64)a2, a3, 0)
    || !(unsigned __int8)sub_DC7E40(a1, (__int64)a2, a3, 0)
    || !(unsigned __int8)sub_DC2530(a1, (__int64)a2, a3, 0)
    || !(unsigned __int8)sub_DC9B40(a1, a2, a3, 0)
    || !(unsigned __int8)sub_DC13A0(a1, (__int64)a2, a3, 0)
    || !(unsigned __int8)sub_DC1250(a1, (__int64)a2, a3) )
  {
    return 0;
  }
  return sub_DC9A20(a1, (__int64)a2, a3);
}
