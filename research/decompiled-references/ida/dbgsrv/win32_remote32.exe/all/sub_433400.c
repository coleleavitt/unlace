/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_433400
// Address: 0x00433400

//----- (00433400) --------------------------------------------------------
int __thiscall sub_433400(_DWORD *this, int a2)
{
  if ( *(this + 2) == *(_DWORD *)(a2 + 8) && *(this + 3) == *(_DWORD *)(a2 + 12) )
  {
    *(this + 2) = 1;
    *(this + 3) = 0;
    *(_BYTE *)this = 0;
    return 1;
  }
  else
  {
    *(_BYTE *)this = 0;
    *(this + 2) = 0;
    *(this + 3) = 0;
    return 0;
  }
}
