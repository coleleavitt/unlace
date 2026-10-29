unsigned __int64 __fastcall sub_1F2060(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  unsigned __int64 result; // rax
  __int64 v7; // rbx
  unsigned __int64 i; // rbp
  __int64 v10; // rdi

  result = a1[8];
  v7 = a1[7];
  for ( i = v7 + 96 * result; i != v7; result = sub_1F1DA0(v10, a1, a2, a4, a5, a6) )
  {
    v10 = v7;
    v7 += 96;
  }
  return result;
}
