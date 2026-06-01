__int64 __fastcall sub_2134600(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+10h] [rbp-58h] BYREF
  __int64 v4; // [rsp+18h] [rbp-50h] BYREF
  const char *v5; // [rsp+20h] [rbp-48h] BYREF
  __int16 v6; // [rsp+40h] [rbp-28h]

  v3 = 0;
  v4 = 0;
  if ( (unsigned __int8)sub_2133D40(a1, &v3, a2) )
    return 1;
  v5 = "expected comma";
  v6 = 259;
  if ( (unsigned __int8)sub_2154510(a1, 26, &v5)
    || (unsigned __int8)sub_21335C0(a1, &v4)
    || (unsigned __int8)sub_21544B0(a1) )
  {
    return 1;
  }
  (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 24) + 1040LL))(
    *(_QWORD *)(a1 + 24),
    v3,
    v4,
    a2);
  return 0;
}
