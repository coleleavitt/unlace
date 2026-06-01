__int64 __fastcall sub_9930F0(__int64 a1, __int64 a2)
{
  void *v2; // rdx
  __int64 v4; // rdi
  __int64 v5; // rax
  void *v6; // rcx
  __int64 result; // rax
  _WORD *v8; // rcx

  v2 = *(void **)(a2 + 32);
  v4 = a2;
  if ( *(_QWORD *)(a2 + 24) - (_QWORD)v2 > 0xEu )
  {
    qmemcpy(v2, "Issue (LoanID: ", 15);
    *(_QWORD *)(a2 + 32) += 15LL;
  }
  else
  {
    v4 = sub_22581D0(a2, "Issue (LoanID: ", 15);
  }
  v5 = sub_2257BD0(v4, *(unsigned int *)(a1 + 12));
  v6 = *(void **)(v5 + 32);
  if ( *(_QWORD *)(v5 + 24) - (_QWORD)v6 > 0xBu )
  {
    qmemcpy(v6, ", OriginID: ", 12);
    *(_QWORD *)(v5 + 32) += 12LL;
  }
  else
  {
    v5 = sub_22581D0(v5, ", OriginID: ", 12);
  }
  result = sub_2257BD0(v5, *(unsigned int *)(a1 + 16));
  v8 = *(_WORD **)(result + 32);
  if ( *(_QWORD *)(result + 24) - (_QWORD)v8 <= 1u )
    return sub_22581D0(result, ")\n", 2);
  *v8 = 2601;
  *(_QWORD *)(result + 32) += 2LL;
  return result;
}

