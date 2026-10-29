/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000E720
// Address: 0x000000014000E720

//----- (000000014000E720) ----------------------------------------------------
void __fastcall sub_14000E720(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    j_free(v2);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
}
