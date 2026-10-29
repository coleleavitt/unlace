/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_431F80
// Address: 0x00431F80

//----- (00431F80) --------------------------------------------------------
char __thiscall sub_431F80(int *this, unsigned int *a2)
{
  unsigned int v4; // edi
  LPVOID v5; // ebx
  unsigned int v6; // eax
  int v7; // ecx
  int v8; // eax
  unsigned int v9; // [esp+18h] [ebp-10h]

  if ( sub_4350A0(this, (int)a2) )
    return 0;
  v4 = a2[1];
  v5 = nullptr;
  v9 = 0;
  if ( v4 )
  {
    v5 = sub_4539E0(v4);
    v9 = v4;
    sub_464310((unsigned int)v5, *a2, v4);
  }
  else
  {
    v4 = 0;
  }
  v6 = *(this + 1) + 1;
  if ( v6 > *(this + 2) )
    *this = (int)sub_453B00((int)this, (void *)*this, v6, 0xCu);
  v7 = 3 * *(this + 1);
  v8 = *this;
  *(_DWORD *)(v8 + 4 * v7) = v5;
  *(_DWORD *)(v8 + 4 * v7 + 4) = v4;
  *(_DWORD *)(v8 + 4 * v7 + 8) = v9;
  ++*(this + 1);
  return 1;
}
