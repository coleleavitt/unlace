__int64 __fastcall sub_E8C510(__int64 *a1)
{
  __int64 v1; // rdi
  void *v2; // rdx

  v1 = *a1;
  v2 = *(void **)(v1 + 32);
  if ( *(_QWORD *)(v1 + 24) - (_QWORD)v2 <= 0xAu )
    return sub_22581D0(v1, "independent", 11);
  qmemcpy(v2, "independent", 11);
  *(_QWORD *)(v1 + 32) += 11LL;
  return 28261;
}

