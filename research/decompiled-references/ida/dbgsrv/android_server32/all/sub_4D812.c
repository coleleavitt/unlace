/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4D812
// Address: 0x0004D812

//----- (0004D812) --------------------------------------------------------
void __fastcall sub_4D812(int a1, unsigned __int8 *a2)
{
  if ( a2 )
  {
    sub_4D812(a1, *(_DWORD *)a2);
    sub_4D812(a1, *((_DWORD *)a2 + 1));
    free_idcv(a2 + 24);
    operator delete(a2);
  }
}
