/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10007DF70
// Address: 0x000000010007DF70

//----- (000000010007DF70) ----------------------------------------------------
void __fastcall sub_10007DF70(_QWORD *a1)
{
  _QWORD **v1; // r14
  _QWORD *v2; // r15

  v1 = (_QWORD **)*a1;
  if ( (_QWORD *)*a1 != a1 )
  {
    do
    {
      v2 = *v1;
      *v1[1] = *v1;
      v2[1] = v1[1];
      qsem_free(v1[4]);
      qfree(v1);
      --a1[2];
      v1 = (_QWORD **)v2;
    }
    while ( v2 != a1 );
  }
}
