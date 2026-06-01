void __fastcall sub_281DA0(__int64 *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbx
  void **v6; // rbp
  volatile signed __int32 *v7; // rax
  volatile signed __int32 *v8; // rax

  v3 = *a1;
  if ( v3 )
  {
    v4 = a1[1];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (void **)(v3 + 72 * i);
        v7 = (volatile signed __int32 *)v6[6];
        if ( v7 && !_InterlockedSub(v7, 1u) )
          free(v6[6]);
        v8 = (volatile signed __int32 *)v6[3];
        if ( v8 && !_InterlockedSub(v8, 1u) )
          free(v6[3]);
        if ( *v6 )
        {
          if ( !_InterlockedSub((volatile signed __int32 *)*v6, 1u) )
            free(*v6);
        }
        v3 = *a1;
      }
    }
    a1[1] = 0;
    qfree(v3, a2);
  }
}
