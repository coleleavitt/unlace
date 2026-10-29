void __fastcall sub_225BE70(__int64 a1)
{
  void *v2; // rdi

  if ( *(_BYTE *)(a1 + 312) )
  {
    v2 = *(void **)(a1 + 280);
    if ( v2 != (void *)(a1 + 296) )
      operator delete(v2);
  }
  if ( *(_QWORD *)a1 != a1 + 16 )
    free(*(void **)a1);
}
