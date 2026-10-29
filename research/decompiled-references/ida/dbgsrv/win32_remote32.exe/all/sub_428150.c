/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_428150
// Address: 0x00428150

//----- (00428150) --------------------------------------------------------
const CHAR *__thiscall sub_428150(unsigned int *this, unsigned int a2, _DWORD *a3)
{
  unsigned int v4; // edi
  int v5; // edx
  unsigned int v6; // eax
  int v7; // ecx
  unsigned int v8; // edi
  const CHAR *v9; // ecx
  unsigned int v10; // edx
  int v11; // eax

  if ( a3 )
  {
    v4 = *(this + 15);
    v5 = 0;
    v6 = 0;
    if ( v4 )
    {
      v7 = *(this + 14);
      do
      {
        if ( *(_DWORD *)(v7 + 8 * v6) > a2 )
          break;
        v5 = *(_DWORD *)(v7 + 8 * v6++ + 4);
      }
      while ( v6 < v4 );
    }
    *a3 = v5;
  }
  v8 = *(this + 12);
  v9 = nullptr;
  v10 = 0;
  if ( v8 )
  {
    v11 = *(this + 11) + 4;
    do
    {
      if ( *(_DWORD *)(v11 - 4) > a2 )
        break;
      v9 = MultiByteStr;
      if ( *(_DWORD *)(v11 + 4) )
        v9 = *(const CHAR **)v11;
      ++v10;
      v11 += 16;
    }
    while ( v10 < v8 );
  }
  return v9;
}
