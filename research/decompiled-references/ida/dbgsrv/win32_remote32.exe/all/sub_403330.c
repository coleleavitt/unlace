/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_403330
// Address: 0x00403330

//----- (00403330) --------------------------------------------------------
int __thiscall sub_403330(int this, unsigned int *a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ebp

  if ( (unsigned int *)this == a2 )
    return this;
  v3 = a2[1] != 0 ? a2[1] - 1 : 0;
  if ( v3 )
  {
    v4 = *a2;
    if ( v3 + 1 > *(_DWORD *)(this + 8) )
      *(_DWORD *)this = sub_453B00(this, *(void **)this, v3 + 1, 1u);
    *(_DWORD *)(this + 4) = v3 + 1;
    sub_464310(*(_DWORD *)this, v4, v3);
    *(_BYTE *)(v3 + *(_DWORD *)this) = 0;
    return this;
  }
  else
  {
    *(_DWORD *)(this + 4) = 0;
    return this;
  }
}
