__int64 __fastcall sub_2134800(__int64 a1)
{
  __int64 v1; // r12
  unsigned __int64 v3; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int8 v4[32]; // [rsp+18h] [rbp-20h] BYREF

  v1 = *(_QWORD *)(a1 + 184);
  if ( !*(_BYTE *)(a1 + 861) && (unsigned __int8)sub_2129170(a1) )
    return 1;
  *(_QWORD *)v4 = 0;
  if ( sub_2133530(a1, &v3, (__int64)v4) )
    return 1;
  *(_QWORD *)v4 = 0;
  if ( (unsigned __int8)sub_2154640(a1, 26) )
  {
    if ( (unsigned __int8)sub_21335C0(a1, v4) )
      return 1;
  }
  if ( (unsigned __int8)sub_21544B0(a1) )
    return 1;
  (*(void (__fastcall **)(_QWORD, unsigned __int64, _QWORD, __int64))(**(_QWORD **)(a1 + 24) + 624LL))(
    *(_QWORD *)(a1 + 24),
    v3,
    v4[0],
    v1);
  return 0;
}
