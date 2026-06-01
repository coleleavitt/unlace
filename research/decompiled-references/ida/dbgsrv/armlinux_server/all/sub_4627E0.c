/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4627E0
// Address: 0x00000000004627E0

//----- (00000000004627E0) ----------------------------------------------------
void __fastcall sub_4627E0(_QWORD *a1)
{
  void *v1; // x2

  v1 = (void *)a1[2];
  *a1 = off_51ACE8;
  if ( v1 )
  {
    a1[3] = 0;
    j__free(v1);
  }
}
// 51ACE8: using guessed type __int64 (__fastcall *off_51ACE8[4])();
