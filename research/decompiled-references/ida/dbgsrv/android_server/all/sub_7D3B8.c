/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7D3B8
// Address: 0x000000000007D3B8

//----- (000000000007D3B8) ----------------------------------------------------
void __fastcall sub_7D3B8(__int64 a1)
{
  void **v1; // x20
  void **v3; // x21
  void *v4; // x0

  v1 = *(void ***)(a1 + 16);
  if ( v1 )
  {
    do
    {
      v3 = (void **)*v1;
      if ( ((_BYTE)v1[2] & 1) != 0 )
        operator delete(v1[4]);
      operator delete(v1);
      v1 = v3;
    }
    while ( v3 );
  }
  v4 = *(void **)a1;
  *(_QWORD *)a1 = 0;
  if ( v4 )
    operator delete(v4);
}
