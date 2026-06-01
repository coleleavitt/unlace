__int64 __fastcall sub_1FBCB00(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 result; // rax
  __int64 *i; // r12
  __int64 v5; // rsi

  sub_1FBC930(a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 64));
  v2 = *(__int64 **)(a2 + 56);
  result = *(unsigned int *)(a2 + 64);
  for ( i = &v2[result]; i != v2; result = sub_1F92A90(*(_QWORD *)(a1 + 16), v5, *(_QWORD *)(a1 + 24)) )
    v5 = *v2++;
  *(_DWORD *)(a1 + 224) = 124;
  return result;
}
