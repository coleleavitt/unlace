/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74D20
// Address: 0x00074D20

//----- (00074D20) --------------------------------------------------------
void __fastcall sub_74D20(int a1, _DWORD *a2)
{
  if ( a2 )
  {
    sub_74D20(a1, *a2);
    sub_74D20(a1, a2[1]);
    operator delete(a2);
  }
}
