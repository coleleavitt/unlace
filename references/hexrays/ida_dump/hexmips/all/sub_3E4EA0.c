unsigned __int64 __fastcall sub_3E4EA0(__int64 a1)
{
  __int64 *v1; // rbx
  unsigned __int64 result; // rax
  __int64 *i; // rbp
  __int64 v4; // rdi

  v1 = *(__int64 **)(a1 + 864);
  result = 3LL * *(_QWORD *)(a1 + 872);
  for ( i = &v1[3 * *(_QWORD *)(a1 + 872)]; i != v1; result = sub_1193A0(v4) )
  {
    v4 = *v1;
    v1 += 3;
  }
  return result;
}
