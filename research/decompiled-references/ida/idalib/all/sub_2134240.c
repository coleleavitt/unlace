__int64 __fastcall sub_2134240(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+18h] [rbp-70h] BYREF
  __int64 v4; // [rsp+20h] [rbp-68h] BYREF
  __int64 v5; // [rsp+28h] [rbp-60h] BYREF
  _QWORD v6[4]; // [rsp+30h] [rbp-58h] BYREF
  __int16 v7; // [rsp+50h] [rbp-38h]

  v3 = 0;
  v4 = 0;
  v5 = 0;
  if ( (unsigned __int8)sub_2133D40(a1, &v3, a2) )
    return 1;
  v7 = 259;
  v6[0] = "expected comma";
  if ( (unsigned __int8)sub_2154510(a1, 26, v6) )
    return 1;
  if ( (unsigned __int8)sub_21335C0(a1, &v4) )
    return 1;
  v6[0] = "expected comma";
  v7 = 259;
  if ( (unsigned __int8)sub_2154510(a1, 26, v6)
    || (unsigned __int8)sub_21335C0(a1, &v5)
    || (unsigned __int8)sub_21544B0(a1) )
  {
    return 1;
  }
  (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64, __int64))(**(_QWORD **)(a1 + 24) + 880LL))(
    *(_QWORD *)(a1 + 24),
    v3,
    v4,
    v5,
    a2);
  return 0;
}
