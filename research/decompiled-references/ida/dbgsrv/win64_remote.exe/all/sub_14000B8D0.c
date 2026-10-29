/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000B8D0
// Address: 0x000000014000B8D0

//----- (000000014000B8D0) ----------------------------------------------------
void __fastcall sub_14000B8D0(_QWORD *a1)
{
  void *v2; // rcx

  *a1 = &off_140092F30;
  v2 = (void *)a1[1];
  if ( v2 )
  {
    a1[2] = 0;
    j_free(v2);
    a1[1] = 0;
    a1[3] = 0;
  }
}
// 140092F30: using guessed type __int64 (__fastcall *off_140092F30)();
