/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6C634
// Address: 0x0006C634

//----- (0006C634) --------------------------------------------------------
void __fastcall sub_6C634(int a1, _DWORD *a2)
{
  if ( a2 )
  {
    sub_6C634(a1, *a2);
    sub_6C634(a1, a2[1]);
    operator delete(a2);
  }
}
