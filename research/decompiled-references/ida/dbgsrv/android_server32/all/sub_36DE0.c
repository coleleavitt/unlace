/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36DE0
// Address: 0x00036DE0

//----- (00036DE0) --------------------------------------------------------
void __fastcall sub_36DE0(int *ptr)
{
  int *v2; // r5

  *ptr = (int)&off_D64AC;
  v2 = ptr + 7;
  if ( ptr[7] )
  {
    sub_35D20(v2, 0);
    qfree((void *)*v2);
  }
  operator delete(ptr);
}
// D64AC: using guessed type _UNKNOWN *off_D64AC;
