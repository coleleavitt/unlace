/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_433850
// Address: 0x00433850

//----- (00433850) --------------------------------------------------------
int __thiscall sub_433850(_DWORD *this, int a2)
{
  if ( *(this + 2) == *(_DWORD *)(a2 + 8) && *(this + 3) == *(_DWORD *)(a2 + 12) )
  {
    *(_BYTE *)this = 0;
    *(this + 2) = 0;
    *(this + 3) = 0;
    return 0;
  }
  else
  {
    *(this + 2) = 1;
    *(this + 3) = 0;
    *(_BYTE *)this = 0;
    return 1;
  }
}
