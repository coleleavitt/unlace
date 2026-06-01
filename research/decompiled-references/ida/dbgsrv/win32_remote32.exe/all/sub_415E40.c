/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_415E40
// Address: 0x00415E40

//----- (00415E40) --------------------------------------------------------
_DWORD *__thiscall sub_415E40(_DWORD *this, unsigned int a2)
{
  _DWORD *result; // eax
  unsigned int v3; // ebx
  unsigned int v4; // ecx
  int v5; // edi
  unsigned int v6; // ebx
  int *v7; // esi
  void *v8; // eax

  result = this;
  v3 = *(this + 1);
  v4 = a2;
  if ( a2 < v3 )
  {
    v5 = 24 * a2;
    v6 = v3 - a2;
    do
    {
      v7 = (int *)(v5 + *result);
      if ( *v7 >= -1 )
      {
        v8 = (void *)v7[2];
        if ( v8 )
        {
          v7[3] = 0;
          sub_453A20(v8);
          v7[2] = 0;
          v7[4] = 0;
        }
        result = this;
        *v7 = -2;
      }
      v5 += 24;
      --v6;
    }
    while ( v6 );
    v4 = a2;
  }
  result[1] = v4;
  return result;
}
