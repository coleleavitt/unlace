/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47D288
// Address: 0x000000000047D288

//----- (000000000047D288) ----------------------------------------------------
void __fastcall sub_47D288(_QWORD *a1)
{
  __int64 v2; // x0
  void *v3; // x0
  void *v4; // x0
  void *v5; // x0

  v2 = a1[21];
  *a1 = qword_51E3D0;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    a1[21] = 0;
  }
  v3 = (void *)a1[23];
  a1[20] = 0;
  if ( v3 )
  {
    a1[24] = 0;
    j__free(v3);
  }
  v4 = (void *)a1[17];
  if ( v4 )
  {
    a1[18] = 0;
    j__free(v4);
  }
  v5 = (void *)a1[14];
  if ( v5 )
  {
    a1[15] = 0;
    j__free(v5);
  }
  sub_475E80(a1);
}
// 51E3D0: using guessed type __int64 qword_51E3D0[2];
