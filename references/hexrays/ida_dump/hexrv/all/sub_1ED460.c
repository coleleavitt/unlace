unsigned __int64 __fastcall sub_1ED460(__int64 *a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // rbx
  unsigned __int64 i; // rbp
  __int64 v6; // rdi

  result = a1[8];
  v3 = a1[7];
  for ( i = v3 + 96 * result; i != v3; result = sub_1ED1A0(v6, a1, a2) )
  {
    v6 = v3;
    v3 += 96;
  }
  return result;
}
