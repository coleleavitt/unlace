__int64 *__fastcall sub_553050(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 *result; // rax

  v2 = sub_1829B00(a1, a2);
  result = (__int64 *)sub_17E9C90(a1 + 560, 88);
  *result = v2;
  result[1] = (__int64)(result + 3);
  result[2] = 0x800000000LL;
  return result;
}

