__int64 __fastcall sub_1F81470(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 result; // rax
  __int64 *i; // rbp
  __int64 v5; // rsi

  sub_9B9C90(*(_QWORD *)(a1 + 16), *(unsigned int *)(a2 + 48));
  v2 = *(__int64 **)(a2 + 40);
  result = *(unsigned int *)(a2 + 48);
  for ( i = &v2[result]; i != v2; result = sub_1F80F70(a1, v5) )
    v5 = *v2++;
  return result;
}
