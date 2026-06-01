void __fastcall sub_21E7BB0(void **a1)
{
  void **v2; // rdi

  v2 = (void **)a1[42];
  if ( v2 != a1 + 44 )
    free(v2);
  if ( *a1 != a1 + 2 )
    free(*a1);
}
