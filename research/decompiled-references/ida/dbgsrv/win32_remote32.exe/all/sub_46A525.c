/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46A525
// Address: 0x0046A525

//----- (0046A525) --------------------------------------------------------
char __thiscall sub_46A525(int this)
{
  int *v1; // edx
  int v3; // eax

  v1 = (int *)(this + 40);
  if ( *(_BYTE *)(this + 49) != 42 )
    return sub_469FB5((int **)this, (unsigned int *)(this + 40));
  *(_DWORD *)(this + 20) += 4;
  v3 = *(_DWORD *)(*(_DWORD *)(this + 20) - 4);
  *v1 = v3;
  if ( v3 < 0 )
    *v1 = -1;
  return 1;
}
