/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400477A0
// Address: 0x00000001400477A0

//----- (00000001400477A0) ----------------------------------------------------
void __fastcall sub_1400477A0(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  *a1 = &off_1400974C0;
  v2 = (void *)a1[138];
  if ( v2 )
  {
    a1[139] = 0;
    j_free(v2);
    a1[138] = 0;
    a1[140] = 0;
  }
  v3 = (void *)a1[135];
  if ( v3 )
  {
    a1[136] = 0;
    j_free(v3);
    a1[135] = 0;
    a1[137] = 0;
  }
  v4 = (void *)a1[132];
  if ( v4 )
  {
    a1[133] = 0;
    j_free(v4);
    a1[132] = 0;
    a1[134] = 0;
  }
  if ( a1[129] )
  {
    sub_14001A6C0(a1 + 129, 0);
    j_free((void *)a1[129]);
    a1[129] = 0;
    a1[131] = 0;
  }
}
// 1400974C0: using guessed type __int64 (__fastcall *off_1400974C0)();
