unsigned __int64 *__fastcall sub_9784E0(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  unsigned __int64 *result; // rax
  unsigned __int64 v9; // rbx

  if ( (unsigned __int8)sub_978340(a1, (_WORD *)a3) )
  {
    v7 = a1[44];
    if ( v7 )
      *(_QWORD *)(v7 + 8) = a2;
  }
  result = *(unsigned __int64 **)(a2 + 8);
  v9 = a3 & 0xFFFFFFFFFFFFFFFCLL | 2;
  if ( (unsigned __int64)result >= *(_QWORD *)(a2 + 16) )
  {
    sub_975850((const __m128i **)a2, (_QWORD *)(a1[1] + 32LL), 1u, v4, v5, v6);
    result = *(unsigned __int64 **)(a2 + 8);
  }
  *result = v9;
  result[1] = 1;
  *(_QWORD *)(a2 + 8) += 16LL;
  return result;
}

