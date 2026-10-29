/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000B930
// Address: 0x000000014000B930

//----- (000000014000B930) ----------------------------------------------------
void __fastcall sub_14000B930(_QWORD *a1)
{
  void *v2; // rcx

  *a1 = &off_1400929C8;
  sub_14000A610((__int64)(a1 + 5));
  v2 = (void *)a1[2];
  if ( v2 )
  {
    a1[3] = 0;
    j_free(v2);
    a1[2] = 0;
    a1[4] = 0;
  }
}
// 1400929C8: using guessed type __int64 (__fastcall *off_1400929C8)(void *Block);
