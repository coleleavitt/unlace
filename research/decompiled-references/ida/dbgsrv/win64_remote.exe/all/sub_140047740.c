/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140047740
// Address: 0x0000000140047740

//----- (0000000140047740) ----------------------------------------------------
void __fastcall sub_140047740(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx

  *a1 = &off_140097200;
  v2 = (void *)a1[9];
  if ( v2 )
  {
    a1[10] = 0;
    j_free(v2);
    a1[9] = 0;
    a1[11] = 0;
  }
  v3 = (void *)a1[2];
  if ( v3 )
  {
    a1[3] = 0;
    j_free(v3);
    a1[2] = 0;
    a1[4] = 0;
  }
}
// 140097200: using guessed type __int64 (__fastcall *off_140097200)(void *Block);
