/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6DA36
// Address: 0x0006DA36

//----- (0006DA36) --------------------------------------------------------
void __fastcall sub_6DA36(int a1, _DWORD *a2)
{
  if ( a2 )
  {
    sub_6DA36(a1, *a2);
    sub_6DA36(a1, a2[1]);
    operator delete(a2);
  }
}
