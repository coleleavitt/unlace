/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400548A0
// Address: 0x00000001400548A0

//----- (00000001400548A0) ----------------------------------------------------
void __fastcall sub_1400548A0(_QWORD *a1)
{
  void *v2; // rcx

  *a1 = &off_140099638;
  sub_1400545F0(a1 + 17);
  v2 = (void *)a1[18];
  if ( v2 )
  {
    a1[19] = 0;
    j_free(v2);
    a1[18] = 0;
    a1[20] = 0;
  }
}
// 140099638: using guessed type __int64 (__fastcall *off_140099638)(void *Block);
