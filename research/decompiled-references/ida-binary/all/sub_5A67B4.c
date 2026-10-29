__int64 *__fastcall sub_5A67B4(__int64 *a1, __int64 a2)
{
  *a1 = sub_5A62BA((__int64)a1, a2);
  a1[1] = *a1;
  a1[2] = *a1 + 8 * a2;
  return a1;
}
