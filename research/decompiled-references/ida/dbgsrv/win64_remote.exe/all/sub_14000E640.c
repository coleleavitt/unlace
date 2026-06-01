/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000E640
// Address: 0x000000014000E640

//----- (000000014000E640) ----------------------------------------------------
void __fastcall sub_14000E640(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  void *v4; // rcx

  v2 = (_QWORD *)*a1;
  v3 = *(_QWORD **)(*a1 + 8LL);
  while ( !*((_BYTE *)v3 + 25) )
  {
    sub_140009800((__int64)a1, (__int64)a1, v3[2]);
    v4 = v3;
    v3 = (_QWORD *)*v3;
    j_j_free(v4);
  }
  v2[1] = v2;
  *v2 = v2;
  v2[2] = v2;
  a1[1] = 0;
}
