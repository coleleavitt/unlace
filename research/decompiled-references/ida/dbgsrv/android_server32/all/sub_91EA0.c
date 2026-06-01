/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_91EA0
// Address: 0x00091EA0

//----- (00091EA0) --------------------------------------------------------
int *__fastcall sub_91EA0(int *a1)
{
  int v2; // r0
  unsigned int *v3; // r1
  unsigned int v4; // r2
  signed int v5; // r2

  v2 = *a1;
  __dmb(0xBu);
  v3 = (unsigned int *)(v2 - 4);
  do
  {
    v4 = __ldrex(v3);
    v5 = v4 - 1;
  }
  while ( __strex(v5, v3) );
  __dmb(0xBu);
  if ( v5 <= -1 )
    operator delete((void *)(v2 - 12));
  return a1;
}
