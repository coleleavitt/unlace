/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9B120
// Address: 0x000000000009B120

//----- (000000000009B120) ----------------------------------------------------
void __fastcall sub_9B120(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi

  *a1 = &off_14E6C0;
  v2 = (void *)a1[5];
  if ( v2 )
  {
    a1[6] = 0;
    qfree(v2);
    a1[5] = 0;
    a1[7] = 0;
  }
  v3 = (void *)a1[2];
  if ( v3 )
  {
    a1[3] = 0;
    qfree(v3);
    a1[2] = 0;
    a1[4] = 0;
  }
}
// 14E6C0: using guessed type __int64 (__fastcall *off_14E6C0)();
