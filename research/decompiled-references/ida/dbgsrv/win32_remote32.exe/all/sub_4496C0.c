/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4496C0
// Address: 0x004496C0

//----- (004496C0) --------------------------------------------------------
_DWORD *__thiscall sub_4496C0(_DWORD *this, _DWORD *a2)
{
  unsigned int v3; // edi
  LPVOID v4; // eax

  *this = *a2;
  *(this + 1) = a2[1];
  *(this + 2) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  v3 = a2[3];
  if ( v3 )
  {
    v4 = sub_4539E0(a2[3]);
    *(this + 2) = v4;
    *(this + 4) = v3;
    sub_464310((unsigned int)v4, a2[2], v3);
    *(this + 3) = v3;
  }
  return this;
}
