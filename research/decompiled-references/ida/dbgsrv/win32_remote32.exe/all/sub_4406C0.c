/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4406C0
// Address: 0x004406C0

//----- (004406C0) --------------------------------------------------------
_DWORD *__thiscall sub_4406C0(_DWORD *this, _DWORD *a2)
{
  unsigned int v3; // edi
  LPVOID v4; // eax
  unsigned int v5; // edi
  LPVOID v6; // eax

  *this = *a2;
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  v3 = a2[2];
  if ( v3 )
  {
    v4 = sub_4539E0(a2[2]);
    *(this + 1) = v4;
    *(this + 3) = v3;
    sub_464310((unsigned int)v4, a2[1], v3);
    *(this + 2) = v3;
  }
  *(this + 4) = a2[4];
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  v5 = a2[6];
  if ( v5 )
  {
    v6 = sub_4539E0(v5);
    *(this + 5) = v6;
    *(this + 7) = v5;
    sub_464310((unsigned int)v6, a2[5], v5);
    *(this + 6) = v5;
  }
  qmemcpy(this + 8, a2 + 8, 0xD9u);
  *(this + 63) = a2[63];
  return this;
}
