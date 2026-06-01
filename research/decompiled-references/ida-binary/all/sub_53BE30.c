void __fastcall sub_53BE30(void *a1)
{
  void *v1; // rbx
  void **v2; // rbp
  volatile signed __int32 *v3; // rax

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = (void **)v1;
      sub_53BE30(*((void **)v1 + 3));
      v3 = *((volatile signed __int32 **)v1 + 4);
      v1 = *((void **)v1 + 2);
      if ( v3 )
      {
        if ( !_InterlockedSub(v3, 1u) )
          free(v2[4]);
      }
      operator delete(v2, 0x40u);
    }
    while ( v1 );
  }
}
