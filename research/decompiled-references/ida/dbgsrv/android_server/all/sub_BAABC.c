/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BAABC
// Address: 0x00000000000BAABC

//----- (00000000000BAABC) ----------------------------------------------------
void __fastcall sub_BAABC(_QWORD *a1)
{
  FILE *v2; // x0
  void *v3; // x0

  v2 = (FILE *)a1[4];
  *a1 = &off_1603B8;
  if ( v2 )
    qfclose(v2);
  v3 = (void *)a1[6];
  a1[3] = 0;
  a1[4] = 0;
  if ( v3 )
  {
    a1[7] = 0;
    qfree(v3);
    a1[6] = 0;
    a1[8] = 0;
  }
}
// 1603B8: using guessed type __int64 (__fastcall *off_1603B8)(int, int, void *dest);
