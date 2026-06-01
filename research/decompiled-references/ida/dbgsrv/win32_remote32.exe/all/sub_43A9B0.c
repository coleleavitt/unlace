/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43A9B0
// Address: 0x0043A9B0

//----- (0043A9B0) --------------------------------------------------------
void **__thiscall sub_43A9B0(void **this, unsigned int *a2)
{
  signed int v3; // ebx
  unsigned int v4; // edi
  void *v5; // eax
  LPVOID v7; // [esp+10h] [ebp-10h]

  v3 = 0;
  v7 = nullptr;
  v4 = a2[1];
  if ( v4 )
  {
    v3 = a2[1];
    v7 = sub_4539E0(v3);
    sub_464310((unsigned int)v7, *a2, v4);
  }
  v5 = *this;
  if ( *this )
  {
    *(this + 1) = nullptr;
    sub_453A20(v5);
    *(this + 2) = nullptr;
  }
  *this = v7;
  *(this + 1) = (void *)v3;
  *(this + 2) = (void *)v3;
  return this;
}
