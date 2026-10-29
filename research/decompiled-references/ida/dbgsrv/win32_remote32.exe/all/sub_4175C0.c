/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4175C0
// Address: 0x004175C0

//----- (004175C0) --------------------------------------------------------
int __thiscall sub_4175C0(_DWORD *this, int a2, int a3)
{
  if ( *(this + 4) == 1 )
    return (unsigned __int8)a2;
  if ( *(this + 4) == 2 )
    return (unsigned __int16)a2;
  return a2;
}
