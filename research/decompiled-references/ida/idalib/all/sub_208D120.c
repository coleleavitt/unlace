__int64 __fastcall sub_208D120(__int64 a1, const void *a2, size_t a3)
{
  __int64 v5; // rbx
  void *v6; // rdi

  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(void **)(v5 + 32);
  if ( *(_QWORD *)(v5 + 24) - (_QWORD)v6 < a3 )
  {
    sub_227BF10(v5, a2, a3);
    return a1;
  }
  else
  {
    if ( a3 )
    {
      memcpy(v6, a2, a3);
      *(_QWORD *)(v5 + 32) += a3;
    }
    return a1;
  }
}
