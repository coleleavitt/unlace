/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7B0DC
// Address: 0x0007B0DC

//----- (0007B0DC) --------------------------------------------------------
void __fastcall sub_7B0DC(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = &off_DB138;
  if ( a1[18] )
    sub_8A494(a1 + 11);
  v2 = sub_7BE58(a1);
  operator delete(v2);
}
// DB138: using guessed type _UNKNOWN *off_DB138;
