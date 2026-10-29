/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9B090
// Address: 0x000000000009B090

//----- (000000000009B090) ----------------------------------------------------
void __fastcall sub_9B090(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = &off_14E690;
  v2 = (void *)a1[2];
  if ( v2 )
  {
    a1[3] = 0;
    qfree(v2);
    a1[2] = 0;
    a1[4] = 0;
  }
}
// 14E690: using guessed type __int64 (__fastcall *off_14E690)();
