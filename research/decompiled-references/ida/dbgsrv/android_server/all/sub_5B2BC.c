/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5B2BC
// Address: 0x000000000005B2BC

//----- (000000000005B2BC) ----------------------------------------------------
void __fastcall sub_5B2BC(__int64 a1, _QWORD *a2)
{
  if ( a2 )
  {
    sub_5B2BC(a1, *a2);
    sub_5B2BC(a1, a2[1]);
    operator delete(a2);
  }
}
