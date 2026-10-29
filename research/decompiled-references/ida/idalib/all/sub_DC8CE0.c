__int64 __fastcall sub_DC8CE0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  if ( !(unsigned __int8)sub_DC83C0(a1, a2, v2, 9)
    || !(unsigned __int8)sub_DC13A0(a1, a2, v2, 9)
    || !(unsigned __int8)sub_DC8C00(a1, a2, v2, 9) )
  {
    return 0;
  }
  if ( *(_BYTE *)(*(_QWORD *)(v2 + 32) + 24LL) )
  {
    v4[0] = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
    sub_E33BA0(a1, v4, 2443, 0);
    return 0;
  }
  return sub_DC7E40(a1, a2, v2, 9);
}
