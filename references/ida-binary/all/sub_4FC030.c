void __fastcall sub_4FC030(__int64 a1)
{
  __int64 v1; // rbx
  __int64 i; // r12
  volatile signed __int32 *v3; // rax

  if ( *(_QWORD *)a1 && !_InterlockedSub(*(volatile signed __int32 **)a1, 1u) )
  {
    v1 = *(_QWORD *)(a1 + 8);
    for ( i = v1 + 96LL * *(_QWORD *)(a1 + 16); i != v1; v1 += 96 )
    {
      v3 = *(volatile signed __int32 **)(v1 + 56);
      if ( v3 )
      {
        if ( !_InterlockedSub(v3, 1u) )
          free(*(void **)(v1 + 56));
      }
    }
    free(*(void **)a1);
  }
}
