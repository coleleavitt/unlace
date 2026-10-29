/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43A710
// Address: 0x0043A710

//----- (0043A710) --------------------------------------------------------
_DWORD *__thiscall sub_43A710(_DWORD *this, int a2)
{
  unsigned int v3; // ebx
  LPVOID v4; // eax

  *this = *(_DWORD *)a2;
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  v3 = *(_DWORD *)(a2 + 8);
  if ( v3 )
  {
    v4 = sub_4539E0(*(_DWORD *)(a2 + 8));
    *(this + 1) = v4;
    *(this + 3) = v3;
    sub_464310((unsigned int)v4, *(_DWORD *)(a2 + 4), v3);
    *(this + 2) = v3;
  }
  *(this + 4) = *(_DWORD *)(a2 + 16);
  *(this + 5) = *(_DWORD *)(a2 + 20);
  *((_BYTE *)this + 24) = *(_BYTE *)(a2 + 24);
  *(this + 7) = *(_DWORD *)(a2 + 28);
  *(this + 8) = *(_DWORD *)(a2 + 32);
  return this;
}
