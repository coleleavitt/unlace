/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_475DB5
// Address: 0x00475DB5

//----- (00475DB5) --------------------------------------------------------
int __cdecl sub_475DB5(_WORD *a1, unsigned int a2, char a3)
{
  _BYTE *v3; // ecx
  int v4; // esi
  int v5; // ebx
  int v6; // edi
  _WORD *v8; // esi
  int v9; // ecx
  int v10; // ebx
  unsigned int v11; // edi

  if ( a3 == 1 || a3 == 2 )
  {
    v8 = a1;
    v9 = 0;
    v10 = 0;
    v11 = a2 >= (unsigned int)a1 ? (a2 - (unsigned int)a1 + 1) >> 1 : 0;
    if ( v11 )
    {
      do
      {
        if ( *v8 == 10 )
          ++v9;
        ++v8;
        ++v10;
      }
      while ( v10 != v11 );
    }
    return 2 * v9;
  }
  else
  {
    v3 = a1;
    v4 = 0;
    v5 = 0;
    v6 = (a2 - (_DWORD)a1) & ~((a2 - (unsigned __int64)(unsigned int)a1) >> 32);
    if ( v6 )
    {
      do
      {
        if ( *v3 == 10 )
          ++v4;
        ++v3;
        ++v5;
      }
      while ( v5 != v6 );
    }
    return v4;
  }
}
