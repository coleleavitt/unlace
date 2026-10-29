__int64 __fastcall sub_9954E0(__int64 a1, const void *a2, size_t a3)
{
  void *v3; // rcx

  v3 = *(void **)(a1 + 32);
  if ( *(_QWORD *)(a1 + 24) - (_QWORD)v3 < a3 )
    return sub_227BF10(a1, a2, a3);
  if ( a3 )
  {
    memcpy(v3, a2, a3);
    *(_QWORD *)(a1 + 32) += a3;
  }
  return a1;
}
