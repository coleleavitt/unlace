/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8FE56
// Address: 0x0008FE56

//----- (0008FE56) --------------------------------------------------------
int *__fastcall sub_8FE56(int *a1, int *a2)
{
  int v2; // r1
  int v4; // r0
  unsigned int *v5; // r1
  unsigned int v6; // r2
  unsigned int *v7; // r1
  unsigned int v8; // r2
  signed int v9; // r2

  v2 = *a2;
  v4 = *a1;
  *a1 = v2;
  v5 = (unsigned int *)(v2 - 4);
  __dmb(0xBu);
  do
    v6 = __ldrex(v5);
  while ( __strex(v6 + 1, v5) );
  v7 = (unsigned int *)(v4 - 4);
  __dmb(0xBu);
  __dmb(0xBu);
  do
  {
    v8 = __ldrex(v7);
    v9 = v8 - 1;
  }
  while ( __strex(v9, v7) );
  __dmb(0xBu);
  if ( v9 <= -1 )
    operator delete((void *)(v4 - 12));
  return a1;
}
