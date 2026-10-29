__int64 *__fastcall sub_1933660(__int64 a1, __m128 a2)
{
  __int64 v2; // r9
  __int64 *result; // rax
  __int64 v4; // [rsp+0h] [rbp-28h] BYREF
  _BYTE *v5; // [rsp+8h] [rbp-20h]

  sub_18C3E40(a1);
  sub_190D5E0(a1, a2);
  sub_17A2E10(a1);
  result = sub_15F7280(&v4, a1, nullptr, 0, 0, v2);
  if ( v5 )
    return (__int64 *)sub_15F2350(&v4, v5);
  return result;
}
