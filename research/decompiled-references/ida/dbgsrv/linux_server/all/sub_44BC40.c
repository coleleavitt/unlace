/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44BC40
// Address: 0x000000000044BC40

//----- (000000000044BC40) ----------------------------------------------------
void __fastcall sub_44BC40(_QWORD *a1)
{
  _QWORD *v2; // rdi

  if ( a1 )
  {
    sub_44BA90((__int64)a1);
    v2 = (_QWORD *)*a1;
    if ( (_QWORD *)*a1 != a1 + 6 )
      operator delete(v2, 8LL * a1[1]);
    operator delete(a1, 0x38u);
  }
}
