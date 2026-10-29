void __fastcall sub_8F4D0(void **a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi

  v2 = a1[6];
  if ( v2 != (void *)-1LL )
  {
    iconv_close(v2);
    a1[6] = (void *)-1LL;
  }
  v3 = a1[3];
  if ( v3 )
  {
    a1[4] = nullptr;
    j__free(v3);
  }
  v4 = *a1;
  if ( *a1 )
  {
    a1[1] = nullptr;
    j__free(v4);
  }
}

