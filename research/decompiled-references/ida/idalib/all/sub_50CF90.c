unsigned __int64 __fastcall sub_50CF90(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 **v4; // rbx
  unsigned __int64 result; // rax
  __int64 **i; // r14
  __int64 *v9; // r15

  v4 = *(__int64 ***)(a2 + 224);
  result = *(_QWORD *)(a2 + 232);
  for ( i = &v4[result]; i != v4; result = sub_42DC30(a2, *v9, a3, a4) )
  {
    v9 = *v4++;
    sub_42D920(a2, v9, a3, a4);
  }
  return result;
}
