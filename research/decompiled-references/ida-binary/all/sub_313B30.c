void __fastcall sub_313B30(volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // r12
  __int64 v2; // rbx
  void **v3; // rbp
  volatile signed __int32 *v4; // rax

  if ( *a1 )
  {
    if ( !_InterlockedSub(*a1, 1u) )
    {
      v1 = *a1;
      if ( *a1 )
      {
        v2 = *((_QWORD *)v1 + 3);
        while ( v2 )
        {
          v3 = (void **)v2;
          sub_30E950(*(void **)(v2 + 24));
          v4 = *(volatile signed __int32 **)(v2 + 32);
          v2 = *(_QWORD *)(v2 + 16);
          if ( v4 )
          {
            if ( !_InterlockedSub(v4, 1u) )
              free(v3[4]);
          }
          operator delete(v3, 0x40u);
        }
        operator delete((void *)v1, 0x38u);
      }
    }
  }
}
