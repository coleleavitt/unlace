void __fastcall sub_3F8CE0(__int64 a1)
{
  void **v1; // rbx
  void **i; // r12

  if ( *(_QWORD *)a1 && !_InterlockedSub(*(volatile signed __int32 **)a1, 1u) )
  {
    v1 = *(void ***)(a1 + 8);
    for ( i = &v1[4 * *(_QWORD *)(a1 + 16)]; i != v1; v1 += 4 )
    {
      if ( *v1 )
      {
        if ( !_InterlockedSub((volatile signed __int32 *)*v1, 1u) )
          free(*v1);
      }
    }
    free(*(void **)a1);
  }
}
