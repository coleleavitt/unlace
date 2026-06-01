/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_402AD0
// Address: 0x00402AD0

//----- (00402AD0) --------------------------------------------------------
_DWORD *__thiscall sub_402AD0(_DWORD *this, unsigned int *a2)
{
  unsigned int v3; // edi
  LPVOID v4; // eax

  *this = 0;
  *(this + 1) = 0;
  *(this + 2) = 0;
  v3 = a2[1];
  if ( v3 )
  {
    v4 = sub_4539E0(a2[1]);
    *this = v4;
    *(this + 2) = v3;
    sub_464310((unsigned int)v4, *a2, v3);
    *(this + 1) = v3;
  }
  return this;
}
