/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100045530
// Address: 0x0000000100045530

//----- (0000000100045530) ----------------------------------------------------
void __fastcall sub_100045530(__int64 a1)
{
  void **v2; // r14
  void *v3; // rdi
  void **v4; // r15

  v2 = *(void ***)(a1 + 16);
  if ( v2 )
  {
    do
    {
      v4 = (void **)*v2;
      if ( ((_BYTE)v2[2] & 1) != 0 )
        operator delete(v2[4]);
      operator delete(v2);
      v2 = v4;
    }
    while ( v4 );
  }
  v3 = *(void **)a1;
  *(_QWORD *)a1 = 0;
  if ( v3 )
    operator delete(v3);
}
