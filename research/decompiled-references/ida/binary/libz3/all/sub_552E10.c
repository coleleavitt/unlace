__int64 *__fastcall sub_552E10(__int64 a1)
{
  __int64 v1; // rbp
  __int64 *result; // rax

  v1 = sub_1829A80();
  result = (__int64 *)sub_17E9C90(a1 + 560, 88);
  *result = v1;
  result[1] = (__int64)(result + 3);
  result[2] = 0x800000000LL;
  return result;
}

