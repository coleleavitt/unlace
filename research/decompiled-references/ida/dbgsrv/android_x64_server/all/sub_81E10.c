/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_81E10
// Address: 0x0000000000081E10

//----- (0000000000081E10) ----------------------------------------------------
void __fastcall sub_81E10(__int64 a1)
{
  void **v2; // rbx
  void **v3; // r15
  void *v4; // rdi

  v2 = *(void ***)(a1 + 16);
  if ( v2 )
  {
    do
    {
      v3 = (void **)*v2;
      if ( ((_BYTE)v2[2] & 1) != 0 )
        operator delete(v2[4]);
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  v4 = *(void **)a1;
  *(_QWORD *)a1 = 0;
  if ( v4 )
    operator delete(v4);
}
