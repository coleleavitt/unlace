/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BAB20
// Address: 0x00000000000BAB20

//----- (00000000000BAB20) ----------------------------------------------------
void __fastcall sub_BAB20(_QWORD *a1)
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
  }
  operator delete(a1);
}
// 1603B8: using guessed type __int64 (__fastcall *off_1603B8)(int, int, void *dest);
