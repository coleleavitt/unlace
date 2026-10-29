/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_454620
// Address: 0x0000000000454620

//----- (0000000000454620) ----------------------------------------------------
void __fastcall sub_454620(void **a1)
{
  void **v1; // rbx
  void **v2; // rbp
  void *v3; // rdi

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      sub_454620(v1[3]);
      v1 = (void **)v1[2];
      if ( *((int *)v2 + 10) >= -1 )
      {
        v3 = v2[6];
        if ( v3 )
        {
          v2[7] = nullptr;
          j__free(v3);
        }
      }
      operator delete(v2, 0x48u);
    }
    while ( v1 );
  }
}
