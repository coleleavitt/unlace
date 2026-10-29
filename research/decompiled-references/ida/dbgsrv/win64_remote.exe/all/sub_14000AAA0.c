/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000AAA0
// Address: 0x000000014000AAA0

//----- (000000014000AAA0) ----------------------------------------------------
void __fastcall sub_14000AAA0(void **a1)
{
  _QWORD *v2; // rbx
  void *v3; // rcx

  v2 = *((_QWORD **)*a1 + 1);
  while ( !*((_BYTE *)v2 + 25) )
  {
    sub_140009A00((__int64)a1, (__int64)a1, v2[2]);
    v3 = v2;
    v2 = (_QWORD *)*v2;
    j_j_free(v3);
  }
  j_j_free(*a1);
}
