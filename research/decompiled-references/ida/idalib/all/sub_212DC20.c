void __fastcall sub_212DC20(__int64 *a1)
{
  __int64 v1; // r12
  __int64 v2; // rbx
  void *v4; // rdi

  v1 = a1[1];
  v2 = *a1;
  if ( v1 != *a1 )
  {
    do
    {
      if ( *(_DWORD *)(v2 + 32) > 0x40u )
      {
        v4 = *(void **)(v2 + 24);
        if ( v4 )
          operator delete[](v4);
      }
      v2 += 40;
    }
    while ( v1 != v2 );
    v2 = *a1;
  }
  if ( v2 )
    operator delete((void *)v2);
}
