__int64 __fastcall sub_722320(__int64 a1, const void *a2, size_t a3)
{
  void *v4; // rdi

  v4 = *(void **)(a1 + 32);
  if ( *(_QWORD *)(a1 + 24) - (_QWORD)v4 < a3 )
    return sub_26240F0(a1, a2, a3);
  if ( a3 )
  {
    memcpy(v4, a2, a3);
    *(_QWORD *)(a1 + 32) += a3;
  }
  return a1;
}

