/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_415D30
// Address: 0x00415D30

//----- (00415D30) --------------------------------------------------------
_DWORD *__thiscall sub_415D30(_DWORD *this, unsigned int a2)
{
  _DWORD *result; // eax
  unsigned int v3; // ebx
  unsigned int v4; // ecx
  int v5; // edi
  unsigned int v6; // ebx
  _DWORD *v7; // esi
  void *v8; // eax
  void *v9; // eax

  result = this;
  v3 = *(this + 1);
  v4 = a2;
  if ( a2 < v3 )
  {
    v5 = 32 * a2;
    v6 = v3 - a2;
    do
    {
      v7 = (_DWORD *)(v5 + *result);
      v8 = (void *)v7[5];
      if ( v8 )
      {
        v7[6] = 0;
        sub_453A20(v8);
        v7[5] = 0;
        v7[7] = 0;
      }
      v9 = (void *)v7[1];
      if ( v9 )
      {
        v7[2] = 0;
        sub_453A20(v9);
        v7[1] = 0;
        v7[3] = 0;
      }
      result = this;
      v5 += 32;
      --v6;
    }
    while ( v6 );
    v4 = a2;
  }
  result[1] = v4;
  return result;
}
