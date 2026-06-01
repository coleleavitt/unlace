/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_415F90
// Address: 0x00415F90

//----- (00415F90) --------------------------------------------------------
unsigned int __thiscall sub_415F90(_DWORD *this, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int result; // eax
  int v4; // edi
  unsigned int v5; // ebx
  int v6; // esi
  void *v7; // eax
  _DWORD *v8; // [esp+10h] [ebp-10h]

  v8 = this;
  v2 = *(this + 1);
  result = a2;
  if ( a2 < v2 )
  {
    v4 = 12 * a2;
    v5 = v2 - a2;
    do
    {
      v6 = v4 + *this;
      v7 = *(void **)v6;
      if ( *(_DWORD *)v6 )
      {
        *(_DWORD *)(v6 + 4) = 0;
        sub_453A20(v7);
        this = v8;
        *(_DWORD *)v6 = 0;
        *(_DWORD *)(v6 + 8) = 0;
      }
      v4 += 12;
      --v5;
    }
    while ( v5 );
    result = a2;
  }
  *(this + 1) = result;
  return result;
}
