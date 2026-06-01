/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140056B00
// Address: 0x0000000140056B00

//----- (0000000140056B00) ----------------------------------------------------
void __fastcall sub_140056B00(_QWORD *Block)
{
  _QWORD *v1; // rbx
  void *v2; // rdi
  void *v3; // rcx
  void *v4; // rcx

  if ( Block )
  {
    v1 = Block;
    v2 = Block;
    do
    {
      v3 = (void *)v1[3];
      if ( v3 )
        free(v3);
      v4 = (void *)v1[4];
      if ( v4 )
        free(v4);
      v1 = (_QWORD *)v1[5];
      free(v2);
      v2 = v1;
    }
    while ( v1 );
  }
}
