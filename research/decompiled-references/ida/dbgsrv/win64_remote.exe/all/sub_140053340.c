/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140053340
// Address: 0x0000000140053340

//----- (0000000140053340) ----------------------------------------------------
void __fastcall sub_140053340(_QWORD *a1)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  *a1 = &off_140099278;
  sub_1400545F0(a1 + 10);
  v2 = (void (__fastcall ***)(_QWORD, __int64))a1[11];
  if ( v2 )
    (**v2)(v2, 1);
  v3 = (void *)a1[7];
  if ( v3 )
  {
    a1[8] = 0;
    j_free(v3);
    a1[7] = 0;
    a1[9] = 0;
  }
  v4 = (void *)a1[4];
  if ( v4 )
  {
    a1[5] = 0;
    j_free(v4);
    a1[4] = 0;
    a1[6] = 0;
  }
  v5 = (void *)a1[1];
  if ( v5 )
  {
    a1[2] = 0;
    j_free(v5);
    a1[1] = 0;
    a1[3] = 0;
  }
}
// 140099278: using guessed type __int64 (__fastcall *off_140099278)(void *Block);
