/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9DB78
// Address: 0x000000000009DB78

//----- (000000000009DB78) ----------------------------------------------------
void __fastcall sub_9DB78(_QWORD *a1)
{
  void *v2; // x0

  v2 = (void *)a1[14];
  *a1 = off_15E5A8;
  if ( v2 )
  {
    a1[15] = 0;
    qfree(v2);
    a1[14] = 0;
    a1[16] = 0;
  }
  sub_A39A8(a1);
}
// 15E5A8: using guessed type __int64 (__fastcall *off_15E5A8[5])();
