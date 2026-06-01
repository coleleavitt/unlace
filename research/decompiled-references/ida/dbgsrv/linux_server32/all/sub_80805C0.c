/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80805C0
// Address: 0x080805C0

//----- (080805C0) --------------------------------------------------------
char *__cdecl sub_80805C0(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  int v3; // esi
  int v4; // ecx
  int v5; // eax
  int v6; // ebx
  int v7; // esi
  unsigned int *v8; // eax
  int v9; // ecx
  char *v10; // ebx

  if ( a3 )
  {
    v3 = a1[15];
    if ( v3 )
    {
      v4 = a1[14];
      v5 = 0;
      v6 = 0;
      do
      {
        if ( a2 < *(_DWORD *)(v4 + 8 * v5) )
          break;
        v6 = *(_DWORD *)(v4 + 8 * v5++ + 4);
      }
      while ( v5 != v3 );
    }
    else
    {
      v6 = 0;
    }
    *a3 = v6;
  }
  v7 = a1[12];
  if ( !v7 )
    return nullptr;
  v8 = (unsigned int *)a1[11];
  v9 = 0;
  v10 = nullptr;
  do
  {
    if ( a2 < *v8 )
      break;
    v10 = (char *)&qword_811CFF4 - 258076;
    if ( v8[2] )
      v10 = (char *)v8[1];
    ++v9;
    v8 += 4;
  }
  while ( v9 != v7 );
  return v10;
}
// 811CFF4: using guessed type __int64 qword_811CFF4;
