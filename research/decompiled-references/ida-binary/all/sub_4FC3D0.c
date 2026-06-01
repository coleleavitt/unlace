void __fastcall sub_4FC3D0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 i; // r14
  __int64 v3; // rbx
  __int64 j; // r12
  volatile signed __int32 *v5; // rax

  if ( *(_QWORD *)a1 && !_InterlockedSub(*(volatile signed __int32 **)a1, 1u) )
  {
    v1 = *(_QWORD *)(a1 + 8);
    for ( i = v1 + 24LL * *(_QWORD *)(a1 + 16); i != v1; v1 += 24 )
    {
      if ( *(_QWORD *)v1 && !_InterlockedSub(*(volatile signed __int32 **)v1, 1u) )
      {
        v3 = *(_QWORD *)(v1 + 8);
        for ( j = v3 + 96LL * *(_QWORD *)(v1 + 16); j != v3; v3 += 96 )
        {
          v5 = *(volatile signed __int32 **)(v3 + 56);
          if ( v5 )
          {
            if ( !_InterlockedSub(v5, 1u) )
              free(*(void **)(v3 + 56));
          }
        }
        free(*(void **)v1);
      }
    }
    free(*(void **)a1);
  }
}
