__int64 __fastcall sub_1BCD530(__int64 *a1)
{
  unsigned __int64 v1; // rax
  __int64 result; // rax

  v1 = *a1 & 0xFFFFF80400000000LL;
  a1[5] = 0;
  result = v1 | 0x2000000000LL;
  *a1 = result;
  return result;
}
