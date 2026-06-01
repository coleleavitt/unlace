/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48BAA8
// Address: 0x000000000048BAA8

//----- (000000000048BAA8) ----------------------------------------------------
void __fastcall sub_48BAA8(_QWORD *a1)
{
  void *v1; // x2

  v1 = (void *)a1[3];
  *a1 = off_51C9B0;
  if ( v1 )
  {
    a1[4] = 0;
    j__free(v1);
  }
}
// 51C9B0: using guessed type __int64 (__fastcall *off_51C9B0[3])();
