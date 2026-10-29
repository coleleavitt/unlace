/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400479A0
// Address: 0x00000001400479A0

//----- (00000001400479A0) ----------------------------------------------------
__int64 (__fastcall **__fastcall sub_1400479A0(_QWORD *a1))()
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)a1[7];
  if ( v2 )
  {
    a1[8] = 0;
    j_free(v2);
    a1[7] = 0;
    a1[9] = 0;
  }
  v3 = (void *)a1[4];
  if ( v3 )
  {
    a1[5] = 0;
    j_free(v3);
    a1[4] = 0;
    a1[6] = 0;
  }
  *a1 = off_140092F00;
  return off_140092F00;
}
// 140092F00: using guessed type __int64 (__fastcall *off_140092F00[4])();
