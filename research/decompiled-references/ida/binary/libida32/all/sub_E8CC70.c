__int64 __fastcall sub_E8CC70(__int64 *a1)
{
  __int64 v1; // rdi
  void *v2; // rdx

  v1 = *a1;
  v2 = *(void **)(v1 + 32);
  if ( *(_QWORD *)(v1 + 24) - (_QWORD)v2 <= 9u )
    return sub_22581D0(v1, "if_present", 10);
  qmemcpy(v2, "if_present", 10);
  *(_QWORD *)(v1 + 32) += 10LL;
  return 29806;
}

