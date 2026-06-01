__int64 __fastcall sub_DA8BB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( !(unsigned __int8)sub_DA4680(a1, a2, a3, 9)
    || !(unsigned __int8)sub_D9D660(a1, a2, a3, 9)
    || !(unsigned __int8)sub_DA4EC0(a1, a2, a3, 9) )
  {
    return 0;
  }
  if ( *(_BYTE *)(*(_QWORD *)(a3 + 32) + 24LL) )
  {
    v5[0] = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
    sub_E0FE60(a1, v5, 2443, 0);
    return 0;
  }
  return sub_DA4100(a1, a2, a3, 9);
}

