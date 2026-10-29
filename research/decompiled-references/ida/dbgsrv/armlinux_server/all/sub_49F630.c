/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49F630
// Address: 0x000000000049F630

//----- (000000000049F630) ----------------------------------------------------
void __fastcall sub_49F630(__int64 a1)
{
  unsigned int v1; // w1

  if ( &_pthread_key_create )
  {
    do
      v1 = __ldaxr((unsigned int *)a1);
    while ( __stlxr(1u, (unsigned int *)a1) );
    if ( (v1 & 0x10000) != 0 )
      syscall(98, a1, 1, 0x7FFFFFFF);
  }
  else
  {
    *(_BYTE *)(a1 + 1) = 0;
    atomic_store(1u, (unsigned __int8 *)a1);
  }
}
