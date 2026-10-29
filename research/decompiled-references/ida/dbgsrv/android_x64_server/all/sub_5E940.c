/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5E940
// Address: 0x000000000005E940

//----- (000000000005E940) ----------------------------------------------------
void __fastcall sub_5E940(__int64 a1, _QWORD *a2)
{
  if ( a2 )
  {
    sub_5E940(a1, *a2);
    sub_5E940(a1, a2[1]);
    operator delete(a2);
  }
}
