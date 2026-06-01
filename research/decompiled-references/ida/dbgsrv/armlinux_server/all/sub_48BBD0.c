/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48BBD0
// Address: 0x000000000048BBD0

//----- (000000000048BBD0) ----------------------------------------------------
void __fastcall sub_48BBD0(_QWORD *a1)
{
  FILE *v2; // x0
  void *v3; // x0

  v2 = (FILE *)a1[4];
  *a1 = off_51C9D8;
  if ( v2 )
    sub_4906A0(v2);
  v3 = (void *)a1[6];
  a1[3] = 0;
  a1[4] = 0;
  if ( v3 )
  {
    a1[7] = 0;
    j__free(v3);
  }
}
// 51C9D8: using guessed type __int64 (__fastcall *off_51C9D8[3])();
