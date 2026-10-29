/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003FD44
// Address: 0x000000010003FD44

//----- (000000010003FD44) ----------------------------------------------------
__int64 __fastcall sub_10003FD44(__int64 a1)
{
  void **v2; // x20
  void *v3; // x0
  void **v5; // x21

  v2 = *(void ***)(a1 + 16);
  if ( v2 )
  {
    do
    {
      v5 = (void **)*v2;
      if ( *((char *)v2 + 39) < 0 )
        operator delete(v2[2]);
      operator delete(v2);
      v2 = v5;
    }
    while ( v5 );
  }
  v3 = *(void **)a1;
  *(_QWORD *)a1 = 0;
  if ( v3 )
    operator delete(v3);
  return a1;
}
