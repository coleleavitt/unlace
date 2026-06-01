/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_428990
// Address: 0x00428990

//----- (00428990) --------------------------------------------------------
unsigned int __thiscall sub_428990(_DWORD *this, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int result; // eax
  int v4; // edi
  unsigned int v5; // ebx
  _DWORD *v6; // esi
  void *v7; // eax
  _DWORD *v8; // [esp+10h] [ebp-10h]

  v8 = this;
  v2 = *(this + 1);
  result = a2;
  if ( a2 < v2 )
  {
    v4 = 16 * a2;
    v5 = v2 - a2;
    do
    {
      v6 = (_DWORD *)(v4 + *this);
      v7 = (void *)v6[1];
      if ( v7 )
      {
        v6[2] = 0;
        sub_453A20(v7);
        this = v8;
        v6[1] = 0;
        v6[3] = 0;
      }
      v4 += 16;
      --v5;
    }
    while ( v5 );
    result = a2;
  }
  *(this + 1) = result;
  return result;
}
