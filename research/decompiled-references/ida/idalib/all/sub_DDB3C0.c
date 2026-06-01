__int64 __fastcall sub_DDB3C0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp

  v2 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  if ( !(unsigned __int8)sub_DCC160(a1, a2, v2, 4)
    || !(unsigned __int8)sub_E21C70(a1) && !*(_DWORD *)(v2 + 24) && sub_DB0AB0(v2) )
  {
    return 0;
  }
  sub_E32240(a1);
  return sub_CFEE20(a1, (__int64)a2);
}
