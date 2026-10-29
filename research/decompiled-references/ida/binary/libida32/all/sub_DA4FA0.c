__int64 __fastcall sub_DA4FA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  if ( !(unsigned __int8)sub_DA4680(a1, a2, v2, 9)
    || !(unsigned __int8)sub_D9D660(a1, a2, v2, 9)
    || !(unsigned __int8)sub_DA4EC0(a1, a2, v2, 9) )
  {
    return 0;
  }
  if ( *(_BYTE *)(*(_QWORD *)(v2 + 32) + 24LL) )
  {
    v4[0] = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
    sub_E0FE60(a1, v4, 2443, 0);
    return 0;
  }
  return sub_DA4100(a1, a2, v2, 9);
}

