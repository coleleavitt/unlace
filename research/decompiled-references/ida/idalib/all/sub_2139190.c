__int64 __fastcall sub_2139190(__int64 a1)
{
  __int64 v1; // r12
  __m128 v3[2]; // [rsp+10h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 184);
  if ( !*(_BYTE *)(a1 + 861) && (unsigned __int8)sub_2129170(a1) )
    return 1;
  v3[0].m128_u64[1] = 0;
  if ( sub_2133530(a1, (unsigned __int64 *)v3, (__int64)&v3[0].m128_i64[1]) )
    return 1;
  v3[0].m128_u64[1] = 0;
  if ( **(_DWORD **)(a1 + 48) == 26 )
  {
    sub_2132C70(a1, v3);
    if ( (unsigned __int8)sub_21335C0(a1, &v3[0].m128_u64[1]) )
      return 1;
  }
  if ( (unsigned __int8)sub_21544B0(a1) )
    return 1;
  (*(void (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64, __int64))(**(_QWORD **)(a1 + 24) + 584LL))(
    *(_QWORD *)(a1 + 24),
    v3[0].m128_u64[0],
    v3[0].m128_u64[1],
    v1);
  return 0;
}
