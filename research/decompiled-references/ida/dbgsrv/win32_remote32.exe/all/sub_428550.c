/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_428550
// Address: 0x00428550

//----- (00428550) --------------------------------------------------------
int __thiscall sub_428550(_DWORD *this, int a2)
{
  int result; // eax

  *(this + 15) += a2;
  result = *(this + 17);
  if ( *(this + 15) >= *(_DWORD *)(result + 4) )
    sub_404C90((int)"interr: bad idc move_ip");
  return result;
}
