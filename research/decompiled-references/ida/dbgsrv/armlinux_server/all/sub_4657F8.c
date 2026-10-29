/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4657F8
// Address: 0x00000000004657F8

//----- (00000000004657F8) ----------------------------------------------------
void __noreturn sub_4657F8()
{
  _QWORD *v0; // x19
  __int64 v1; // x20
  __int64 v2; // x22
  void *v3; // x0
  void *v4; // x0

  sub_482ED0(v2);
  sub_482ED0(v1);
  v3 = (void *)v0[33];
  v0[24] = qword_51E360;
  if ( v3 )
  {
    v0[34] = 0;
    j__free(v3);
  }
  v4 = (void *)v0[26];
  if ( v4 )
  {
    v0[27] = 0;
    j__free(v4);
  }
  JUMPOUT(0x4657E8);
}
// 46583C: control flows out of bounds to 4657E8
// 465800: variable 'v2' is possibly undefined
// 465808: variable 'v1' is possibly undefined
// 465810: variable 'v0' is possibly undefined
// 51E360: using guessed type __int64 qword_51E360[2];
