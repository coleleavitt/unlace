void __fastcall boot_destroy(__int64 *a1)
{
  __int64 v1; // x20
  __int64 i; // x21
  char **v4; // x9
  unsigned __int64 v5; // x8

  v1 = *a1;
  if ( *a1 )
  {
    for ( i = 0; i != 9; ++i )
    {
      v4 = __roots[i];
      v5 = (unsigned __int64)v4[2];
      if ( (v5 & 0x8000000000000000LL) != 0 )
        dyld_halt("invalid offset: %lld", v4[2]);
      closefd_optional((int *)(v1 + v5), *v4);
    }
    ignition_test_BRA();
    *a1 = 0;
  }
}
