void __fastcall sub_1366450(void **a1, void **a2)
{
  void **v2; // rbx
  void **v3; // rbp
  void *v4; // rdi

  if ( a2 != a1 )
  {
    v2 = a2;
    v3 = (void **)((char *)a2 + (~((char *)a2 - (char *)a1 - 16) & 0xFFFFFFFFFFFFFFF0LL));
    do
    {
      while ( 1 )
      {
        v2 -= 2;
        v4 = *v2;
        if ( (char *)*v2 + 0x2000 != nullptr && (char *)*v2 + 4096 != nullptr )
        {
          if ( v4 )
            break;
        }
        if ( v2 == v3 )
          return;
      }
      operator delete[](v4);
    }
    while ( v2 != v3 );
  }
}
