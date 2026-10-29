/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_52CF0
// Address: 0x00052CF0

//----- (00052CF0) --------------------------------------------------------
char *__cdecl sub_52CF0(int a1, unsigned int a2, unsigned int *a3)
{
  int v3; // esi
  unsigned int v4; // edi
  unsigned int v5; // eax
  unsigned int *v6; // ebx
  unsigned int v7; // esi
  unsigned int v8; // eax
  unsigned int v9; // edi
  char *result; // eax
  unsigned int *v11; // esi
  unsigned int *v12; // esi
  int v13; // ebx
  bool v14; // cc

  v3 = a1;
  if ( a3 )
  {
    v4 = *(_DWORD *)(a1 + 60);
    v5 = 0;
    if ( v4 )
    {
      v6 = *(unsigned int **)(a1 + 56);
      if ( *v6 <= a2 )
      {
        v7 = 1;
        do
        {
          v8 = v7;
          if ( v7 >= v4 )
            break;
          ++v7;
        }
        while ( v6[2 * v8] <= a2 );
        v5 = v6[2 * v8 - 1];
        v3 = a1;
      }
    }
    *a3 = v5;
  }
  v9 = *(_DWORD *)(v3 + 48);
  result = nullptr;
  if ( v9 )
  {
    v11 = *(unsigned int **)(v3 + 44);
    if ( *v11 <= a2 )
    {
      v12 = v11 + 4;
      v13 = 0;
      do
      {
        result = byte_EF875;
        if ( *(v12 - 2) )
          result = (char *)*(v12 - 3);
        if ( ++v13 >= v9 )
          break;
        v14 = *v12 <= a2;
        v12 += 4;
      }
      while ( v14 );
    }
  }
  return result;
}
