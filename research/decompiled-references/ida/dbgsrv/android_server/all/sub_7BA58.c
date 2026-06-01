/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7BA58
// Address: 0x000000000007BA58

//----- (000000000007BA58) ----------------------------------------------------
void __fastcall sub_7BA58(__int64 a1, _QWORD *a2)
{
  if ( a2 )
  {
    sub_7BA58(a1, (_QWORD *)*a2);
    sub_7BA58(a1, (_QWORD *)a2[1]);
    free_idcv(a2 + 5);
    operator delete(a2);
  }
}
