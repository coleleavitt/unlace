/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_382D0
// Address: 0x00000000000382D0

//----- (00000000000382D0) ----------------------------------------------------
void __fastcall sub_382D0(void **a1)
{
  void **v2; // rbx
  void **v3; // r15
  char *v4; // rax
  char *v5; // rcx
  void *v6; // rdi

  sub_38A40(a1);
  v2 = (void **)a1[1];
  v3 = (void **)a1[2];
  if ( v2 != v3 )
  {
    do
      operator delete(*v2++);
    while ( v3 != v2 );
    v4 = (char *)a1[1];
    v5 = (char *)a1[2];
    if ( v5 != v4 )
    {
      do
        v5 -= 8;
      while ( v4 != v5 );
      a1[2] = v4;
    }
  }
  v6 = *a1;
  if ( *a1 )
    operator delete(v6);
}
