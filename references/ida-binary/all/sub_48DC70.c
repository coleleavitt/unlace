void __fastcall sub_48DC70(__int64 a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  volatile signed __int32 *v5; // rax

  v3 = *(_QWORD *)(a1 + 112);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 120) = 0;
    qfree(v3, a2);
  }
  v4 = *(_QWORD *)(a1 + 72);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    qfree(v4, a2);
  }
  v5 = *(volatile signed __int32 **)(a1 + 24);
  if ( v5 && !_InterlockedSub(v5, 1u) )
    free(*(void **)(a1 + 24));
  if ( *(_QWORD *)a1 )
  {
    if ( !_InterlockedSub(*(volatile signed __int32 **)a1, 1u) )
      free(*(void **)a1);
  }
}
