/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004FE40
// Address: 0x000000010004FE40

//----- (000000010004FE40) ----------------------------------------------------
void __fastcall sub_10004FE40(_QWORD *a1)
{
  _QWORD *i; // r14
  _QWORD **v3; // rdi

  for ( i = (_QWORD *)*a1; i != a1; --a1[2] )
  {
    v3 = (_QWORD **)i;
    i = (_QWORD *)*i;
    *v3[1] = i;
    i[1] = v3[1];
    qfree(v3);
  }
}
