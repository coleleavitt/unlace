/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_475E80
// Address: 0x0000000000475E80

//----- (0000000000475E80) ----------------------------------------------------
void __fastcall sub_475E80(_QWORD *a1)
{
  __int64 v2; // x0
  void *v3; // x0
  void *v4; // x0
  void *v5; // x0

  *a1 = qword_51E328;
  sub_4770D8(a1 + 10);
  v2 = a1[11];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = (void *)a1[7];
  if ( v3 )
  {
    a1[8] = 0;
    j__free(v3);
  }
  v4 = (void *)a1[4];
  if ( v4 )
  {
    a1[5] = 0;
    j__free(v4);
  }
  v5 = (void *)a1[1];
  if ( v5 )
  {
    a1[2] = 0;
    j__free(v5);
  }
}
// 51E328: using guessed type __int64 qword_51E328[2];
