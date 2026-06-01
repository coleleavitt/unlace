/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74D00
// Address: 0x00074D00

//----- (00074D00) --------------------------------------------------------
void __fastcall sub_74D00(int a1, _DWORD *a2)
{
  if ( a2 )
  {
    sub_74D00(a1, *a2);
    sub_74D00(a1, a2[1]);
    operator delete(a2);
  }
}
