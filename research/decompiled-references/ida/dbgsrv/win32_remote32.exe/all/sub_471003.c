/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_471003
// Address: 0x00471003

//----- (00471003) --------------------------------------------------------
int __thiscall sub_471003(int this)
{
  int v1; // eax

  v1 = *(_DWORD *)(this + 40);
  if ( v1 < 0 )
    return 0;
  if ( v1 > 1 )
  {
    if ( v1 <= 6 )
      return sub_47184F(*(_DWORD *)(this + 32));
    if ( v1 == 7 )
      return sub_47182C(*(_DWORD *)(this + 32));
    if ( v1 != 8 )
    {
      if ( v1 != 9 )
        return 0;
      return sub_47184F(*(_DWORD *)(this + 32));
    }
  }
  return (*(_BYTE *)(this + 36) != 0) + 1;
}
