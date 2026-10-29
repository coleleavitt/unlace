/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46AC4B
// Address: 0x0046AC4B

//----- (0046AC4B) --------------------------------------------------------
char __thiscall sub_46AC4B(int this)
{
  int *v1; // edx
  int v3; // eax

  v1 = (int *)(this + 36);
  if ( *(_BYTE *)(this + 49) != 42 )
    return sub_469FB5((int **)this, (unsigned int *)(this + 36));
  *(_DWORD *)(this + 20) += 4;
  v3 = *(_DWORD *)(*(_DWORD *)(this + 20) - 4);
  *v1 = v3;
  if ( v3 < 0 )
  {
    *(_DWORD *)(this + 32) |= 4u;
    *v1 = -v3;
  }
  return 1;
}
