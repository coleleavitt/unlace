void __fastcall sub_1EAEA80(__int64 *a1)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  void *v4; // rdi

  v2 = *a1;
  v3 = *a1 + 80LL * *((unsigned int *)a1 + 2);
  if ( *a1 == v3 )
  {
LABEL_4:
    *((_DWORD *)a1 + 2) = 0;
  }
  else
  {
    do
    {
      while ( 1 )
      {
        v3 -= 80;
        v4 = *(void **)(v3 + 8);
        if ( v4 == (void *)(v3 + 24) )
          break;
        operator delete(v4);
        if ( v3 == v2 )
          goto LABEL_4;
      }
    }
    while ( v3 != v2 );
    *((_DWORD *)a1 + 2) = 0;
  }
}
