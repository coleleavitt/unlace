/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4236A0
// Address: 0x00000000004236A0

//----- (00000000004236A0) ----------------------------------------------------
void __fastcall sub_4236A0(_QWORD *a1)
{
  void *v1; // rax

  *a1 = &off_4C2300;
  v1 = (void *)a1[5];
  if ( v1 )
  {
    a1[6] = 0;
    j__free(v1);
  }
}
// 4C2300: using guessed type __int64 (__fastcall *off_4C2300)();
