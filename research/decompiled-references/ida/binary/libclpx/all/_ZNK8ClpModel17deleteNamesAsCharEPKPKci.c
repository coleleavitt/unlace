void __fastcall ClpModel::deleteNamesAsChar(ClpModel *this, const char **a2, int a3)
{
  void **v3; // rbx
  const char *const *v4; // rbp
  void *v5; // rdi

  if ( a3 > 0 )
  {
    v3 = (void **)a2;
    v4 = &a2[(unsigned int)(a3 - 1) + 1];
    do
    {
      v5 = *v3++;
      free(v5);
    }
    while ( v3 != (void **)v4 );
  }
  if ( a2 )
    operator delete[](a2);
}

