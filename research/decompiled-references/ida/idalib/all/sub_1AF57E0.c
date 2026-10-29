__int64 __fastcall sub_1AF57E0(__int64 *a1, __int64 a2, __int64 a3, __m128 a4)
{
  __int64 v5; // r9
  __int64 result; // rax
  __int64 v7; // [rsp+0h] [rbp-28h] BYREF
  _BYTE *v8; // [rsp+8h] [rbp-20h]

  sub_18C3E40(*a1);
  sub_190D5E0(*a1, a4);
  sub_17A2E10(*a1);
  result = (__int64)sub_15F7280(&v7, *a1, nullptr, 0, 0, v5);
  if ( v8 )
    result = sub_15F2350(&v7, v8);
  if ( !a3 )
    return sub_B88650(a2, 1);
  *(_QWORD *)(a2 + 88) = a3;
  return result;
}
