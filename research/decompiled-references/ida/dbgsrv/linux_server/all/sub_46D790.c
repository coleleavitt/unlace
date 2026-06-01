/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46D790
// Address: 0x000000000046D790

//----- (000000000046D790) ----------------------------------------------------
void __fastcall sub_46D790(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = qword_4C4BE8;
  sub_46F0A0(a1 + 17);
  v2 = (void *)a1[18];
  if ( v2 )
  {
    a1[19] = 0;
    j__free(v2);
  }
}
// 4C4BE8: using guessed type __int64 qword_4C4BE8[2];
