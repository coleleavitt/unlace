__int64 __fastcall sub_9717A0(__int64 a1, const void *a2, size_t a3)
{
  void *v3; // rcx

  v3 = *(void **)(a1 + 32);
  if ( *(_QWORD *)(a1 + 24) - (_QWORD)v3 < a3 )
    return sub_22581D0(a1, a2, a3);
  if ( a3 )
  {
    memcpy(v3, a2, a3);
    *(_QWORD *)(a1 + 32) += a3;
  }
  return a1;
}

