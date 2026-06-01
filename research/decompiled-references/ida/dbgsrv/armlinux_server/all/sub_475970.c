/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_475970
// Address: 0x0000000000475970

//----- (0000000000475970) ----------------------------------------------------
void __fastcall sub_475970(_QWORD *a1)
{
  void *v2; // x0

  *a1 = qword_51E2F8;
  sub_4770D8(a1 + 17);
  v2 = (void *)a1[18];
  if ( v2 )
  {
    a1[19] = 0;
    j__free(v2);
  }
}
// 51E2F8: using guessed type __int64 qword_51E2F8[2];
