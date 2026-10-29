/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40DE70
// Address: 0x000000000040DE70

//----- (000000000040DE70) ----------------------------------------------------
void __fastcall sub_40DE70(void *a1)
{
  void *v1; // rbp
  _QWORD *v2; // rbx
  void *v3; // rdi
  void *v4; // rdi

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      sub_40DE70(*((void **)v1 + 3));
      v3 = *((void **)v1 + 10);
      v1 = *((void **)v1 + 2);
      if ( v3 )
      {
        v2[11] = 0;
        j__free(v3);
      }
      v4 = (void *)v2[6];
      if ( v4 )
      {
        v2[7] = 0;
        j__free(v4);
      }
      operator delete(v2, 0x1D8u);
    }
    while ( v1 );
  }
}
