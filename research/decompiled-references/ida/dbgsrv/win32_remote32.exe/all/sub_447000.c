/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_447000
// Address: 0x00447000

//----- (00447000) --------------------------------------------------------
unsigned int __thiscall sub_447000(_DWORD *this, unsigned int a2)
{
  unsigned int v2; // edi
  unsigned int result; // eax
  int v4; // ebx
  unsigned int v5; // edi
  _DWORD *v6; // esi
  void *v7; // eax
  _DWORD *v8; // [esp+10h] [ebp-10h]

  v8 = this;
  v2 = *(this + 1);
  result = a2;
  if ( a2 < v2 )
  {
    v4 = 104 * a2;
    v5 = v2 - a2;
    do
    {
      v6 = (_DWORD *)(v4 + *this);
      v7 = (void *)v6[3];
      if ( v7 )
      {
        v6[4] = 0;
        sub_453A20(v7);
        this = v8;
        v6[3] = 0;
        v6[5] = 0;
      }
      v4 += 104;
      --v5;
    }
    while ( v5 );
    result = a2;
  }
  *(this + 1) = result;
  return result;
}
