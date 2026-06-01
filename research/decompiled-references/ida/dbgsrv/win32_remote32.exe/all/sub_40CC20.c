/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40CC20
// Address: 0x0040CC20

//----- (0040CC20) --------------------------------------------------------
int __thiscall sub_40CC20(int this, unsigned int *a2)
{
  unsigned int v3; // esi
  int v4; // ebx
  unsigned int v5; // ebp

  v3 = a2[1] != 0 ? a2[1] - 1 : 0;
  if ( v3 )
  {
    v4 = *(_DWORD *)(this + 4) != 0 ? *(_DWORD *)(this + 4) - 1 : 0;
    v5 = v4 + v3 + 1;
    if ( v5 > *(_DWORD *)(this + 8) )
      *(_DWORD *)this = sub_453B00(this, *(void **)this, v4 + v3 + 1, 1u);
    *(_DWORD *)(this + 4) = v5;
    *(_BYTE *)(v4 + *(_DWORD *)this + v3) = 0;
    sub_464310(v4 + *(_DWORD *)this, *a2, v3);
  }
  return this;
}
