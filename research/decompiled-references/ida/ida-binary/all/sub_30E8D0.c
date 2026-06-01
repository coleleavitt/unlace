void __fastcall sub_30E8D0(void *a1)
{
  void *v1; // rbp
  void **v2; // rbx
  volatile signed __int32 *v3; // rax
  volatile signed __int32 *v4; // rax

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = (void **)v1;
      sub_30E8D0(*((void **)v1 + 3));
      v3 = *((volatile signed __int32 **)v1 + 7);
      v1 = *((void **)v1 + 2);
      if ( v3 && !_InterlockedSub(v3, 1u) )
        free(v2[7]);
      v4 = (volatile signed __int32 *)v2[4];
      if ( v4 )
      {
        if ( !_InterlockedSub(v4, 1u) )
          free(v2[4]);
      }
      operator delete(v2, 0x50u);
    }
    while ( v1 );
  }
}
