__int64 *__fastcall sub_553110(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 *result; // rax

  v4 = sub_1829C40(a1, a2, a3, a4);
  result = (__int64 *)sub_17E9C90(a1 + 560, 88);
  *result = v4;
  result[1] = (__int64)(result + 3);
  result[2] = 0x800000000LL;
  return result;
}

