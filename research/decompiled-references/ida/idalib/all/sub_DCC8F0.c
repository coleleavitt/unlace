__int64 __fastcall sub_DCC8F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( !(unsigned __int8)sub_DC83C0(a1, a2, a3, 9)
    || !(unsigned __int8)sub_DC13A0(a1, a2, a3, 9)
    || !(unsigned __int8)sub_DC8C00(a1, a2, a3, 9) )
  {
    return 0;
  }
  if ( *(_BYTE *)(*(_QWORD *)(a3 + 32) + 24LL) )
  {
    v5[0] = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
    sub_E33BA0(a1, v5, 2443, 0);
    return 0;
  }
  return sub_DC7E40(a1, a2, a3, 9);
}
