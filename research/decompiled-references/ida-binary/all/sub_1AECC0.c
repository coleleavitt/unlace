void __fastcall sub_1AECC0(__int64 *a1, const char *a2)
{
  volatile signed __int32 *v3; // rax
  void **v4; // rbx
  void **i; // r12
  __int64 v6; // rdi

  v3 = (volatile signed __int32 *)a1[3];
  if ( v3 && !_InterlockedSub(v3, 1u) )
  {
    v4 = (void **)a1[4];
    for ( i = &v4[3 * a1[5]]; i != v4; v4 += 3 )
    {
      if ( *v4 && !_InterlockedSub((volatile signed __int32 *)*v4, 1u) )
        free(*v4);
    }
    free((void *)a1[3]);
  }
  v6 = *a1;
  if ( *a1 )
  {
    a1[1] = 0;
    qfree(v6, a2);
  }
}
