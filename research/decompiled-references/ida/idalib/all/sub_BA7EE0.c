__int64 *__fastcall sub_BA7EE0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 *result; // rax

  v2 = sub_B8C330(a1);
  result = sub_AB1BE0(v2, a2, a1, v3, v4, v5);
  *(_BYTE *)(a1 + 58) |= 0x40u;
  *(_BYTE *)(a2 + 58) |= 0x80u;
  return result;
}
