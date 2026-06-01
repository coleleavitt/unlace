/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C74
// Address: 0x00080C74

//----- (00080C74) --------------------------------------------------------
int __fastcall sub_80C74(int result)
{
  unsigned int v1; // r3

  if ( &_pthread_key_create )
  {
    __dmb(0xBu);
    do
      v1 = __ldrex((unsigned int *)result);
    while ( __strex(0, (unsigned int *)result) );
    __dmb(0xBu);
    if ( (v1 & 0x10000) != 0 )
      return sub_14664(240, result, 1, 0x7FFFFFFF);
  }
  else
  {
    *(_BYTE *)(result + 1) = (unsigned __int8)&_pthread_key_create;
  }
  return result;
}
